/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AbsOp;
class AddOp;
class AfterAllOp;
class AllReduceOp;
class AllToAllOp;
class AndOp;
class Atan2Op;
class BatchNormGradOp;
class BatchNormInferenceOp;
class BatchNormTrainingOp;
class BitcastConvertOp;
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
class CreateTokenOp;
class CrossReplicaSumOp;
class CustomCallOp;
class DequantizeOp;
class DivOp;
class DotGeneralOp;
class DotOp;
class DynamicBroadcastInDimOp;
class DynamicIotaOp;
class DynamicReshapeOp;
class DynamicSliceOp;
class DynamicUpdateSliceOp;
class EinsumOp;
class ExpOp;
class Expm1Op;
class FftOp;
class FloorOp;
class FusionOp;
class GatherOp;
class GetDimensionSizeOp;
class GetTupleElementOp;
class IfOp;
class ImagOp;
class InfeedOp;
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
class OutfeedOp;
class PadOp;
class PopulationCountOp;
class PowOp;
class RealOp;
class RecvOp;
class ReduceOp;
class ReduceWindowOp;
class RemOp;
class ReplicaIdOp;
class ReshapeOp;
class ReturnOp;
class ReverseOp;
class RngNormalOp;
class RngUniformOp;
class RoundOp;
class RsqrtOp;
class ScatterOp;
class SelectAndScatterOp;
class SelectOp;
class SendOp;
class SetDimensionSizeOp;
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
class TorchIndexSelectOp;
class TraceOp;
class TransposeOp;
class TriangularSolveOp;
class TupleOp;
class UnaryEinsumOp;
class WhileOp;
class XorOp;

//===----------------------------------------------------------------------===//
// xla_hlo::AbsOp declarations
//===----------------------------------------------------------------------===//

class AbsOpAdaptor {
public:
  AbsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AbsOpAdaptor(AbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AbsOp : public Op<AbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AbsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::AddOp declarations
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
class AddOp : public Op<AddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::AfterAllOp declarations
//===----------------------------------------------------------------------===//

class AfterAllOpAdaptor {
public:
  AfterAllOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AfterAllOpAdaptor(AfterAllOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AfterAllOp : public Op<AfterAllOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AfterAllOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::AllReduceOp declarations
//===----------------------------------------------------------------------===//

class AllReduceOpAdaptor {
public:
  AllReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllReduceOpAdaptor(AllReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr replica_groups();
  ChannelHandle channel_id();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllReduceOp : public Op<AllReduceOp, OpTrait::OneRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AllReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &computation();
  DenseIntElementsAttr replica_groupsAttr();
  DenseIntElementsAttr replica_groups();
  ChannelHandle channel_idAttr();
  Optional<ChannelHandle> channel_id();
  void replica_groupsAttr(DenseIntElementsAttr attr);
  void channel_idAttr(ChannelHandle attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr replica_groups, /*optional*/ChannelHandle channel_id);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr replica_groups, /*optional*/ChannelHandle channel_id);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, DenseIntElementsAttr replica_groups, /*optional*/ChannelHandle channel_id);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::AllToAllOp declarations
//===----------------------------------------------------------------------===//

class AllToAllOpAdaptor {
public:
  AllToAllOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllToAllOpAdaptor(AllToAllOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  IntegerAttr split_dimension();
  IntegerAttr concat_dimension();
  IntegerAttr split_count();
  DenseIntElementsAttr replica_groups();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllToAllOp : public Op<AllToAllOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsElementType, OpTrait::SameOperandsShape> {
public:
  using Op::Op;
  using Adaptor = AllToAllOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr split_dimensionAttr();
  APInt split_dimension();
  IntegerAttr concat_dimensionAttr();
  APInt concat_dimension();
  IntegerAttr split_countAttr();
  APInt split_count();
  DenseIntElementsAttr replica_groupsAttr();
  DenseIntElementsAttr replica_groups();
  void split_dimensionAttr(IntegerAttr attr);
  void concat_dimensionAttr(IntegerAttr attr);
  void split_countAttr(IntegerAttr attr);
  void replica_groupsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, IntegerAttr split_dimension, IntegerAttr concat_dimension, IntegerAttr split_count, DenseIntElementsAttr replica_groups);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, IntegerAttr split_dimension, IntegerAttr concat_dimension, IntegerAttr split_count, DenseIntElementsAttr replica_groups);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, APInt split_dimension, APInt concat_dimension, APInt split_count, DenseIntElementsAttr replica_groups);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, APInt split_dimension, APInt concat_dimension, APInt split_count, DenseIntElementsAttr replica_groups);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::AndOp declarations
//===----------------------------------------------------------------------===//

class AndOpAdaptor {
public:
  AndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AndOpAdaptor(AndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AndOp : public Op<AndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::Atan2Op declarations
//===----------------------------------------------------------------------===//

class Atan2OpAdaptor {
public:
  Atan2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Atan2OpAdaptor(Atan2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Atan2Op : public Op<Atan2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Atan2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::BatchNormGradOp declarations
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
  FloatAttr epsilon();
  IntegerAttr feature_index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchNormGradOp : public Op<BatchNormGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait> {
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
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange meanMutable();
  ::mlir::MutableOperandRange varianceMutable();
  ::mlir::MutableOperandRange grad_outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FloatAttr epsilonAttr();
  APFloat epsilon();
  IntegerAttr feature_indexAttr();
  APInt feature_index();
  void epsilonAttr(FloatAttr attr);
  void feature_indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scale, Value mean, Value variance, Value grad_output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value mean, Value variance, Value grad_output, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scale, Value mean, Value variance, Value grad_output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value mean, Value variance, Value grad_output, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::BatchNormInferenceOp declarations
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
  FloatAttr epsilon();
  IntegerAttr feature_index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchNormInferenceOp : public Op<BatchNormInferenceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
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
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange meanMutable();
  ::mlir::MutableOperandRange varianceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FloatAttr epsilonAttr();
  APFloat epsilon();
  IntegerAttr feature_indexAttr();
  APInt feature_index();
  void epsilonAttr(FloatAttr attr);
  void feature_indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scale, Value offset, Value mean, Value variance, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, Value mean, Value variance, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scale, Value offset, Value mean, Value variance, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, Value mean, Value variance, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::BatchNormTrainingOp declarations
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
  FloatAttr epsilon();
  IntegerAttr feature_index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchNormTrainingOp : public Op<BatchNormTrainingOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchNormTrainingOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value scale();
  Value offset();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange offsetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FloatAttr epsilonAttr();
  APFloat epsilon();
  IntegerAttr feature_indexAttr();
  APInt feature_index();
  void epsilonAttr(FloatAttr attr);
  void feature_indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scale, Value offset, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, FloatAttr epsilon, IntegerAttr feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scale, Value offset, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scale, Value offset, APFloat epsilon, APInt feature_index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::BitcastConvertOp declarations
//===----------------------------------------------------------------------===//

class BitcastConvertOpAdaptor {
public:
  BitcastConvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitcastConvertOpAdaptor(BitcastConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitcastConvertOp : public Op<BitcastConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = BitcastConvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::BroadcastInDimOp declarations
//===----------------------------------------------------------------------===//

class BroadcastInDimOpAdaptor {
public:
  BroadcastInDimOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastInDimOpAdaptor(BroadcastInDimOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastInDimOp : public Op<BroadcastInDimOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = BroadcastInDimOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  DenseIntElementsAttr broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::BroadcastOp declarations
//===----------------------------------------------------------------------===//

class BroadcastOpAdaptor {
public:
  BroadcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastOpAdaptor(BroadcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr broadcast_sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastOp : public Op<BroadcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = BroadcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_sizesAttr();
  DenseIntElementsAttr broadcast_sizes();
  void broadcast_sizesAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr broadcast_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr broadcast_sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::CaseOp declarations
//===----------------------------------------------------------------------===//

class CaseOpAdaptor {
public:
  CaseOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CaseOpAdaptor(CaseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value index();
  ValueRange branch_operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CaseOp : public Op<CaseOp, OpTrait::VariadicRegions, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = CaseOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value index();
  Operation::operand_range branch_operands();
  ::mlir::MutableOperandRange indexMutable();
  ::mlir::MutableOperandRange branch_operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  MutableArrayRef<Region> branches();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, Value index, ValueRange branch_operands, unsigned branchesCount);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes, unsigned numRegions);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::CeilOp declarations
//===----------------------------------------------------------------------===//

class CeilOpAdaptor {
public:
  CeilOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CeilOpAdaptor(CeilOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CeilOp : public Op<CeilOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CeilOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::CholeskyOp declarations
//===----------------------------------------------------------------------===//

class CholeskyOpAdaptor {
public:
  CholeskyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CholeskyOpAdaptor(CholeskyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  BoolAttr lower();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CholeskyOp : public Op<CholeskyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = CholeskyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  ::mlir::MutableOperandRange aMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr lowerAttr();
  bool lower();
  void lowerAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value a, BoolAttr lower);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, BoolAttr lower);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value a, bool lower = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, bool lower = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ClampOp declarations
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
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ClampOp : public Op<ClampOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = ClampOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value min();
  Value operand();
  Value max();
  ::mlir::MutableOperandRange minMutable();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange maxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value min, Value operand, Value max);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value min, Value operand, Value max);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ClzOp declarations
//===----------------------------------------------------------------------===//

class ClzOpAdaptor {
public:
  ClzOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ClzOpAdaptor(ClzOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ClzOp : public Op<ClzOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ClzOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::CollectivePermuteOp declarations
//===----------------------------------------------------------------------===//

class CollectivePermuteOpAdaptor {
public:
  CollectivePermuteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CollectivePermuteOpAdaptor(CollectivePermuteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr source_target_pairs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CollectivePermuteOp : public Op<CollectivePermuteOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CollectivePermuteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr source_target_pairsAttr();
  DenseIntElementsAttr source_target_pairs();
  void source_target_pairsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr source_target_pairs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr source_target_pairs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, DenseIntElementsAttr source_target_pairs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::CompareOp declarations
//===----------------------------------------------------------------------===//

class CompareOpAdaptor {
public:
  CompareOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CompareOpAdaptor(CompareOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  StringAttr comparison_direction();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CompareOp : public Op<CompareOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = CompareOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr comparison_directionAttr();
  StringRef comparison_direction();
  void comparison_directionAttr(StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value lhs, Value rhs, StringAttr comparison_direction);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, StringAttr comparison_direction);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, StringAttr comparison_direction);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, StringRef comparison_direction);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, StringRef comparison_direction);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ComplexOp declarations
//===----------------------------------------------------------------------===//

class ComplexOpAdaptor {
public:
  ComplexOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ComplexOpAdaptor(ComplexOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ComplexOp : public Op<ComplexOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = ComplexOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &, OperationState &tblgen_state, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ConcatenateOp declarations
//===----------------------------------------------------------------------===//

class ConcatenateOpAdaptor {
public:
  ConcatenateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConcatenateOpAdaptor(ConcatenateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange val();
  IntegerAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConcatenateOp : public Op<ConcatenateOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConcatenateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range val();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr dimensionAttr();
  APInt dimension();
  void dimensionAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange val, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange val, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange val, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange val, APInt dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange val, APInt dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange val, APInt dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ConstOp declarations
//===----------------------------------------------------------------------===//

class ConstOpAdaptor {
public:
  ConstOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstOpAdaptor(ConstOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ElementsAttr value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstOp : public Op<ConstOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ElementsAttr valueAttr();
  ElementsAttr value();
  void valueAttr(ElementsAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Attribute value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ElementsAttr value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ElementsAttr value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ConvOp declarations
//===----------------------------------------------------------------------===//

class ConvOpAdaptor {
public:
  ConvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvOpAdaptor(ConvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
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
class ConvOp : public Op<ConvOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, IntegerAttr feature_group_count, IntegerAttr batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, IntegerAttr feature_group_count, IntegerAttr batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, APInt feature_group_count, APInt batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding, /*optional*/DenseIntElementsAttr lhs_dilation, /*optional*/DenseIntElementsAttr rhs_dilation, ConvDimensionNumbers dimension_numbers, APInt feature_group_count, APInt batch_group_count, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ConvertOp declarations
//===----------------------------------------------------------------------===//

class ConvertOpAdaptor {
public:
  ConvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvertOpAdaptor(ConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvertOp : public Op<ConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &, OperationState &tblgen_state, Value operand, Type result_element_ty);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::CopyOp declarations
//===----------------------------------------------------------------------===//

class CopyOpAdaptor {
public:
  CopyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CopyOpAdaptor(CopyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CopyOp : public Op<CopyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CopyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::CosOp declarations
//===----------------------------------------------------------------------===//

class CosOpAdaptor {
public:
  CosOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CosOpAdaptor(CosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CosOp : public Op<CosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CosOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::CreateTokenOp declarations
//===----------------------------------------------------------------------===//

class CreateTokenOpAdaptor {
public:
  CreateTokenOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CreateTokenOpAdaptor(CreateTokenOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CreateTokenOp : public Op<CreateTokenOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CreateTokenOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::CrossReplicaSumOp declarations
//===----------------------------------------------------------------------===//

class CrossReplicaSumOpAdaptor {
public:
  CrossReplicaSumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CrossReplicaSumOpAdaptor(CrossReplicaSumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr replica_groups();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CrossReplicaSumOp : public Op<CrossReplicaSumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CrossReplicaSumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr replica_groupsAttr();
  DenseIntElementsAttr replica_groups();
  void replica_groupsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr replica_groups);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr replica_groups);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, DenseIntElementsAttr replica_groups);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::CustomCallOp declarations
//===----------------------------------------------------------------------===//

class CustomCallOpAdaptor {
public:
  CustomCallOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CustomCallOpAdaptor(CustomCallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  StringAttr call_target_name();
  BoolAttr has_side_effect();
  StringAttr backend_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CustomCallOp : public Op<CustomCallOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = CustomCallOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr call_target_nameAttr();
  StringRef call_target_name();
  BoolAttr has_side_effectAttr();
  bool has_side_effect();
  StringAttr backend_configAttr();
  StringRef backend_config();
  void call_target_nameAttr(StringAttr attr);
  void has_side_effectAttr(BoolAttr attr);
  void backend_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange args, StringAttr call_target_name, BoolAttr has_side_effect, StringAttr backend_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args, StringAttr call_target_name, BoolAttr has_side_effect, StringAttr backend_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange args, StringRef call_target_name, bool has_side_effect, StringRef backend_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args, StringRef call_target_name, bool has_side_effect, StringRef backend_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::DequantizeOp declarations
//===----------------------------------------------------------------------===//

class DequantizeOpAdaptor {
public:
  DequantizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DequantizeOpAdaptor(DequantizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  FloatAttr min_range();
  FloatAttr max_range();
  StringAttr mode();
  BoolAttr transpose_output();
  BoolAttr is_16bits();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DequantizeOp : public Op<DequantizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DequantizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  FloatAttr min_rangeAttr();
  APFloat min_range();
  FloatAttr max_rangeAttr();
  APFloat max_range();
  StringAttr modeAttr();
  StringRef mode();
  BoolAttr transpose_outputAttr();
  bool transpose_output();
  BoolAttr is_16bitsAttr();
  bool is_16bits();
  void min_rangeAttr(FloatAttr attr);
  void max_rangeAttr(FloatAttr attr);
  void modeAttr(StringAttr attr);
  void transpose_outputAttr(BoolAttr attr);
  void is_16bitsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, FloatAttr min_range, FloatAttr max_range, StringAttr mode, BoolAttr transpose_output, BoolAttr is_16bits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, FloatAttr min_range, FloatAttr max_range, StringAttr mode, BoolAttr transpose_output, BoolAttr is_16bits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, APFloat min_range, APFloat max_range, StringRef mode, bool transpose_output, bool is_16bits = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APFloat min_range, APFloat max_range, StringRef mode, bool transpose_output, bool is_16bits = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::DivOp declarations
//===----------------------------------------------------------------------===//

class DivOpAdaptor {
public:
  DivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DivOpAdaptor(DivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DivOp : public Op<DivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::DotGeneralOp declarations
//===----------------------------------------------------------------------===//

class DotGeneralOpAdaptor {
public:
  DotGeneralOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DotGeneralOpAdaptor(DotGeneralOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  DotDimensionNumbers dot_dimension_numbers();
  ArrayAttr precision_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DotGeneralOp : public Op<DotGeneralOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DotGeneralOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DotDimensionNumbers dot_dimension_numbersAttr();
  DotDimensionNumbers dot_dimension_numbers();
  ArrayAttr precision_configAttr();
  Optional< ArrayAttr > precision_config();
  void dot_dimension_numbersAttr(DotDimensionNumbers attr);
  void precision_configAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, DotDimensionNumbers dot_dimension_numbers, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, DotDimensionNumbers dot_dimension_numbers, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::DotOp declarations
//===----------------------------------------------------------------------===//

class DotOpAdaptor {
public:
  DotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DotOpAdaptor(DotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ArrayAttr precision_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DotOp : public Op<DotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr precision_configAttr();
  Optional< ArrayAttr > precision_config();
  void precision_configAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/ArrayAttr precision_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::DynamicBroadcastInDimOp declarations
//===----------------------------------------------------------------------===//

class DynamicBroadcastInDimOpAdaptor {
public:
  DynamicBroadcastInDimOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicBroadcastInDimOpAdaptor(DynamicBroadcastInDimOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output_dimensions();
  DenseIntElementsAttr broadcast_dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicBroadcastInDimOp : public Op<DynamicBroadcastInDimOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicBroadcastInDimOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output_dimensions();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange output_dimensionsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr broadcast_dimensionsAttr();
  DenseIntElementsAttr broadcast_dimensions();
  void broadcast_dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value output_dimensions, DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output_dimensions, DenseIntElementsAttr broadcast_dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::DynamicIotaOp declarations
//===----------------------------------------------------------------------===//

class DynamicIotaOpAdaptor {
public:
  DynamicIotaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicIotaOpAdaptor(DynamicIotaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value output_shape();
  IntegerAttr iota_dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicIotaOp : public Op<DynamicIotaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicIotaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value output_shape();
  ::mlir::MutableOperandRange output_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr iota_dimensionAttr();
  APInt iota_dimension();
  void iota_dimensionAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value output_shape, IntegerAttr iota_dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value output_shape, IntegerAttr iota_dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value output_shape, APInt iota_dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value output_shape, APInt iota_dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::DynamicReshapeOp declarations
//===----------------------------------------------------------------------===//

class DynamicReshapeOpAdaptor {
public:
  DynamicReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicReshapeOpAdaptor(DynamicReshapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value output_shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicReshapeOp : public Op<DynamicReshapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicReshapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value output_shape();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange output_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand, Value output_shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value output_shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::DynamicSliceOp declarations
//===----------------------------------------------------------------------===//

class DynamicSliceOpAdaptor {
public:
  DynamicSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicSliceOpAdaptor(DynamicSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  ValueRange start_indices();
  DenseIntElementsAttr slice_sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicSliceOp : public Op<DynamicSliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Operation::operand_range start_indices();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange start_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  DenseIntElementsAttr slice_sizesAttr();
  DenseIntElementsAttr slice_sizes();
  void slice_sizesAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand, ValueRange start_indices, DenseIntElementsAttr slice_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, ValueRange start_indices, DenseIntElementsAttr slice_sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::DynamicUpdateSliceOp declarations
//===----------------------------------------------------------------------===//

class DynamicUpdateSliceOpAdaptor {
public:
  DynamicUpdateSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicUpdateSliceOpAdaptor(DynamicUpdateSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value update();
  ValueRange start_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicUpdateSliceOp : public Op<DynamicUpdateSliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicUpdateSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value update();
  Operation::operand_range start_indices();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange updateMutable();
  ::mlir::MutableOperandRange start_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand, Value update, ValueRange start_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value update, ValueRange start_indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::EinsumOp declarations
//===----------------------------------------------------------------------===//

class EinsumOpAdaptor {
public:
  EinsumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EinsumOpAdaptor(EinsumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  StringAttr einsum_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EinsumOp : public Op<EinsumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EinsumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr einsum_configAttr();
  StringRef einsum_config();
  void einsum_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, StringAttr einsum_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, StringAttr einsum_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, StringRef einsum_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, StringRef einsum_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ExpOp declarations
//===----------------------------------------------------------------------===//

class ExpOpAdaptor {
public:
  ExpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExpOpAdaptor(ExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExpOp : public Op<ExpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::Expm1Op declarations
//===----------------------------------------------------------------------===//

class Expm1OpAdaptor {
public:
  Expm1OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Expm1OpAdaptor(Expm1Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Expm1Op : public Op<Expm1Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Expm1OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::FftOp declarations
//===----------------------------------------------------------------------===//

class FftOpAdaptor {
public:
  FftOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FftOpAdaptor(FftOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  StringAttr fft_type();
  DenseIntElementsAttr fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FftOp : public Op<FftOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FftOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr fft_typeAttr();
  StringRef fft_type();
  DenseIntElementsAttr fft_lengthAttr();
  DenseIntElementsAttr fft_length();
  void fft_typeAttr(StringAttr attr);
  void fft_lengthAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, StringAttr fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringAttr fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, StringRef fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringRef fft_type, DenseIntElementsAttr fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::FloorOp declarations
//===----------------------------------------------------------------------===//

class FloorOpAdaptor {
public:
  FloorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FloorOpAdaptor(FloorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FloorOp : public Op<FloorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FloorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::FusionOp declarations
//===----------------------------------------------------------------------===//

class FusionOpAdaptor {
public:
  FusionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusionOpAdaptor(FusionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusionOp : public Op<FusionOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = FusionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &fused_computation();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::GatherOp declarations
//===----------------------------------------------------------------------===//

class GatherOpAdaptor {
public:
  GatherOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GatherOpAdaptor(GatherOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value start_indices();
  GatherDimensionNumbers dimension_numbers();
  DenseIntElementsAttr slice_sizes();
  BoolAttr indices_are_sorted();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GatherOp : public Op<GatherOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GatherOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value start_indices();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange start_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  GatherDimensionNumbers dimension_numbersAttr();
  GatherDimensionNumbers dimension_numbers();
  DenseIntElementsAttr slice_sizesAttr();
  DenseIntElementsAttr slice_sizes();
  BoolAttr indices_are_sortedAttr();
  bool indices_are_sorted();
  void dimension_numbersAttr(GatherDimensionNumbers attr);
  void slice_sizesAttr(DenseIntElementsAttr attr);
  void indices_are_sortedAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value start_indices, GatherDimensionNumbers dimension_numbers, DenseIntElementsAttr slice_sizes, BoolAttr indices_are_sorted);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value start_indices, GatherDimensionNumbers dimension_numbers, DenseIntElementsAttr slice_sizes, BoolAttr indices_are_sorted);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value start_indices, GatherDimensionNumbers dimension_numbers, DenseIntElementsAttr slice_sizes, bool indices_are_sorted = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value start_indices, GatherDimensionNumbers dimension_numbers, DenseIntElementsAttr slice_sizes, bool indices_are_sorted = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::GetDimensionSizeOp declarations
//===----------------------------------------------------------------------===//

class GetDimensionSizeOpAdaptor {
public:
  GetDimensionSizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GetDimensionSizeOpAdaptor(GetDimensionSizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  IntegerAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GetDimensionSizeOp : public Op<GetDimensionSizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GetDimensionSizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr dimensionAttr();
  APInt dimension();
  void dimensionAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, APInt dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, APInt dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::GetTupleElementOp declarations
//===----------------------------------------------------------------------===//

class GetTupleElementOpAdaptor {
public:
  GetTupleElementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GetTupleElementOpAdaptor(GetTupleElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GetTupleElementOp : public Op<GetTupleElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GetTupleElementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr indexAttr();
  APInt index();
  void indexAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &results, Value  value, int32_t index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0, IntegerAttr index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, IntegerAttr index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0, APInt index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, APInt index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::IfOp declarations
//===----------------------------------------------------------------------===//

class IfOpAdaptor {
public:
  IfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IfOpAdaptor(IfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pred();
  Value true_arg();
  Value false_arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IfOp : public Op<IfOp, OpTrait::NRegions<2>::Impl, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = IfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pred();
  Value true_arg();
  Value false_arg();
  ::mlir::MutableOperandRange predMutable();
  ::mlir::MutableOperandRange true_argMutable();
  ::mlir::MutableOperandRange false_argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &true_branch();
  Region &false_branch();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value pred, Value true_arg, Value false_arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pred, Value true_arg, Value false_arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::ImagOp declarations
//===----------------------------------------------------------------------===//

class ImagOpAdaptor {
public:
  ImagOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ImagOpAdaptor(ImagOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ImagOp : public Op<ImagOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = ImagOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &, OperationState &tblgen_state, Value val);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::InfeedOp declarations
//===----------------------------------------------------------------------===//

class InfeedOpAdaptor {
public:
  InfeedOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InfeedOpAdaptor(InfeedOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value token();
  StringAttr infeed_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InfeedOp : public Op<InfeedOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = InfeedOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value token();
  ::mlir::MutableOperandRange tokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr infeed_configAttr();
  StringRef infeed_config();
  void infeed_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value token, StringAttr infeed_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value token, StringAttr infeed_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value token, StringRef infeed_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value token, StringRef infeed_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::IotaOp declarations
//===----------------------------------------------------------------------===//

class IotaOpAdaptor {
public:
  IotaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IotaOpAdaptor(IotaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr iota_dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IotaOp : public Op<IotaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IotaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr iota_dimensionAttr();
  APInt iota_dimension();
  void iota_dimensionAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, IntegerAttr iota_dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr iota_dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, APInt iota_dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, APInt iota_dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::IsFiniteOp declarations
//===----------------------------------------------------------------------===//

class IsFiniteOpAdaptor {
public:
  IsFiniteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IsFiniteOpAdaptor(IsFiniteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IsFiniteOp : public Op<IsFiniteOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IsFiniteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::Log1pOp declarations
//===----------------------------------------------------------------------===//

class Log1pOpAdaptor {
public:
  Log1pOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Log1pOpAdaptor(Log1pOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Log1pOp : public Op<Log1pOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Log1pOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::LogOp declarations
//===----------------------------------------------------------------------===//

class LogOpAdaptor {
public:
  LogOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogOpAdaptor(LogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogOp : public Op<LogOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::MapOp declarations
//===----------------------------------------------------------------------===//

class MapOpAdaptor {
public:
  MapOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MapOpAdaptor(MapOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  DenseIntElementsAttr dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MapOp : public Op<MapOp, OpTrait::OneRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasRecursiveSideEffects, OpTrait::SameOperandsElementType, OpTrait::SameOperandsAndResultShape, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = MapOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &computation();
  DenseIntElementsAttr dimensionsAttr();
  DenseIntElementsAttr dimensions();
  void dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange operands, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::MaxOp declarations
//===----------------------------------------------------------------------===//

class MaxOpAdaptor {
public:
  MaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaxOpAdaptor(MaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaxOp : public Op<MaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::MinOp declarations
//===----------------------------------------------------------------------===//

class MinOpAdaptor {
public:
  MinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MinOpAdaptor(MinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MinOp : public Op<MinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::MulOp declarations
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
class MulOp : public Op<MulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::NegOp declarations
//===----------------------------------------------------------------------===//

class NegOpAdaptor {
public:
  NegOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NegOpAdaptor(NegOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NegOp : public Op<NegOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NegOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::NotOp declarations
//===----------------------------------------------------------------------===//

class NotOpAdaptor {
public:
  NotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NotOpAdaptor(NotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NotOp : public Op<NotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::OrOp declarations
//===----------------------------------------------------------------------===//

class OrOpAdaptor {
public:
  OrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OrOpAdaptor(OrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class OrOp : public Op<OrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = OrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::OutfeedOp declarations
//===----------------------------------------------------------------------===//

class OutfeedOpAdaptor {
public:
  OutfeedOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OutfeedOpAdaptor(OutfeedOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value token();
  StringAttr outfeed_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class OutfeedOp : public Op<OutfeedOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = OutfeedOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value token();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange tokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr outfeed_configAttr();
  StringRef outfeed_config();
  void outfeed_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value token, StringAttr outfeed_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value token, StringAttr outfeed_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value token, StringRef outfeed_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value token, StringRef outfeed_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::PadOp declarations
//===----------------------------------------------------------------------===//

class PadOpAdaptor {
public:
  PadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PadOpAdaptor(PadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value padding_value();
  DenseIntElementsAttr edge_padding_low();
  DenseIntElementsAttr edge_padding_high();
  DenseIntElementsAttr interior_padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PadOp : public Op<PadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = PadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value padding_value();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange padding_valueMutable();
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value padding_value, DenseIntElementsAttr edge_padding_low, DenseIntElementsAttr edge_padding_high, DenseIntElementsAttr interior_padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value padding_value, DenseIntElementsAttr edge_padding_low, DenseIntElementsAttr edge_padding_high, DenseIntElementsAttr interior_padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::PopulationCountOp declarations
//===----------------------------------------------------------------------===//

class PopulationCountOpAdaptor {
public:
  PopulationCountOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PopulationCountOpAdaptor(PopulationCountOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PopulationCountOp : public Op<PopulationCountOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PopulationCountOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::PowOp declarations
//===----------------------------------------------------------------------===//

class PowOpAdaptor {
public:
  PowOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PowOpAdaptor(PowOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PowOp : public Op<PowOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PowOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::RealOp declarations
//===----------------------------------------------------------------------===//

class RealOpAdaptor {
public:
  RealOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RealOpAdaptor(RealOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RealOp : public Op<RealOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = RealOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &, OperationState &tblgen_state, Value val);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::RecvOp declarations
//===----------------------------------------------------------------------===//

class RecvOpAdaptor {
public:
  RecvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RecvOpAdaptor(RecvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value token();
  ChannelHandle channel_id();
  BoolAttr is_host_transfer();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RecvOp : public Op<RecvOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = RecvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value token();
  ::mlir::MutableOperandRange tokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ChannelHandle channel_idAttr();
  ChannelHandle channel_id();
  BoolAttr is_host_transferAttr();
  bool is_host_transfer();
  void channel_idAttr(ChannelHandle attr);
  void is_host_transferAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value token, ChannelHandle channel_id, BoolAttr is_host_transfer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value token, ChannelHandle channel_id, BoolAttr is_host_transfer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value token, ChannelHandle channel_id, bool is_host_transfer = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value token, ChannelHandle channel_id, bool is_host_transfer = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::ReduceOp declarations
//===----------------------------------------------------------------------===//

class ReduceOpAdaptor {
public:
  ReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReduceOpAdaptor(ReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  ValueRange init_values();
  DenseIntElementsAttr dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReduceOp : public Op<ReduceOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasRecursiveSideEffects, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  Operation::operand_range init_values();
  ::mlir::MutableOperandRange operandsMutable();
  ::mlir::MutableOperandRange init_valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  DenseIntElementsAttr dimensionsAttr();
  DenseIntElementsAttr dimensions();
  void dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &, OperationState &state, ValueRange operands, ValueRange init_values, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, ValueRange operands, ValueRange init_values, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    bool isFusibleWithConsumer() {
      return false;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getOperand(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::ReduceWindowOp declarations
//===----------------------------------------------------------------------===//

class ReduceWindowOpAdaptor {
public:
  ReduceWindowOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReduceWindowOpAdaptor(ReduceWindowOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value init_value();
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
class ReduceWindowOp : public Op<ReduceWindowOp, OpTrait::OneRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::HasRecursiveSideEffects, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ReduceWindowOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value init_value();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange init_valueMutable();
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value init_value, DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr base_dilations, /*optional*/DenseIntElementsAttr window_dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value init_value, DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr base_dilations, /*optional*/DenseIntElementsAttr window_dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::RemOp declarations
//===----------------------------------------------------------------------===//

class RemOpAdaptor {
public:
  RemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RemOpAdaptor(RemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RemOp : public Op<RemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::ReplicaIdOp declarations
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
class ReplicaIdOp : public Op<ReplicaIdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReplicaIdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ReshapeOp declarations
//===----------------------------------------------------------------------===//

class ReshapeOpAdaptor {
public:
  ReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReshapeOpAdaptor(ReshapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReshapeOp : public Op<ReshapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = ReshapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpAdaptor {
public:
  ReturnOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReturnOpAdaptor(ReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange results();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ReturnOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range results();
  ::mlir::MutableOperandRange resultsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange results);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange results);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ReverseOp declarations
//===----------------------------------------------------------------------===//

class ReverseOpAdaptor {
public:
  ReverseOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReverseOpAdaptor(ReverseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr dimensions();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReverseOp : public Op<ReverseOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = ReverseOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr dimensionsAttr();
  DenseIntElementsAttr dimensions();
  void dimensionsAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, DenseIntElementsAttr dimensions);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::RngNormalOp declarations
//===----------------------------------------------------------------------===//

class RngNormalOpAdaptor {
public:
  RngNormalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RngNormalOpAdaptor(RngNormalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value mu();
  Value sigma();
  Value shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RngNormalOp : public Op<RngNormalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = RngNormalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value mu();
  Value sigma();
  Value shape();
  ::mlir::MutableOperandRange muMutable();
  ::mlir::MutableOperandRange sigmaMutable();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value mu, Value sigma, Value shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value mu, Value sigma, Value shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::RngUniformOp declarations
//===----------------------------------------------------------------------===//

class RngUniformOpAdaptor {
public:
  RngUniformOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RngUniformOpAdaptor(RngUniformOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  Value shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RngUniformOp : public Op<RngUniformOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = RngUniformOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  Value shape();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value a, Value b, Value shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::RoundOp declarations
//===----------------------------------------------------------------------===//

class RoundOpAdaptor {
public:
  RoundOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RoundOpAdaptor(RoundOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RoundOp : public Op<RoundOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RoundOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::RsqrtOp declarations
//===----------------------------------------------------------------------===//

class RsqrtOpAdaptor {
public:
  RsqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RsqrtOpAdaptor(RsqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RsqrtOp : public Op<RsqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RsqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::ScatterOp declarations
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
  ScatterDimensionNumbers scatter_dimension_numbers();
  BoolAttr indices_are_sorted();
  BoolAttr unique_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ScatterOp : public Op<ScatterOp, OpTrait::OneRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = ScatterOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value scatter_indices();
  Value updates();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange scatter_indicesMutable();
  ::mlir::MutableOperandRange updatesMutable();
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scatter_indices, Value updates, ScatterDimensionNumbers scatter_dimension_numbers, BoolAttr indices_are_sorted, BoolAttr unique_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scatter_indices, Value updates, ScatterDimensionNumbers scatter_dimension_numbers, BoolAttr indices_are_sorted, BoolAttr unique_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value scatter_indices, Value updates, ScatterDimensionNumbers scatter_dimension_numbers, bool indices_are_sorted = false, bool unique_indices = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value scatter_indices, Value updates, ScatterDimensionNumbers scatter_dimension_numbers, bool indices_are_sorted = false, bool unique_indices = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::SelectAndScatterOp declarations
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
  DenseIntElementsAttr window_dimensions();
  DenseIntElementsAttr window_strides();
  DenseIntElementsAttr padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectAndScatterOp : public Op<SelectAndScatterOp, OpTrait::NRegions<2>::Impl, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = SelectAndScatterOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value source();
  Value init_value();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange init_valueMutable();
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value source, Value init_value, /*optional*/DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value source, Value init_value, /*optional*/DenseIntElementsAttr window_dimensions, /*optional*/DenseIntElementsAttr window_strides, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::SelectOp declarations
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
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectOp : public Op<SelectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pred();
  Value on_true();
  Value on_false();
  ::mlir::MutableOperandRange predMutable();
  ::mlir::MutableOperandRange on_trueMutable();
  ::mlir::MutableOperandRange on_falseMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value pred, Value on_true, Value on_false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value pred, Value on_true, Value on_false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pred, Value on_true, Value on_false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::SendOp declarations
//===----------------------------------------------------------------------===//

class SendOpAdaptor {
public:
  SendOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SendOpAdaptor(SendOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value token();
  ChannelHandle channel_id();
  BoolAttr is_host_transfer();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SendOp : public Op<SendOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = SendOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value token();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange tokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ChannelHandle channel_idAttr();
  ChannelHandle channel_id();
  BoolAttr is_host_transferAttr();
  bool is_host_transfer();
  void channel_idAttr(ChannelHandle attr);
  void is_host_transferAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value token, ChannelHandle channel_id, BoolAttr is_host_transfer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value token, ChannelHandle channel_id, BoolAttr is_host_transfer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value token, ChannelHandle channel_id, bool is_host_transfer = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value token, ChannelHandle channel_id, bool is_host_transfer = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::SetDimensionSizeOp declarations
//===----------------------------------------------------------------------===//

class SetDimensionSizeOpAdaptor {
public:
  SetDimensionSizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SetDimensionSizeOpAdaptor(SetDimensionSizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value size();
  IntegerAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SetDimensionSizeOp : public Op<SetDimensionSizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SetDimensionSizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value size();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr dimensionAttr();
  APInt dimension();
  void dimensionAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value size, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value size, IntegerAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, Value size, APInt dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value size, APInt dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::ShiftLeftOp declarations
//===----------------------------------------------------------------------===//

class ShiftLeftOpAdaptor {
public:
  ShiftLeftOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftLeftOpAdaptor(ShiftLeftOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftLeftOp : public Op<ShiftLeftOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftLeftOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::ShiftRightArithmeticOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightArithmeticOpAdaptor {
public:
  ShiftRightArithmeticOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftRightArithmeticOpAdaptor(ShiftRightArithmeticOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftRightArithmeticOp : public Op<ShiftRightArithmeticOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftRightArithmeticOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::ShiftRightLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightLogicalOpAdaptor {
public:
  ShiftRightLogicalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftRightLogicalOpAdaptor(ShiftRightLogicalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftRightLogicalOp : public Op<ShiftRightLogicalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftRightLogicalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::SignOp declarations
//===----------------------------------------------------------------------===//

class SignOpAdaptor {
public:
  SignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SignOpAdaptor(SignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SignOp : public Op<SignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SignOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::SinOp declarations
//===----------------------------------------------------------------------===//

class SinOpAdaptor {
public:
  SinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SinOpAdaptor(SinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SinOp : public Op<SinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::SliceOp declarations
//===----------------------------------------------------------------------===//

class SliceOpAdaptor {
public:
  SliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SliceOpAdaptor(SliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr start_indices();
  DenseIntElementsAttr limit_indices();
  DenseIntElementsAttr strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SliceOp : public Op<SliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = SliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
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
  static void build(OpBuilder &builder, OperationState &result, Value operand, DenseIntElementsAttr start_indices, DenseIntElementsAttr limit_indices, DenseIntElementsAttr strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr start_indices, DenseIntElementsAttr limit_indices, DenseIntElementsAttr strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr start_indices, DenseIntElementsAttr limit_indices, DenseIntElementsAttr strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // Infers output type for given operand and attributes. Result type is
    // unranked if any of the attributes is illegal.
    static Type InferOutputTypes(Builder *builder, Value operand,
                                 DenseIntElementsAttr start_indices,
                                 DenseIntElementsAttr limit_indices,
                                 DenseIntElementsAttr strides);
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::SortOp declarations
//===----------------------------------------------------------------------===//

class SortOpAdaptor {
public:
  SortOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SortOpAdaptor(SortOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  IntegerAttr dimension();
  BoolAttr is_stable();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SortOp : public Op<SortOp, OpTrait::OneRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = SortOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &comparator();
  IntegerAttr dimensionAttr();
  APInt dimension();
  BoolAttr is_stableAttr();
  bool is_stable();
  void dimensionAttr(IntegerAttr attr);
  void is_stableAttr(BoolAttr attr);
  static void build(OpBuilder &builder, OperationState &state, ValueRange operands, int64_t dimension = -1, bool is_stable = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange operands, IntegerAttr dimension, BoolAttr is_stable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, IntegerAttr dimension, BoolAttr is_stable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange operands, APInt dimension, bool is_stable = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, APInt dimension, bool is_stable = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::SqrtOp declarations
//===----------------------------------------------------------------------===//

class SqrtOpAdaptor {
public:
  SqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SqrtOpAdaptor(SqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SqrtOp : public Op<SqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::SubOp declarations
//===----------------------------------------------------------------------===//

class SubOpAdaptor {
public:
  SubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubOpAdaptor(SubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubOp : public Op<SubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

//===----------------------------------------------------------------------===//
// xla_hlo::TanhOp declarations
//===----------------------------------------------------------------------===//

class TanhOpAdaptor {
public:
  TanhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TanhOpAdaptor(TanhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TanhOp : public Op<TanhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TanhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      static  LogicalResult inferReturnTypeComponents(
          MLIRContext* context, Optional<Location> location,
          ValueRange operands, DictionaryAttr attributes, RegionRange regions,
          SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
        return failure();
      }
      LogicalResult reifyReturnTypeShapes(
          OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
        return deriveShapeFromFirstOperand(&builder, getOperation(),
                                           &reifiedReturnShapes);
      }
      bool inferInputOutputShapeEquality(int input, int output) {
        return true;
      }
      llvm::Optional<Value> inferEffectiveWorkloadShape() {
        return getOperation()->getResult(0);
      }
    
};

//===----------------------------------------------------------------------===//
// xla_hlo::TorchIndexSelectOp declarations
//===----------------------------------------------------------------------===//

class TorchIndexSelectOpAdaptor {
public:
  TorchIndexSelectOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TorchIndexSelectOpAdaptor(TorchIndexSelectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value index();
  IntegerAttr dim();
  IntegerAttr batch_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TorchIndexSelectOp : public Op<TorchIndexSelectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TorchIndexSelectOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value index();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange indexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr dimAttr();
  APInt dim();
  IntegerAttr batch_dimsAttr();
  APInt batch_dims();
  void dimAttr(IntegerAttr attr);
  void batch_dimsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value input, Value index, IntegerAttr dim, IntegerAttr batch_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value index, IntegerAttr dim, IntegerAttr batch_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value input, Value index, APInt dim, APInt batch_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value index, APInt dim, APInt batch_dims);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::TraceOp declarations
//===----------------------------------------------------------------------===//

class TraceOpAdaptor {
public:
  TraceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TraceOpAdaptor(TraceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  StringAttr tag();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TraceOp : public Op<TraceOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = TraceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr tagAttr();
  StringRef tag();
  void tagAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, StringAttr tag);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringAttr tag);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, StringRef tag);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringRef tag);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::TransposeOp declarations
//===----------------------------------------------------------------------===//

class TransposeOpAdaptor {
public:
  TransposeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TransposeOpAdaptor(TransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  DenseIntElementsAttr permutation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TransposeOp : public Op<TransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = TransposeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  DenseIntElementsAttr permutationAttr();
  DenseIntElementsAttr permutation();
  void permutationAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, DenseIntElementsAttr permutation);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, DenseIntElementsAttr permutation);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::TriangularSolveOp declarations
//===----------------------------------------------------------------------===//

class TriangularSolveOpAdaptor {
public:
  TriangularSolveOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TriangularSolveOpAdaptor(TriangularSolveOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  BoolAttr left_side();
  BoolAttr lower();
  BoolAttr unit_diagonal();
  StringAttr transpose_a();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TriangularSolveOp : public Op<TriangularSolveOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = TriangularSolveOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value a, Value b, BoolAttr left_side, BoolAttr lower, BoolAttr unit_diagonal, StringAttr transpose_a);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, BoolAttr left_side, BoolAttr lower, BoolAttr unit_diagonal, StringAttr transpose_a);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value a, Value b, bool left_side, bool lower, bool unit_diagonal, StringRef transpose_a);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, bool left_side, bool lower, bool unit_diagonal, StringRef transpose_a);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::TupleOp declarations
//===----------------------------------------------------------------------===//

class TupleOpAdaptor {
public:
  TupleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TupleOpAdaptor(TupleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange val();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TupleOp : public Op<TupleOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TupleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range val();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &results, ValueRange values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange val);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange val);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::UnaryEinsumOp declarations
//===----------------------------------------------------------------------===//

class UnaryEinsumOpAdaptor {
public:
  UnaryEinsumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnaryEinsumOpAdaptor(UnaryEinsumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  StringAttr einsum_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnaryEinsumOp : public Op<UnaryEinsumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UnaryEinsumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr einsum_configAttr();
  StringRef einsum_config();
  void einsum_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, StringAttr einsum_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringAttr einsum_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand, StringRef einsum_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, StringRef einsum_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// xla_hlo::WhileOp declarations
//===----------------------------------------------------------------------===//

class WhileOpAdaptor {
public:
  WhileOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  WhileOpAdaptor(WhileOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value val();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class WhileOp : public Op<WhileOp, OpTrait::NRegions<2>::Impl, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::HasRecursiveSideEffects, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = WhileOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value val();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &cond();
  Region &body();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value val);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value val);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value val);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// xla_hlo::XorOp declarations
//===----------------------------------------------------------------------===//

class XorOpAdaptor {
public:
  XorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XorOpAdaptor(XorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XorOp : public Op<XorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, InferShapedTypeOpInterface::Trait, InferFusibilityOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static  LogicalResult inferReturnTypeComponents(
        MLIRContext* context, Optional<Location> location, ValueRange operands,
        DictionaryAttr attributes, RegionRange regions,
        SmallVectorImpl<ShapedTypeComponents>& inferedReturnShapes) {
      return failure();
    }
    LogicalResult reifyReturnTypeShapes(
        OpBuilder& builder, SmallVectorImpl<Value>& reifiedReturnShapes) {
      return deriveShapeFromFirstOperand(&builder, getOperation(),
                                         &reifiedReturnShapes);
    }
    bool inferInputsShapeEquality(int lhs, int rhs) {
      return true;
    }
    bool inferInputOutputShapeEquality(int input, int output) {
      return true;
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape() {
      return getOperation()->getResult(0);
    }
  
};

#endif  // GET_OP_CLASSES

