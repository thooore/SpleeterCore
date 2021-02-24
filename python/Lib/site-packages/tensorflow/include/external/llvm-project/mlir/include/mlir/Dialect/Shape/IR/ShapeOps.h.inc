/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AddOp;
class AnyOp;
class AssumingAllOp;
class AssumingOp;
class AssumingYieldOp;
class BroadcastOp;
class ConcatOp;
class ConstShapeOp;
class ConstSizeOp;
class ConstWitnessOp;
class CstrBroadcastableOp;
class CstrEqOp;
class DebugPrintOp;
class FromExtentTensorOp;
class FromExtentsOp;
class GetExtentOp;
class IndexToSizeOp;
class JoinOp;
class MulOp;
class NumElementsOp;
class ReduceOp;
class ShapeOfOp;
class SizeToIndexOp;
class SplitAtOp;
class ToExtentTensorOp;
class YieldOp;

//===----------------------------------------------------------------------===//
// shape::AddOp declarations
//===----------------------------------------------------------------------===//

class AddOpAdaptor {
public:
  AddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddOpAdaptor(AddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddOp : public Op<AddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// shape::AnyOp declarations
//===----------------------------------------------------------------------===//

class AnyOpAdaptor {
public:
  AnyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AnyOpAdaptor(AnyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AnyOp : public Op<AnyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AnyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ValueRange inputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// shape::AssumingAllOp declarations
//===----------------------------------------------------------------------===//

class AssumingAllOpAdaptor {
public:
  AssumingAllOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssumingAllOpAdaptor(AssumingAllOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssumingAllOp : public Op<AssumingAllOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AssumingAllOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ValueRange inputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// shape::AssumingOp declarations
//===----------------------------------------------------------------------===//

class AssumingOpAdaptor {
public:
  AssumingOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssumingOpAdaptor(AssumingOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value witness();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssumingOp : public Op<AssumingOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SingleBlockImplicitTerminator<AssumingYieldOp>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = AssumingOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value witness();
  ::mlir::MutableOperandRange witnessMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &doRegion();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, Value witness);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);

    // Inline the region into the region containing the AssumingOp and delete
    // the AssumingOp.
    //
    // This does no checks on the inputs to the AssumingOp.
    static void inlineRegionIntoParent(AssumingOp &op, PatternRewriter &rewriter);
  
};

//===----------------------------------------------------------------------===//
// shape::AssumingYieldOp declarations
//===----------------------------------------------------------------------===//

class AssumingYieldOpAdaptor {
public:
  AssumingYieldOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssumingYieldOpAdaptor(AssumingYieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssumingYieldOp : public Op<AssumingYieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::ReturnLike, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = AssumingYieldOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// shape::BroadcastOp declarations
//===----------------------------------------------------------------------===//

class BroadcastOpAdaptor {
public:
  BroadcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastOpAdaptor(BroadcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  StringAttr error();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastOp : public Op<BroadcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BroadcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  StringAttr errorAttr();
  Optional< StringRef > error();
  void errorAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs, /*optional*/StringAttr error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, /*optional*/StringAttr error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/StringAttr error);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::ConcatOp declarations
//===----------------------------------------------------------------------===//

class ConcatOpAdaptor {
public:
  ConcatOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConcatOpAdaptor(ConcatOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConcatOp : public Op<ConcatOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConcatOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::ConstShapeOp declarations
//===----------------------------------------------------------------------===//

class ConstShapeOpAdaptor {
public:
  ConstShapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstShapeOpAdaptor(ConstShapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  DenseIntElementsAttr shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstShapeOp : public Op<ConstShapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstShapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  DenseIntElementsAttr shapeAttr();
  DenseIntElementsAttr shape();
  void shapeAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, DenseIntElementsAttr shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, DenseIntElementsAttr shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, DenseIntElementsAttr shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::ConstSizeOp declarations
//===----------------------------------------------------------------------===//

class ConstSizeOpAdaptor {
public:
  ConstSizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstSizeOpAdaptor(ConstSizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstSizeOp : public Op<ConstSizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstSizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr valueAttr();
  APInt value();
  void valueAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, APInt value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, APInt value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, APInt value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::ConstWitnessOp declarations
//===----------------------------------------------------------------------===//

class ConstWitnessOpAdaptor {
public:
  ConstWitnessOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstWitnessOpAdaptor(ConstWitnessOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  BoolAttr passing();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstWitnessOp : public Op<ConstWitnessOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstWitnessOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  BoolAttr passingAttr();
  bool passing();
  void passingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, BoolAttr passing);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, BoolAttr passing);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, BoolAttr passing);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, bool passing);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, bool passing);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, bool passing);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::CstrBroadcastableOp declarations
//===----------------------------------------------------------------------===//

class CstrBroadcastableOpAdaptor {
public:
  CstrBroadcastableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CstrBroadcastableOpAdaptor(CstrBroadcastableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CstrBroadcastableOp : public Op<CstrBroadcastableOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CstrBroadcastableOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::CstrEqOp declarations
//===----------------------------------------------------------------------===//

class CstrEqOpAdaptor {
public:
  CstrEqOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CstrEqOpAdaptor(CstrEqOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CstrEqOp : public Op<CstrEqOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Adaptor = CstrEqOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ValueRange inputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// shape::DebugPrintOp declarations
//===----------------------------------------------------------------------===//

class DebugPrintOpAdaptor {
public:
  DebugPrintOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DebugPrintOpAdaptor(DebugPrintOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DebugPrintOp : public Op<DebugPrintOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = DebugPrintOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// shape::FromExtentTensorOp declarations
//===----------------------------------------------------------------------===//

class FromExtentTensorOpAdaptor {
public:
  FromExtentTensorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FromExtentTensorOpAdaptor(FromExtentTensorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FromExtentTensorOp : public Op<FromExtentTensorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FromExtentTensorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::FromExtentsOp declarations
//===----------------------------------------------------------------------===//

class FromExtentsOpAdaptor {
public:
  FromExtentsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FromExtentsOpAdaptor(FromExtentsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange extents();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FromExtentsOp : public Op<FromExtentsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FromExtentsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range extents();
  ::mlir::MutableOperandRange extentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value shape();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type shape, ValueRange extents);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange extents);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// shape::GetExtentOp declarations
//===----------------------------------------------------------------------===//

class GetExtentOpAdaptor {
public:
  GetExtentOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GetExtentOpAdaptor(GetExtentOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  Value dim();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GetExtentOp : public Op<GetExtentOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GetExtentOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  Value dim();
  ::mlir::MutableOperandRange shapeMutable();
  ::mlir::MutableOperandRange dimMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value extent();
  static void build(OpBuilder &builder, OperationState &result, Value shape, int64_t dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type extent, Value shape, Value dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value shape, Value dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, Value dim);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);

    /// Get the `dim` value as integer if it is constant.
    Optional<int64_t> getConstantDim();
  
};

//===----------------------------------------------------------------------===//
// shape::IndexToSizeOp declarations
//===----------------------------------------------------------------------===//

class IndexToSizeOpAdaptor {
public:
  IndexToSizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IndexToSizeOpAdaptor(IndexToSizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IndexToSizeOp : public Op<IndexToSizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IndexToSizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::JoinOp declarations
//===----------------------------------------------------------------------===//

class JoinOpAdaptor {
public:
  JoinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  JoinOpAdaptor(JoinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg0();
  Value arg1();
  StringAttr error();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class JoinOp : public Op<JoinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = JoinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg0();
  Value arg1();
  ::mlir::MutableOperandRange arg0Mutable();
  ::mlir::MutableOperandRange arg1Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  StringAttr errorAttr();
  Optional< StringRef > error();
  void errorAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg0, Value arg1, /*optional*/StringAttr error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg0, Value arg1, /*optional*/StringAttr error);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// shape::MulOp declarations
//===----------------------------------------------------------------------===//

class MulOpAdaptor {
public:
  MulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MulOpAdaptor(MulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MulOp : public Op<MulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = MulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// shape::NumElementsOp declarations
//===----------------------------------------------------------------------===//

class NumElementsOpAdaptor {
public:
  NumElementsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NumElementsOpAdaptor(NumElementsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NumElementsOp : public Op<NumElementsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NumElementsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::ReduceOp declarations
//===----------------------------------------------------------------------===//

class ReduceOpAdaptor {
public:
  ReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReduceOpAdaptor(ReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  ValueRange initVals();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReduceOp : public Op<ReduceOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  Operation::operand_range initVals();
  ::mlir::MutableOperandRange shapeMutable();
  ::mlir::MutableOperandRange initValsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range result();
  Region &region();
  static void build(OpBuilder &builder, OperationState &result, Value shape, ValueRange initVals);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> result, Value shape, ValueRange initVals);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// shape::ShapeOfOp declarations
//===----------------------------------------------------------------------===//

class ShapeOfOpAdaptor {
public:
  ShapeOfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShapeOfOpAdaptor(ShapeOfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShapeOfOp : public Op<ShapeOfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShapeOfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::SizeToIndexOp declarations
//===----------------------------------------------------------------------===//

class SizeToIndexOpAdaptor {
public:
  SizeToIndexOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SizeToIndexOpAdaptor(SizeToIndexOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SizeToIndexOp : public Op<SizeToIndexOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SizeToIndexOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::SplitAtOp declarations
//===----------------------------------------------------------------------===//

class SplitAtOpAdaptor {
public:
  SplitAtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SplitAtOpAdaptor(SplitAtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SplitAtOp : public Op<SplitAtOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, InferTypeOpInterface::Trait, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SplitAtOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value index();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange indexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value head();
  Value tail();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type head, Type tail, Value operand, Value index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
};

//===----------------------------------------------------------------------===//
// shape::ToExtentTensorOp declarations
//===----------------------------------------------------------------------===//

class ToExtentTensorOpAdaptor {
public:
  ToExtentTensorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ToExtentTensorOpAdaptor(ToExtentTensorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ToExtentTensorOp : public Op<ToExtentTensorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ToExtentTensorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// shape::YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpAdaptor {
public:
  YieldOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  YieldOpAdaptor(YieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class YieldOp : public Op<YieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasParent<ReduceOp>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ReturnLike, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = YieldOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &b, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

