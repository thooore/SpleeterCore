import xml.etree.ElementTree as ET
import sys
import os
import subprocess
import shutil

# https://github.com/digital-dj-tools/dj-data-converter/issues/3

# Some mp3-bug-checking-functions

def mp3GuessLAME(path): 
    try:
        mp3guess = subprocess.Popen([binDir + "\mp3guessenc.exe", "-s", path],stdout=subprocess.PIPE)
        mp3guessOutput = (mp3guess.communicate()[0]).decode()
        #print(mp3guessOutput)
        if ("Encoder string : LAME" in mp3guessOutput):
            return True
        else: return False
    except:
        print("mp3guessenc failed - assuming not LAME")
        return False

def eyeD3LAME(path): 
    try:
        eyeD3 = subprocess.Popen([binDir + "\..\Scripts\eyeD3.exe", "-P", "lameinfo", path],stdout=subprocess.PIPE)
        eyeD3Output = (eyeD3.communicate()[0]).decode()
        #print(eyeD3Output)
        if ("No LAME Tag" in eyeD3Output):
            return False
        elif ("LAME Tag Revision   : 0" in eyeD3Output): # make regex?
            return False
        else: return True
    except:
        print("eyeD3LAME failed - assuming LAME")
        return True

# True -> True      OK
# False -> False    OK
# True -> False     Not OK
# False -> True     should not happen, assume OK

def checkmp3(path):
    if path.endswith('mp3'):
        mpg = mp3GuessLAME(path)
        ed3 = eyeD3LAME(path)
        if (mpg):
            if(ed3):
                return True
            else:
                print("LAME bug")
                return False        # move 32 or some ms!
        else:                       # Not LAME, let it pass!
            if(ed3): return True
            else: return True  
    else: return True               # Not mp3, let it pass!

# some functions for getting the data
def findVolumeID(col, drive):
    for e in col:
        l = e.find("LOCATION")
        if l != None:
            if l.get("VOLUME") == drive:
                return l.get("VOLUMEID")
    print("ERROR: No matching volume id for the spaggheti-code to work! - There needs to be another song on the same disk volume in the collection for this to work!")
    return "" 

# fp = outputFilePath
def getLocationData(fp):
    driveData = fp
    tempDirData = fp
    nameData = fp
    driveData = driveData.split(':')[0] + ":"
    tempDirData = tempDirData.split('\\')
    tempDirData.pop(0)                      # remove first element
    nameData = tempDirData.pop()            # remove last element and place in nameData
    dirData = '/:' + '/:'.join(tempDirData) + '/:'

    volumeData = findVolumeID(collection, driveData)


    return {
        "DIR" : dirData,
        "FILE" : nameData,
        "VOLUME" : driveData,
        "VOLUMEID" : volumeData
    }

# the .exe files are relative to this file
binDir = os.path.dirname(os.path.abspath(__file__))



collectionPath = ""
inputFilePath = ""
outputFilePath = ""
outputCollectionPath = "new_collection.nml"
overwriteOutput = False
print(sys.argv[0])
if len(sys.argv) > 1:
    inputFilePath = sys.argv[1]
else:
    print("This program needs the following args: <originalpath> <stempath> <collectionpath> <outputcollectionpath> [-create]")
    print("<originalpath>: A file that is in your collection and has data you want to copy over to the stem")
    print("<stempath>: A file that is in your collection and has data you want to copy over to the stem")
    print("<collectionpath>: The collection you want to search through to find data")
    print("<outputcollectionpath>: The name and path of the new collection with the added stem data")
    print("[-create]: Adding '-create' as the last argument overwrites the output collection with an empty collection")

    raise Exception("No input file path was given")

if os.path.exists(inputFilePath):
    inputFilePath = os.path.abspath(inputFilePath)
    print (os.path.abspath(inputFilePath))
else: raise Exception("Invalid input file path")

if len(sys.argv) > 2:
    outputFilePath = sys.argv[2]
else: raise Exception("No output file path was given")

if os.path.exists(outputFilePath):
    outputFilePath = os.path.abspath(outputFilePath)
    print (os.path.abspath(outputFilePath))
else: raise Exception("Invalid output file path")

if len(sys.argv) > 3:
    collectionPath = sys.argv[3]
else: raise Exception("No collection path was given")

if os.path.exists(collectionPath):
    collectionPath = os.path.abspath(collectionPath)
    print (os.path.abspath(collectionPath))
else: raise Exception("Invalid collection file path")

if len(sys.argv) > 4:
    outputCollectionPath = sys.argv[4]
    outputCollectionPath = os.path.abspath(outputCollectionPath)
else: raise Exception("No collection output path was given")

if len(sys.argv) > 5:
    if "-create" in sys.argv[5]:
        overwriteOutput = True


if overwriteOutput or not os.path.exists(outputCollectionPath):
    if os.path.exists(outputCollectionPath) and os.path.isfile(outputCollectionPath): # dont remove a folder, instead crash later on
        os.remove(outputCollectionPath)
    shutil.copy(binDir + "\\empty_collection.nml", outputCollectionPath)



tree = ET.parse(collectionPath)
root = tree.getroot()

outputTree = ET.parse(outputCollectionPath)
outputRoot = outputTree.getroot()

collection = root.find("COLLECTION")
for entry in collection:
    location = entry.find("LOCATION")
    if location != None:
        fileDrive = location.get("VOLUME")
        fileDir = location.get("DIR")
        fileName = location.get("FILE")
        formattedFileDir = fileDir.replace(':', '')
        formattedFilePath = fileDrive + formattedFileDir + fileName
        filePath = os.path.abspath(formattedFilePath)
        if filePath in inputFilePath:
            print("MATCH!")
                
            # get the special data needed to be inserted
            entryData = dict(entry.attrib)
            entryData["TITLE"] = entryData["TITLE"] + " - Stem" 
            locationData = getLocationData(outputFilePath)
            stemData = {
                "STEMS" : "{\"mastering_dsp\":{\"compressor\":{\"attack\":0.003000000026077032,\"dry_wet\":50,\"enabled\":false,\"hp_cutoff\":300,\"input_gain\":0.5,\"output_gain\":0.5,\"ratio\":3,\"release\":0.300000011920929,\"threshold\":0},\"limiter\":{\"ceiling\":-0.3499999940395355,\"enabled\":false,\"release\":0.05000000074505806,\"threshold\":0}},\"stems\":[{\"color\":\"#56B4E9\",\"name\":\"vocals\"},{\"color\":\"#229e00\",\"name\":\"drums\"},{\"color\":\"#D55E00\",\"name\":\"bass\"},{\"color\":\"#CC79A7\",\"name\":\"other\"}],\"version\":1}"
            }


            # find the collection in the output tree
            outputCollection = outputRoot.find("COLLECTION")

            # fixes the number of entries to match the number of entries
            outputCollectionEntries = outputCollection.get('ENTRIES')
            outputCollectionEntries = int(outputCollectionEntries) + 1 
            outputCollection.set('ENTRIES', str(outputCollectionEntries))

            # adds an entry and adds the location and stem information
            e = ET.SubElement(outputCollection, 'ENTRY', entryData)
            ET.SubElement(e, 'LOCATION', locationData) 


            # loads over the over data from the original song

            # check if the traktor-LAME bug is applicable
            
            
            def loadOverData():
                lamebug = not checkmp3(inputFilePath)
                bitrate = 320000
                for dataPoint in entry:
                    if (dataPoint.tag != "LOCATION" and dataPoint.tag != "STEMS") :
                        if (dataPoint.tag == "INFO"): # should not be here probably, since the bitrate could come after the cues
                            bitrate = float(dataPoint.get("BITRATE"))
                        if (dataPoint.tag == "CUE_V2"):
                            cueDict = dict(dataPoint.attrib)
                            # traktor weird offset bug - should check lame version
                            if (lamebug): # the file is one of the bad guys, fix it!
                                shiftValue = 22 + (56.0 * (bitrate / 320000)) # i really don't know anymore. 56 and 20 gets it pretty close
                                cueDict["START"] = str(max((float(cueDict["START"]) - shiftValue), 0))
                            ET.SubElement(e, dataPoint.tag, cueDict)
                        else:
                            ET.SubElement(e, dataPoint.tag, dict(dataPoint.attrib))
                    
            loadOverData()
            # add the stem data so it's last
            ET.SubElement(e, 'STEMS', stemData) 

        
    else: print("ERROR: No file location found for" + str(entry.attrib))

outputTree.write(outputCollectionPath, encoding="UTF-8")
print("Done!")
