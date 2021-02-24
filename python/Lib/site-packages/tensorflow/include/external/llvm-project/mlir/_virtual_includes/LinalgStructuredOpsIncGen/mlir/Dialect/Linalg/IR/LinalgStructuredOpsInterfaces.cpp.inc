/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Definitions                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

unsigned LinalgOp::getNumParallelLoops() {
      return getImpl()->getNumParallelLoops(getOperation());
  }
unsigned LinalgOp::getNumReductionLoops() {
      return getImpl()->getNumReductionLoops(getOperation());
  }
unsigned LinalgOp::getNumWindowLoops() {
      return getImpl()->getNumWindowLoops(getOperation());
  }
unsigned LinalgOp::getNumLoops() {
      return getImpl()->getNumLoops(getOperation());
  }
bool LinalgOp::hasSingleReductionLoop() {
      return getImpl()->hasSingleReductionLoop(getOperation());
  }
unsigned LinalgOp::getNumInputs() {
      return getImpl()->getNumInputs(getOperation());
  }
Value LinalgOp::getInput(unsigned i) {
      return getImpl()->getInput(getOperation(), i);
  }
llvm::Optional<unsigned> LinalgOp::getIndexOfInput(Value v) {
      return getImpl()->getIndexOfInput(getOperation(), v);
  }
Operation::operand_range LinalgOp::getInputs() {
      return getImpl()->getInputs(getOperation());
  }
ShapedType LinalgOp::getInputShapedType(unsigned i) {
      return getImpl()->getInputShapedType(getOperation(), i);
  }
SmallVector<RankedTensorType, 4> LinalgOp::getInputTensorTypes() {
      return getImpl()->getInputTensorTypes(getOperation());
  }
unsigned LinalgOp::getNumOutputs() {
      return getImpl()->getNumOutputs(getOperation());
  }
Value LinalgOp::getOutputBuffer(unsigned i) {
      return getImpl()->getOutputBuffer(getOperation(), i);
  }
llvm::Optional<unsigned> LinalgOp::getIndexOfOutputBuffer(Value view) {
      return getImpl()->getIndexOfOutputBuffer(getOperation(), view);
  }
MemRefType LinalgOp::getOutputBufferType(unsigned i) {
      return getImpl()->getOutputBufferType(getOperation(), i);
  }
ShapedType LinalgOp::getOutputShapedType(unsigned i) {
      return getImpl()->getOutputShapedType(getOperation(), i);
  }
SmallVector<RankedTensorType, 4> LinalgOp::getOutputTensorTypes() {
      return getImpl()->getOutputTensorTypes(getOperation());
  }
Operation::operand_range LinalgOp::getOutputBuffers() {
      return getImpl()->getOutputBuffers(getOperation());
  }
Value LinalgOp::getBuffer(unsigned i) {
      return getImpl()->getBuffer(getOperation(), i);
  }
unsigned LinalgOp::getNumInputsAndOutputs() {
      return getImpl()->getNumInputsAndOutputs(getOperation());
  }
unsigned LinalgOp::getNumInputsAndOutputBuffers() {
      return getImpl()->getNumInputsAndOutputBuffers(getOperation());
  }
Operation::operand_range LinalgOp::getInputsAndOutputBuffers() {
      return getImpl()->getInputsAndOutputBuffers(getOperation());
  }
SmallVector<ShapedType, 4> LinalgOp::getInputOutputShapedTypes() {
      return getImpl()->getInputOutputShapedTypes(getOperation());
  }
llvm::Optional<SmallVector<StringRef, 8>> LinalgOp::referenceIterators() {
      return getImpl()->referenceIterators(getOperation());
  }
llvm::Optional<SmallVector<AffineMap, 8>> LinalgOp::referenceIndexingMaps() {
      return getImpl()->referenceIndexingMaps(getOperation());
  }
ArrayAttr LinalgOp::iterator_types() {
      return getImpl()->iterator_types(getOperation());
  }
ArrayAttr LinalgOp::indexing_maps() {
      return getImpl()->indexing_maps(getOperation());
  }
SmallVector<AffineMap, 4> LinalgOp::getIndexingMaps() {
      return getImpl()->getIndexingMaps(getOperation());
  }
AffineMap LinalgOp::getIndexingMap(unsigned i) {
      return getImpl()->getIndexingMap(getOperation(), i);
  }
AffineMap LinalgOp::getInputIndexingMap(unsigned i) {
      return getImpl()->getInputIndexingMap(getOperation(), i);
  }
AffineMap LinalgOp::getOutputIndexingMap(unsigned i) {
      return getImpl()->getOutputIndexingMap(getOperation(), i);
  }
bool LinalgOp::hasBufferSemantics() {
      return getImpl()->hasBufferSemantics(getOperation());
  }
bool LinalgOp::hasTensorSemantics() {
      return getImpl()->hasTensorSemantics(getOperation());
  }
Operation * LinalgOp::create(OpBuilder & builder, Location loc, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
      return getImpl()->create(builder, loc, operands, attributes);
  }
Operation * LinalgOp::clone(OpBuilder & b, Location loc, ValueRange operands) {
      return getImpl()->clone(getOperation(), b, loc, operands);
  }
