/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class MaskRndScaleOp;
class MaskScaleFOp;

//===----------------------------------------------------------------------===//
// avx512::MaskRndScaleOp declarations
//===----------------------------------------------------------------------===//

class MaskRndScaleOpAdaptor {
public:
  MaskRndScaleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaskRndScaleOpAdaptor(MaskRndScaleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value src();
  Value k();
  Value a();
  Value imm();
  Value rounding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaskRndScaleOp : public Op<MaskRndScaleOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaskRndScaleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value src();
  Value k();
  Value a();
  Value imm();
  Value rounding();
  ::mlir::MutableOperandRange srcMutable();
  ::mlir::MutableOperandRange kMutable();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange immMutable();
  ::mlir::MutableOperandRange roundingMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value dst();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type dst, Value src, Value k, Value a, Value imm, Value rounding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value src, Value k, Value a, Value imm, Value rounding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// avx512::MaskScaleFOp declarations
//===----------------------------------------------------------------------===//

class MaskScaleFOpAdaptor {
public:
  MaskScaleFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaskScaleFOpAdaptor(MaskScaleFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value src();
  Value a();
  Value b();
  Value k();
  Value rounding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaskScaleFOp : public Op<MaskScaleFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaskScaleFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value src();
  Value a();
  Value b();
  Value k();
  Value rounding();
  ::mlir::MutableOperandRange srcMutable();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange kMutable();
  ::mlir::MutableOperandRange roundingMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value dst();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type dst, Value src, Value a, Value b, Value k, Value rounding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value src, Value a, Value b, Value k, Value rounding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

