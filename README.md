# SpleeterCore

The processing part of [SpleeterGUI](https://github.com/thooore/SpleeterGUI)

Can be run standalone without the GUI part, but is then just a bunch of separate programs.

[Spleeter](https://github.com/deezer/spleeter) can also be installed by using Conda or PyPi but since I've had difficulty setting that up I assume other's have as well. This repository also provides a portable version, so you can select where you want to install it. It also comes packaged with [ni-stem](https://github.com/thooore/ni-stem) from [stemgen](https://github.com/axeldelafosse/stemgen) to allow building stem files for use in programs such as Traktor. 

## Installation
1. Download the latest release from GitHub
2. Unzip it in a location that you want, for example `C:\Users\Documents\SpleeterCore` so that the `root_folder.txt` is in the root folder of SpleeterCore
3. In SpleeterGUI select ***Advanced > Set SpleeterGUI path*** and select the path to where you unzipped SpleeterCore (The same folder that `root_folder.txt` is in) 

---
If you want to clone the repo (there's no real reason to since it's essentially the same as the release) you'll have to install [git-lfs](https://git-lfs.github.com/) since some files are quite large
