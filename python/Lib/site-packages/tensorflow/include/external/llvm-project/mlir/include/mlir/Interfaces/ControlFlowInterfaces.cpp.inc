/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Definitions                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

Optional<MutableOperandRange> BranchOpInterface::getMutableSuccessorOperands(unsigned index) {
      return getImpl()->getMutableSuccessorOperands(getOperation(), index);
  }
Optional<OperandRange> BranchOpInterface::getSuccessorOperands(unsigned index) {
      return getImpl()->getSuccessorOperands(getOperation(), index);
  }
Optional<BlockArgument> BranchOpInterface::getSuccessorBlockArgument(unsigned operandIndex) {
      return getImpl()->getSuccessorBlockArgument(getOperation(), operandIndex);
  }
Block * BranchOpInterface::getSuccessorForOperands(ArrayRef<Attribute> operands) {
      return getImpl()->getSuccessorForOperands(getOperation(), operands);
  }
OperandRange RegionBranchOpInterface::getSuccessorEntryOperands(unsigned index) {
      return getImpl()->getSuccessorEntryOperands(getOperation(), index);
  }
void RegionBranchOpInterface::getSuccessorRegions(Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions) {
      return getImpl()->getSuccessorRegions(getOperation(), index, operands, regions);
  }
