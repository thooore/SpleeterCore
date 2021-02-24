/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class FusionOp;
class DynamicMemRefCastOp;
class DynamicUpdateSliceOp;
class StaticMemRefCastOp;
class AbsOp;
class AddOp;
class AllReduceOp;
class AndOp;
class Atan2Op;
class BatchNormGradOp;
class BatchNormInferenceOp;
class BatchNormTrainingOp;
class BitcastConvertOp;
class BitcastOp;
class BroadcastInDimOp;
class BroadcastOp;
class CaseOp;
class CeilOp;
class CholeskyOp;
class ClampOp;
class ClzOp;
class CollectivePermuteOp;
class CompareOp;
class ComplexOp;
class ConcatenateOp;
class ConstOp;
class ConvOp;
class ConvertOp;
class CopyOp;
class CosOp;
class DivOp;
class DotOp;
class ExpOp;
class Expm1Op;
class FftOp;
class FloorOp;
class GatherOp;
class GetTupleElementOp;
class ImagOp;
class Infeed;
class IotaOp;
class IsFiniteOp;
class Log1pOp;
class LogOp;
class MapOp;
class MaxOp;
class MinOp;
class MulOp;
class NegOp;
class NotOp;
class OrOp;
class Outfeed;
class PadOp;
class PopulationCountOp;
class PowOp;
class RealOp;
class ReduceOp;
class ReducePrecisionOp;
class ReduceWindowOp;
class RemOp;
class ReplicaIdOp;
class ReshapeOp;
class ReverseOp;
class RngGetAndUpdateStateOp;
class RoundOp;
class RsqrtOp;
class ScatterOp;
class SelectAndScatterOp;
class SelectOp;
class ShiftLeftOp;
class ShiftRightArithmeticOp;
class ShiftRightLogicalOp;
class SignOp;
class SinOp;
class SliceOp;
class SortOp;
class SqrtOp;
class SubOp;
class TanhOp;
class TransposeOp;
class TriangularSolveOp;
class TupleOp;
class WhileOp;
class XorOp;
class TerminatorOp;

//===----------------------------------------------------------------------===//
// xla_lhlo::FusionOp declarations
//===----------------------------------------------------------------------===//

class FusionOpAdaptor {
public:
  FusionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusionOpAdaptor(FusionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusionOp : public Op<FusionOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<TerminatorOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = FusionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &region();
  static void build(OpBuilder &builder, OperationState &result, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::DynamicMemRefCastOp declarations
//===----------------------------------------------------------------------===//

class DynamicMemRefCastOpAdaptor {
public:
  DynamicMemRefCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicMemRefCastOpAdaptor(DynamicMemRefCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  ValueRange sizes();
  ValueRange strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicMemRefCastOp : public Op<DynamicMemRefCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait, ViewLikeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicMemRefCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Operation::operand_range sizes();
  Operation::operand_range strides();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange sizesMutable();
  ::mlir::MutableOperandRange stridesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, MemRefType resultType, Value operand, ValueRange sizes, ValueRange strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand, ValueRange sizes, ValueRange strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, ValueRange sizes, ValueRange strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  Value getViewSource();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    MemRefType getType() { return getResult().getType().cast<MemRefType>(); }
  
};

//===----------------------------------------------------------------------===//
// xla_lhlo::DynamicUpdateSliceOp declarations
//===----------------------------------------------------------------------===//

class DynamicUpdateSliceOpAdaptor {
public:
  DynamicUpdateSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicUpdateSliceOpAdaptor(DynamicUpdateSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value update();
  Value output();
  ValueRange start_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicUpdateSliceOp : public Op<DynamicUpdateSliceOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicUpdateSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value update();
  Value output();
  Operation::operand_range start_indices();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange updateMutable();
  ::mlir::MutableOperandRange outputMutable();
  ::mlir::MutableOperandRange start_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value update, Value output, ValueRange start_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value update, Value output, ValueRange start_indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::StaticMemRefCastOp declarations
//===----------------------------------------------------------------------===//

class StaticMemRefCastOpAdaptor {
public:
  StaticMemRefCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StaticMemRefCastOpAdaptor(StaticMemRefCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StaticMemRefCastOp : public Op<StaticMemRefCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, ViewLikeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StaticMemRefCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, MemRefType resultType, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  Value getViewSource();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    MemRefType getType() { return getResult().getType().cast<MemRefType>(); }
  
};

//===----------------------------------------------------------------------===//
// xla_lhlo::AbsOp declarations
//===----------------------------------------------------------------------===//

class AbsOpAdaptor {
public:
  AbsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AbsOpAdaptor(AbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AbsOp : public Op<AbsOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = AbsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::AddOp declarations
//===----------------------------------------------------------------------===//

class AddOpAdaptor {
public:
  AddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddOpAdaptor(AddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddOp : public Op<AddOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = AddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::AllReduceOp declarations
//===----------------------------------------------------------------------===//

class AllReduceOpAdaptor {
public:
  AllReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllReduceOpAdaptor(AllReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  DenseIntElementsAttr replica_groups();
  BoolAttr constrain_layout();
  ChannelHandle channel_id();
  BoolAttr use_global_device_ids();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllReduceOp : public Op<AllReduceOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = AllReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &computation();
  DenseIntElementsAttr replica_groupsAttr();
  DenseIntElementsAttr replica_groups();
  BoolAttr constrain_layoutAttr();
  bool constrain_layout();
  ChannelHandle channel_idAttr();
  Optional<ChannelHandle> channel_id();
  BoolAttr use_global_device_idsAttr();
  bool use_global_device_ids();
  void replica_groupsAttr(DenseIntElementsAttr attr);
  void constrain_layoutAttr(BoolAttr attr);
  void channel_idAttr(ChannelHandle attr);
  void use_global_device_idsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, DenseIntElementsAttr replica_groups, BoolAttr constrain_layout, /*optional*/ChannelHandle channel_id, BoolAttr use_global_device_ids);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, DenseIntElementsAttr replica_groups, BoolAttr constrain_layout, /*optional*/ChannelHandle channel_id, BoolAttr use_global_device_ids);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/ChannelHandle channel_id, bool use_global_device_ids = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, DenseIntElementsAttr replica_groups, bool constrain_layout, /*optional*/ChannelHandle channel_id, bool use_global_device_ids = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::AndOp declarations
//===----------------------------------------------------------------------===//

class AndOpAdaptor {
public:
  AndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AndOpAdaptor(AndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AndOp : public Op<AndOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = AndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::Atan2Op declarations
//===----------------------------------------------------------------------===//

class Atan2OpAdaptor {
public:
  Atan2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Atan2OpAdaptor(Atan2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Atan2Op : public Op<Atan2Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = Atan2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::BatchNormGradOp declarations
//===----------------------------------------------------------------------===//

class BatchNormGradOpAdaptor {
public:
  BatchNormGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchNormGradOpAdaptor(BatchNormGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value scale();
  Value mean();
  Value variance();
  Value grad_output();
  Value output();
  FloatAttr epsilon();
  IntegerAttr feature_index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchNormGradOp : public Op<BatchNormGradOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<6>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchNormGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value scale();
  Value mean();
  Value variance();
  Value grad_output();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange meanMutable();
  ::mlir::MutableOperandRange varianceMutable();
  ::mlir::MutableOperandRange grad_outputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FloatAttr epsilonAttr();
  APFloat epsilon();
  IntegerAttr feature_indexAttr();
  APInt feature_index();
  void epsilonAttr(FloatAttr attr);
  void feature_indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scale, Value mean, Value variance, Value grad_output, Value output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value mean, Value variance, Value grad_output, Value output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scale, Value mean, Value variance, Value grad_output, Value output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value mean, Value variance, Value grad_output, Value output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::BatchNormInferenceOp declarations
//===----------------------------------------------------------------------===//

class BatchNormInferenceOpAdaptor {
public:
  BatchNormInferenceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchNormInferenceOpAdaptor(BatchNormInferenceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  Value output();
  FloatAttr epsilon();
  IntegerAttr feature_index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchNormInferenceOp : public Op<BatchNormInferenceOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<6>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchNormInferenceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange meanMutable();
  ::mlir::MutableOperandRange varianceMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FloatAttr epsilonAttr();
  APFloat epsilon();
  IntegerAttr feature_indexAttr();
  APInt feature_index();
  void epsilonAttr(FloatAttr attr);
  void feature_indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scale, Value offset, Value mean, Value variance, Value output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, Value mean, Value variance, Value output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scale, Value offset, Value mean, Value variance, Value output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, Value mean, Value variance, Value output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::BatchNormTrainingOp declarations
//===----------------------------------------------------------------------===//

class BatchNormTrainingOpAdaptor {
public:
  BatchNormTrainingOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchNormTrainingOpAdaptor(BatchNormTrainingOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value scale();
  Value offset();
  Value output();
  FloatAttr epsilon();
  IntegerAttr feature_index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchNormTrainingOp : public Op<BatchNormTrainingOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchNormTrainingOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value scale();
  Value offset();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FloatAttr epsilonAttr();
  APFloat epsilon();
  IntegerAttr feature_indexAttr();
  APInt feature_index();
  void epsilonAttr(FloatAttr attr);
  void feature_indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scale, Value offset, Value output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, Value output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scale, Value offset, Value output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, Value output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::BitcastConvertOp declarations
//===----------------------------------------------------------------------===//

class BitcastConvertOpAdaptor {
public:
  BitcastConvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitcastConvertOpAdaptor(BitcastConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitcastConvertOp : public Op<BitcastConvertOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = BitcastConvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpAdaptor {
public:
  BitcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitcastOpAdaptor(BitcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitcastOp : public Op<BitcastOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::BroadcastInDimOp declarations
//===----------------------------------------------------------------------===//

class BroadcastInDimOpAdaptor {
public:
  BroadcastInDimOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastInDimOpAdaptor(BroadcastInDimOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastInDimOp : public Op<BroadcastInDimOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BroadcastInDimOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  DenseIntElementsAttr broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::BroadcastOp declarations
//===----------------------------------------------------------------------===//

class BroadcastOpAdaptor {
public:
  BroadcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastOpAdaptor(BroadcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  DenseIntElementsAttr broadcast_sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastOp : public Op<BroadcastOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BroadcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_sizesAttr();
  DenseIntElementsAttr broadcast_sizes();
  void broadcast_sizesAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, DenseIntElementsAttr broadcast_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, DenseIntElementsAttr broadcast_sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::CaseOp declarations
//===----------------------------------------------------------------------===//

class CaseOpAdaptor {
public:
  CaseOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CaseOpAdaptor(CaseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value index();
  ValueRange branch_operands();
  Value out();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CaseOp : public Op<CaseOp, OpTrait::VariadicRegions, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<TerminatorOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = CaseOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value index();
  Operation::operand_range branch_operands();
  Value out();
  ::mlir::MutableOperandRange indexMutable();
  ::mlir::MutableOperandRange branch_operandsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  MutableArrayRef<Region> branches();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value index, ValueRange branch_operands, Value out, unsigned branchesCount);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value index, ValueRange branch_operands, Value out, unsigned branchesCount);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes, unsigned numRegions);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::CeilOp declarations
//===----------------------------------------------------------------------===//

class CeilOpAdaptor {
public:
  CeilOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CeilOpAdaptor(CeilOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CeilOp : public Op<CeilOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = CeilOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::CholeskyOp declarations
//===----------------------------------------------------------------------===//

class CholeskyOpAdaptor {
public:
  CholeskyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CholeskyOpAdaptor(CholeskyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value output();
  BoolAttr lower();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CholeskyOp : public Op<CholeskyOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsElementType> {
public:
  using Op::Op;
  using Adaptor = CholeskyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value output();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr lowerAttr();
  bool lower();
  void lowerAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value output, BoolAttr lower);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value output, BoolAttr lower);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value output, bool lower = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value output, bool lower = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ClampOp declarations
//===----------------------------------------------------------------------===//

class ClampOpAdaptor {
public:
  ClampOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ClampOpAdaptor(ClampOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value min();
  Value operand();
  Value max();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ClampOp : public Op<ClampOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ClampOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value min();
  Value operand();
  Value max();
  Value output();
  ::mlir::MutableOperandRange minMutable();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange maxMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value min, Value operand, Value max, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value min, Value operand, Value max, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ClzOp declarations
//===----------------------------------------------------------------------===//

class ClzOpAdaptor {
public:
  ClzOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ClzOpAdaptor(ClzOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ClzOp : public Op<ClzOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = ClzOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::CollectivePermuteOp declarations
//===----------------------------------------------------------------------===//

class CollectivePermuteOpAdaptor {
public:
  CollectivePermuteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CollectivePermuteOpAdaptor(CollectivePermuteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  DenseIntElementsAttr source_target_pairs();
  ChannelHandle channel_id();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CollectivePermuteOp : public Op<CollectivePermuteOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = CollectivePermuteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr source_target_pairsAttr();
  DenseIntElementsAttr source_target_pairs();
  ChannelHandle channel_idAttr();
  Optional<ChannelHandle> channel_id();
  void source_target_pairsAttr(DenseIntElementsAttr attr);
  void channel_idAttr(ChannelHandle attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, DenseIntElementsAttr source_target_pairs, /*optional*/ChannelHandle channel_id);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, DenseIntElementsAttr source_target_pairs, /*optional*/ChannelHandle channel_id);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::CompareOp declarations
//===----------------------------------------------------------------------===//

class CompareOpAdaptor {
public:
  CompareOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CompareOpAdaptor(CompareOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  StringAttr comparison_direction();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CompareOp : public Op<CompareOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CompareOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  StringAttr comparison_directionAttr();
  StringRef comparison_direction();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  void comparison_directionAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions, StringAttr comparison_direction);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions, StringAttr comparison_direction);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions, StringRef comparison_direction);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions, StringRef comparison_direction);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ComplexOp declarations
//===----------------------------------------------------------------------===//

class ComplexOpAdaptor {
public:
  ComplexOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ComplexOpAdaptor(ComplexOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value output();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ComplexOp : public Op<ComplexOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = ComplexOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value output();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value output, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value output, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ConcatenateOp declarations
//===----------------------------------------------------------------------===//

class ConcatenateOpAdaptor {
public:
  ConcatenateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConcatenateOpAdaptor(ConcatenateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange val();
  Value output();
  IntegerAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConcatenateOp : public Op<ConcatenateOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConcatenateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range val();
  Value output();
  ::mlir::MutableOperandRange valMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr dimensionAttr();
  APInt dimension();
  void dimensionAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange val, Value output, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange val, Value output, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange val, Value output, APInt dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange val, Value output, APInt dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ConstOp declarations
//===----------------------------------------------------------------------===//

class ConstOpAdaptor {
public:
  ConstOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstOpAdaptor(ConstOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value output();
  ElementsAttr value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstOp : public Op<ConstOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value output();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ElementsAttr valueAttr();
  ElementsAttr value();
  void valueAttr(ElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ElementsAttr value, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ElementsAttr value, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ConvOp declarations
//===----------------------------------------------------------------------===//

class ConvOpAdaptor {
public:
  ConvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvOpAdaptor(ConvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value output();
  DenseIntElementsAttr window_strides();
  DenseIntElementsAttr padding();
  DenseIntElementsAttr lhs_dilation();
  DenseIntElementsAttr rhs_dilation();
  ConvDimensionNumbers dimension_numbers();
  IntegerAttr feature_group_count();
  IntegerAttr batch_group_count();
  ArrayAttr precision_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvOp : public Op<ConvOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value output();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr window_stridesAttr();
  Optional< DenseIntElementsAttr > window_strides();
  DenseIntElementsAttr paddingAttr();
  Optional< DenseIntElementsAttr > padding();
  DenseIntElementsAttr lhs_dilationAttr();
  Optional< DenseIntElementsAttr > lhs_dilation();
  DenseIntElementsAttr rhs_dilationAttr();
  Optional< DenseIntElementsAttr > rhs_dilation();
  ConvDimensionNumbers dimension_numbersAttr();
  ConvDimensionNumbers dimension_numbers();
  IntegerAttr feature_group_countAttr();
  APInt feature_group_count();
  IntegerAttr batch_group_countAttr();
  APInt batch_group_count();
  ArrayAttr precision_configAttr();
  Optional< ArrayAttr > precision_config();
  void window_stridesAttr(DenseIntElementsAttr attr);
  void paddingAttr(DenseIntElementsAttr attr);
  void lhs_dilationAttr(DenseIntElementsAttr attr);
  void rhs_dilationAttr(DenseIntElementsAttr attr);
  void dimension_numbersAttr(ConvDimensionNumbers attr);
  void feature_group_countAttr(IntegerAttr attr);
  void batch_group_countAttr(IntegerAttr attr);
  void precision_configAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value output, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, IntegerAttr feature_group_count, IntegerAttr batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value output, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, IntegerAttr feature_group_count, IntegerAttr batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value output, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, APInt feature_group_count, APInt batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value output, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, APInt feature_group_count, APInt batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ConvertOp declarations
//===----------------------------------------------------------------------===//

class ConvertOpAdaptor {
public:
  ConvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvertOpAdaptor(ConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvertOp : public Op<ConvertOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = ConvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::CopyOp declarations
//===----------------------------------------------------------------------===//

class CopyOpAdaptor {
public:
  CopyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CopyOpAdaptor(CopyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CopyOp : public Op<CopyOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CopyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::CosOp declarations
//===----------------------------------------------------------------------===//

class CosOpAdaptor {
public:
  CosOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CosOpAdaptor(CosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CosOp : public Op<CosOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = CosOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::DivOp declarations
//===----------------------------------------------------------------------===//

class DivOpAdaptor {
public:
  DivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DivOpAdaptor(DivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DivOp : public Op<DivOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = DivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::DotOp declarations
//===----------------------------------------------------------------------===//

class DotOpAdaptor {
public:
  DotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DotOpAdaptor(DotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value output();
  ArrayAttr precision_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DotOp : public Op<DotOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value output();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr precision_configAttr();
  Optional< ArrayAttr > precision_config();
  void precision_configAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, /*optional*/ArrayAttr precision_config, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/ArrayAttr precision_config, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ExpOp declarations
//===----------------------------------------------------------------------===//

class ExpOpAdaptor {
public:
  ExpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExpOpAdaptor(ExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExpOp : public Op<ExpOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = ExpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::Expm1Op declarations
//===----------------------------------------------------------------------===//

class Expm1OpAdaptor {
public:
  Expm1OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Expm1OpAdaptor(Expm1Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Expm1Op : public Op<Expm1Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = Expm1OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::FftOp declarations
//===----------------------------------------------------------------------===//

class FftOpAdaptor {
public:
  FftOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FftOpAdaptor(FftOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  StringAttr fft_type();
  DenseIntElementsAttr fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FftOp : public Op<FftOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FftOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr fft_typeAttr();
  StringRef fft_type();
  DenseIntElementsAttr fft_lengthAttr();
  DenseIntElementsAttr fft_length();
  void fft_typeAttr(StringAttr attr);
  void fft_lengthAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, StringAttr fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, StringAttr fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, StringRef fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, StringRef fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::FloorOp declarations
//===----------------------------------------------------------------------===//

class FloorOpAdaptor {
public:
  FloorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FloorOpAdaptor(FloorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FloorOp : public Op<FloorOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = FloorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::GatherOp declarations
//===----------------------------------------------------------------------===//

class GatherOpAdaptor {
public:
  GatherOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GatherOpAdaptor(GatherOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value start_indices();
  Value output();
  IntegerAttr index_vector_dim();
  DenseIntElementsAttr offset_dims();
  DenseIntElementsAttr slice_sizes();
  DenseIntElementsAttr collapsed_slice_dims();
  DenseIntElementsAttr start_index_map();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GatherOp : public Op<GatherOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GatherOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value start_indices();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange start_indicesMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr index_vector_dimAttr();
  APInt index_vector_dim();
  DenseIntElementsAttr offset_dimsAttr();
  DenseIntElementsAttr offset_dims();
  DenseIntElementsAttr slice_sizesAttr();
  DenseIntElementsAttr slice_sizes();
  DenseIntElementsAttr collapsed_slice_dimsAttr();
  DenseIntElementsAttr collapsed_slice_dims();
  DenseIntElementsAttr start_index_mapAttr();
  DenseIntElementsAttr start_index_map();
  void index_vector_dimAttr(IntegerAttr attr);
  void offset_dimsAttr(DenseIntElementsAttr attr);
  void slice_sizesAttr(DenseIntElementsAttr attr);
  void collapsed_slice_dimsAttr(DenseIntElementsAttr attr);
  void start_index_mapAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value start_indices, IntegerAttr index_vector_dim, DenseIntElementsAttr offset_dims, DenseIntElementsAttr slice_sizes, DenseIntElementsAttr collapsed_slice_dims, DenseIntElementsAttr start_index_map, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value start_indices, IntegerAttr index_vector_dim, DenseIntElementsAttr offset_dims, DenseIntElementsAttr slice_sizes, DenseIntElementsAttr collapsed_slice_dims, DenseIntElementsAttr start_index_map, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value start_indices, APInt index_vector_dim, DenseIntElementsAttr offset_dims, DenseIntElementsAttr slice_sizes, DenseIntElementsAttr collapsed_slice_dims, DenseIntElementsAttr start_index_map, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value start_indices, APInt index_vector_dim, DenseIntElementsAttr offset_dims, DenseIntElementsAttr slice_sizes, DenseIntElementsAttr collapsed_slice_dims, DenseIntElementsAttr start_index_map, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::GetTupleElementOp declarations
//===----------------------------------------------------------------------===//

class GetTupleElementOpAdaptor {
public:
  GetTupleElementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GetTupleElementOpAdaptor(GetTupleElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value out();
  IntegerAttr index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GetTupleElementOp : public Op<GetTupleElementOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GetTupleElementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value out();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr indexAttr();
  APInt index();
  void indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value out, IntegerAttr index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value out, IntegerAttr index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value out, APInt index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value out, APInt index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ImagOp declarations
//===----------------------------------------------------------------------===//

class ImagOpAdaptor {
public:
  ImagOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ImagOpAdaptor(ImagOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ImagOp : public Op<ImagOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = ImagOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::Infeed declarations
//===----------------------------------------------------------------------===//

class InfeedAdaptor {
public:
  InfeedAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InfeedAdaptor(Infeed& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value output();
  StringAttr config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Infeed : public Op<Infeed, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InfeedAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value output();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr configAttr();
  StringRef config();
  void configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value output, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value output, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value output, StringRef config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value output, StringRef config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::IotaOp declarations
//===----------------------------------------------------------------------===//

class IotaOpAdaptor {
public:
  IotaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IotaOpAdaptor(IotaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value output();
  IntegerAttr iota_dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IotaOp : public Op<IotaOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IotaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value output();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr iota_dimensionAttr();
  APInt iota_dimension();
  void iota_dimensionAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr iota_dimension, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr iota_dimension, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, APInt iota_dimension, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, APInt iota_dimension, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::IsFiniteOp declarations
//===----------------------------------------------------------------------===//

class IsFiniteOpAdaptor {
public:
  IsFiniteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IsFiniteOpAdaptor(IsFiniteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IsFiniteOp : public Op<IsFiniteOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = IsFiniteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::Log1pOp declarations
//===----------------------------------------------------------------------===//

class Log1pOpAdaptor {
public:
  Log1pOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Log1pOpAdaptor(Log1pOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Log1pOp : public Op<Log1pOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = Log1pOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::LogOp declarations
//===----------------------------------------------------------------------===//

class LogOpAdaptor {
public:
  LogOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogOpAdaptor(LogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogOp : public Op<LogOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = LogOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::MapOp declarations
//===----------------------------------------------------------------------===//

class MapOpAdaptor {
public:
  MapOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MapOpAdaptor(MapOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  Value output();
  DenseIntElementsAttr dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MapOp : public Op<MapOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = MapOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  Value output();
  ::mlir::MutableOperandRange operandsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &computation();
  DenseIntElementsAttr dimensionsAttr();
  DenseIntElementsAttr dimensions();
  void dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, Value output, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, Value output, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::MaxOp declarations
//===----------------------------------------------------------------------===//

class MaxOpAdaptor {
public:
  MaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaxOpAdaptor(MaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaxOp : public Op<MaxOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = MaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::MinOp declarations
//===----------------------------------------------------------------------===//

class MinOpAdaptor {
public:
  MinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MinOpAdaptor(MinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MinOp : public Op<MinOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = MinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::MulOp declarations
//===----------------------------------------------------------------------===//

class MulOpAdaptor {
public:
  MulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MulOpAdaptor(MulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MulOp : public Op<MulOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = MulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::NegOp declarations
//===----------------------------------------------------------------------===//

class NegOpAdaptor {
public:
  NegOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NegOpAdaptor(NegOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NegOp : public Op<NegOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = NegOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::NotOp declarations
//===----------------------------------------------------------------------===//

class NotOpAdaptor {
public:
  NotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NotOpAdaptor(NotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NotOp : public Op<NotOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = NotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::OrOp declarations
//===----------------------------------------------------------------------===//

class OrOpAdaptor {
public:
  OrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OrOpAdaptor(OrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class OrOp : public Op<OrOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = OrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::Outfeed declarations
//===----------------------------------------------------------------------===//

class OutfeedAdaptor {
public:
  OutfeedAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OutfeedAdaptor(Outfeed& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  StringAttr config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Outfeed : public Op<Outfeed, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = OutfeedAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr configAttr();
  StringRef config();
  void configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, StringRef config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringRef config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::PadOp declarations
//===----------------------------------------------------------------------===//

class PadOpAdaptor {
public:
  PadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PadOpAdaptor(PadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value padding_value();
  Value output();
  DenseIntElementsAttr edge_padding_low();
  DenseIntElementsAttr edge_padding_high();
  DenseIntElementsAttr interior_padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PadOp : public Op<PadOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value padding_value();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange padding_valueMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr edge_padding_lowAttr();
  DenseIntElementsAttr edge_padding_low();
  DenseIntElementsAttr edge_padding_highAttr();
  DenseIntElementsAttr edge_padding_high();
  DenseIntElementsAttr interior_paddingAttr();
  DenseIntElementsAttr interior_padding();
  void edge_padding_lowAttr(DenseIntElementsAttr attr);
  void edge_padding_highAttr(DenseIntElementsAttr attr);
  void interior_paddingAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value padding_value, DenseIntElementsAttr edge_padding_low, DenseIntElementsAttr edge_padding_high, DenseIntElementsAttr interior_padding, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value padding_value, DenseIntElementsAttr edge_padding_low, DenseIntElementsAttr edge_padding_high, DenseIntElementsAttr interior_padding, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::PopulationCountOp declarations
//===----------------------------------------------------------------------===//

class PopulationCountOpAdaptor {
public:
  PopulationCountOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PopulationCountOpAdaptor(PopulationCountOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PopulationCountOp : public Op<PopulationCountOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = PopulationCountOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::PowOp declarations
//===----------------------------------------------------------------------===//

class PowOpAdaptor {
public:
  PowOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PowOpAdaptor(PowOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PowOp : public Op<PowOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = PowOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::RealOp declarations
//===----------------------------------------------------------------------===//

class RealOpAdaptor {
public:
  RealOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RealOpAdaptor(RealOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RealOp : public Op<RealOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = RealOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ReduceOp declarations
//===----------------------------------------------------------------------===//

class ReduceOpAdaptor {
public:
  ReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReduceOpAdaptor(ReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  ValueRange init_values();
  ValueRange out();
  DenseIntElementsAttr dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReduceOp : public Op<ReduceOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<TerminatorOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  Operation::operand_range init_values();
  Operation::operand_range out();
  ::mlir::MutableOperandRange operandsMutable();
  ::mlir::MutableOperandRange init_valuesMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  DenseIntElementsAttr dimensionsAttr();
  DenseIntElementsAttr dimensions();
  void dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ValueRange init_values, ValueRange out, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ValueRange init_values, ValueRange out, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ReducePrecisionOp declarations
//===----------------------------------------------------------------------===//

class ReducePrecisionOpAdaptor {
public:
  ReducePrecisionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReducePrecisionOpAdaptor(ReducePrecisionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  IntegerAttr exponent_bits();
  IntegerAttr mantissa_bits();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReducePrecisionOp : public Op<ReducePrecisionOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = ReducePrecisionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr exponent_bitsAttr();
  APInt exponent_bits();
  IntegerAttr mantissa_bitsAttr();
  APInt mantissa_bits();
  void exponent_bitsAttr(IntegerAttr attr);
  void mantissa_bitsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, IntegerAttr exponent_bits, IntegerAttr mantissa_bits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, IntegerAttr exponent_bits, IntegerAttr mantissa_bits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, APInt exponent_bits, APInt mantissa_bits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, APInt exponent_bits, APInt mantissa_bits);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ReduceWindowOp declarations
//===----------------------------------------------------------------------===//

class ReduceWindowOpAdaptor {
public:
  ReduceWindowOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReduceWindowOpAdaptor(ReduceWindowOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value init_value();
  Value out();
  DenseIntElementsAttr window_dimensions();
  DenseIntElementsAttr window_strides();
  DenseIntElementsAttr base_dilations();
  DenseIntElementsAttr window_dilations();
  DenseIntElementsAttr padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReduceWindowOp : public Op<ReduceWindowOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<TerminatorOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ReduceWindowOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value init_value();
  Value out();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange init_valueMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  DenseIntElementsAttr window_dimensionsAttr();
  DenseIntElementsAttr window_dimensions();
  DenseIntElementsAttr window_stridesAttr();
  Optional< DenseIntElementsAttr > window_strides();
  DenseIntElementsAttr base_dilationsAttr();
  Optional< DenseIntElementsAttr > base_dilations();
  DenseIntElementsAttr window_dilationsAttr();
  Optional< DenseIntElementsAttr > window_dilations();
  DenseIntElementsAttr paddingAttr();
  Optional< DenseIntElementsAttr > padding();
  void window_dimensionsAttr(DenseIntElementsAttr attr);
  void window_stridesAttr(DenseIntElementsAttr attr);
  void base_dilationsAttr(DenseIntElementsAttr attr);
  void window_dilationsAttr(DenseIntElementsAttr attr);
  void paddingAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value init_value, Value out, DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr base_dilations, /*optional*/DenseIntElementsAttr window_dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value init_value, Value out, DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr base_dilations, /*optional*/DenseIntElementsAttr window_dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::RemOp declarations
//===----------------------------------------------------------------------===//

class RemOpAdaptor {
public:
  RemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RemOpAdaptor(RemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RemOp : public Op<RemOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = RemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ReplicaIdOp declarations
//===----------------------------------------------------------------------===//

class ReplicaIdOpAdaptor {
public:
  ReplicaIdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReplicaIdOpAdaptor(ReplicaIdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReplicaIdOp : public Op<ReplicaIdOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReplicaIdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ReshapeOp declarations
//===----------------------------------------------------------------------===//

class ReshapeOpAdaptor {
public:
  ReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReshapeOpAdaptor(ReshapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReshapeOp : public Op<ReshapeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReshapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ReverseOp declarations
//===----------------------------------------------------------------------===//

class ReverseOpAdaptor {
public:
  ReverseOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReverseOpAdaptor(ReverseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  DenseIntElementsAttr dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReverseOp : public Op<ReverseOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReverseOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr dimensionsAttr();
  DenseIntElementsAttr dimensions();
  void dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, DenseIntElementsAttr dimensions, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr dimensions, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::RngGetAndUpdateStateOp declarations
//===----------------------------------------------------------------------===//

class RngGetAndUpdateStateOpAdaptor {
public:
  RngGetAndUpdateStateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RngGetAndUpdateStateOpAdaptor(RngGetAndUpdateStateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value state();
  IntegerAttr delta();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RngGetAndUpdateStateOp : public Op<RngGetAndUpdateStateOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RngGetAndUpdateStateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value state();
  ::mlir::MutableOperandRange stateMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr deltaAttr();
  APInt delta();
  void deltaAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value state, IntegerAttr delta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value state, IntegerAttr delta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value state, APInt delta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value state, APInt delta);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::RoundOp declarations
//===----------------------------------------------------------------------===//

class RoundOpAdaptor {
public:
  RoundOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RoundOpAdaptor(RoundOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RoundOp : public Op<RoundOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = RoundOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::RsqrtOp declarations
//===----------------------------------------------------------------------===//

class RsqrtOpAdaptor {
public:
  RsqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RsqrtOpAdaptor(RsqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RsqrtOp : public Op<RsqrtOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = RsqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ScatterOp declarations
//===----------------------------------------------------------------------===//

class ScatterOpAdaptor {
public:
  ScatterOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ScatterOpAdaptor(ScatterOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value scatter_indices();
  Value updates();
  Value output();
  ScatterDimensionNumbers scatter_dimension_numbers();
  BoolAttr indices_are_sorted();
  BoolAttr unique_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ScatterOp : public Op<ScatterOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ScatterOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value scatter_indices();
  Value updates();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scatter_indicesMutable();
  ::mlir::MutableOperandRange updatesMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &update_computation();
  ScatterDimensionNumbers scatter_dimension_numbersAttr();
  ScatterDimensionNumbers scatter_dimension_numbers();
  BoolAttr indices_are_sortedAttr();
  bool indices_are_sorted();
  BoolAttr unique_indicesAttr();
  bool unique_indices();
  void scatter_dimension_numbersAttr(ScatterDimensionNumbers attr);
  void indices_are_sortedAttr(BoolAttr attr);
  void unique_indicesAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scatter_indices, Value updates, Value output, ScatterDimensionNumbers scatter_dimension_numbers, BoolAttr indices_are_sorted, BoolAttr unique_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scatter_indices, Value updates, Value output, ScatterDimensionNumbers scatter_dimension_numbers, BoolAttr indices_are_sorted, BoolAttr unique_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value scatter_indices, Value updates, Value output, ScatterDimensionNumbers scatter_dimension_numbers, bool indices_are_sorted = false, bool unique_indices = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scatter_indices, Value updates, Value output, ScatterDimensionNumbers scatter_dimension_numbers, bool indices_are_sorted = false, bool unique_indices = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SelectAndScatterOp declarations
//===----------------------------------------------------------------------===//

class SelectAndScatterOpAdaptor {
public:
  SelectAndScatterOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SelectAndScatterOpAdaptor(SelectAndScatterOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value source();
  Value init_value();
  Value out();
  DenseIntElementsAttr window_dimensions();
  DenseIntElementsAttr window_strides();
  DenseIntElementsAttr padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectAndScatterOp : public Op<SelectAndScatterOp, OpTrait::NRegions<2>::Impl, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectAndScatterOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value source();
  Value init_value();
  Value out();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange init_valueMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &select();
  Region &scatter();
  DenseIntElementsAttr window_dimensionsAttr();
  Optional< DenseIntElementsAttr > window_dimensions();
  DenseIntElementsAttr window_stridesAttr();
  Optional< DenseIntElementsAttr > window_strides();
  DenseIntElementsAttr paddingAttr();
  Optional< DenseIntElementsAttr > padding();
  void window_dimensionsAttr(DenseIntElementsAttr attr);
  void window_stridesAttr(DenseIntElementsAttr attr);
  void paddingAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value source, Value init_value, Value out, /*optional*/DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value source, Value init_value, Value out, /*optional*/DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpAdaptor {
public:
  SelectOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SelectOpAdaptor(SelectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pred();
  Value on_true();
  Value on_false();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectOp : public Op<SelectOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pred();
  Value on_true();
  Value on_false();
  Value output();
  ::mlir::MutableOperandRange predMutable();
  ::mlir::MutableOperandRange on_trueMutable();
  ::mlir::MutableOperandRange on_falseMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value pred, Value on_true, Value on_false, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pred, Value on_true, Value on_false, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ShiftLeftOp declarations
//===----------------------------------------------------------------------===//

class ShiftLeftOpAdaptor {
public:
  ShiftLeftOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftLeftOpAdaptor(ShiftLeftOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftLeftOp : public Op<ShiftLeftOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = ShiftLeftOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ShiftRightArithmeticOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightArithmeticOpAdaptor {
public:
  ShiftRightArithmeticOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftRightArithmeticOpAdaptor(ShiftRightArithmeticOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftRightArithmeticOp : public Op<ShiftRightArithmeticOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = ShiftRightArithmeticOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::ShiftRightLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightLogicalOpAdaptor {
public:
  ShiftRightLogicalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftRightLogicalOpAdaptor(ShiftRightLogicalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftRightLogicalOp : public Op<ShiftRightLogicalOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = ShiftRightLogicalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SignOp declarations
//===----------------------------------------------------------------------===//

class SignOpAdaptor {
public:
  SignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SignOpAdaptor(SignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SignOp : public Op<SignOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = SignOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SinOp declarations
//===----------------------------------------------------------------------===//

class SinOpAdaptor {
public:
  SinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SinOpAdaptor(SinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SinOp : public Op<SinOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = SinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SliceOp declarations
//===----------------------------------------------------------------------===//

class SliceOpAdaptor {
public:
  SliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SliceOpAdaptor(SliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  DenseIntElementsAttr start_indices();
  DenseIntElementsAttr limit_indices();
  DenseIntElementsAttr strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SliceOp : public Op<SliceOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr start_indicesAttr();
  DenseIntElementsAttr start_indices();
  DenseIntElementsAttr limit_indicesAttr();
  DenseIntElementsAttr limit_indices();
  DenseIntElementsAttr stridesAttr();
  DenseIntElementsAttr strides();
  void start_indicesAttr(DenseIntElementsAttr attr);
  void limit_indicesAttr(DenseIntElementsAttr attr);
  void stridesAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value output, DenseIntElementsAttr start_indices, DenseIntElementsAttr limit_indices, DenseIntElementsAttr strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output, DenseIntElementsAttr start_indices, DenseIntElementsAttr limit_indices, DenseIntElementsAttr strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SortOp declarations
//===----------------------------------------------------------------------===//

class SortOpAdaptor {
public:
  SortOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SortOpAdaptor(SortOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  Value output();
  IntegerAttr dimension();
  BoolAttr is_stable();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SortOp : public Op<SortOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SortOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  Value output();
  ::mlir::MutableOperandRange operandsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &comparator();
  IntegerAttr dimensionAttr();
  APInt dimension();
  BoolAttr is_stableAttr();
  bool is_stable();
  void dimensionAttr(IntegerAttr attr);
  void is_stableAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, Value output, IntegerAttr dimension, BoolAttr is_stable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, Value output, IntegerAttr dimension, BoolAttr is_stable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, Value output, APInt dimension, bool is_stable = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, Value output, APInt dimension, bool is_stable = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SqrtOp declarations
//===----------------------------------------------------------------------===//

class SqrtOpAdaptor {
public:
  SqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SqrtOpAdaptor(SqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SqrtOp : public Op<SqrtOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = SqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::SubOp declarations
//===----------------------------------------------------------------------===//

class SubOpAdaptor {
public:
  SubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubOpAdaptor(SubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubOp : public Op<SubOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = SubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::TanhOp declarations
//===----------------------------------------------------------------------===//

class TanhOpAdaptor {
public:
  TanhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TanhOpAdaptor(TanhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TanhOp : public Op<TanhOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = TanhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::TransposeOp declarations
//===----------------------------------------------------------------------===//

class TransposeOpAdaptor {
public:
  TransposeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TransposeOpAdaptor(TransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output();
  DenseIntElementsAttr permutation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TransposeOp : public Op<TransposeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TransposeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr permutationAttr();
  DenseIntElementsAttr permutation();
  void permutationAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, DenseIntElementsAttr permutation, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr permutation, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::TriangularSolveOp declarations
//===----------------------------------------------------------------------===//

class TriangularSolveOpAdaptor {
public:
  TriangularSolveOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TriangularSolveOpAdaptor(TriangularSolveOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  Value output();
  BoolAttr left_side();
  BoolAttr lower();
  BoolAttr unit_diagonal();
  StringAttr transpose_a();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TriangularSolveOp : public Op<TriangularSolveOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsElementType> {
public:
  using Op::Op;
  using Adaptor = TriangularSolveOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  Value output();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr left_sideAttr();
  bool left_side();
  BoolAttr lowerAttr();
  bool lower();
  BoolAttr unit_diagonalAttr();
  bool unit_diagonal();
  StringAttr transpose_aAttr();
  StringRef transpose_a();
  void left_sideAttr(BoolAttr attr);
  void lowerAttr(BoolAttr attr);
  void unit_diagonalAttr(BoolAttr attr);
  void transpose_aAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b, Value output, BoolAttr left_side, BoolAttr lower, BoolAttr unit_diagonal, StringAttr transpose_a);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value output, BoolAttr left_side, BoolAttr lower, BoolAttr unit_diagonal, StringAttr transpose_a);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b, Value output, bool left_side, bool lower, bool unit_diagonal, StringRef transpose_a);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value output, bool left_side, bool lower, bool unit_diagonal, StringRef transpose_a);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::TupleOp declarations
//===----------------------------------------------------------------------===//

class TupleOpAdaptor {
public:
  TupleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TupleOpAdaptor(TupleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange val();
  Value out();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TupleOp : public Op<TupleOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TupleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range val();
  Value out();
  ::mlir::MutableOperandRange valMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange val, Value out);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange val, Value out);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::WhileOp declarations
//===----------------------------------------------------------------------===//

class WhileOpAdaptor {
public:
  WhileOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  WhileOpAdaptor(WhileOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value val();
  Value output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class WhileOp : public Op<WhileOp, OpTrait::NRegions<2>::Impl, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = WhileOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value val();
  Value output();
  ::mlir::MutableOperandRange valMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &cond();
  Region &body();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value val, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value val, Value output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::XorOp declarations
//===----------------------------------------------------------------------===//

class XorOpAdaptor {
public:
  XorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XorOpAdaptor(XorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XorOp : public Op<XorOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Adaptor = XorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value out();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange outMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  Optional< DenseIntElementsAttr > broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value out, /*optional*/DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_lhlo::TerminatorOp declarations
//===----------------------------------------------------------------------===//

class TerminatorOpAdaptor {
public:
  TerminatorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TerminatorOpAdaptor(TerminatorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TerminatorOp : public Op<TerminatorOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = TerminatorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &b, OperationState &result, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

