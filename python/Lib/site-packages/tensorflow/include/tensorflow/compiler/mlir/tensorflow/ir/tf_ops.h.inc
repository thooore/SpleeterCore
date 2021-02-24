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
class AcosOp;
class AcoshOp;
class AddNOp;
class AddOp;
class AddV2Op;
class AdjustContrastv2Op;
class AdjustHueOp;
class AdjustSaturationOp;
class AllOp;
class AllToAllOp;
class AngleOp;
class AnyOp;
class ApproximateEqualOp;
class ArgMaxOp;
class ArgMinOp;
class AsStringOp;
class AsinOp;
class AsinhOp;
class AssertOp;
class AssignAddVariableOp;
class AssignSubVariableOp;
class AssignVariableOp;
class Atan2Op;
class AtanOp;
class AtanhOp;
class AvgPoolGradOp;
class AvgPoolOp;
class BatchDatasetV2Op;
class BatchMatMulOp;
class BatchMatMulV2Op;
class BatchNormWithGlobalNormalizationOp;
class BatchToSpaceNDOp;
class BatchToSpaceOp;
class BesselI0eOp;
class BesselI1eOp;
class BiasAddGradOp;
class BiasAddOp;
class BiasAddV1Op;
class BitcastOp;
class BitwiseAndOp;
class BitwiseOrOp;
class BitwiseXorOp;
class BroadcastArgsOp;
class BroadcastGradientArgsOp;
class BroadcastToOp;
class BucketizeOp;
class CaseOp;
class CastOp;
class CeilOp;
class CheckNumericsOp;
class ClipByValueOp;
class CollectiveBcastRecvOp;
class CollectiveBcastSendOp;
class CollectiveGatherOp;
class CollectivePermuteOp;
class CollectiveReduceOp;
class ComplexAbsOp;
class ComplexOp;
class ConcatOffsetOp;
class ConcatOp;
class ConcatV2Op;
class ConjOp;
class ConjugateTransposeOp;
class ConstOp;
class Conv2DBackpropFilterOp;
class Conv2DBackpropInputOp;
class Conv2DOp;
class Conv3DBackpropFilterV2Op;
class Conv3DBackpropInputV2Op;
class Conv3DOp;
class CosOp;
class CoshOp;
class CrossOp;
class CrossReplicaSumOp;
class CumsumOp;
class DataFormatDimMapOp;
class DataFormatVecPermuteOp;
class DecodeAndCropJpegOp;
class DecodeGifOp;
class DecodeJpegOp;
class DecodePngOp;
class DepthToSpaceOp;
class DepthwiseConv2dNativeOp;
class DeviceIndexOp;
class DiagPartOp;
class DigammaOp;
class DivNoNanOp;
class DivOp;
class DynamicStitchOp;
class EinsumOp;
class EluGradOp;
class EluOp;
class EmptyOp;
class EmptyTensorListOp;
class EnqueueTPUEmbeddingRaggedTensorBatchOp;
class EnqueueTPUEmbeddingSparseTensorBatchOp;
class EnsureShapeOp;
class EqualOp;
class ErfOp;
class ErfcOp;
class ErfinvOp;
class ExpOp;
class ExpandDimsOp;
class Expm1Op;
class FFT2DOp;
class FFT3DOp;
class FFTOp;
class FakeParamOp;
class FakeQuantWithMinMaxArgsOp;
class FakeQuantWithMinMaxVarsOp;
class FakeQuantWithMinMaxVarsPerChannelOp;
class FillOp;
class FloorDivOp;
class FloorModOp;
class FloorOp;
class FusedBatchNormExOp;
class FusedBatchNormGradOp;
class FusedBatchNormGradV2Op;
class FusedBatchNormGradV3Op;
class FusedBatchNormOp;
class FusedBatchNormV3Op;
class GatherNdOp;
class GatherOp;
class GatherV2Op;
class GreaterEqualOp;
class GreaterOp;
class HSVToRGBOp;
class HashTableV2Op;
class IFFT2DOp;
class IFFT3DOp;
class IFFTOp;
class IRFFT2DOp;
class IRFFT3DOp;
class IRFFTOp;
class IdentityNOp;
class IdentityOp;
class IfOp;
class IfRegionOp;
class IgammaGradAOp;
class IgammaOp;
class IgammacOp;
class ImagOp;
class InfeedDequeueTupleOp;
class InplaceUpdateOp;
class InvOp;
class InvertOp;
class InvertPermutationOp;
class IsFiniteOp;
class IsInfOp;
class IsNanOp;
class IteratorGetNextOp;
class L2LossOp;
class LRNGradOp;
class LRNOp;
class LeakyReluGradOp;
class LeakyReluOp;
class LeftShiftOp;
class LegacyCallOp;
class LessEqualOp;
class LessOp;
class LgammaOp;
class LinSpaceOp;
class Log1pOp;
class LogOp;
class LogSoftmaxOp;
class LogicalAndOp;
class LogicalNotOp;
class LogicalOrOp;
class LookupTableFindV2Op;
class LookupTableImportV2Op;
class LookupTableSizeV2Op;
class MapAndBatchDatasetOp;
class MapDatasetOp;
class MatMulOp;
class MatrixBandPartOp;
class MatrixDiagOp;
class MatrixDiagV2Op;
class MatrixDiagV3Op;
class MatrixSetDiagOp;
class MatrixSetDiagV2Op;
class MatrixSetDiagV3Op;
class MaxOp;
class MaxPool3DGradOp;
class MaxPool3DOp;
class MaxPoolGradOp;
class MaxPoolOp;
class MaximumOp;
class MeanOp;
class MinOp;
class MinimumOp;
class MirrorPadOp;
class MlirLocalVarOp;
class MlirPassthroughOp;
class ModOp;
class MulNoNanOp;
class MulOp;
class MultinomialOp;
class NdtriOp;
class NegOp;
class NoOp;
class NonMaxSuppressionV4Op;
class NonMaxSuppressionV5Op;
class NotEqualOp;
class OneHotOp;
class OutfeedEnqueueTupleOp;
class PackOp;
class PadOp;
class PadV2Op;
class ParallelMapDatasetOp;
class ParseExampleOp;
class ParseExampleV2Op;
class PartitionedCallOp;
class PlaceholderOp;
class PlaceholderWithDefaultOp;
class PowOp;
class PreventGradientOp;
class PrintV2Op;
class ProdOp;
class QrOp;
class QuantizeAndDequantizeOp;
class QuantizeAndDequantizeV2Op;
class QuantizeAndDequantizeV3Op;
class RFFT2DOp;
class RFFT3DOp;
class RFFTOp;
class RGBToHSVOp;
class RandomGammaGradOp;
class RandomShuffleOp;
class RandomStandardNormalOp;
class RandomUniformOp;
class RangeOp;
class RankOp;
class ReadVariableOp;
class RealDivOp;
class RealOp;
class ReciprocalGradOp;
class ReciprocalOp;
class RecvTPUEmbeddingActivationsOp;
class Relu6GradOp;
class Relu6Op;
class ReluGradOp;
class ReluOp;
class ReshapeOp;
class ResizeBilinearGradOp;
class ResizeBilinearOp;
class ResizeNearestNeighborOp;
class ResourceApplyAdagradV2Op;
class ResourceApplyAdamOp;
class ResourceApplyCenteredRMSPropOp;
class ResourceApplyGradientDescentOp;
class ResourceApplyKerasMomentumOp;
class ResourceApplyMomentumOp;
class ResourceGatherOp;
class ResourceScatterUpdateOp;
class ReverseSequenceOp;
class ReverseV2Op;
class RightShiftOp;
class RintOp;
class RoundOp;
class RsqrtGradOp;
class RsqrtOp;
class ScatterNdOp;
class SegmentMaxOp;
class SegmentMeanOp;
class SegmentMinOp;
class SegmentProdOp;
class SegmentSumOp;
class SelectOp;
class SelectV2Op;
class SeluGradOp;
class SeluOp;
class SendTPUEmbeddingGradientsOp;
class ShapeNOp;
class ShapeOp;
class SigmoidGradOp;
class SigmoidOp;
class SignOp;
class SinOp;
class SinhOp;
class SizeOp;
class SliceOp;
class SnapshotOp;
class SoftmaxCrossEntropyWithLogitsOp;
class SoftmaxOp;
class SoftplusGradOp;
class SoftplusOp;
class SoftsignGradOp;
class SoftsignOp;
class SpaceToBatchNDOp;
class SpaceToBatchOp;
class SpaceToDepthOp;
class SparseMatMulOp;
class SparseSoftmaxCrossEntropyWithLogitsOp;
class SparseToDenseOp;
class SplitOp;
class SplitVOp;
class SqrtGradOp;
class SqrtOp;
class SquareOp;
class SquaredDifferenceOp;
class SqueezeOp;
class StackCloseV2Op;
class StackPopV2Op;
class StackPushV2Op;
class StackV2Op;
class StatefulPartitionedCallOp;
class StatelessRandomUniformOp;
class StopGradientOp;
class StridedSliceGradOp;
class StridedSliceOp;
class StringFormatOp;
class SubOp;
class SumOp;
class TPUCompilationResultOp;
class TPUCompileSucceededAssertOp;
class TPUCopyWithLayoutOp;
class TPUExecuteAndUpdateVariablesOp;
class TPUExecuteOp;
class TPUGetLayoutOp;
class TPUReplicateMetadataOp;
class TPUReplicatedInputOp;
class TPUReplicatedOutputOp;
class TPUReshardVariablesOp;
class TanOp;
class TanhGradOp;
class TanhOp;
class TensorArrayCloseV3Op;
class TensorArrayConcatV3Op;
class TensorArrayGatherV3Op;
class TensorArrayGradV3Op;
class TensorArrayReadV3Op;
class TensorArrayScatterV3Op;
class TensorArraySizeV3Op;
class TensorArraySplitV3Op;
class TensorArrayV3Op;
class TensorArrayWriteV3Op;
class TensorListConcatV2Op;
class TensorListElementShapeOp;
class TensorListFromTensorOp;
class TensorListGatherOp;
class TensorListGetItemOp;
class TensorListLengthOp;
class TensorListPopBackOp;
class TensorListPushBackOp;
class TensorListReserveOp;
class TensorListResizeOp;
class TensorListScatterIntoExistingListOp;
class TensorListSetItemOp;
class TensorListStackOp;
class TensorScatterUpdateOp;
class TensorSliceDatasetOp;
class TileOp;
class ToBoolOp;
class TopKV2Op;
class TransposeOp;
class TruncateDivOp;
class TruncateModOp;
class TruncatedNormalOp;
class UniqueOp;
class UnpackOp;
class UnsortedSegmentMaxOp;
class UnsortedSegmentMinOp;
class UnsortedSegmentProdOp;
class UnsortedSegmentSumOp;
class VarHandleOp;
class VariableShapeOp;
class VariableV2Op;
class WhereOp;
class WhileOp;
class XdivyOp;
class XlaBroadcastHelperOp;
class XlaConvOp;
class XlaDotOp;
class XlaDynamicSliceOp;
class XlaDynamicUpdateSliceOp;
class XlaGatherOp;
class XlaHostComputeOp;
class XlaKeyValueSortOp;
class XlaPadOp;
class XlaRecvFromHostOp;
class XlaReduceOp;
class XlaReplicaIdOp;
class XlaSelfAdjointEigOp;
class XlaSendToHostOp;
class XlaShardingOp;
class XlaSvdOp;
class Xlog1pyOp;
class XlogyOp;
class YieldOp;
class ZerosLikeOp;
class _FusedConv2DOp;
class _FusedMatMulOp;
class _HostComputeMlirOp;
class _RecvTPUEmbeddingActivationsOp;
class _RecvTPUEmbeddingDeduplicationDataOp;
class _SendTPUEmbeddingGradientsOp;
class _TPUCompileMlirOp;
class _XlaRecvAtHostOp;
class _XlaSendFromHostOp;

//===----------------------------------------------------------------------===//
// TF::AbsOp declarations
//===----------------------------------------------------------------------===//

class AbsOpAdaptor {
public:
  AbsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AbsOpAdaptor(AbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AbsOp : public Op<AbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AbsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AcosOp declarations
//===----------------------------------------------------------------------===//

class AcosOpAdaptor {
public:
  AcosOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AcosOpAdaptor(AcosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AcosOp : public Op<AcosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AcosOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AcoshOp declarations
//===----------------------------------------------------------------------===//

class AcoshOpAdaptor {
public:
  AcoshOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AcoshOpAdaptor(AcoshOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AcoshOp : public Op<AcoshOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AcoshOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AddNOp declarations
//===----------------------------------------------------------------------===//

class AddNOpAdaptor {
public:
  AddNOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddNOpAdaptor(AddNOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddNOp : public Op<AddNOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AddNOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value sum();
  Type T();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type sum, ValueRange inputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AddOp declarations
//===----------------------------------------------------------------------===//

class AddOpAdaptor {
public:
  AddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddOpAdaptor(AddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddOp : public Op<AddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, OpTrait::TF::LayoutAgnostic, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AddV2Op declarations
//===----------------------------------------------------------------------===//

class AddV2OpAdaptor {
public:
  AddV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddV2OpAdaptor(AddV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddV2Op : public Op<AddV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, OpTrait::TF::LayoutAgnostic, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AddV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AdjustContrastv2Op declarations
//===----------------------------------------------------------------------===//

class AdjustContrastv2OpAdaptor {
public:
  AdjustContrastv2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AdjustContrastv2OpAdaptor(AdjustContrastv2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value images();
  Value contrast_factor();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AdjustContrastv2Op : public Op<AdjustContrastv2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AdjustContrastv2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value images();
  Value contrast_factor();
  ::mlir::MutableOperandRange imagesMutable();
  ::mlir::MutableOperandRange contrast_factorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value images, Value contrast_factor);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images, Value contrast_factor);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AdjustHueOp declarations
//===----------------------------------------------------------------------===//

class AdjustHueOpAdaptor {
public:
  AdjustHueOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AdjustHueOpAdaptor(AdjustHueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value images();
  Value delta();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AdjustHueOp : public Op<AdjustHueOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AdjustHueOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value images();
  Value delta();
  ::mlir::MutableOperandRange imagesMutable();
  ::mlir::MutableOperandRange deltaMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value images, Value delta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images, Value delta);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AdjustSaturationOp declarations
//===----------------------------------------------------------------------===//

class AdjustSaturationOpAdaptor {
public:
  AdjustSaturationOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AdjustSaturationOpAdaptor(AdjustSaturationOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value images();
  Value scale();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AdjustSaturationOp : public Op<AdjustSaturationOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AdjustSaturationOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value images();
  Value scale();
  ::mlir::MutableOperandRange imagesMutable();
  ::mlir::MutableOperandRange scaleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value images, Value scale);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images, Value scale);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AllOp declarations
//===----------------------------------------------------------------------===//

class AllOpAdaptor {
public:
  AllOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllOpAdaptor(AllOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  BoolAttr keep_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllOp : public Op<AllOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AllOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange reduction_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr keep_dimsAttr();
  bool keep_dims();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keep_dimsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AllToAllOp declarations
//===----------------------------------------------------------------------===//

class AllToAllOpAdaptor {
public:
  AllToAllOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllToAllOpAdaptor(AllToAllOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value group_assignment();
  IntegerAttr concat_dimension();
  IntegerAttr split_dimension();
  IntegerAttr split_count();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllToAllOp : public Op<AllToAllOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AllToAllOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value group_assignment();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange group_assignmentMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr concat_dimensionAttr();
  APInt concat_dimension();
  IntegerAttr split_dimensionAttr();
  APInt split_dimension();
  IntegerAttr split_countAttr();
  APInt split_count();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void concat_dimensionAttr(IntegerAttr attr);
  void split_dimensionAttr(IntegerAttr attr);
  void split_countAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value group_assignment, IntegerAttr concat_dimension, IntegerAttr split_dimension, IntegerAttr split_count);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value group_assignment, IntegerAttr concat_dimension, IntegerAttr split_dimension, IntegerAttr split_count);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value group_assignment, APInt concat_dimension, APInt split_dimension, APInt split_count);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value group_assignment, APInt concat_dimension, APInt split_dimension, APInt split_count);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AngleOp declarations
//===----------------------------------------------------------------------===//

class AngleOpAdaptor {
public:
  AngleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AngleOpAdaptor(AngleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AngleOp : public Op<AngleOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AngleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AnyOp declarations
//===----------------------------------------------------------------------===//

class AnyOpAdaptor {
public:
  AnyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AnyOpAdaptor(AnyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  BoolAttr keep_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AnyOp : public Op<AnyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AnyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange reduction_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr keep_dimsAttr();
  bool keep_dims();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keep_dimsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ApproximateEqualOp declarations
//===----------------------------------------------------------------------===//

class ApproximateEqualOpAdaptor {
public:
  ApproximateEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ApproximateEqualOpAdaptor(ApproximateEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  FloatAttr tolerance();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ApproximateEqualOp : public Op<ApproximateEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ApproximateEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  FloatAttr toleranceAttr();
  APFloat tolerance();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void toleranceAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y, FloatAttr tolerance);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, FloatAttr tolerance);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y, APFloat tolerance);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, APFloat tolerance);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ArgMaxOp declarations
//===----------------------------------------------------------------------===//

class ArgMaxOpAdaptor {
public:
  ArgMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ArgMaxOpAdaptor(ArgMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ArgMaxOp : public Op<ArgMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ArgMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value dimension();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange dimensionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type output_type();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ArgMinOp declarations
//===----------------------------------------------------------------------===//

class ArgMinOpAdaptor {
public:
  ArgMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ArgMinOpAdaptor(ArgMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ArgMinOp : public Op<ArgMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ArgMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value dimension();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange dimensionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type output_type();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AsStringOp declarations
//===----------------------------------------------------------------------===//

class AsStringOpAdaptor {
public:
  AsStringOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AsStringOpAdaptor(AsStringOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  IntegerAttr precision();
  BoolAttr scientific();
  BoolAttr shortest();
  IntegerAttr width();
  StringAttr fill();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AsStringOp : public Op<AsStringOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AsStringOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr precisionAttr();
  APInt precision();
  BoolAttr scientificAttr();
  bool scientific();
  BoolAttr shortestAttr();
  bool shortest();
  IntegerAttr widthAttr();
  APInt width();
  StringAttr fillAttr();
  StringRef fill();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void precisionAttr(IntegerAttr attr);
  void scientificAttr(BoolAttr attr);
  void shortestAttr(BoolAttr attr);
  void widthAttr(IntegerAttr attr);
  void fillAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, IntegerAttr precision, BoolAttr scientific, BoolAttr shortest, IntegerAttr width, StringAttr fill);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, IntegerAttr precision, BoolAttr scientific, BoolAttr shortest, IntegerAttr width, StringAttr fill);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, APInt precision, bool scientific, bool shortest, APInt width, StringRef fill);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APInt precision, bool scientific, bool shortest, APInt width, StringRef fill);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AsinOp declarations
//===----------------------------------------------------------------------===//

class AsinOpAdaptor {
public:
  AsinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AsinOpAdaptor(AsinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AsinOp : public Op<AsinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AsinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AsinhOp declarations
//===----------------------------------------------------------------------===//

class AsinhOpAdaptor {
public:
  AsinhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AsinhOpAdaptor(AsinhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AsinhOp : public Op<AsinhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AsinhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AssertOp declarations
//===----------------------------------------------------------------------===//

class AssertOpAdaptor {
public:
  AssertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssertOpAdaptor(AssertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  ValueRange data();
  IntegerAttr summarize();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssertOp : public Op<AssertOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AssertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value condition();
  Operation::operand_range data();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange dataMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr summarizeAttr();
  APInt summarize();
  mlir::OperandElementTypeRange T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void summarizeAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value condition, ValueRange data, IntegerAttr summarize);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, ValueRange data, IntegerAttr summarize);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value condition, ValueRange data, APInt summarize);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, ValueRange data, APInt summarize);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
};

//===----------------------------------------------------------------------===//
// TF::AssignAddVariableOp declarations
//===----------------------------------------------------------------------===//

class AssignAddVariableOpAdaptor {
public:
  AssignAddVariableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssignAddVariableOpAdaptor(AssignAddVariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value resource();
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssignAddVariableOp : public Op<AssignAddVariableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AssignAddVariableOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value resource();
  Value value();
  ::mlir::MutableOperandRange resourceMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value resource, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value resource, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::AssignSubVariableOp declarations
//===----------------------------------------------------------------------===//

class AssignSubVariableOpAdaptor {
public:
  AssignSubVariableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssignSubVariableOpAdaptor(AssignSubVariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value resource();
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssignSubVariableOp : public Op<AssignSubVariableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AssignSubVariableOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value resource();
  Value value();
  ::mlir::MutableOperandRange resourceMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value resource, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value resource, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::AssignVariableOp declarations
//===----------------------------------------------------------------------===//

class AssignVariableOpAdaptor {
public:
  AssignVariableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssignVariableOpAdaptor(AssignVariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value resource();
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssignVariableOp : public Op<AssignVariableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AssignVariableOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value resource();
  Value value();
  ::mlir::MutableOperandRange resourceMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value resource, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value resource, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::Atan2Op declarations
//===----------------------------------------------------------------------===//

class Atan2OpAdaptor {
public:
  Atan2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Atan2OpAdaptor(Atan2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y();
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Atan2Op : public Op<Atan2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Atan2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y();
  Value x();
  ::mlir::MutableOperandRange yMutable();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AtanOp declarations
//===----------------------------------------------------------------------===//

class AtanOpAdaptor {
public:
  AtanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtanOpAdaptor(AtanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtanOp : public Op<AtanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AtanhOp declarations
//===----------------------------------------------------------------------===//

class AtanhOpAdaptor {
public:
  AtanhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtanhOpAdaptor(AtanhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtanhOp : public Op<AtanhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtanhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AvgPoolGradOp declarations
//===----------------------------------------------------------------------===//

class AvgPoolGradOpAdaptor {
public:
  AvgPoolGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AvgPoolGradOpAdaptor(AvgPoolGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value orig_input_shape();
  Value grad();
  ArrayAttr ksize();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AvgPoolGradOp : public Op<AvgPoolGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AvgPoolGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value orig_input_shape();
  Value grad();
  ::mlir::MutableOperandRange orig_input_shapeMutable();
  ::mlir::MutableOperandRange gradMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr ksizeAttr();
  ArrayAttr ksize();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void ksizeAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value orig_input_shape, Value grad, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value orig_input_shape, Value grad, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value orig_input_shape, Value grad, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value orig_input_shape, Value grad, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::AvgPoolOp declarations
//===----------------------------------------------------------------------===//

class AvgPoolOpAdaptor {
public:
  AvgPoolOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AvgPoolOpAdaptor(AvgPoolOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  ArrayAttr ksize();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AvgPoolOp : public Op<AvgPoolOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AvgPoolOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr ksizeAttr();
  ArrayAttr ksize();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void ksizeAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value value, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value value, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BatchDatasetV2Op declarations
//===----------------------------------------------------------------------===//

class BatchDatasetV2OpAdaptor {
public:
  BatchDatasetV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchDatasetV2OpAdaptor(BatchDatasetV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_dataset();
  Value batch_size();
  Value drop_remainder();
  BoolAttr parallel_copy();
  ArrayAttr output_types();
  ArrayAttr output_shapes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchDatasetV2Op : public Op<BatchDatasetV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchDatasetV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_dataset();
  Value batch_size();
  Value drop_remainder();
  ::mlir::MutableOperandRange input_datasetMutable();
  ::mlir::MutableOperandRange batch_sizeMutable();
  ::mlir::MutableOperandRange drop_remainderMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  BoolAttr parallel_copyAttr();
  bool parallel_copy();
  ArrayAttr output_typesAttr();
  ArrayAttr output_types();
  ArrayAttr output_shapesAttr();
  ArrayAttr output_shapes();
  void parallel_copyAttr(BoolAttr attr);
  void output_typesAttr(ArrayAttr attr);
  void output_shapesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, Value batch_size, Value drop_remainder, BoolAttr parallel_copy, ArrayAttr output_types, ArrayAttr output_shapes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, Value batch_size, Value drop_remainder, BoolAttr parallel_copy, ArrayAttr output_types, ArrayAttr output_shapes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, Value batch_size, Value drop_remainder, bool parallel_copy, ArrayAttr output_types, ArrayAttr output_shapes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, Value batch_size, Value drop_remainder, bool parallel_copy, ArrayAttr output_types, ArrayAttr output_shapes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BatchMatMulOp declarations
//===----------------------------------------------------------------------===//

class BatchMatMulOpAdaptor {
public:
  BatchMatMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchMatMulOpAdaptor(BatchMatMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  BoolAttr adj_x();
  BoolAttr adj_y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchMatMulOp : public Op<BatchMatMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchMatMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr adj_xAttr();
  bool adj_x();
  BoolAttr adj_yAttr();
  bool adj_y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void adj_xAttr(BoolAttr attr);
  void adj_yAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value x, Value y, BoolAttr adj_x, BoolAttr adj_y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, BoolAttr adj_x, BoolAttr adj_y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value x, Value y, bool adj_x = false, bool adj_y = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, bool adj_x = false, bool adj_y = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BatchMatMulV2Op declarations
//===----------------------------------------------------------------------===//

class BatchMatMulV2OpAdaptor {
public:
  BatchMatMulV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchMatMulV2OpAdaptor(BatchMatMulV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  BoolAttr adj_x();
  BoolAttr adj_y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchMatMulV2Op : public Op<BatchMatMulV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchMatMulV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr adj_xAttr();
  bool adj_x();
  BoolAttr adj_yAttr();
  bool adj_y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void adj_xAttr(BoolAttr attr);
  void adj_yAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value x, Value y, BoolAttr adj_x, BoolAttr adj_y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, BoolAttr adj_x, BoolAttr adj_y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value x, Value y, bool adj_x = false, bool adj_y = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, bool adj_x = false, bool adj_y = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BatchNormWithGlobalNormalizationOp declarations
//===----------------------------------------------------------------------===//

class BatchNormWithGlobalNormalizationOpAdaptor {
public:
  BatchNormWithGlobalNormalizationOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchNormWithGlobalNormalizationOpAdaptor(BatchNormWithGlobalNormalizationOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value t();
  Value m();
  Value v();
  Value beta();
  Value gamma();
  FloatAttr variance_epsilon();
  BoolAttr scale_after_normalization();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchNormWithGlobalNormalizationOp : public Op<BatchNormWithGlobalNormalizationOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchNormWithGlobalNormalizationOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value t();
  Value m();
  Value v();
  Value beta();
  Value gamma();
  ::mlir::MutableOperandRange tMutable();
  ::mlir::MutableOperandRange mMutable();
  ::mlir::MutableOperandRange vMutable();
  ::mlir::MutableOperandRange betaMutable();
  ::mlir::MutableOperandRange gammaMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  FloatAttr variance_epsilonAttr();
  APFloat variance_epsilon();
  BoolAttr scale_after_normalizationAttr();
  bool scale_after_normalization();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void variance_epsilonAttr(FloatAttr attr);
  void scale_after_normalizationAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value t, Value m, Value v, Value beta, Value gamma, FloatAttr variance_epsilon, BoolAttr scale_after_normalization);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value t, Value m, Value v, Value beta, Value gamma, FloatAttr variance_epsilon, BoolAttr scale_after_normalization);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value t, Value m, Value v, Value beta, Value gamma, APFloat variance_epsilon, bool scale_after_normalization);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value t, Value m, Value v, Value beta, Value gamma, APFloat variance_epsilon, bool scale_after_normalization);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BatchToSpaceNDOp declarations
//===----------------------------------------------------------------------===//

class BatchToSpaceNDOpAdaptor {
public:
  BatchToSpaceNDOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchToSpaceNDOpAdaptor(BatchToSpaceNDOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value block_shape();
  Value crops();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchToSpaceNDOp : public Op<BatchToSpaceNDOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchToSpaceNDOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value block_shape();
  Value crops();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange block_shapeMutable();
  ::mlir::MutableOperandRange cropsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tcrops();
  Type Tblock_shape();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value block_shape, Value crops);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value block_shape, Value crops);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BatchToSpaceOp declarations
//===----------------------------------------------------------------------===//

class BatchToSpaceOpAdaptor {
public:
  BatchToSpaceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchToSpaceOpAdaptor(BatchToSpaceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value crops();
  IntegerAttr block_size();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchToSpaceOp : public Op<BatchToSpaceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchToSpaceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value crops();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange cropsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr block_sizeAttr();
  APInt block_size();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void block_sizeAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value crops, IntegerAttr block_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value crops, IntegerAttr block_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value crops, APInt block_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value crops, APInt block_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BesselI0eOp declarations
//===----------------------------------------------------------------------===//

class BesselI0eOpAdaptor {
public:
  BesselI0eOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BesselI0eOpAdaptor(BesselI0eOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BesselI0eOp : public Op<BesselI0eOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BesselI0eOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BesselI1eOp declarations
//===----------------------------------------------------------------------===//

class BesselI1eOpAdaptor {
public:
  BesselI1eOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BesselI1eOpAdaptor(BesselI1eOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BesselI1eOp : public Op<BesselI1eOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BesselI1eOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BiasAddGradOp declarations
//===----------------------------------------------------------------------===//

class BiasAddGradOpAdaptor {
public:
  BiasAddGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BiasAddGradOpAdaptor(BiasAddGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value out_backprop();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BiasAddGradOp : public Op<BiasAddGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BiasAddGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value out_backprop();
  ::mlir::MutableOperandRange out_backpropMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value out_backprop, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value out_backprop, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value out_backprop, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value out_backprop, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BiasAddOp declarations
//===----------------------------------------------------------------------===//

class BiasAddOpAdaptor {
public:
  BiasAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BiasAddOpAdaptor(BiasAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value bias();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BiasAddOp : public Op<BiasAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BiasAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value bias();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange biasMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value value, Value bias, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value bias, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value value, Value bias, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value bias, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BiasAddV1Op declarations
//===----------------------------------------------------------------------===//

class BiasAddV1OpAdaptor {
public:
  BiasAddV1OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BiasAddV1OpAdaptor(BiasAddV1Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value bias();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BiasAddV1Op : public Op<BiasAddV1Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BiasAddV1OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value bias();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange biasMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value value, Value bias);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value bias);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpAdaptor {
public:
  BitcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitcastOpAdaptor(BitcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitcastOp : public Op<BitcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type type();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BitwiseAndOp declarations
//===----------------------------------------------------------------------===//

class BitwiseAndOpAdaptor {
public:
  BitwiseAndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitwiseAndOpAdaptor(BitwiseAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitwiseAndOp : public Op<BitwiseAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseAndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BitwiseOrOp declarations
//===----------------------------------------------------------------------===//

class BitwiseOrOpAdaptor {
public:
  BitwiseOrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitwiseOrOpAdaptor(BitwiseOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitwiseOrOp : public Op<BitwiseOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseOrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BitwiseXorOp declarations
//===----------------------------------------------------------------------===//

class BitwiseXorOpAdaptor {
public:
  BitwiseXorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitwiseXorOpAdaptor(BitwiseXorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitwiseXorOp : public Op<BitwiseXorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseXorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BroadcastArgsOp declarations
//===----------------------------------------------------------------------===//

class BroadcastArgsOpAdaptor {
public:
  BroadcastArgsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastArgsOpAdaptor(BroadcastArgsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value s0();
  Value s1();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastArgsOp : public Op<BroadcastArgsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BroadcastArgsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value s0();
  Value s1();
  ::mlir::MutableOperandRange s0Mutable();
  ::mlir::MutableOperandRange s1Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value r0();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type r0, Value s0, Value s1);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value s0, Value s1);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BroadcastGradientArgsOp declarations
//===----------------------------------------------------------------------===//

class BroadcastGradientArgsOpAdaptor {
public:
  BroadcastGradientArgsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastGradientArgsOpAdaptor(BroadcastGradientArgsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value s0();
  Value s1();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastGradientArgsOp : public Op<BroadcastGradientArgsOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BroadcastGradientArgsOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value s0();
  Value s1();
  ::mlir::MutableOperandRange s0Mutable();
  ::mlir::MutableOperandRange s1Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value r0();
  Value r1();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type r0, Type r1, Value s0, Value s1);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value s0, Value s1);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BroadcastToOp declarations
//===----------------------------------------------------------------------===//

class BroadcastToOpAdaptor {
public:
  BroadcastToOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastToOpAdaptor(BroadcastToOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastToOp : public Op<BroadcastToOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BroadcastToOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value shape();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::BucketizeOp declarations
//===----------------------------------------------------------------------===//

class BucketizeOpAdaptor {
public:
  BucketizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BucketizeOpAdaptor(BucketizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  ArrayAttr boundaries();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BucketizeOp : public Op<BucketizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BucketizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr boundariesAttr();
  ArrayAttr boundaries();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void boundariesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, ArrayAttr boundaries);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, ArrayAttr boundaries);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CaseOp declarations
//===----------------------------------------------------------------------===//

class CaseOpAdaptor {
public:
  CaseOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CaseOpAdaptor(CaseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value branch_index();
  ValueRange input();
  ArrayAttr branches();
  ArrayAttr output_shapes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CaseOp : public Op<CaseOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CaseOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value branch_index();
  Operation::operand_range input();
  ::mlir::MutableOperandRange branch_indexMutable();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  ArrayAttr branchesAttr();
  ArrayAttr branches();
  ArrayAttr output_shapesAttr();
  ArrayAttr output_shapes();
  mlir::OperandElementTypeRange Tin();
  mlir::ResultElementTypeRange Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void branchesAttr(ArrayAttr attr);
  void output_shapesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value branch_index, ValueRange input, ArrayAttr branches, ArrayAttr output_shapes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
};

//===----------------------------------------------------------------------===//
// TF::CastOp declarations
//===----------------------------------------------------------------------===//

class CastOpAdaptor {
public:
  CastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CastOpAdaptor(CastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  BoolAttr Truncate();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CastOp : public Op<CastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  BoolAttr TruncateAttr();
  bool Truncate();
  Type SrcT();
  Type DstT();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void TruncateAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, BoolAttr Truncate);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, BoolAttr Truncate);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, bool Truncate = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, bool Truncate = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CeilOp declarations
//===----------------------------------------------------------------------===//

class CeilOpAdaptor {
public:
  CeilOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CeilOpAdaptor(CeilOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CeilOp : public Op<CeilOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CeilOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CheckNumericsOp declarations
//===----------------------------------------------------------------------===//

class CheckNumericsOpAdaptor {
public:
  CheckNumericsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CheckNumericsOpAdaptor(CheckNumericsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value tensor();
  StringAttr message();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CheckNumericsOp : public Op<CheckNumericsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CheckNumericsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value tensor();
  ::mlir::MutableOperandRange tensorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr messageAttr();
  StringRef message();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void messageAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value tensor, StringAttr message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, StringAttr message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value tensor, StringRef message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, StringRef message);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value tensor, StringAttr message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ClipByValueOp declarations
//===----------------------------------------------------------------------===//

class ClipByValueOpAdaptor {
public:
  ClipByValueOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ClipByValueOpAdaptor(ClipByValueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value t();
  Value clip_value_min();
  Value clip_value_max();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ClipByValueOp : public Op<ClipByValueOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ClipByValueOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value t();
  Value clip_value_min();
  Value clip_value_max();
  ::mlir::MutableOperandRange tMutable();
  ::mlir::MutableOperandRange clip_value_minMutable();
  ::mlir::MutableOperandRange clip_value_maxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value t, Value clip_value_min, Value clip_value_max);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value t, Value clip_value_min, Value clip_value_max);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CollectiveBcastRecvOp declarations
//===----------------------------------------------------------------------===//

class CollectiveBcastRecvOpAdaptor {
public:
  CollectiveBcastRecvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CollectiveBcastRecvOpAdaptor(CollectiveBcastRecvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr group_size();
  IntegerAttr group_key();
  IntegerAttr instance_key();
  Attribute shape();
  StringAttr communication_hint();
  FloatAttr timeout_seconds();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CollectiveBcastRecvOp : public Op<CollectiveBcastRecvOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CollectiveBcastRecvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value data();
  IntegerAttr group_sizeAttr();
  APInt group_size();
  IntegerAttr group_keyAttr();
  APInt group_key();
  IntegerAttr instance_keyAttr();
  APInt instance_key();
  Attribute shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> shape();
  StringAttr communication_hintAttr();
  StringRef communication_hint();
  FloatAttr timeout_secondsAttr();
  APFloat timeout_seconds();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void group_sizeAttr(IntegerAttr attr);
  void group_keyAttr(IntegerAttr attr);
  void instance_keyAttr(IntegerAttr attr);
  void shapeAttr(Attribute attr);
  void communication_hintAttr(StringAttr attr);
  void timeout_secondsAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, Attribute shape, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, Attribute shape, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, APInt group_size, APInt group_key, APInt instance_key, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, APInt group_size, APInt group_key, APInt instance_key, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::CollectiveBcastSendOp declarations
//===----------------------------------------------------------------------===//

class CollectiveBcastSendOpAdaptor {
public:
  CollectiveBcastSendOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CollectiveBcastSendOpAdaptor(CollectiveBcastSendOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  IntegerAttr group_size();
  IntegerAttr group_key();
  IntegerAttr instance_key();
  Attribute shape();
  StringAttr communication_hint();
  FloatAttr timeout_seconds();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CollectiveBcastSendOp : public Op<CollectiveBcastSendOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CollectiveBcastSendOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value data();
  IntegerAttr group_sizeAttr();
  APInt group_size();
  IntegerAttr group_keyAttr();
  APInt group_key();
  IntegerAttr instance_keyAttr();
  APInt instance_key();
  Attribute shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> shape();
  StringAttr communication_hintAttr();
  StringRef communication_hint();
  FloatAttr timeout_secondsAttr();
  APFloat timeout_seconds();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void group_sizeAttr(IntegerAttr attr);
  void group_keyAttr(IntegerAttr attr);
  void instance_keyAttr(IntegerAttr attr);
  void shapeAttr(Attribute attr);
  void communication_hintAttr(StringAttr attr);
  void timeout_secondsAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, Value input, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, Attribute shape, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, Attribute shape, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, Value input, APInt group_size, APInt group_key, APInt instance_key, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APInt group_size, APInt group_key, APInt instance_key, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::CollectiveGatherOp declarations
//===----------------------------------------------------------------------===//

class CollectiveGatherOpAdaptor {
public:
  CollectiveGatherOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CollectiveGatherOpAdaptor(CollectiveGatherOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  IntegerAttr group_size();
  IntegerAttr group_key();
  IntegerAttr instance_key();
  Attribute shape();
  StringAttr communication_hint();
  FloatAttr timeout_seconds();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CollectiveGatherOp : public Op<CollectiveGatherOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CollectiveGatherOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value data();
  IntegerAttr group_sizeAttr();
  APInt group_size();
  IntegerAttr group_keyAttr();
  APInt group_key();
  IntegerAttr instance_keyAttr();
  APInt instance_key();
  Attribute shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> shape();
  StringAttr communication_hintAttr();
  StringRef communication_hint();
  FloatAttr timeout_secondsAttr();
  APFloat timeout_seconds();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void group_sizeAttr(IntegerAttr attr);
  void group_keyAttr(IntegerAttr attr);
  void instance_keyAttr(IntegerAttr attr);
  void shapeAttr(Attribute attr);
  void communication_hintAttr(StringAttr attr);
  void timeout_secondsAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, Value input, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, Attribute shape, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, Attribute shape, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, Value input, APInt group_size, APInt group_key, APInt instance_key, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APInt group_size, APInt group_key, APInt instance_key, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::CollectivePermuteOp declarations
//===----------------------------------------------------------------------===//

class CollectivePermuteOpAdaptor {
public:
  CollectivePermuteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CollectivePermuteOpAdaptor(CollectivePermuteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value source_target_pairs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CollectivePermuteOp : public Op<CollectivePermuteOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CollectivePermuteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value source_target_pairs();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange source_target_pairsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value source_target_pairs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value source_target_pairs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::CollectiveReduceOp declarations
//===----------------------------------------------------------------------===//

class CollectiveReduceOpAdaptor {
public:
  CollectiveReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CollectiveReduceOpAdaptor(CollectiveReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  IntegerAttr group_size();
  IntegerAttr group_key();
  IntegerAttr instance_key();
  StringAttr merge_op();
  StringAttr final_op();
  ArrayAttr subdiv_offsets();
  ArrayAttr wait_for();
  StringAttr communication_hint();
  FloatAttr timeout_seconds();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CollectiveReduceOp : public Op<CollectiveReduceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CollectiveReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value data();
  IntegerAttr group_sizeAttr();
  APInt group_size();
  IntegerAttr group_keyAttr();
  APInt group_key();
  IntegerAttr instance_keyAttr();
  APInt instance_key();
  StringAttr merge_opAttr();
  StringRef merge_op();
  StringAttr final_opAttr();
  StringRef final_op();
  ArrayAttr subdiv_offsetsAttr();
  ArrayAttr subdiv_offsets();
  ArrayAttr wait_forAttr();
  ArrayAttr wait_for();
  StringAttr communication_hintAttr();
  StringRef communication_hint();
  FloatAttr timeout_secondsAttr();
  APFloat timeout_seconds();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void group_sizeAttr(IntegerAttr attr);
  void group_keyAttr(IntegerAttr attr);
  void instance_keyAttr(IntegerAttr attr);
  void merge_opAttr(StringAttr attr);
  void final_opAttr(StringAttr attr);
  void subdiv_offsetsAttr(ArrayAttr attr);
  void wait_forAttr(ArrayAttr attr);
  void communication_hintAttr(StringAttr attr);
  void timeout_secondsAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, Value input, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, StringAttr merge_op, StringAttr final_op, ArrayAttr subdiv_offsets, ArrayAttr wait_for, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, StringAttr merge_op, StringAttr final_op, ArrayAttr subdiv_offsets, ArrayAttr wait_for, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type data, Value input, APInt group_size, APInt group_key, APInt instance_key, StringRef merge_op, StringRef final_op, ArrayAttr subdiv_offsets, ArrayAttr wait_for, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APInt group_size, APInt group_key, APInt instance_key, StringRef merge_op, StringRef final_op, ArrayAttr subdiv_offsets, ArrayAttr wait_for, StringRef communication_hint, APFloat timeout_seconds);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, IntegerAttr group_size, IntegerAttr group_key, IntegerAttr instance_key, StringAttr merge_op, StringAttr final_op, ArrayAttr subdiv_offsets, ArrayAttr wait_for, StringAttr communication_hint, FloatAttr timeout_seconds);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ComplexAbsOp declarations
//===----------------------------------------------------------------------===//

class ComplexAbsOpAdaptor {
public:
  ComplexAbsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ComplexAbsOpAdaptor(ComplexAbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ComplexAbsOp : public Op<ComplexAbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ComplexAbsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  Type Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ComplexOp declarations
//===----------------------------------------------------------------------===//

class ComplexOpAdaptor {
public:
  ComplexOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ComplexOpAdaptor(ComplexOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value real();
  Value imag();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ComplexOp : public Op<ComplexOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ComplexOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value real();
  Value imag();
  ::mlir::MutableOperandRange realMutable();
  ::mlir::MutableOperandRange imagMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value out();
  Type T();
  Type Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type out, Value real, Value imag);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value real, Value imag);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ConcatOffsetOp declarations
//===----------------------------------------------------------------------===//

class ConcatOffsetOpAdaptor {
public:
  ConcatOffsetOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConcatOffsetOpAdaptor(ConcatOffsetOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value concat_dim();
  ValueRange shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConcatOffsetOp : public Op<ConcatOffsetOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConcatOffsetOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value concat_dim();
  Operation::operand_range shape();
  ::mlir::MutableOperandRange concat_dimMutable();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range offset();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> offset, Value concat_dim, ValueRange shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ConcatOp declarations
//===----------------------------------------------------------------------===//

class ConcatOpAdaptor {
public:
  ConcatOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConcatOpAdaptor(ConcatOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value concat_dim();
  ValueRange values();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConcatOp : public Op<ConcatOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConcatOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value concat_dim();
  Operation::operand_range values();
  ::mlir::MutableOperandRange concat_dimMutable();
  ::mlir::MutableOperandRange valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value concat_dim, ValueRange values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value concat_dim, ValueRange values);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ConcatV2Op declarations
//===----------------------------------------------------------------------===//

class ConcatV2OpAdaptor {
public:
  ConcatV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConcatV2OpAdaptor(ConcatV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange values();
  Value axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConcatV2Op : public Op<ConcatV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConcatV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range values();
  Value axis();
  ::mlir::MutableOperandRange valuesMutable();
  ::mlir::MutableOperandRange axisMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tidx();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange values, Value axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange values, Value axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ConjOp declarations
//===----------------------------------------------------------------------===//

class ConjOpAdaptor {
public:
  ConjOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConjOpAdaptor(ConjOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConjOp : public Op<ConjOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConjOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ConjugateTransposeOp declarations
//===----------------------------------------------------------------------===//

class ConjugateTransposeOpAdaptor {
public:
  ConjugateTransposeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConjugateTransposeOpAdaptor(ConjugateTransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value perm();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConjugateTransposeOp : public Op<ConjugateTransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConjugateTransposeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value perm();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange permMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  Type Tperm();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, Value perm);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value perm);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ConstOp declarations
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
class ConstOp : public Op<ConstOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, MemoryEffectOpInterface::Trait, InferTypeOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
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
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void valueAttr(ElementsAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Attribute value);
  static void build(OpBuilder &builder, OperationState &result, Type type, Attribute value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ElementsAttr value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ElementsAttr value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ElementsAttr value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static LogicalResult inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static bool isCompatibleReturnTypes(ArrayRef<Type> l, ArrayRef<Type> r) {
      return BroadcastCompatible(l, r);
    }
  
};

//===----------------------------------------------------------------------===//
// TF::Conv2DBackpropFilterOp declarations
//===----------------------------------------------------------------------===//

class Conv2DBackpropFilterOpAdaptor {
public:
  Conv2DBackpropFilterOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Conv2DBackpropFilterOpAdaptor(Conv2DBackpropFilterOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value filter_sizes();
  Value out_backprop();
  ArrayAttr strides();
  BoolAttr use_cudnn_on_gpu();
  StringAttr padding();
  ArrayAttr explicit_paddings();
  StringAttr data_format();
  ArrayAttr dilations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Conv2DBackpropFilterOp : public Op<Conv2DBackpropFilterOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, LayoutSensitiveInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Conv2DBackpropFilterOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value filter_sizes();
  Value out_backprop();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange filter_sizesMutable();
  ::mlir::MutableOperandRange out_backpropMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  BoolAttr use_cudnn_on_gpuAttr();
  bool use_cudnn_on_gpu();
  StringAttr paddingAttr();
  StringRef padding();
  ArrayAttr explicit_paddingsAttr();
  ArrayAttr explicit_paddings();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void use_cudnn_on_gpuAttr(BoolAttr attr);
  void paddingAttr(StringAttr attr);
  void explicit_paddingsAttr(ArrayAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, BoolAttr use_cudnn_on_gpu, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, BoolAttr use_cudnn_on_gpu, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, bool use_cudnn_on_gpu, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, bool use_cudnn_on_gpu, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_LayoutSensitiveInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {0, 2}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {}; }
    StringRef GetOptimalLayout(const RuntimeDevices& devices);
    LogicalResult UpdateDataFormat(StringRef data_format);
  
};

//===----------------------------------------------------------------------===//
// TF::Conv2DBackpropInputOp declarations
//===----------------------------------------------------------------------===//

class Conv2DBackpropInputOpAdaptor {
public:
  Conv2DBackpropInputOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Conv2DBackpropInputOpAdaptor(Conv2DBackpropInputOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_sizes();
  Value filter();
  Value out_backprop();
  ArrayAttr strides();
  BoolAttr use_cudnn_on_gpu();
  StringAttr padding();
  ArrayAttr explicit_paddings();
  StringAttr data_format();
  ArrayAttr dilations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Conv2DBackpropInputOp : public Op<Conv2DBackpropInputOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, LayoutSensitiveInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Conv2DBackpropInputOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_sizes();
  Value filter();
  Value out_backprop();
  ::mlir::MutableOperandRange input_sizesMutable();
  ::mlir::MutableOperandRange filterMutable();
  ::mlir::MutableOperandRange out_backpropMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  BoolAttr use_cudnn_on_gpuAttr();
  bool use_cudnn_on_gpu();
  StringAttr paddingAttr();
  StringRef padding();
  ArrayAttr explicit_paddingsAttr();
  ArrayAttr explicit_paddings();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void use_cudnn_on_gpuAttr(BoolAttr attr);
  void paddingAttr(StringAttr attr);
  void explicit_paddingsAttr(ArrayAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, BoolAttr use_cudnn_on_gpu, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, BoolAttr use_cudnn_on_gpu, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, bool use_cudnn_on_gpu, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, bool use_cudnn_on_gpu, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_LayoutSensitiveInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {2}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {0}; }
    StringRef GetOptimalLayout(const RuntimeDevices& devices);
    LogicalResult UpdateDataFormat(StringRef data_format);
  
};

//===----------------------------------------------------------------------===//
// TF::Conv2DOp declarations
//===----------------------------------------------------------------------===//

class Conv2DOpAdaptor {
public:
  Conv2DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Conv2DOpAdaptor(Conv2DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value filter();
  ArrayAttr strides();
  BoolAttr use_cudnn_on_gpu();
  StringAttr padding();
  ArrayAttr explicit_paddings();
  StringAttr data_format();
  ArrayAttr dilations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Conv2DOp : public Op<Conv2DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, LayoutSensitiveInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Conv2DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value filter();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange filterMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  BoolAttr use_cudnn_on_gpuAttr();
  bool use_cudnn_on_gpu();
  StringAttr paddingAttr();
  StringRef padding();
  ArrayAttr explicit_paddingsAttr();
  ArrayAttr explicit_paddings();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void use_cudnn_on_gpuAttr(BoolAttr attr);
  void paddingAttr(StringAttr attr);
  void explicit_paddingsAttr(ArrayAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ArrayAttr strides, BoolAttr use_cudnn_on_gpu, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ArrayAttr strides, BoolAttr use_cudnn_on_gpu, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ArrayAttr strides, bool use_cudnn_on_gpu, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ArrayAttr strides, bool use_cudnn_on_gpu, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_LayoutSensitiveInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {0}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {0}; }
    StringRef GetOptimalLayout(const RuntimeDevices& devices);
    LogicalResult UpdateDataFormat(StringRef data_format);
  
};

//===----------------------------------------------------------------------===//
// TF::Conv3DBackpropFilterV2Op declarations
//===----------------------------------------------------------------------===//

class Conv3DBackpropFilterV2OpAdaptor {
public:
  Conv3DBackpropFilterV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Conv3DBackpropFilterV2OpAdaptor(Conv3DBackpropFilterV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value filter_sizes();
  Value out_backprop();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  ArrayAttr dilations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Conv3DBackpropFilterV2Op : public Op<Conv3DBackpropFilterV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Conv3DBackpropFilterV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value filter_sizes();
  Value out_backprop();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange filter_sizesMutable();
  ::mlir::MutableOperandRange out_backpropMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, StringAttr padding, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, StringAttr padding, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, StringRef padding, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter_sizes, Value out_backprop, ArrayAttr strides, StringRef padding, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::Conv3DBackpropInputV2Op declarations
//===----------------------------------------------------------------------===//

class Conv3DBackpropInputV2OpAdaptor {
public:
  Conv3DBackpropInputV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Conv3DBackpropInputV2OpAdaptor(Conv3DBackpropInputV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_sizes();
  Value filter();
  Value out_backprop();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  ArrayAttr dilations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Conv3DBackpropInputV2Op : public Op<Conv3DBackpropInputV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Conv3DBackpropInputV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_sizes();
  Value filter();
  Value out_backprop();
  ::mlir::MutableOperandRange input_sizesMutable();
  ::mlir::MutableOperandRange filterMutable();
  ::mlir::MutableOperandRange out_backpropMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  Type T();
  Type Tshape();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, StringAttr padding, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, StringAttr padding, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, StringRef padding, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_sizes, Value filter, Value out_backprop, ArrayAttr strides, StringRef padding, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::Conv3DOp declarations
//===----------------------------------------------------------------------===//

class Conv3DOpAdaptor {
public:
  Conv3DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Conv3DOpAdaptor(Conv3DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value filter();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  ArrayAttr dilations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Conv3DOp : public Op<Conv3DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Conv3DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value filter();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange filterMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ArrayAttr strides, StringAttr padding, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ArrayAttr strides, StringAttr padding, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ArrayAttr strides, StringRef padding, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ArrayAttr strides, StringRef padding, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CosOp declarations
//===----------------------------------------------------------------------===//

class CosOpAdaptor {
public:
  CosOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CosOpAdaptor(CosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CosOp : public Op<CosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CosOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CoshOp declarations
//===----------------------------------------------------------------------===//

class CoshOpAdaptor {
public:
  CoshOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CoshOpAdaptor(CoshOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CoshOp : public Op<CoshOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CoshOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CrossOp declarations
//===----------------------------------------------------------------------===//

class CrossOpAdaptor {
public:
  CrossOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CrossOpAdaptor(CrossOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CrossOp : public Op<CrossOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CrossOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value product();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type product, Value a, Value b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CrossReplicaSumOp declarations
//===----------------------------------------------------------------------===//

class CrossReplicaSumOpAdaptor {
public:
  CrossReplicaSumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CrossReplicaSumOpAdaptor(CrossReplicaSumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value group_assignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CrossReplicaSumOp : public Op<CrossReplicaSumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CrossReplicaSumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value group_assignment();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange group_assignmentMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value group_assignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value group_assignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::CumsumOp declarations
//===----------------------------------------------------------------------===//

class CumsumOpAdaptor {
public:
  CumsumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CumsumOpAdaptor(CumsumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value axis();
  BoolAttr exclusive();
  BoolAttr reverse();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CumsumOp : public Op<CumsumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CumsumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value axis();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange axisMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value out();
  BoolAttr exclusiveAttr();
  bool exclusive();
  BoolAttr reverseAttr();
  bool reverse();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void exclusiveAttr(BoolAttr attr);
  void reverseAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type out, Value x, Value axis, BoolAttr exclusive, BoolAttr reverse);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value axis, BoolAttr exclusive, BoolAttr reverse);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type out, Value x, Value axis, bool exclusive = false, bool reverse = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value axis, bool exclusive = false, bool reverse = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DataFormatDimMapOp declarations
//===----------------------------------------------------------------------===//

class DataFormatDimMapOpAdaptor {
public:
  DataFormatDimMapOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DataFormatDimMapOpAdaptor(DataFormatDimMapOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  StringAttr src_format();
  StringAttr dst_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DataFormatDimMapOp : public Op<DataFormatDimMapOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DataFormatDimMapOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  StringAttr src_formatAttr();
  StringRef src_format();
  StringAttr dst_formatAttr();
  StringRef dst_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void src_formatAttr(StringAttr attr);
  void dst_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, StringAttr src_format, StringAttr dst_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, StringAttr src_format, StringAttr dst_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, StringRef src_format = "NHWC", StringRef dst_format = "NCHW");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, StringRef src_format = "NHWC", StringRef dst_format = "NCHW");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x, StringAttr src_format, StringAttr dst_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DataFormatVecPermuteOp declarations
//===----------------------------------------------------------------------===//

class DataFormatVecPermuteOpAdaptor {
public:
  DataFormatVecPermuteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DataFormatVecPermuteOpAdaptor(DataFormatVecPermuteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  StringAttr src_format();
  StringAttr dst_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DataFormatVecPermuteOp : public Op<DataFormatVecPermuteOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DataFormatVecPermuteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  StringAttr src_formatAttr();
  StringRef src_format();
  StringAttr dst_formatAttr();
  StringRef dst_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void src_formatAttr(StringAttr attr);
  void dst_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, StringAttr src_format, StringAttr dst_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, StringAttr src_format, StringAttr dst_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, StringRef src_format = "NHWC", StringRef dst_format = "NCHW");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, StringRef src_format = "NHWC", StringRef dst_format = "NCHW");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x, StringAttr src_format, StringAttr dst_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DecodeAndCropJpegOp declarations
//===----------------------------------------------------------------------===//

class DecodeAndCropJpegOpAdaptor {
public:
  DecodeAndCropJpegOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DecodeAndCropJpegOpAdaptor(DecodeAndCropJpegOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value contents();
  Value crop_window();
  IntegerAttr channels();
  IntegerAttr ratio();
  BoolAttr fancy_upscaling();
  BoolAttr try_recover_truncated();
  FloatAttr acceptable_fraction();
  StringAttr dct_method();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DecodeAndCropJpegOp : public Op<DecodeAndCropJpegOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DecodeAndCropJpegOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value contents();
  Value crop_window();
  ::mlir::MutableOperandRange contentsMutable();
  ::mlir::MutableOperandRange crop_windowMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value image();
  IntegerAttr channelsAttr();
  APInt channels();
  IntegerAttr ratioAttr();
  APInt ratio();
  BoolAttr fancy_upscalingAttr();
  bool fancy_upscaling();
  BoolAttr try_recover_truncatedAttr();
  bool try_recover_truncated();
  FloatAttr acceptable_fractionAttr();
  APFloat acceptable_fraction();
  StringAttr dct_methodAttr();
  StringRef dct_method();
  void channelsAttr(IntegerAttr attr);
  void ratioAttr(IntegerAttr attr);
  void fancy_upscalingAttr(BoolAttr attr);
  void try_recover_truncatedAttr(BoolAttr attr);
  void acceptable_fractionAttr(FloatAttr attr);
  void dct_methodAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type image, Value contents, Value crop_window, IntegerAttr channels, IntegerAttr ratio, BoolAttr fancy_upscaling, BoolAttr try_recover_truncated, FloatAttr acceptable_fraction, StringAttr dct_method);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value contents, Value crop_window, IntegerAttr channels, IntegerAttr ratio, BoolAttr fancy_upscaling, BoolAttr try_recover_truncated, FloatAttr acceptable_fraction, StringAttr dct_method);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type image, Value contents, Value crop_window, APInt channels, APInt ratio, bool fancy_upscaling, bool try_recover_truncated, APFloat acceptable_fraction, StringRef dct_method);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value contents, Value crop_window, APInt channels, APInt ratio, bool fancy_upscaling, bool try_recover_truncated, APFloat acceptable_fraction, StringRef dct_method);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DecodeGifOp declarations
//===----------------------------------------------------------------------===//

class DecodeGifOpAdaptor {
public:
  DecodeGifOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DecodeGifOpAdaptor(DecodeGifOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value contents();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DecodeGifOp : public Op<DecodeGifOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DecodeGifOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value contents();
  ::mlir::MutableOperandRange contentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value image();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type image, Value contents);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value contents);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DecodeJpegOp declarations
//===----------------------------------------------------------------------===//

class DecodeJpegOpAdaptor {
public:
  DecodeJpegOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DecodeJpegOpAdaptor(DecodeJpegOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value contents();
  IntegerAttr channels();
  IntegerAttr ratio();
  BoolAttr fancy_upscaling();
  BoolAttr try_recover_truncated();
  FloatAttr acceptable_fraction();
  StringAttr dct_method();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DecodeJpegOp : public Op<DecodeJpegOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DecodeJpegOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value contents();
  ::mlir::MutableOperandRange contentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value image();
  IntegerAttr channelsAttr();
  APInt channels();
  IntegerAttr ratioAttr();
  APInt ratio();
  BoolAttr fancy_upscalingAttr();
  bool fancy_upscaling();
  BoolAttr try_recover_truncatedAttr();
  bool try_recover_truncated();
  FloatAttr acceptable_fractionAttr();
  APFloat acceptable_fraction();
  StringAttr dct_methodAttr();
  StringRef dct_method();
  void channelsAttr(IntegerAttr attr);
  void ratioAttr(IntegerAttr attr);
  void fancy_upscalingAttr(BoolAttr attr);
  void try_recover_truncatedAttr(BoolAttr attr);
  void acceptable_fractionAttr(FloatAttr attr);
  void dct_methodAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type image, Value contents, IntegerAttr channels, IntegerAttr ratio, BoolAttr fancy_upscaling, BoolAttr try_recover_truncated, FloatAttr acceptable_fraction, StringAttr dct_method);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value contents, IntegerAttr channels, IntegerAttr ratio, BoolAttr fancy_upscaling, BoolAttr try_recover_truncated, FloatAttr acceptable_fraction, StringAttr dct_method);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type image, Value contents, APInt channels, APInt ratio, bool fancy_upscaling, bool try_recover_truncated, APFloat acceptable_fraction, StringRef dct_method);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value contents, APInt channels, APInt ratio, bool fancy_upscaling, bool try_recover_truncated, APFloat acceptable_fraction, StringRef dct_method);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DecodePngOp declarations
//===----------------------------------------------------------------------===//

class DecodePngOpAdaptor {
public:
  DecodePngOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DecodePngOpAdaptor(DecodePngOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value contents();
  IntegerAttr channels();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DecodePngOp : public Op<DecodePngOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DecodePngOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value contents();
  ::mlir::MutableOperandRange contentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value image();
  IntegerAttr channelsAttr();
  APInt channels();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void channelsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type image, Value contents, IntegerAttr channels);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value contents, IntegerAttr channels);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type image, Value contents, APInt channels);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value contents, APInt channels);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DepthToSpaceOp declarations
//===----------------------------------------------------------------------===//

class DepthToSpaceOpAdaptor {
public:
  DepthToSpaceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DepthToSpaceOpAdaptor(DepthToSpaceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  IntegerAttr block_size();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DepthToSpaceOp : public Op<DepthToSpaceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DepthToSpaceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr block_sizeAttr();
  APInt block_size();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void block_sizeAttr(IntegerAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, IntegerAttr block_size, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, IntegerAttr block_size, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, APInt block_size, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APInt block_size, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DepthwiseConv2dNativeOp declarations
//===----------------------------------------------------------------------===//

class DepthwiseConv2dNativeOpAdaptor {
public:
  DepthwiseConv2dNativeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DepthwiseConv2dNativeOpAdaptor(DepthwiseConv2dNativeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value filter();
  ArrayAttr strides();
  StringAttr padding();
  ArrayAttr explicit_paddings();
  StringAttr data_format();
  ArrayAttr dilations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DepthwiseConv2dNativeOp : public Op<DepthwiseConv2dNativeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DepthwiseConv2dNativeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value filter();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange filterMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  ArrayAttr explicit_paddingsAttr();
  ArrayAttr explicit_paddings();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void explicit_paddingsAttr(ArrayAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ArrayAttr strides, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ArrayAttr strides, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ArrayAttr strides, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ArrayAttr strides, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DeviceIndexOp declarations
//===----------------------------------------------------------------------===//

class DeviceIndexOpAdaptor {
public:
  DeviceIndexOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DeviceIndexOpAdaptor(DeviceIndexOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ArrayAttr device_names();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DeviceIndexOp : public Op<DeviceIndexOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DeviceIndexOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value index();
  ArrayAttr device_namesAttr();
  ArrayAttr device_names();
  void device_namesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type index, ArrayAttr device_names);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ArrayAttr device_names);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DiagPartOp declarations
//===----------------------------------------------------------------------===//

class DiagPartOpAdaptor {
public:
  DiagPartOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DiagPartOpAdaptor(DiagPartOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DiagPartOp : public Op<DiagPartOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DiagPartOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value diagonal();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type diagonal, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DigammaOp declarations
//===----------------------------------------------------------------------===//

class DigammaOpAdaptor {
public:
  DigammaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DigammaOpAdaptor(DigammaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DigammaOp : public Op<DigammaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DigammaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DivNoNanOp declarations
//===----------------------------------------------------------------------===//

class DivNoNanOpAdaptor {
public:
  DivNoNanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DivNoNanOpAdaptor(DivNoNanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DivNoNanOp : public Op<DivNoNanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DivNoNanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DivOp declarations
//===----------------------------------------------------------------------===//

class DivOpAdaptor {
public:
  DivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DivOpAdaptor(DivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DivOp : public Op<DivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::DynamicStitchOp declarations
//===----------------------------------------------------------------------===//

class DynamicStitchOpAdaptor {
public:
  DynamicStitchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DynamicStitchOpAdaptor(DynamicStitchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange indices();
  ValueRange data();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DynamicStitchOp : public Op<DynamicStitchOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DynamicStitchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range indices();
  Operation::operand_range data();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange dataMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value merged();
  Type T();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type merged, ValueRange indices, ValueRange data);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange indices, ValueRange data);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::EinsumOp declarations
//===----------------------------------------------------------------------===//

class EinsumOpAdaptor {
public:
  EinsumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EinsumOpAdaptor(EinsumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  StringAttr equation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EinsumOp : public Op<EinsumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EinsumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr equationAttr();
  StringRef equation();
  Type T();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void equationAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange inputs, StringAttr equation);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, StringAttr equation);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange inputs, StringRef equation);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, StringRef equation);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::EluGradOp declarations
//===----------------------------------------------------------------------===//

class EluGradOpAdaptor {
public:
  EluGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EluGradOpAdaptor(EluGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gradients();
  Value outputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EluGradOp : public Op<EluGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EluGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gradients();
  Value outputs();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange outputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value backprops();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value outputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value outputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value gradients, Value outputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::EluOp declarations
//===----------------------------------------------------------------------===//

class EluOpAdaptor {
public:
  EluOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EluOpAdaptor(EluOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EluOp : public Op<EluOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EluOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value activations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::EmptyOp declarations
//===----------------------------------------------------------------------===//

class EmptyOpAdaptor {
public:
  EmptyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EmptyOpAdaptor(EmptyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  BoolAttr init();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EmptyOp : public Op<EmptyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EmptyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr initAttr();
  bool init();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void initAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, BoolAttr init);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, BoolAttr init);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, bool init = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, bool init = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
};

//===----------------------------------------------------------------------===//
// TF::EmptyTensorListOp declarations
//===----------------------------------------------------------------------===//

class EmptyTensorListOpAdaptor {
public:
  EmptyTensorListOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EmptyTensorListOpAdaptor(EmptyTensorListOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value element_shape();
  Value max_num_elements();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EmptyTensorListOp : public Op<EmptyTensorListOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EmptyTensorListOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value element_shape();
  Value max_num_elements();
  ::mlir::MutableOperandRange element_shapeMutable();
  ::mlir::MutableOperandRange max_num_elementsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  Type shape_type();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value element_shape, Value max_num_elements);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value element_shape, Value max_num_elements);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // Returns type of the TensorList element produced by this op.
    TensorType element_type() { return handle_dtype().getSubtypes()[0]; }

    // Returns data type of the result handle. Returned type contains type of
    // the TensorList element as a subtype.
    VariantType handle_dtype() {
      return getElementTypeOrSelf(handle().getType()).cast<TF::VariantType>();
    }
  
};

//===----------------------------------------------------------------------===//
// TF::EnqueueTPUEmbeddingRaggedTensorBatchOp declarations
//===----------------------------------------------------------------------===//

class EnqueueTPUEmbeddingRaggedTensorBatchOpAdaptor {
public:
  EnqueueTPUEmbeddingRaggedTensorBatchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EnqueueTPUEmbeddingRaggedTensorBatchOpAdaptor(EnqueueTPUEmbeddingRaggedTensorBatchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange sample_splits();
  ValueRange embedding_indices();
  ValueRange aggregation_weights();
  Value mode_override();
  IntegerAttr device_ordinal();
  ArrayAttr combiners();
  ArrayAttr table_ids();
  ArrayAttr max_sequence_lengths();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EnqueueTPUEmbeddingRaggedTensorBatchOp : public Op<EnqueueTPUEmbeddingRaggedTensorBatchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EnqueueTPUEmbeddingRaggedTensorBatchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range sample_splits();
  Operation::operand_range embedding_indices();
  Operation::operand_range aggregation_weights();
  Value mode_override();
  ::mlir::MutableOperandRange sample_splitsMutable();
  ::mlir::MutableOperandRange embedding_indicesMutable();
  ::mlir::MutableOperandRange aggregation_weightsMutable();
  ::mlir::MutableOperandRange mode_overrideMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr device_ordinalAttr();
  APInt device_ordinal();
  ArrayAttr combinersAttr();
  ArrayAttr combiners();
  ArrayAttr table_idsAttr();
  ArrayAttr table_ids();
  ArrayAttr max_sequence_lengthsAttr();
  ArrayAttr max_sequence_lengths();
  Type T1();
  Type T2();
  Type T3();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void device_ordinalAttr(IntegerAttr attr);
  void combinersAttr(ArrayAttr attr);
  void table_idsAttr(ArrayAttr attr);
  void max_sequence_lengthsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange sample_splits, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, IntegerAttr device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange sample_splits, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, IntegerAttr device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange sample_splits, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, APInt device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange sample_splits, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, APInt device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::EnqueueTPUEmbeddingSparseTensorBatchOp declarations
//===----------------------------------------------------------------------===//

class EnqueueTPUEmbeddingSparseTensorBatchOpAdaptor {
public:
  EnqueueTPUEmbeddingSparseTensorBatchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EnqueueTPUEmbeddingSparseTensorBatchOpAdaptor(EnqueueTPUEmbeddingSparseTensorBatchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange sample_indices();
  ValueRange embedding_indices();
  ValueRange aggregation_weights();
  Value mode_override();
  IntegerAttr device_ordinal();
  ArrayAttr combiners();
  ArrayAttr table_ids();
  ArrayAttr max_sequence_lengths();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EnqueueTPUEmbeddingSparseTensorBatchOp : public Op<EnqueueTPUEmbeddingSparseTensorBatchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EnqueueTPUEmbeddingSparseTensorBatchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range sample_indices();
  Operation::operand_range embedding_indices();
  Operation::operand_range aggregation_weights();
  Value mode_override();
  ::mlir::MutableOperandRange sample_indicesMutable();
  ::mlir::MutableOperandRange embedding_indicesMutable();
  ::mlir::MutableOperandRange aggregation_weightsMutable();
  ::mlir::MutableOperandRange mode_overrideMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr device_ordinalAttr();
  APInt device_ordinal();
  ArrayAttr combinersAttr();
  ArrayAttr combiners();
  ArrayAttr table_idsAttr();
  ArrayAttr table_ids();
  ArrayAttr max_sequence_lengthsAttr();
  ArrayAttr max_sequence_lengths();
  Type T1();
  Type T2();
  Type T3();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void device_ordinalAttr(IntegerAttr attr);
  void combinersAttr(ArrayAttr attr);
  void table_idsAttr(ArrayAttr attr);
  void max_sequence_lengthsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange sample_indices, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, IntegerAttr device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange sample_indices, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, IntegerAttr device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange sample_indices, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, APInt device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange sample_indices, ValueRange embedding_indices, ValueRange aggregation_weights, Value mode_override, APInt device_ordinal, ArrayAttr combiners, ArrayAttr table_ids, ArrayAttr max_sequence_lengths);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::EnsureShapeOp declarations
//===----------------------------------------------------------------------===//

class EnsureShapeOpAdaptor {
public:
  EnsureShapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EnsureShapeOpAdaptor(EnsureShapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Attribute shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EnsureShapeOp : public Op<EnsureShapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EnsureShapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Attribute shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> shape();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void shapeAttr(Attribute attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Attribute shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Attribute shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, llvm::Optional<llvm::ArrayRef<int64_t>> shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, llvm::Optional<llvm::ArrayRef<int64_t>> shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::EqualOp declarations
//===----------------------------------------------------------------------===//

class EqualOpAdaptor {
public:
  EqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EqualOpAdaptor(EqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  BoolAttr incompatible_shape_error();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EqualOp : public Op<EqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  BoolAttr incompatible_shape_errorAttr();
  bool incompatible_shape_error();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void incompatible_shape_errorAttr(BoolAttr attr);
  static void build(OpBuilder& builder, OperationState& result, Value  x, Value  y, BoolAttr incompatible_shape_error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y, BoolAttr incompatible_shape_error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, BoolAttr incompatible_shape_error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y, bool incompatible_shape_error = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, bool incompatible_shape_error = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ErfOp declarations
//===----------------------------------------------------------------------===//

class ErfOpAdaptor {
public:
  ErfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ErfOpAdaptor(ErfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ErfOp : public Op<ErfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ErfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ErfcOp declarations
//===----------------------------------------------------------------------===//

class ErfcOpAdaptor {
public:
  ErfcOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ErfcOpAdaptor(ErfcOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ErfcOp : public Op<ErfcOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ErfcOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ErfinvOp declarations
//===----------------------------------------------------------------------===//

class ErfinvOpAdaptor {
public:
  ErfinvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ErfinvOpAdaptor(ErfinvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ErfinvOp : public Op<ErfinvOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ErfinvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ExpOp declarations
//===----------------------------------------------------------------------===//

class ExpOpAdaptor {
public:
  ExpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExpOpAdaptor(ExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExpOp : public Op<ExpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ExpandDimsOp declarations
//===----------------------------------------------------------------------===//

class ExpandDimsOpAdaptor {
public:
  ExpandDimsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExpandDimsOpAdaptor(ExpandDimsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value dim();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExpandDimsOp : public Op<ExpandDimsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExpandDimsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value dim();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange dimMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tdim();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value  condition, Value  dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value dim);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::Expm1Op declarations
//===----------------------------------------------------------------------===//

class Expm1OpAdaptor {
public:
  Expm1OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Expm1OpAdaptor(Expm1Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Expm1Op : public Op<Expm1Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Expm1OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FFT2DOp declarations
//===----------------------------------------------------------------------===//

class FFT2DOpAdaptor {
public:
  FFT2DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FFT2DOpAdaptor(FFT2DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FFT2DOp : public Op<FFT2DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FFT2DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FFT3DOp declarations
//===----------------------------------------------------------------------===//

class FFT3DOpAdaptor {
public:
  FFT3DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FFT3DOpAdaptor(FFT3DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FFT3DOp : public Op<FFT3DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FFT3DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FFTOp declarations
//===----------------------------------------------------------------------===//

class FFTOpAdaptor {
public:
  FFTOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FFTOpAdaptor(FFTOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FFTOp : public Op<FFTOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FFTOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FakeParamOp declarations
//===----------------------------------------------------------------------===//

class FakeParamOpAdaptor {
public:
  FakeParamOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FakeParamOpAdaptor(FakeParamOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Attribute shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FakeParamOp : public Op<FakeParamOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FakeParamOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Attribute shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> shape();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void shapeAttr(Attribute attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Attribute shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Attribute shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, llvm::Optional<llvm::ArrayRef<int64_t>> shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, llvm::Optional<llvm::ArrayRef<int64_t>> shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FakeQuantWithMinMaxArgsOp declarations
//===----------------------------------------------------------------------===//

class FakeQuantWithMinMaxArgsOpAdaptor {
public:
  FakeQuantWithMinMaxArgsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FakeQuantWithMinMaxArgsOpAdaptor(FakeQuantWithMinMaxArgsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value inputs();
  FloatAttr min();
  FloatAttr max();
  IntegerAttr num_bits();
  BoolAttr narrow_range();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FakeQuantWithMinMaxArgsOp : public Op<FakeQuantWithMinMaxArgsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FakeQuantWithMinMaxArgsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value outputs();
  FloatAttr minAttr();
  APFloat min();
  FloatAttr maxAttr();
  APFloat max();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  void minAttr(FloatAttr attr);
  void maxAttr(FloatAttr attr);
  void num_bitsAttr(IntegerAttr attr);
  void narrow_rangeAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FakeQuantWithMinMaxVarsOp declarations
//===----------------------------------------------------------------------===//

class FakeQuantWithMinMaxVarsOpAdaptor {
public:
  FakeQuantWithMinMaxVarsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FakeQuantWithMinMaxVarsOpAdaptor(FakeQuantWithMinMaxVarsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value inputs();
  Value min();
  Value max();
  IntegerAttr num_bits();
  BoolAttr narrow_range();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FakeQuantWithMinMaxVarsOp : public Op<FakeQuantWithMinMaxVarsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FakeQuantWithMinMaxVarsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value inputs();
  Value min();
  Value max();
  ::mlir::MutableOperandRange inputsMutable();
  ::mlir::MutableOperandRange minMutable();
  ::mlir::MutableOperandRange maxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value outputs();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  void num_bitsAttr(IntegerAttr attr);
  void narrow_rangeAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, Value min, Value max, IntegerAttr num_bits, BoolAttr narrow_range);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, Value min, Value max, IntegerAttr num_bits, BoolAttr narrow_range);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, Value min, Value max, APInt num_bits, bool narrow_range = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, Value min, Value max, APInt num_bits, bool narrow_range = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FakeQuantWithMinMaxVarsPerChannelOp declarations
//===----------------------------------------------------------------------===//

class FakeQuantWithMinMaxVarsPerChannelOpAdaptor {
public:
  FakeQuantWithMinMaxVarsPerChannelOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FakeQuantWithMinMaxVarsPerChannelOpAdaptor(FakeQuantWithMinMaxVarsPerChannelOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value inputs();
  Value min();
  Value max();
  IntegerAttr num_bits();
  BoolAttr narrow_range();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FakeQuantWithMinMaxVarsPerChannelOp : public Op<FakeQuantWithMinMaxVarsPerChannelOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FakeQuantWithMinMaxVarsPerChannelOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value inputs();
  Value min();
  Value max();
  ::mlir::MutableOperandRange inputsMutable();
  ::mlir::MutableOperandRange minMutable();
  ::mlir::MutableOperandRange maxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value outputs();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  void num_bitsAttr(IntegerAttr attr);
  void narrow_rangeAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, Value min, Value max, IntegerAttr num_bits, BoolAttr narrow_range);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, Value min, Value max, IntegerAttr num_bits, BoolAttr narrow_range);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, Value min, Value max, APInt num_bits, bool narrow_range = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, Value min, Value max, APInt num_bits, bool narrow_range = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FillOp declarations
//===----------------------------------------------------------------------===//

class FillOpAdaptor {
public:
  FillOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FillOpAdaptor(FillOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value dims();
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FillOp : public Op<FillOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FillOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value dims();
  Value value();
  ::mlir::MutableOperandRange dimsMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type index_type();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value dims, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value dims, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value dims, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FloorDivOp declarations
//===----------------------------------------------------------------------===//

class FloorDivOpAdaptor {
public:
  FloorDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FloorDivOpAdaptor(FloorDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FloorDivOp : public Op<FloorDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FloorDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FloorModOp declarations
//===----------------------------------------------------------------------===//

class FloorModOpAdaptor {
public:
  FloorModOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FloorModOpAdaptor(FloorModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FloorModOp : public Op<FloorModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FloorModOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FloorOp declarations
//===----------------------------------------------------------------------===//

class FloorOpAdaptor {
public:
  FloorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FloorOpAdaptor(FloorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FloorOp : public Op<FloorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FloorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FusedBatchNormExOp declarations
//===----------------------------------------------------------------------===//

class FusedBatchNormExOpAdaptor {
public:
  FusedBatchNormExOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusedBatchNormExOpAdaptor(FusedBatchNormExOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  ValueRange side_input();
  FloatAttr epsilon();
  FloatAttr exponential_avg_factor();
  StringAttr activation_mode();
  StringAttr data_format();
  BoolAttr is_training();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusedBatchNormExOp : public Op<FusedBatchNormExOp, OpTrait::ZeroRegion, OpTrait::NResults<6>::Impl, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<5>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FusedBatchNormExOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  Operation::operand_range side_input();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange meanMutable();
  ::mlir::MutableOperandRange varianceMutable();
  ::mlir::MutableOperandRange side_inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Value batch_mean();
  Value batch_variance();
  Value reserve_space_1();
  Value reserve_space_2();
  Value reserve_space_3();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  FloatAttr exponential_avg_factorAttr();
  APFloat exponential_avg_factor();
  StringAttr activation_modeAttr();
  StringRef activation_mode();
  StringAttr data_formatAttr();
  StringRef data_format();
  BoolAttr is_trainingAttr();
  bool is_training();
  Type T();
  Type U();
  size_t num_side_inputs();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void epsilonAttr(FloatAttr attr);
  void exponential_avg_factorAttr(FloatAttr attr);
  void activation_modeAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  void is_trainingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Type batch_mean, Type batch_variance, Type reserve_space_1, Type reserve_space_2, Type reserve_space_3, Value x, Value scale, Value offset, Value mean, Value variance, ValueRange side_input, FloatAttr epsilon, FloatAttr exponential_avg_factor, StringAttr activation_mode, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value scale, Value offset, Value mean, Value variance, ValueRange side_input, FloatAttr epsilon, FloatAttr exponential_avg_factor, StringAttr activation_mode, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Type batch_mean, Type batch_variance, Type reserve_space_1, Type reserve_space_2, Type reserve_space_3, Value x, Value scale, Value offset, Value mean, Value variance, ValueRange side_input, APFloat epsilon, APFloat exponential_avg_factor, StringRef activation_mode = "Identity", StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value scale, Value offset, Value mean, Value variance, ValueRange side_input, APFloat epsilon, APFloat exponential_avg_factor, StringRef activation_mode = "Identity", StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FusedBatchNormGradOp declarations
//===----------------------------------------------------------------------===//

class FusedBatchNormGradOpAdaptor {
public:
  FusedBatchNormGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusedBatchNormGradOpAdaptor(FusedBatchNormGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y_backprop();
  Value x();
  Value scale();
  Value reserve_space_1();
  Value reserve_space_2();
  FloatAttr epsilon();
  StringAttr data_format();
  BoolAttr is_training();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusedBatchNormGradOp : public Op<FusedBatchNormGradOp, OpTrait::ZeroRegion, OpTrait::NResults<5>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FusedBatchNormGradOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y_backprop();
  Value x();
  Value scale();
  Value reserve_space_1();
  Value reserve_space_2();
  ::mlir::MutableOperandRange y_backpropMutable();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange reserve_space_1Mutable();
  ::mlir::MutableOperandRange reserve_space_2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value x_backprop();
  Value scale_backprop();
  Value offset_backprop();
  Value reserve_space_3();
  Value reserve_space_4();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  StringAttr data_formatAttr();
  StringRef data_format();
  BoolAttr is_trainingAttr();
  bool is_training();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void epsilonAttr(FloatAttr attr);
  void data_formatAttr(StringAttr attr);
  void is_trainingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type x_backprop, Type scale_backprop, Type offset_backprop, Type reserve_space_3, Type reserve_space_4, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, FloatAttr epsilon, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, FloatAttr epsilon, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type x_backprop, Type scale_backprop, Type offset_backprop, Type reserve_space_3, Type reserve_space_4, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, APFloat epsilon, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, APFloat epsilon, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FusedBatchNormGradV2Op declarations
//===----------------------------------------------------------------------===//

class FusedBatchNormGradV2OpAdaptor {
public:
  FusedBatchNormGradV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusedBatchNormGradV2OpAdaptor(FusedBatchNormGradV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y_backprop();
  Value x();
  Value scale();
  Value reserve_space_1();
  Value reserve_space_2();
  FloatAttr epsilon();
  StringAttr data_format();
  BoolAttr is_training();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusedBatchNormGradV2Op : public Op<FusedBatchNormGradV2Op, OpTrait::ZeroRegion, OpTrait::NResults<5>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FusedBatchNormGradV2OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y_backprop();
  Value x();
  Value scale();
  Value reserve_space_1();
  Value reserve_space_2();
  ::mlir::MutableOperandRange y_backpropMutable();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange reserve_space_1Mutable();
  ::mlir::MutableOperandRange reserve_space_2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value x_backprop();
  Value scale_backprop();
  Value offset_backprop();
  Value reserve_space_3();
  Value reserve_space_4();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  StringAttr data_formatAttr();
  StringRef data_format();
  BoolAttr is_trainingAttr();
  bool is_training();
  Type T();
  Type U();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void epsilonAttr(FloatAttr attr);
  void data_formatAttr(StringAttr attr);
  void is_trainingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type x_backprop, Type scale_backprop, Type offset_backprop, Type reserve_space_3, Type reserve_space_4, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, FloatAttr epsilon, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, FloatAttr epsilon, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type x_backprop, Type scale_backprop, Type offset_backprop, Type reserve_space_3, Type reserve_space_4, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, APFloat epsilon, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, APFloat epsilon, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FusedBatchNormGradV3Op declarations
//===----------------------------------------------------------------------===//

class FusedBatchNormGradV3OpAdaptor {
public:
  FusedBatchNormGradV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusedBatchNormGradV3OpAdaptor(FusedBatchNormGradV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y_backprop();
  Value x();
  Value scale();
  Value reserve_space_1();
  Value reserve_space_2();
  Value reserve_space_3();
  FloatAttr epsilon();
  StringAttr data_format();
  BoolAttr is_training();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusedBatchNormGradV3Op : public Op<FusedBatchNormGradV3Op, OpTrait::ZeroRegion, OpTrait::NResults<5>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<6>::Impl, MemoryEffectOpInterface::Trait, LayoutSensitiveInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FusedBatchNormGradV3OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y_backprop();
  Value x();
  Value scale();
  Value reserve_space_1();
  Value reserve_space_2();
  Value reserve_space_3();
  ::mlir::MutableOperandRange y_backpropMutable();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange reserve_space_1Mutable();
  ::mlir::MutableOperandRange reserve_space_2Mutable();
  ::mlir::MutableOperandRange reserve_space_3Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value x_backprop();
  Value scale_backprop();
  Value offset_backprop();
  Value reserve_space_4();
  Value reserve_space_5();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  StringAttr data_formatAttr();
  StringRef data_format();
  BoolAttr is_trainingAttr();
  bool is_training();
  Type T();
  Type U();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void epsilonAttr(FloatAttr attr);
  void data_formatAttr(StringAttr attr);
  void is_trainingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type x_backprop, Type scale_backprop, Type offset_backprop, Type reserve_space_4, Type reserve_space_5, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, Value reserve_space_3, FloatAttr epsilon, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, Value reserve_space_3, FloatAttr epsilon, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type x_backprop, Type scale_backprop, Type offset_backprop, Type reserve_space_4, Type reserve_space_5, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, Value reserve_space_3, APFloat epsilon, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y_backprop, Value x, Value scale, Value reserve_space_1, Value reserve_space_2, Value reserve_space_3, APFloat epsilon, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_LayoutSensitiveInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {0, 1}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {0}; }
    StringRef GetOptimalLayout(const RuntimeDevices& devices);
    LogicalResult UpdateDataFormat(StringRef data_format);
  
};

//===----------------------------------------------------------------------===//
// TF::FusedBatchNormOp declarations
//===----------------------------------------------------------------------===//

class FusedBatchNormOpAdaptor {
public:
  FusedBatchNormOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusedBatchNormOpAdaptor(FusedBatchNormOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  FloatAttr epsilon();
  FloatAttr exponential_avg_factor();
  StringAttr data_format();
  BoolAttr is_training();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusedBatchNormOp : public Op<FusedBatchNormOp, OpTrait::ZeroRegion, OpTrait::NResults<5>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FusedBatchNormOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange meanMutable();
  ::mlir::MutableOperandRange varianceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Value batch_mean();
  Value batch_variance();
  Value reserve_space_1();
  Value reserve_space_2();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  FloatAttr exponential_avg_factorAttr();
  APFloat exponential_avg_factor();
  StringAttr data_formatAttr();
  StringRef data_format();
  BoolAttr is_trainingAttr();
  bool is_training();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void epsilonAttr(FloatAttr attr);
  void exponential_avg_factorAttr(FloatAttr attr);
  void data_formatAttr(StringAttr attr);
  void is_trainingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Type batch_mean, Type batch_variance, Type reserve_space_1, Type reserve_space_2, Value x, Value scale, Value offset, Value mean, Value variance, FloatAttr epsilon, FloatAttr exponential_avg_factor, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value scale, Value offset, Value mean, Value variance, FloatAttr epsilon, FloatAttr exponential_avg_factor, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Type batch_mean, Type batch_variance, Type reserve_space_1, Type reserve_space_2, Value x, Value scale, Value offset, Value mean, Value variance, APFloat epsilon, APFloat exponential_avg_factor, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value scale, Value offset, Value mean, Value variance, APFloat epsilon, APFloat exponential_avg_factor, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::FusedBatchNormV3Op declarations
//===----------------------------------------------------------------------===//

class FusedBatchNormV3OpAdaptor {
public:
  FusedBatchNormV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FusedBatchNormV3OpAdaptor(FusedBatchNormV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  FloatAttr epsilon();
  FloatAttr exponential_avg_factor();
  StringAttr data_format();
  BoolAttr is_training();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FusedBatchNormV3Op : public Op<FusedBatchNormV3Op, OpTrait::ZeroRegion, OpTrait::NResults<6>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, FoldOperandsTransposeInterface::Trait, LayoutSensitiveInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FusedBatchNormV3OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value scale();
  Value offset();
  Value mean();
  Value variance();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange scaleMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange meanMutable();
  ::mlir::MutableOperandRange varianceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Value batch_mean();
  Value batch_variance();
  Value reserve_space_1();
  Value reserve_space_2();
  Value reserve_space_3();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  FloatAttr exponential_avg_factorAttr();
  APFloat exponential_avg_factor();
  StringAttr data_formatAttr();
  StringRef data_format();
  BoolAttr is_trainingAttr();
  bool is_training();
  Type T();
  Type U();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void epsilonAttr(FloatAttr attr);
  void exponential_avg_factorAttr(FloatAttr attr);
  void data_formatAttr(StringAttr attr);
  void is_trainingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Type batch_mean, Type batch_variance, Type reserve_space_1, Type reserve_space_2, Type reserve_space_3, Value x, Value scale, Value offset, Value mean, Value variance, FloatAttr epsilon, FloatAttr exponential_avg_factor, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value scale, Value offset, Value mean, Value variance, FloatAttr epsilon, FloatAttr exponential_avg_factor, StringAttr data_format, BoolAttr is_training);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Type batch_mean, Type batch_variance, Type reserve_space_1, Type reserve_space_2, Type reserve_space_3, Value x, Value scale, Value offset, Value mean, Value variance, APFloat epsilon, APFloat exponential_avg_factor, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value scale, Value offset, Value mean, Value variance, APFloat epsilon, APFloat exponential_avg_factor, StringRef data_format = "NHWC", bool is_training = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_FoldOperandsTransposeInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {0}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {0}; }
    LogicalResult FoldOperandsPermutation(ArrayRef<int64_t> permutation);

    // TF_LayoutSensitiveInterface:
    StringRef GetOptimalLayout(const RuntimeDevices& devices);
    LogicalResult UpdateDataFormat(StringRef data_format);
  
};

//===----------------------------------------------------------------------===//
// TF::GatherNdOp declarations
//===----------------------------------------------------------------------===//

class GatherNdOpAdaptor {
public:
  GatherNdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GatherNdOpAdaptor(GatherNdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value params();
  Value indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GatherNdOp : public Op<GatherNdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GatherNdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value params();
  Value indices();
  ::mlir::MutableOperandRange paramsMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type Tparams();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value params, Value indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value params, Value indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::GatherOp declarations
//===----------------------------------------------------------------------===//

class GatherOpAdaptor {
public:
  GatherOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GatherOpAdaptor(GatherOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value params();
  Value indices();
  BoolAttr validate_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GatherOp : public Op<GatherOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GatherOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value params();
  Value indices();
  ::mlir::MutableOperandRange paramsMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr validate_indicesAttr();
  bool validate_indices();
  Type Tindices();
  Type Tparams();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void validate_indicesAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value params, Value indices, BoolAttr validate_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value params, Value indices, BoolAttr validate_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value params, Value indices, bool validate_indices = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value params, Value indices, bool validate_indices = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::GatherV2Op declarations
//===----------------------------------------------------------------------===//

class GatherV2OpAdaptor {
public:
  GatherV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GatherV2OpAdaptor(GatherV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value params();
  Value indices();
  Value axis();
  IntegerAttr batch_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GatherV2Op : public Op<GatherV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GatherV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value params();
  Value indices();
  Value axis();
  ::mlir::MutableOperandRange paramsMutable();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange axisMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr batch_dimsAttr();
  APInt batch_dims();
  Type Tindices();
  Type Tparams();
  Type Taxis();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void batch_dimsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value params, Value indices, Value axis, IntegerAttr batch_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value params, Value indices, Value axis, IntegerAttr batch_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value params, Value indices, Value axis, APInt batch_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value params, Value indices, Value axis, APInt batch_dims);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::GreaterEqualOp declarations
//===----------------------------------------------------------------------===//

class GreaterEqualOpAdaptor {
public:
  GreaterEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GreaterEqualOpAdaptor(GreaterEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GreaterEqualOp : public Op<GreaterEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GreaterEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::GreaterOp declarations
//===----------------------------------------------------------------------===//

class GreaterOpAdaptor {
public:
  GreaterOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GreaterOpAdaptor(GreaterOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GreaterOp : public Op<GreaterOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GreaterOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::HSVToRGBOp declarations
//===----------------------------------------------------------------------===//

class HSVToRGBOpAdaptor {
public:
  HSVToRGBOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  HSVToRGBOpAdaptor(HSVToRGBOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value images();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class HSVToRGBOp : public Op<HSVToRGBOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = HSVToRGBOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value images();
  ::mlir::MutableOperandRange imagesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value images);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::HashTableV2Op declarations
//===----------------------------------------------------------------------===//

class HashTableV2OpAdaptor {
public:
  HashTableV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  HashTableV2OpAdaptor(HashTableV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr container();
  StringAttr shared_name();
  BoolAttr use_node_name_sharing();
  TypeAttr key_dtype();
  TypeAttr value_dtype();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class HashTableV2Op : public Op<HashTableV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = HashTableV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value table_handle();
  StringAttr containerAttr();
  StringRef container();
  StringAttr shared_nameAttr();
  StringRef shared_name();
  BoolAttr use_node_name_sharingAttr();
  bool use_node_name_sharing();
  TypeAttr key_dtypeAttr();
  Type key_dtype();
  TypeAttr value_dtypeAttr();
  Type value_dtype();
  void containerAttr(StringAttr attr);
  void shared_nameAttr(StringAttr attr);
  void use_node_name_sharingAttr(BoolAttr attr);
  void key_dtypeAttr(TypeAttr attr);
  void value_dtypeAttr(TypeAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type table_handle, StringAttr container, StringAttr shared_name, BoolAttr use_node_name_sharing, TypeAttr key_dtype, TypeAttr value_dtype);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr container, StringAttr shared_name, BoolAttr use_node_name_sharing, TypeAttr key_dtype, TypeAttr value_dtype);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type table_handle, StringRef container, StringRef shared_name, bool use_node_name_sharing, TypeAttr key_dtype, TypeAttr value_dtype);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef container, StringRef shared_name, bool use_node_name_sharing, TypeAttr key_dtype, TypeAttr value_dtype);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::IFFT2DOp declarations
//===----------------------------------------------------------------------===//

class IFFT2DOpAdaptor {
public:
  IFFT2DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IFFT2DOpAdaptor(IFFT2DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IFFT2DOp : public Op<IFFT2DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IFFT2DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IFFT3DOp declarations
//===----------------------------------------------------------------------===//

class IFFT3DOpAdaptor {
public:
  IFFT3DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IFFT3DOpAdaptor(IFFT3DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IFFT3DOp : public Op<IFFT3DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IFFT3DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IFFTOp declarations
//===----------------------------------------------------------------------===//

class IFFTOpAdaptor {
public:
  IFFTOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IFFTOpAdaptor(IFFTOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IFFTOp : public Op<IFFTOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IFFTOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IRFFT2DOp declarations
//===----------------------------------------------------------------------===//

class IRFFT2DOpAdaptor {
public:
  IRFFT2DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IRFFT2DOpAdaptor(IRFFT2DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IRFFT2DOp : public Op<IRFFT2DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IRFFT2DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange fft_lengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Treal();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IRFFT3DOp declarations
//===----------------------------------------------------------------------===//

class IRFFT3DOpAdaptor {
public:
  IRFFT3DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IRFFT3DOpAdaptor(IRFFT3DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IRFFT3DOp : public Op<IRFFT3DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IRFFT3DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange fft_lengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Treal();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IRFFTOp declarations
//===----------------------------------------------------------------------===//

class IRFFTOpAdaptor {
public:
  IRFFTOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IRFFTOpAdaptor(IRFFTOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IRFFTOp : public Op<IRFFTOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IRFFTOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange fft_lengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Treal();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IdentityNOp declarations
//===----------------------------------------------------------------------===//

class IdentityNOpAdaptor {
public:
  IdentityNOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IdentityNOpAdaptor(IdentityNOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IdentityNOp : public Op<IdentityNOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IdentityNOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  mlir::OperandElementTypeRange T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IdentityOp declarations
//===----------------------------------------------------------------------===//

class IdentityOpAdaptor {
public:
  IdentityOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IdentityOpAdaptor(IdentityOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IdentityOp : public Op<IdentityOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::TF::OperandsSameAsResultsTypeOrRef, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IdentityOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::IfOp declarations
//===----------------------------------------------------------------------===//

class IfOpAdaptor {
public:
  IfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IfOpAdaptor(IfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value cond();
  ValueRange input();
  FlatSymbolRefAttr then_branch();
  FlatSymbolRefAttr else_branch();
  BoolAttr is_stateless();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IfOp : public Op<IfOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value cond();
  Operation::operand_range input();
  ::mlir::MutableOperandRange condMutable();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  FlatSymbolRefAttr then_branchAttr();
  StringRef then_branch();
  FlatSymbolRefAttr else_branchAttr();
  StringRef else_branch();
  BoolAttr is_statelessAttr();
  bool is_stateless();
  Type Tcond();
  mlir::OperandElementTypeRange Tin();
  mlir::ResultElementTypeRange Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void then_branchAttr(FlatSymbolRefAttr attr);
  void else_branchAttr(FlatSymbolRefAttr attr);
  void is_statelessAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value cond, ValueRange input, FlatSymbolRefAttr then_branch, FlatSymbolRefAttr else_branch, BoolAttr is_stateless);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value cond, ValueRange input, StringRef then_branch, StringRef else_branch, bool is_stateless);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::IfRegionOp declarations
//===----------------------------------------------------------------------===//

class IfRegionOpAdaptor {
public:
  IfRegionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IfRegionOpAdaptor(IfRegionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value cond();
  BoolAttr is_stateless();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IfRegionOp : public Op<IfRegionOp, OpTrait::NRegions<2>::Impl, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IfRegionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value cond();
  ::mlir::MutableOperandRange condMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  Region &then_branch();
  Region &else_branch();
  BoolAttr is_statelessAttr();
  bool is_stateless();
  Type Tcond();
  mlir::OperandElementTypeRange Tin();
  mlir::ResultElementTypeRange Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void is_statelessAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value cond, BoolAttr is_stateless);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value cond, bool is_stateless);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::IgammaGradAOp declarations
//===----------------------------------------------------------------------===//

class IgammaGradAOpAdaptor {
public:
  IgammaGradAOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IgammaGradAOpAdaptor(IgammaGradAOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IgammaGradAOp : public Op<IgammaGradAOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IgammaGradAOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value x();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value a, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IgammaOp declarations
//===----------------------------------------------------------------------===//

class IgammaOpAdaptor {
public:
  IgammaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IgammaOpAdaptor(IgammaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IgammaOp : public Op<IgammaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IgammaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value x();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value a, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IgammacOp declarations
//===----------------------------------------------------------------------===//

class IgammacOpAdaptor {
public:
  IgammacOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IgammacOpAdaptor(IgammacOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IgammacOp : public Op<IgammacOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IgammacOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value x();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value a, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ImagOp declarations
//===----------------------------------------------------------------------===//

class ImagOpAdaptor {
public:
  ImagOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ImagOpAdaptor(ImagOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ImagOp : public Op<ImagOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ImagOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::InfeedDequeueTupleOp declarations
//===----------------------------------------------------------------------===//

class InfeedDequeueTupleOpAdaptor {
public:
  InfeedDequeueTupleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InfeedDequeueTupleOpAdaptor(InfeedDequeueTupleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr _XlaSharding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InfeedDequeueTupleOp : public Op<InfeedDequeueTupleOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InfeedDequeueTupleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  StringAttr _XlaShardingAttr();
  Optional< StringRef > _XlaSharding();
  mlir::TF::ResultShapeRange shapes();
  mlir::ResultElementTypeRange dtypes();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void _XlaShardingAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, /*optional*/StringAttr _XlaSharding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::InplaceUpdateOp declarations
//===----------------------------------------------------------------------===//

class InplaceUpdateOpAdaptor {
public:
  InplaceUpdateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InplaceUpdateOpAdaptor(InplaceUpdateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value i();
  Value v();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InplaceUpdateOp : public Op<InplaceUpdateOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InplaceUpdateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value i();
  Value v();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange iMutable();
  ::mlir::MutableOperandRange vMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, Value i, Value v);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value i, Value v);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::InvOp declarations
//===----------------------------------------------------------------------===//

class InvOpAdaptor {
public:
  InvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InvOpAdaptor(InvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InvOp : public Op<InvOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::InvertOp declarations
//===----------------------------------------------------------------------===//

class InvertOpAdaptor {
public:
  InvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InvertOpAdaptor(InvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InvertOp : public Op<InvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::InvertPermutationOp declarations
//===----------------------------------------------------------------------===//

class InvertPermutationOpAdaptor {
public:
  InvertPermutationOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InvertPermutationOpAdaptor(InvertPermutationOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InvertPermutationOp : public Op<InvertPermutationOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InvertPermutationOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IsFiniteOp declarations
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
class IsFiniteOp : public Op<IsFiniteOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
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
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IsInfOp declarations
//===----------------------------------------------------------------------===//

class IsInfOpAdaptor {
public:
  IsInfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IsInfOpAdaptor(IsInfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IsInfOp : public Op<IsInfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IsInfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IsNanOp declarations
//===----------------------------------------------------------------------===//

class IsNanOpAdaptor {
public:
  IsNanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IsNanOpAdaptor(IsNanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IsNanOp : public Op<IsNanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IsNanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::IteratorGetNextOp declarations
//===----------------------------------------------------------------------===//

class IteratorGetNextOpAdaptor {
public:
  IteratorGetNextOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IteratorGetNextOpAdaptor(IteratorGetNextOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value iterator();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IteratorGetNextOp : public Op<IteratorGetNextOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IteratorGetNextOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value iterator();
  ::mlir::MutableOperandRange iteratorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range components();
  mlir::TF::ResultShapeRange output_shapes();
  mlir::ResultElementTypeRange output_types();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> components, Value iterator);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::L2LossOp declarations
//===----------------------------------------------------------------------===//

class L2LossOpAdaptor {
public:
  L2LossOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  L2LossOpAdaptor(L2LossOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value t();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class L2LossOp : public Op<L2LossOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = L2LossOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value t();
  ::mlir::MutableOperandRange tMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value t);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value t);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LRNGradOp declarations
//===----------------------------------------------------------------------===//

class LRNGradOpAdaptor {
public:
  LRNGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LRNGradOpAdaptor(LRNGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_grads();
  Value input_image();
  Value output_image();
  IntegerAttr depth_radius();
  FloatAttr bias();
  FloatAttr alpha();
  FloatAttr beta();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LRNGradOp : public Op<LRNGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LRNGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_grads();
  Value input_image();
  Value output_image();
  ::mlir::MutableOperandRange input_gradsMutable();
  ::mlir::MutableOperandRange input_imageMutable();
  ::mlir::MutableOperandRange output_imageMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr depth_radiusAttr();
  APInt depth_radius();
  FloatAttr biasAttr();
  APFloat bias();
  FloatAttr alphaAttr();
  APFloat alpha();
  FloatAttr betaAttr();
  APFloat beta();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void depth_radiusAttr(IntegerAttr attr);
  void biasAttr(FloatAttr attr);
  void alphaAttr(FloatAttr attr);
  void betaAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input_grads, Value input_image, Value output_image, IntegerAttr depth_radius, FloatAttr bias, FloatAttr alpha, FloatAttr beta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_grads, Value input_image, Value output_image, IntegerAttr depth_radius, FloatAttr bias, FloatAttr alpha, FloatAttr beta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input_grads, Value input_image, Value output_image, APInt depth_radius, APFloat bias, APFloat alpha, APFloat beta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_grads, Value input_image, Value output_image, APInt depth_radius, APFloat bias, APFloat alpha, APFloat beta);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LRNOp declarations
//===----------------------------------------------------------------------===//

class LRNOpAdaptor {
public:
  LRNOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LRNOpAdaptor(LRNOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  IntegerAttr depth_radius();
  FloatAttr bias();
  FloatAttr alpha();
  FloatAttr beta();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LRNOp : public Op<LRNOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LRNOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr depth_radiusAttr();
  APInt depth_radius();
  FloatAttr biasAttr();
  APFloat bias();
  FloatAttr alphaAttr();
  APFloat alpha();
  FloatAttr betaAttr();
  APFloat beta();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void depth_radiusAttr(IntegerAttr attr);
  void biasAttr(FloatAttr attr);
  void alphaAttr(FloatAttr attr);
  void betaAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, IntegerAttr depth_radius, FloatAttr bias, FloatAttr alpha, FloatAttr beta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, IntegerAttr depth_radius, FloatAttr bias, FloatAttr alpha, FloatAttr beta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, APInt depth_radius, APFloat bias, APFloat alpha, APFloat beta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APInt depth_radius, APFloat bias, APFloat alpha, APFloat beta);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LeakyReluGradOp declarations
//===----------------------------------------------------------------------===//

class LeakyReluGradOpAdaptor {
public:
  LeakyReluGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LeakyReluGradOpAdaptor(LeakyReluGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gradients();
  Value features();
  FloatAttr alpha();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LeakyReluGradOp : public Op<LeakyReluGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LeakyReluGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gradients();
  Value features();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value backprops();
  FloatAttr alphaAttr();
  APFloat alpha();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void alphaAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value features, FloatAttr alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value features, FloatAttr alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value features, APFloat alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value features, APFloat alpha);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value gradients, Value features, FloatAttr alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LeakyReluOp declarations
//===----------------------------------------------------------------------===//

class LeakyReluOpAdaptor {
public:
  LeakyReluOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LeakyReluOpAdaptor(LeakyReluOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  FloatAttr alpha();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LeakyReluOp : public Op<LeakyReluOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LeakyReluOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value activations();
  FloatAttr alphaAttr();
  APFloat alpha();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void alphaAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features, FloatAttr alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features, FloatAttr alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features, APFloat alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features, APFloat alpha);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value features, FloatAttr alpha);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LeftShiftOp declarations
//===----------------------------------------------------------------------===//

class LeftShiftOpAdaptor {
public:
  LeftShiftOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LeftShiftOpAdaptor(LeftShiftOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LeftShiftOp : public Op<LeftShiftOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LeftShiftOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LegacyCallOp declarations
//===----------------------------------------------------------------------===//

class LegacyCallOpAdaptor {
public:
  LegacyCallOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LegacyCallOpAdaptor(LegacyCallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  FlatSymbolRefAttr f();
  BoolAttr _disable_call_shape_inference();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LegacyCallOp : public Op<LegacyCallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, CallOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LegacyCallOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  FlatSymbolRefAttr fAttr();
  StringRef f();
  BoolAttr _disable_call_shape_inferenceAttr();
  bool _disable_call_shape_inference();
  void fAttr(FlatSymbolRefAttr attr);
  void _disable_call_shape_inferenceAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange args, FlatSymbolRefAttr f, BoolAttr _disable_call_shape_inference);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange args, StringRef f, bool _disable_call_shape_inference = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // Gets the argument operands to the called function.
    operand_range getArgOperands() { return args(); }

    // Returns the callee of this operation.
    CallInterfaceCallable getCallableForCallee() {
      return getAttrOfType<SymbolRefAttr>("f");
    }
  
};

//===----------------------------------------------------------------------===//
// TF::LessEqualOp declarations
//===----------------------------------------------------------------------===//

class LessEqualOpAdaptor {
public:
  LessEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LessEqualOpAdaptor(LessEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LessEqualOp : public Op<LessEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LessEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LessOp declarations
//===----------------------------------------------------------------------===//

class LessOpAdaptor {
public:
  LessOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LessOpAdaptor(LessOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LessOp : public Op<LessOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LessOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LgammaOp declarations
//===----------------------------------------------------------------------===//

class LgammaOpAdaptor {
public:
  LgammaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LgammaOpAdaptor(LgammaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LgammaOp : public Op<LgammaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LgammaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LinSpaceOp declarations
//===----------------------------------------------------------------------===//

class LinSpaceOpAdaptor {
public:
  LinSpaceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LinSpaceOpAdaptor(LinSpaceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value start();
  Value stop();
  Value num();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LinSpaceOp : public Op<LinSpaceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LinSpaceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value start();
  Value stop();
  Value num();
  ::mlir::MutableOperandRange startMutable();
  ::mlir::MutableOperandRange stopMutable();
  ::mlir::MutableOperandRange numMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value start, Value stop, Value num);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value start, Value stop, Value num);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::Log1pOp declarations
//===----------------------------------------------------------------------===//

class Log1pOpAdaptor {
public:
  Log1pOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Log1pOpAdaptor(Log1pOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Log1pOp : public Op<Log1pOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Log1pOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LogOp declarations
//===----------------------------------------------------------------------===//

class LogOpAdaptor {
public:
  LogOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogOpAdaptor(LogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogOp : public Op<LogOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LogSoftmaxOp declarations
//===----------------------------------------------------------------------===//

class LogSoftmaxOpAdaptor {
public:
  LogSoftmaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogSoftmaxOpAdaptor(LogSoftmaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value logits();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogSoftmaxOp : public Op<LogSoftmaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogSoftmaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value logits();
  ::mlir::MutableOperandRange logitsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value logsoftmax();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type logsoftmax, Value logits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value logits);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value logits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LogicalAndOp declarations
//===----------------------------------------------------------------------===//

class LogicalAndOpAdaptor {
public:
  LogicalAndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalAndOpAdaptor(LogicalAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalAndOp : public Op<LogicalAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape> {
public:
  using Op::Op;
  using Adaptor = LogicalAndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LogicalNotOp declarations
//===----------------------------------------------------------------------===//

class LogicalNotOpAdaptor {
public:
  LogicalNotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalNotOpAdaptor(LogicalNotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalNotOp : public Op<LogicalNotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = LogicalNotOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LogicalOrOp declarations
//===----------------------------------------------------------------------===//

class LogicalOrOpAdaptor {
public:
  LogicalOrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalOrOpAdaptor(LogicalOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalOrOp : public Op<LogicalOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape> {
public:
  using Op::Op;
  using Adaptor = LogicalOrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::LookupTableFindV2Op declarations
//===----------------------------------------------------------------------===//

class LookupTableFindV2OpAdaptor {
public:
  LookupTableFindV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LookupTableFindV2OpAdaptor(LookupTableFindV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value table_handle();
  Value keys();
  Value default_value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LookupTableFindV2Op : public Op<LookupTableFindV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LookupTableFindV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value table_handle();
  Value keys();
  Value default_value();
  ::mlir::MutableOperandRange table_handleMutable();
  ::mlir::MutableOperandRange keysMutable();
  ::mlir::MutableOperandRange default_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value values();
  Type Tin();
  Type Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type values, Value table_handle, Value keys, Value default_value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value table_handle, Value keys, Value default_value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::LookupTableImportV2Op declarations
//===----------------------------------------------------------------------===//

class LookupTableImportV2OpAdaptor {
public:
  LookupTableImportV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LookupTableImportV2OpAdaptor(LookupTableImportV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value table_handle();
  Value keys();
  Value values();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LookupTableImportV2Op : public Op<LookupTableImportV2Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LookupTableImportV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value table_handle();
  Value keys();
  Value values();
  ::mlir::MutableOperandRange table_handleMutable();
  ::mlir::MutableOperandRange keysMutable();
  ::mlir::MutableOperandRange valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Type Tin();
  Type Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value table_handle, Value keys, Value values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value table_handle, Value keys, Value values);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::LookupTableSizeV2Op declarations
//===----------------------------------------------------------------------===//

class LookupTableSizeV2OpAdaptor {
public:
  LookupTableSizeV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LookupTableSizeV2OpAdaptor(LookupTableSizeV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value table_handle();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LookupTableSizeV2Op : public Op<LookupTableSizeV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = LookupTableSizeV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value table_handle();
  ::mlir::MutableOperandRange table_handleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value size();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type size, Value table_handle);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value table_handle);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::MapAndBatchDatasetOp declarations
//===----------------------------------------------------------------------===//

class MapAndBatchDatasetOpAdaptor {
public:
  MapAndBatchDatasetOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MapAndBatchDatasetOpAdaptor(MapAndBatchDatasetOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_dataset();
  ValueRange other_arguments();
  Value batch_size();
  Value num_parallel_calls();
  Value drop_remainder();
  SymbolRefAttr f();
  ArrayAttr output_types();
  ArrayAttr output_shapes();
  BoolAttr preserve_cardinality();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MapAndBatchDatasetOp : public Op<MapAndBatchDatasetOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<4>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MapAndBatchDatasetOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_dataset();
  Operation::operand_range other_arguments();
  Value batch_size();
  Value num_parallel_calls();
  Value drop_remainder();
  ::mlir::MutableOperandRange input_datasetMutable();
  ::mlir::MutableOperandRange other_argumentsMutable();
  ::mlir::MutableOperandRange batch_sizeMutable();
  ::mlir::MutableOperandRange num_parallel_callsMutable();
  ::mlir::MutableOperandRange drop_remainderMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  SymbolRefAttr fAttr();
  SymbolRefAttr f();
  ArrayAttr output_typesAttr();
  ArrayAttr output_types();
  ArrayAttr output_shapesAttr();
  ArrayAttr output_shapes();
  BoolAttr preserve_cardinalityAttr();
  bool preserve_cardinality();
  mlir::OperandElementTypeRange Targuments();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void fAttr(SymbolRefAttr attr);
  void output_typesAttr(ArrayAttr attr);
  void output_shapesAttr(ArrayAttr attr);
  void preserve_cardinalityAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, ValueRange other_arguments, Value batch_size, Value num_parallel_calls, Value drop_remainder, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, BoolAttr preserve_cardinality);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, ValueRange other_arguments, Value batch_size, Value num_parallel_calls, Value drop_remainder, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, BoolAttr preserve_cardinality);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, ValueRange other_arguments, Value batch_size, Value num_parallel_calls, Value drop_remainder, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, bool preserve_cardinality = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, ValueRange other_arguments, Value batch_size, Value num_parallel_calls, Value drop_remainder, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, bool preserve_cardinality = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MapDatasetOp declarations
//===----------------------------------------------------------------------===//

class MapDatasetOpAdaptor {
public:
  MapDatasetOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MapDatasetOpAdaptor(MapDatasetOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_dataset();
  ValueRange other_arguments();
  SymbolRefAttr f();
  ArrayAttr output_types();
  ArrayAttr output_shapes();
  BoolAttr use_inter_op_parallelism();
  BoolAttr preserve_cardinality();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MapDatasetOp : public Op<MapDatasetOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MapDatasetOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_dataset();
  Operation::operand_range other_arguments();
  ::mlir::MutableOperandRange input_datasetMutable();
  ::mlir::MutableOperandRange other_argumentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  SymbolRefAttr fAttr();
  SymbolRefAttr f();
  ArrayAttr output_typesAttr();
  ArrayAttr output_types();
  ArrayAttr output_shapesAttr();
  ArrayAttr output_shapes();
  BoolAttr use_inter_op_parallelismAttr();
  bool use_inter_op_parallelism();
  BoolAttr preserve_cardinalityAttr();
  bool preserve_cardinality();
  mlir::OperandElementTypeRange Targuments();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void fAttr(SymbolRefAttr attr);
  void output_typesAttr(ArrayAttr attr);
  void output_shapesAttr(ArrayAttr attr);
  void use_inter_op_parallelismAttr(BoolAttr attr);
  void preserve_cardinalityAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, ValueRange other_arguments, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, BoolAttr use_inter_op_parallelism, BoolAttr preserve_cardinality);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, ValueRange other_arguments, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, BoolAttr use_inter_op_parallelism, BoolAttr preserve_cardinality);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, ValueRange other_arguments, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, bool use_inter_op_parallelism = true, bool preserve_cardinality = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, ValueRange other_arguments, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, bool use_inter_op_parallelism = true, bool preserve_cardinality = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatMulOp declarations
//===----------------------------------------------------------------------===//

class MatMulOpAdaptor {
public:
  MatMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatMulOpAdaptor(MatMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  BoolAttr transpose_a();
  BoolAttr transpose_b();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatMulOp : public Op<MatMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value product();
  BoolAttr transpose_aAttr();
  bool transpose_a();
  BoolAttr transpose_bAttr();
  bool transpose_b();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void transpose_aAttr(BoolAttr attr);
  void transpose_bAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type product, Value a, Value b, BoolAttr transpose_a, BoolAttr transpose_b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, BoolAttr transpose_a, BoolAttr transpose_b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type product, Value a, Value b, bool transpose_a = false, bool transpose_b = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, bool transpose_a = false, bool transpose_b = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatrixBandPartOp declarations
//===----------------------------------------------------------------------===//

class MatrixBandPartOpAdaptor {
public:
  MatrixBandPartOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixBandPartOpAdaptor(MatrixBandPartOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value num_lower();
  Value num_upper();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixBandPartOp : public Op<MatrixBandPartOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixBandPartOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value num_lower();
  Value num_upper();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange num_lowerMutable();
  ::mlir::MutableOperandRange num_upperMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value band();
  Type T();
  Type Tindex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type band, Value input, Value num_lower, Value num_upper);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value num_lower, Value num_upper);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatrixDiagOp declarations
//===----------------------------------------------------------------------===//

class MatrixDiagOpAdaptor {
public:
  MatrixDiagOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixDiagOpAdaptor(MatrixDiagOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value diagonal();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixDiagOp : public Op<MatrixDiagOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixDiagOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value diagonal();
  ::mlir::MutableOperandRange diagonalMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value diagonal);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value diagonal);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatrixDiagV2Op declarations
//===----------------------------------------------------------------------===//

class MatrixDiagV2OpAdaptor {
public:
  MatrixDiagV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixDiagV2OpAdaptor(MatrixDiagV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value diagonal();
  Value k();
  Value num_rows();
  Value num_cols();
  Value padding_value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixDiagV2Op : public Op<MatrixDiagV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixDiagV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value diagonal();
  Value k();
  Value num_rows();
  Value num_cols();
  Value padding_value();
  ::mlir::MutableOperandRange diagonalMutable();
  ::mlir::MutableOperandRange kMutable();
  ::mlir::MutableOperandRange num_rowsMutable();
  ::mlir::MutableOperandRange num_colsMutable();
  ::mlir::MutableOperandRange padding_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value diagonal, Value k, Value num_rows, Value num_cols, Value padding_value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value diagonal, Value k, Value num_rows, Value num_cols, Value padding_value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatrixDiagV3Op declarations
//===----------------------------------------------------------------------===//

class MatrixDiagV3OpAdaptor {
public:
  MatrixDiagV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixDiagV3OpAdaptor(MatrixDiagV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value diagonal();
  Value k();
  Value num_rows();
  Value num_cols();
  Value padding_value();
  StringAttr align();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixDiagV3Op : public Op<MatrixDiagV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixDiagV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value diagonal();
  Value k();
  Value num_rows();
  Value num_cols();
  Value padding_value();
  ::mlir::MutableOperandRange diagonalMutable();
  ::mlir::MutableOperandRange kMutable();
  ::mlir::MutableOperandRange num_rowsMutable();
  ::mlir::MutableOperandRange num_colsMutable();
  ::mlir::MutableOperandRange padding_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr alignAttr();
  StringRef align();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void alignAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value diagonal, Value k, Value num_rows, Value num_cols, Value padding_value, StringAttr align);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value diagonal, Value k, Value num_rows, Value num_cols, Value padding_value, StringAttr align);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value diagonal, Value k, Value num_rows, Value num_cols, Value padding_value, StringRef align = "RIGHT_LEFT");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value diagonal, Value k, Value num_rows, Value num_cols, Value padding_value, StringRef align = "RIGHT_LEFT");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatrixSetDiagOp declarations
//===----------------------------------------------------------------------===//

class MatrixSetDiagOpAdaptor {
public:
  MatrixSetDiagOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixSetDiagOpAdaptor(MatrixSetDiagOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value diagonal();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixSetDiagOp : public Op<MatrixSetDiagOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixSetDiagOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value diagonal();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange diagonalMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value diagonal);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value diagonal);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatrixSetDiagV2Op declarations
//===----------------------------------------------------------------------===//

class MatrixSetDiagV2OpAdaptor {
public:
  MatrixSetDiagV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixSetDiagV2OpAdaptor(MatrixSetDiagV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value diagonal();
  Value k();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixSetDiagV2Op : public Op<MatrixSetDiagV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixSetDiagV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value diagonal();
  Value k();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange diagonalMutable();
  ::mlir::MutableOperandRange kMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value diagonal, Value k);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value diagonal, Value k);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MatrixSetDiagV3Op declarations
//===----------------------------------------------------------------------===//

class MatrixSetDiagV3OpAdaptor {
public:
  MatrixSetDiagV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixSetDiagV3OpAdaptor(MatrixSetDiagV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value diagonal();
  Value k();
  StringAttr align();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixSetDiagV3Op : public Op<MatrixSetDiagV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixSetDiagV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value diagonal();
  Value k();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange diagonalMutable();
  ::mlir::MutableOperandRange kMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr alignAttr();
  StringRef align();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void alignAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value diagonal, Value k, StringAttr align);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value diagonal, Value k, StringAttr align);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value diagonal, Value k, StringRef align = "RIGHT_LEFT");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value diagonal, Value k, StringRef align = "RIGHT_LEFT");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MaxOp declarations
//===----------------------------------------------------------------------===//

class MaxOpAdaptor {
public:
  MaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaxOpAdaptor(MaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  BoolAttr keep_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaxOp : public Op<MaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange reduction_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr keep_dimsAttr();
  bool keep_dims();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keep_dimsAttr(BoolAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MaxPool3DGradOp declarations
//===----------------------------------------------------------------------===//

class MaxPool3DGradOpAdaptor {
public:
  MaxPool3DGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaxPool3DGradOpAdaptor(MaxPool3DGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value orig_input();
  Value orig_output();
  Value grad();
  ArrayAttr ksize();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaxPool3DGradOp : public Op<MaxPool3DGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaxPool3DGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value orig_input();
  Value orig_output();
  Value grad();
  ::mlir::MutableOperandRange orig_inputMutable();
  ::mlir::MutableOperandRange orig_outputMutable();
  ::mlir::MutableOperandRange gradMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr ksizeAttr();
  ArrayAttr ksize();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type TInput();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void ksizeAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NDHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NDHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MaxPool3DOp declarations
//===----------------------------------------------------------------------===//

class MaxPool3DOpAdaptor {
public:
  MaxPool3DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaxPool3DOpAdaptor(MaxPool3DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  ArrayAttr ksize();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaxPool3DOp : public Op<MaxPool3DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaxPool3DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr ksizeAttr();
  ArrayAttr ksize();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void ksizeAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NDHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NDHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MaxPoolGradOp declarations
//===----------------------------------------------------------------------===//

class MaxPoolGradOpAdaptor {
public:
  MaxPoolGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaxPoolGradOpAdaptor(MaxPoolGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value orig_input();
  Value orig_output();
  Value grad();
  ArrayAttr ksize();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaxPoolGradOp : public Op<MaxPoolGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaxPoolGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value orig_input();
  Value orig_output();
  Value grad();
  ::mlir::MutableOperandRange orig_inputMutable();
  ::mlir::MutableOperandRange orig_outputMutable();
  ::mlir::MutableOperandRange gradMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr ksizeAttr();
  ArrayAttr ksize();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void ksizeAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value orig_input, Value orig_output, Value grad, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MaxPoolOp declarations
//===----------------------------------------------------------------------===//

class MaxPoolOpAdaptor {
public:
  MaxPoolOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaxPoolOpAdaptor(MaxPoolOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  ArrayAttr ksize();
  ArrayAttr strides();
  StringAttr padding();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaxPoolOp : public Op<MaxPoolOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, FoldOperandsTransposeInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaxPoolOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr ksizeAttr();
  ArrayAttr ksize();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void ksizeAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, ArrayAttr ksize, ArrayAttr strides, StringAttr padding, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, ArrayAttr ksize, ArrayAttr strides, StringRef padding, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_FoldOperandsTransposeInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {0}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {0}; }
    LogicalResult FoldOperandsPermutation(ArrayRef<int64_t> permutation);
  
};

//===----------------------------------------------------------------------===//
// TF::MaximumOp declarations
//===----------------------------------------------------------------------===//

class MaximumOpAdaptor {
public:
  MaximumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaximumOpAdaptor(MaximumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaximumOp : public Op<MaximumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MaximumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MeanOp declarations
//===----------------------------------------------------------------------===//

class MeanOpAdaptor {
public:
  MeanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MeanOpAdaptor(MeanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  BoolAttr keep_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MeanOp : public Op<MeanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, FoldOperandsTransposeInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MeanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange reduction_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr keep_dimsAttr();
  bool keep_dims();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keep_dimsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_FoldOperandsTransposeInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {0}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {}; }
    LogicalResult FoldOperandsPermutation(ArrayRef<int64_t> permutation);
  
};

//===----------------------------------------------------------------------===//
// TF::MinOp declarations
//===----------------------------------------------------------------------===//

class MinOpAdaptor {
public:
  MinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MinOpAdaptor(MinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  BoolAttr keep_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MinOp : public Op<MinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange reduction_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr keep_dimsAttr();
  bool keep_dims();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keep_dimsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MinimumOp declarations
//===----------------------------------------------------------------------===//

class MinimumOpAdaptor {
public:
  MinimumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MinimumOpAdaptor(MinimumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MinimumOp : public Op<MinimumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MinimumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MirrorPadOp declarations
//===----------------------------------------------------------------------===//

class MirrorPadOpAdaptor {
public:
  MirrorPadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MirrorPadOpAdaptor(MirrorPadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value paddings();
  StringAttr mode();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MirrorPadOp : public Op<MirrorPadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MirrorPadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value paddings();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange paddingsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr modeAttr();
  StringRef mode();
  Type T();
  Type Tpaddings();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void modeAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value paddings, StringAttr mode);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value paddings, StringAttr mode);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value paddings, StringRef mode);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value paddings, StringRef mode);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MlirLocalVarOp declarations
//===----------------------------------------------------------------------===//

class MlirLocalVarOpAdaptor {
public:
  MlirLocalVarOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MlirLocalVarOpAdaptor(MlirLocalVarOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MlirLocalVarOp : public Op<MlirLocalVarOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = MlirLocalVarOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value resource();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resource);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::MlirPassthroughOp declarations
//===----------------------------------------------------------------------===//

class MlirPassthroughOpAdaptor {
public:
  MlirPassthroughOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MlirPassthroughOpAdaptor(MlirPassthroughOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  StringAttr mlir_module();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MlirPassthroughOp : public Op<MlirPassthroughOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MlirPassthroughOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  StringAttr mlir_moduleAttr();
  StringRef mlir_module();
  mlir::OperandElementTypeRange Tinputs();
  mlir::ResultElementTypeRange Toutputs();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void mlir_moduleAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, StringAttr mlir_module);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, StringRef mlir_module);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ModOp declarations
//===----------------------------------------------------------------------===//

class ModOpAdaptor {
public:
  ModOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ModOpAdaptor(ModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ModOp : public Op<ModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ModOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MulNoNanOp declarations
//===----------------------------------------------------------------------===//

class MulNoNanOpAdaptor {
public:
  MulNoNanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MulNoNanOpAdaptor(MulNoNanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MulNoNanOp : public Op<MulNoNanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MulNoNanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MulOp declarations
//===----------------------------------------------------------------------===//

class MulOpAdaptor {
public:
  MulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MulOpAdaptor(MulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MulOp : public Op<MulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::MultinomialOp declarations
//===----------------------------------------------------------------------===//

class MultinomialOpAdaptor {
public:
  MultinomialOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MultinomialOpAdaptor(MultinomialOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value logits();
  Value num_samples();
  IntegerAttr seed();
  IntegerAttr seed2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MultinomialOp : public Op<MultinomialOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MultinomialOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value logits();
  Value num_samples();
  ::mlir::MutableOperandRange logitsMutable();
  ::mlir::MutableOperandRange num_samplesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr seedAttr();
  APInt seed();
  IntegerAttr seed2Attr();
  APInt seed2();
  Type T();
  Type output_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void seedAttr(IntegerAttr attr);
  void seed2Attr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value logits, Value num_samples, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value logits, Value num_samples, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value logits, Value num_samples, APInt seed, APInt seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value logits, Value num_samples, APInt seed, APInt seed2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::NdtriOp declarations
//===----------------------------------------------------------------------===//

class NdtriOpAdaptor {
public:
  NdtriOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NdtriOpAdaptor(NdtriOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NdtriOp : public Op<NdtriOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NdtriOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::NegOp declarations
//===----------------------------------------------------------------------===//

class NegOpAdaptor {
public:
  NegOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NegOpAdaptor(NegOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NegOp : public Op<NegOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NegOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::NoOp declarations
//===----------------------------------------------------------------------===//

class NoOpAdaptor {
public:
  NoOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NoOpAdaptor(NoOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NoOp : public Op<NoOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NoOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::NonMaxSuppressionV4Op declarations
//===----------------------------------------------------------------------===//

class NonMaxSuppressionV4OpAdaptor {
public:
  NonMaxSuppressionV4OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NonMaxSuppressionV4OpAdaptor(NonMaxSuppressionV4Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value boxes();
  Value scores();
  Value max_output_size();
  Value iou_threshold();
  Value score_threshold();
  BoolAttr pad_to_max_output_size();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NonMaxSuppressionV4Op : public Op<NonMaxSuppressionV4Op, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NonMaxSuppressionV4OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value boxes();
  Value scores();
  Value max_output_size();
  Value iou_threshold();
  Value score_threshold();
  ::mlir::MutableOperandRange boxesMutable();
  ::mlir::MutableOperandRange scoresMutable();
  ::mlir::MutableOperandRange max_output_sizeMutable();
  ::mlir::MutableOperandRange iou_thresholdMutable();
  ::mlir::MutableOperandRange score_thresholdMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value selected_indices();
  Value valid_outputs();
  BoolAttr pad_to_max_output_sizeAttr();
  bool pad_to_max_output_size();
  Type T_threshold();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void pad_to_max_output_sizeAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type selected_indices, Type valid_outputs, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, BoolAttr pad_to_max_output_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, BoolAttr pad_to_max_output_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type selected_indices, Type valid_outputs, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, bool pad_to_max_output_size = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, bool pad_to_max_output_size = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::NonMaxSuppressionV5Op declarations
//===----------------------------------------------------------------------===//

class NonMaxSuppressionV5OpAdaptor {
public:
  NonMaxSuppressionV5OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NonMaxSuppressionV5OpAdaptor(NonMaxSuppressionV5Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value boxes();
  Value scores();
  Value max_output_size();
  Value iou_threshold();
  Value score_threshold();
  Value soft_nms_sigma();
  BoolAttr pad_to_max_output_size();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NonMaxSuppressionV5Op : public Op<NonMaxSuppressionV5Op, OpTrait::ZeroRegion, OpTrait::NResults<3>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<6>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NonMaxSuppressionV5OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value boxes();
  Value scores();
  Value max_output_size();
  Value iou_threshold();
  Value score_threshold();
  Value soft_nms_sigma();
  ::mlir::MutableOperandRange boxesMutable();
  ::mlir::MutableOperandRange scoresMutable();
  ::mlir::MutableOperandRange max_output_sizeMutable();
  ::mlir::MutableOperandRange iou_thresholdMutable();
  ::mlir::MutableOperandRange score_thresholdMutable();
  ::mlir::MutableOperandRange soft_nms_sigmaMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value selected_indices();
  Value selected_scores();
  Value valid_outputs();
  BoolAttr pad_to_max_output_sizeAttr();
  bool pad_to_max_output_size();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void pad_to_max_output_sizeAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type selected_indices, Type selected_scores, Type valid_outputs, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, Value soft_nms_sigma, BoolAttr pad_to_max_output_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, Value soft_nms_sigma, BoolAttr pad_to_max_output_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type selected_indices, Type selected_scores, Type valid_outputs, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, Value soft_nms_sigma, bool pad_to_max_output_size = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value boxes, Value scores, Value max_output_size, Value iou_threshold, Value score_threshold, Value soft_nms_sigma, bool pad_to_max_output_size = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::NotEqualOp declarations
//===----------------------------------------------------------------------===//

class NotEqualOpAdaptor {
public:
  NotEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NotEqualOpAdaptor(NotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  BoolAttr incompatible_shape_error();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NotEqualOp : public Op<NotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NotEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  BoolAttr incompatible_shape_errorAttr();
  bool incompatible_shape_error();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void incompatible_shape_errorAttr(BoolAttr attr);
  static void build(OpBuilder& builder, OperationState& result, Value  x, Value  y, BoolAttr incompatible_shape_error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y, BoolAttr incompatible_shape_error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, BoolAttr incompatible_shape_error);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y, bool incompatible_shape_error = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y, bool incompatible_shape_error = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::OneHotOp declarations
//===----------------------------------------------------------------------===//

class OneHotOpAdaptor {
public:
  OneHotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OneHotOpAdaptor(OneHotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value indices();
  Value depth();
  Value on_value();
  Value off_value();
  IntegerAttr axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class OneHotOp : public Op<OneHotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = OneHotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value indices();
  Value depth();
  Value on_value();
  Value off_value();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange depthMutable();
  ::mlir::MutableOperandRange on_valueMutable();
  ::mlir::MutableOperandRange off_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr axisAttr();
  APInt axis();
  Type T();
  Type TI();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void axisAttr(IntegerAttr attr);
  static void build(OpBuilder& builder, OperationState& result, Value  indices, Value  depth, Value  on_value, Value  off_value, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value indices, Value depth, Value on_value, Value off_value, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value indices, Value depth, Value on_value, Value off_value, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value indices, Value depth, Value on_value, Value off_value, APInt axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value indices, Value depth, Value on_value, Value off_value, APInt axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::OutfeedEnqueueTupleOp declarations
//===----------------------------------------------------------------------===//

class OutfeedEnqueueTupleOpAdaptor {
public:
  OutfeedEnqueueTupleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OutfeedEnqueueTupleOpAdaptor(OutfeedEnqueueTupleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class OutfeedEnqueueTupleOp : public Op<OutfeedEnqueueTupleOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = OutfeedEnqueueTupleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  mlir::OperandElementTypeRange dtypes();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange inputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::PackOp declarations
//===----------------------------------------------------------------------===//

class PackOpAdaptor {
public:
  PackOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PackOpAdaptor(PackOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange values();
  IntegerAttr axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PackOp : public Op<PackOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PackOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range values();
  ::mlir::MutableOperandRange valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr axisAttr();
  APInt axis();
  Type T();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void axisAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange values, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange values, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange values, APInt axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange values, APInt axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::PadOp declarations
//===----------------------------------------------------------------------===//

class PadOpAdaptor {
public:
  PadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PadOpAdaptor(PadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value paddings();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PadOp : public Op<PadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, FoldOperandsTransposeInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value paddings();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange paddingsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tpaddings();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value paddings);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value paddings);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // TF_FoldOperandsTransposeInterface:
    SmallVector<unsigned, 4> GetLayoutDependentArgs() { return {0}; }
    SmallVector<unsigned, 4> GetLayoutDependentResults() { return {0}; }
    LogicalResult FoldOperandsPermutation(ArrayRef<int64_t> permutation);
  
};

//===----------------------------------------------------------------------===//
// TF::PadV2Op declarations
//===----------------------------------------------------------------------===//

class PadV2OpAdaptor {
public:
  PadV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PadV2OpAdaptor(PadV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value paddings();
  Value constant_values();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PadV2Op : public Op<PadV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PadV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value paddings();
  Value constant_values();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange paddingsMutable();
  ::mlir::MutableOperandRange constant_valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tpaddings();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value paddings, Value constant_values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value paddings, Value constant_values);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ParallelMapDatasetOp declarations
//===----------------------------------------------------------------------===//

class ParallelMapDatasetOpAdaptor {
public:
  ParallelMapDatasetOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ParallelMapDatasetOpAdaptor(ParallelMapDatasetOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_dataset();
  ValueRange other_arguments();
  Value num_parallel_calls();
  SymbolRefAttr f();
  ArrayAttr output_types();
  ArrayAttr output_shapes();
  BoolAttr use_inter_op_parallelism();
  BoolAttr sloppy();
  BoolAttr preserve_cardinality();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ParallelMapDatasetOp : public Op<ParallelMapDatasetOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ParallelMapDatasetOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_dataset();
  Operation::operand_range other_arguments();
  Value num_parallel_calls();
  ::mlir::MutableOperandRange input_datasetMutable();
  ::mlir::MutableOperandRange other_argumentsMutable();
  ::mlir::MutableOperandRange num_parallel_callsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  SymbolRefAttr fAttr();
  SymbolRefAttr f();
  ArrayAttr output_typesAttr();
  ArrayAttr output_types();
  ArrayAttr output_shapesAttr();
  ArrayAttr output_shapes();
  BoolAttr use_inter_op_parallelismAttr();
  bool use_inter_op_parallelism();
  BoolAttr sloppyAttr();
  bool sloppy();
  BoolAttr preserve_cardinalityAttr();
  bool preserve_cardinality();
  mlir::OperandElementTypeRange Targuments();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void fAttr(SymbolRefAttr attr);
  void output_typesAttr(ArrayAttr attr);
  void output_shapesAttr(ArrayAttr attr);
  void use_inter_op_parallelismAttr(BoolAttr attr);
  void sloppyAttr(BoolAttr attr);
  void preserve_cardinalityAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, ValueRange other_arguments, Value num_parallel_calls, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, BoolAttr use_inter_op_parallelism, BoolAttr sloppy, BoolAttr preserve_cardinality);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, ValueRange other_arguments, Value num_parallel_calls, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, BoolAttr use_inter_op_parallelism, BoolAttr sloppy, BoolAttr preserve_cardinality);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value input_dataset, ValueRange other_arguments, Value num_parallel_calls, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, bool use_inter_op_parallelism = true, bool sloppy = false, bool preserve_cardinality = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_dataset, ValueRange other_arguments, Value num_parallel_calls, SymbolRefAttr f, ArrayAttr output_types, ArrayAttr output_shapes, bool use_inter_op_parallelism = true, bool sloppy = false, bool preserve_cardinality = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ParseExampleOp declarations
//===----------------------------------------------------------------------===//

class ParseExampleOpAdaptor {
public:
  ParseExampleOpAdaptor(ValueRange values, DictionaryAttr attrs);
  ParseExampleOpAdaptor(ParseExampleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value serialized();
  Value names();
  ValueRange sparse_keys();
  ValueRange dense_keys();
  ValueRange dense_defaults();
  ArrayAttr dense_shapes();
  DenseIntElementsAttr result_segment_sizes();
  DenseIntElementsAttr operand_segment_sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ParseExampleOp : public Op<ParseExampleOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::AttrSizedResultSegments, OpTrait::AttrSizedOperandSegments, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ParseExampleOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value serialized();
  Value names();
  Operation::operand_range sparse_keys();
  Operation::operand_range dense_keys();
  Operation::operand_range dense_defaults();
  ::mlir::MutableOperandRange serializedMutable();
  ::mlir::MutableOperandRange namesMutable();
  ::mlir::MutableOperandRange sparse_keysMutable();
  ::mlir::MutableOperandRange dense_keysMutable();
  ::mlir::MutableOperandRange dense_defaultsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range sparse_indices();
  Operation::result_range sparse_values();
  Operation::result_range sparse_shapes();
  Operation::result_range dense_values();
  ArrayAttr dense_shapesAttr();
  ArrayAttr dense_shapes();
  DenseIntElementsAttr result_segment_sizesAttr();
  DenseIntElementsAttr result_segment_sizes();
  DenseIntElementsAttr operand_segment_sizesAttr();
  DenseIntElementsAttr operand_segment_sizes();
  size_t Nsparse();
  size_t Ndense();
  mlir::OperandElementTypeRange Tdense();
  mlir::ResultElementTypeRange sparse_types();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void dense_shapesAttr(ArrayAttr attr);
  void result_segment_sizesAttr(DenseIntElementsAttr attr);
  void operand_segment_sizesAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> sparse_indices, ArrayRef<Type> sparse_values, ArrayRef<Type> sparse_shapes, ArrayRef<Type> dense_values, Value serialized, Value names, ValueRange sparse_keys, ValueRange dense_keys, ValueRange dense_defaults, ArrayAttr dense_shapes, DenseIntElementsAttr result_segment_sizes, DenseIntElementsAttr operand_segment_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value serialized, Value names, ValueRange sparse_keys, ValueRange dense_keys, ValueRange dense_defaults, ArrayAttr dense_shapes, DenseIntElementsAttr result_segment_sizes, DenseIntElementsAttr operand_segment_sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ParseExampleV2Op declarations
//===----------------------------------------------------------------------===//

class ParseExampleV2OpAdaptor {
public:
  ParseExampleV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ParseExampleV2OpAdaptor(ParseExampleV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value serialized();
  Value names();
  Value sparse_keys();
  Value dense_keys();
  Value ragged_keys();
  ValueRange dense_defaults();
  IntegerAttr num_sparse();
  ArrayAttr dense_shapes();
  DenseIntElementsAttr result_segment_sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ParseExampleV2Op : public Op<ParseExampleV2Op, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<5>::Impl, MemoryEffectOpInterface::Trait, OpTrait::AttrSizedResultSegments, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ParseExampleV2OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value serialized();
  Value names();
  Value sparse_keys();
  Value dense_keys();
  Value ragged_keys();
  Operation::operand_range dense_defaults();
  ::mlir::MutableOperandRange serializedMutable();
  ::mlir::MutableOperandRange namesMutable();
  ::mlir::MutableOperandRange sparse_keysMutable();
  ::mlir::MutableOperandRange dense_keysMutable();
  ::mlir::MutableOperandRange ragged_keysMutable();
  ::mlir::MutableOperandRange dense_defaultsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range sparse_indices();
  Operation::result_range sparse_values();
  Operation::result_range sparse_shapes();
  Operation::result_range dense_values();
  Operation::result_range ragged_values();
  Operation::result_range ragged_row_splits();
  IntegerAttr num_sparseAttr();
  APInt num_sparse();
  ArrayAttr dense_shapesAttr();
  ArrayAttr dense_shapes();
  DenseIntElementsAttr result_segment_sizesAttr();
  DenseIntElementsAttr result_segment_sizes();
  mlir::OperandElementTypeRange Tdense();
  mlir::ResultElementTypeRange sparse_types();
  mlir::ResultElementTypeRange ragged_value_types();
  mlir::ResultElementTypeRange ragged_split_types();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void num_sparseAttr(IntegerAttr attr);
  void dense_shapesAttr(ArrayAttr attr);
  void result_segment_sizesAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> sparse_indices, ArrayRef<Type> sparse_values, ArrayRef<Type> sparse_shapes, ArrayRef<Type> dense_values, ArrayRef<Type> ragged_values, ArrayRef<Type> ragged_row_splits, Value serialized, Value names, Value sparse_keys, Value dense_keys, Value ragged_keys, ValueRange dense_defaults, IntegerAttr num_sparse, ArrayAttr dense_shapes, DenseIntElementsAttr result_segment_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value serialized, Value names, Value sparse_keys, Value dense_keys, Value ragged_keys, ValueRange dense_defaults, IntegerAttr num_sparse, ArrayAttr dense_shapes, DenseIntElementsAttr result_segment_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> sparse_indices, ArrayRef<Type> sparse_values, ArrayRef<Type> sparse_shapes, ArrayRef<Type> dense_values, ArrayRef<Type> ragged_values, ArrayRef<Type> ragged_row_splits, Value serialized, Value names, Value sparse_keys, Value dense_keys, Value ragged_keys, ValueRange dense_defaults, APInt num_sparse, ArrayAttr dense_shapes, DenseIntElementsAttr result_segment_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value serialized, Value names, Value sparse_keys, Value dense_keys, Value ragged_keys, ValueRange dense_defaults, APInt num_sparse, ArrayAttr dense_shapes, DenseIntElementsAttr result_segment_sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::PartitionedCallOp declarations
//===----------------------------------------------------------------------===//

class PartitionedCallOpAdaptor {
public:
  PartitionedCallOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PartitionedCallOpAdaptor(PartitionedCallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  SymbolRefAttr f();
  StringAttr config();
  StringAttr config_proto();
  StringAttr executor_type();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PartitionedCallOp : public Op<PartitionedCallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, CallOpInterface::Trait, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PartitionedCallOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  SymbolRefAttr fAttr();
  SymbolRefAttr f();
  StringAttr configAttr();
  StringRef config();
  StringAttr config_protoAttr();
  StringRef config_proto();
  StringAttr executor_typeAttr();
  StringRef executor_type();
  mlir::OperandElementTypeRange Tin();
  mlir::ResultElementTypeRange Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void fAttr(SymbolRefAttr attr);
  void configAttr(StringAttr attr);
  void config_protoAttr(StringAttr attr);
  void executor_typeAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange args, SymbolRefAttr f, StringAttr config, StringAttr config_proto, StringAttr executor_type);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange args, SymbolRefAttr f, StringRef config, StringRef config_proto, StringRef executor_type);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // Gets the argument operands to the called function.
    operand_range getArgOperands() { return args(); }

    // Returns the callee of this operation.
    CallInterfaceCallable getCallableForCallee() {
      return getAttrOfType<SymbolRefAttr>("f");
    }
  
};

//===----------------------------------------------------------------------===//
// TF::PlaceholderOp declarations
//===----------------------------------------------------------------------===//

class PlaceholderOpAdaptor {
public:
  PlaceholderOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PlaceholderOpAdaptor(PlaceholderOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PlaceholderOp : public Op<PlaceholderOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PlaceholderOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::PlaceholderWithDefaultOp declarations
//===----------------------------------------------------------------------===//

class PlaceholderWithDefaultOpAdaptor {
public:
  PlaceholderWithDefaultOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PlaceholderWithDefaultOpAdaptor(PlaceholderWithDefaultOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PlaceholderWithDefaultOp : public Op<PlaceholderWithDefaultOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PlaceholderWithDefaultOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type dtype();
  ShapedType shape();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::PowOp declarations
//===----------------------------------------------------------------------===//

class PowOpAdaptor {
public:
  PowOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PowOpAdaptor(PowOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PowOp : public Op<PowOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PowOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::PreventGradientOp declarations
//===----------------------------------------------------------------------===//

class PreventGradientOpAdaptor {
public:
  PreventGradientOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PreventGradientOpAdaptor(PreventGradientOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  StringAttr message();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PreventGradientOp : public Op<PreventGradientOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PreventGradientOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr messageAttr();
  StringRef message();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void messageAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, StringAttr message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, StringAttr message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, StringRef message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, StringRef message);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, StringAttr message);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::PrintV2Op declarations
//===----------------------------------------------------------------------===//

class PrintV2OpAdaptor {
public:
  PrintV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PrintV2OpAdaptor(PrintV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  StringAttr output_stream();
  StringAttr end();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PrintV2Op : public Op<PrintV2Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = PrintV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr output_streamAttr();
  StringRef output_stream();
  StringAttr endAttr();
  StringRef end();
  void output_streamAttr(StringAttr attr);
  void endAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, StringAttr output_stream, StringAttr end);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, StringAttr output_stream, StringAttr end);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, StringRef output_stream, StringRef end);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, StringRef output_stream, StringRef end);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ProdOp declarations
//===----------------------------------------------------------------------===//

class ProdOpAdaptor {
public:
  ProdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ProdOpAdaptor(ProdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  BoolAttr keep_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ProdOp : public Op<ProdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ProdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange reduction_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr keep_dimsAttr();
  bool keep_dims();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keep_dimsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::QrOp declarations
//===----------------------------------------------------------------------===//

class QrOpAdaptor {
public:
  QrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  QrOpAdaptor(QrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  BoolAttr full_matrices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class QrOp : public Op<QrOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = QrOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value q();
  Value r();
  BoolAttr full_matricesAttr();
  bool full_matrices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void full_matricesAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type q, Type r, Value input, BoolAttr full_matrices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, BoolAttr full_matrices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type q, Type r, Value input, bool full_matrices = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, bool full_matrices = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::QuantizeAndDequantizeOp declarations
//===----------------------------------------------------------------------===//

class QuantizeAndDequantizeOpAdaptor {
public:
  QuantizeAndDequantizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  QuantizeAndDequantizeOpAdaptor(QuantizeAndDequantizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  BoolAttr signed_input();
  IntegerAttr num_bits();
  BoolAttr range_given();
  FloatAttr input_min();
  FloatAttr input_max();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class QuantizeAndDequantizeOp : public Op<QuantizeAndDequantizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = QuantizeAndDequantizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr signed_inputAttr();
  bool signed_input();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr range_givenAttr();
  bool range_given();
  FloatAttr input_minAttr();
  APFloat input_min();
  FloatAttr input_maxAttr();
  APFloat input_max();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void signed_inputAttr(BoolAttr attr);
  void num_bitsAttr(IntegerAttr attr);
  void range_givenAttr(BoolAttr attr);
  void input_minAttr(FloatAttr attr);
  void input_maxAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, BoolAttr signed_input, IntegerAttr num_bits, BoolAttr range_given, FloatAttr input_min, FloatAttr input_max);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, BoolAttr signed_input, IntegerAttr num_bits, BoolAttr range_given, FloatAttr input_min, FloatAttr input_max);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, bool signed_input, APInt num_bits, bool range_given, APFloat input_min, APFloat input_max);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, bool signed_input, APInt num_bits, bool range_given, APFloat input_min, APFloat input_max);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, BoolAttr signed_input, IntegerAttr num_bits, BoolAttr range_given, FloatAttr input_min, FloatAttr input_max);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::QuantizeAndDequantizeV2Op declarations
//===----------------------------------------------------------------------===//

class QuantizeAndDequantizeV2OpAdaptor {
public:
  QuantizeAndDequantizeV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  QuantizeAndDequantizeV2OpAdaptor(QuantizeAndDequantizeV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value input_min();
  Value input_max();
  BoolAttr signed_input();
  IntegerAttr num_bits();
  BoolAttr range_given();
  StringAttr round_mode();
  BoolAttr narrow_range();
  IntegerAttr axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class QuantizeAndDequantizeV2Op : public Op<QuantizeAndDequantizeV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = QuantizeAndDequantizeV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value input_min();
  Value input_max();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange input_minMutable();
  ::mlir::MutableOperandRange input_maxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr signed_inputAttr();
  bool signed_input();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr range_givenAttr();
  bool range_given();
  StringAttr round_modeAttr();
  StringRef round_mode();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  IntegerAttr axisAttr();
  APInt axis();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void signed_inputAttr(BoolAttr attr);
  void num_bitsAttr(IntegerAttr attr);
  void range_givenAttr(BoolAttr attr);
  void round_modeAttr(StringAttr attr);
  void narrow_rangeAttr(BoolAttr attr);
  void axisAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value input_min, Value input_max, BoolAttr signed_input, IntegerAttr num_bits, BoolAttr range_given, StringAttr round_mode, BoolAttr narrow_range, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value input_min, Value input_max, BoolAttr signed_input, IntegerAttr num_bits, BoolAttr range_given, StringAttr round_mode, BoolAttr narrow_range, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value input_min, Value input_max, bool signed_input, APInt num_bits, bool range_given, StringRef round_mode, bool narrow_range, APInt axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value input_min, Value input_max, bool signed_input, APInt num_bits, bool range_given, StringRef round_mode, bool narrow_range, APInt axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::QuantizeAndDequantizeV3Op declarations
//===----------------------------------------------------------------------===//

class QuantizeAndDequantizeV3OpAdaptor {
public:
  QuantizeAndDequantizeV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  QuantizeAndDequantizeV3OpAdaptor(QuantizeAndDequantizeV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value input_min();
  Value input_max();
  Value num_bits();
  BoolAttr signed_input();
  BoolAttr range_given();
  BoolAttr narrow_range();
  IntegerAttr axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class QuantizeAndDequantizeV3Op : public Op<QuantizeAndDequantizeV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = QuantizeAndDequantizeV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value input_min();
  Value input_max();
  Value num_bits();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange input_minMutable();
  ::mlir::MutableOperandRange input_maxMutable();
  ::mlir::MutableOperandRange num_bitsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr signed_inputAttr();
  bool signed_input();
  BoolAttr range_givenAttr();
  bool range_given();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  IntegerAttr axisAttr();
  APInt axis();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void signed_inputAttr(BoolAttr attr);
  void range_givenAttr(BoolAttr attr);
  void narrow_rangeAttr(BoolAttr attr);
  void axisAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value input_min, Value input_max, Value num_bits, BoolAttr signed_input, BoolAttr range_given, BoolAttr narrow_range, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value input_min, Value input_max, Value num_bits, BoolAttr signed_input, BoolAttr range_given, BoolAttr narrow_range, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value input_min, Value input_max, Value num_bits, bool signed_input, bool range_given, bool narrow_range, APInt axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value input_min, Value input_max, Value num_bits, bool signed_input, bool range_given, bool narrow_range, APInt axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RFFT2DOp declarations
//===----------------------------------------------------------------------===//

class RFFT2DOpAdaptor {
public:
  RFFT2DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RFFT2DOpAdaptor(RFFT2DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RFFT2DOp : public Op<RFFT2DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RFFT2DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange fft_lengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Treal();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RFFT3DOp declarations
//===----------------------------------------------------------------------===//

class RFFT3DOpAdaptor {
public:
  RFFT3DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RFFT3DOpAdaptor(RFFT3DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RFFT3DOp : public Op<RFFT3DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RFFT3DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange fft_lengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Treal();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RFFTOp declarations
//===----------------------------------------------------------------------===//

class RFFTOpAdaptor {
public:
  RFFTOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RFFTOpAdaptor(RFFTOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RFFTOp : public Op<RFFTOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RFFTOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value fft_length();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange fft_lengthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Treal();
  Type Tcomplex();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value fft_length);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value fft_length);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RGBToHSVOp declarations
//===----------------------------------------------------------------------===//

class RGBToHSVOpAdaptor {
public:
  RGBToHSVOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RGBToHSVOpAdaptor(RGBToHSVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value images();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RGBToHSVOp : public Op<RGBToHSVOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RGBToHSVOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value images();
  ::mlir::MutableOperandRange imagesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value images);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RandomGammaGradOp declarations
//===----------------------------------------------------------------------===//

class RandomGammaGradOpAdaptor {
public:
  RandomGammaGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RandomGammaGradOpAdaptor(RandomGammaGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value alpha();
  Value sample();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RandomGammaGradOp : public Op<RandomGammaGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RandomGammaGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value alpha();
  Value sample();
  ::mlir::MutableOperandRange alphaMutable();
  ::mlir::MutableOperandRange sampleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value alpha, Value sample);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value alpha, Value sample);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RandomShuffleOp declarations
//===----------------------------------------------------------------------===//

class RandomShuffleOpAdaptor {
public:
  RandomShuffleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RandomShuffleOpAdaptor(RandomShuffleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  IntegerAttr seed();
  IntegerAttr seed2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RandomShuffleOp : public Op<RandomShuffleOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RandomShuffleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr seedAttr();
  APInt seed();
  IntegerAttr seed2Attr();
  APInt seed2();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void seedAttr(IntegerAttr attr);
  void seed2Attr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value value, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value value, APInt seed, APInt seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, APInt seed, APInt seed2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::RandomStandardNormalOp declarations
//===----------------------------------------------------------------------===//

class RandomStandardNormalOpAdaptor {
public:
  RandomStandardNormalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RandomStandardNormalOpAdaptor(RandomStandardNormalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  IntegerAttr seed();
  IntegerAttr seed2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RandomStandardNormalOp : public Op<RandomStandardNormalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RandomStandardNormalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr seedAttr();
  APInt seed();
  IntegerAttr seed2Attr();
  APInt seed2();
  Type T();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void seedAttr(IntegerAttr attr);
  void seed2Attr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, APInt seed, APInt seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, APInt seed, APInt seed2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::RandomUniformOp declarations
//===----------------------------------------------------------------------===//

class RandomUniformOpAdaptor {
public:
  RandomUniformOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RandomUniformOpAdaptor(RandomUniformOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  IntegerAttr seed();
  IntegerAttr seed2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RandomUniformOp : public Op<RandomUniformOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RandomUniformOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr seedAttr();
  APInt seed();
  IntegerAttr seed2Attr();
  APInt seed2();
  Type T();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void seedAttr(IntegerAttr attr);
  void seed2Attr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, APInt seed, APInt seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, APInt seed, APInt seed2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::RangeOp declarations
//===----------------------------------------------------------------------===//

class RangeOpAdaptor {
public:
  RangeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RangeOpAdaptor(RangeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value start();
  Value limit();
  Value delta();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RangeOp : public Op<RangeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RangeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value start();
  Value limit();
  Value delta();
  ::mlir::MutableOperandRange startMutable();
  ::mlir::MutableOperandRange limitMutable();
  ::mlir::MutableOperandRange deltaMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value  start, Value  limit, Value  delta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value start, Value limit, Value delta);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value start, Value limit, Value delta);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RankOp declarations
//===----------------------------------------------------------------------===//

class RankOpAdaptor {
public:
  RankOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RankOpAdaptor(RankOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RankOp : public Op<RankOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RankOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value  input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ReadVariableOp declarations
//===----------------------------------------------------------------------===//

class ReadVariableOpAdaptor {
public:
  ReadVariableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReadVariableOpAdaptor(ReadVariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value resource();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReadVariableOp : public Op<ReadVariableOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReadVariableOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value resource();
  ::mlir::MutableOperandRange resourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value value();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type value, Value resource);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value resource);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RealDivOp declarations
//===----------------------------------------------------------------------===//

class RealDivOpAdaptor {
public:
  RealDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RealDivOpAdaptor(RealDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RealDivOp : public Op<RealDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RealDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RealOp declarations
//===----------------------------------------------------------------------===//

class RealOpAdaptor {
public:
  RealOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RealOpAdaptor(RealOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RealOp : public Op<RealOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RealOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ReciprocalGradOp declarations
//===----------------------------------------------------------------------===//

class ReciprocalGradOpAdaptor {
public:
  ReciprocalGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReciprocalGradOpAdaptor(ReciprocalGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y();
  Value dy();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReciprocalGradOp : public Op<ReciprocalGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReciprocalGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y();
  Value dy();
  ::mlir::MutableOperandRange yMutable();
  ::mlir::MutableOperandRange dyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y, Value dy);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ReciprocalOp declarations
//===----------------------------------------------------------------------===//

class ReciprocalOpAdaptor {
public:
  ReciprocalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReciprocalOpAdaptor(ReciprocalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReciprocalOp : public Op<ReciprocalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReciprocalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RecvTPUEmbeddingActivationsOp declarations
//===----------------------------------------------------------------------===//

class RecvTPUEmbeddingActivationsOpAdaptor {
public:
  RecvTPUEmbeddingActivationsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RecvTPUEmbeddingActivationsOpAdaptor(RecvTPUEmbeddingActivationsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RecvTPUEmbeddingActivationsOp : public Op<RecvTPUEmbeddingActivationsOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RecvTPUEmbeddingActivationsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  StringAttr configAttr();
  StringRef config();
  size_t num_outputs();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, StringRef config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::Relu6GradOp declarations
//===----------------------------------------------------------------------===//

class Relu6GradOpAdaptor {
public:
  Relu6GradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Relu6GradOpAdaptor(Relu6GradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gradients();
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Relu6GradOp : public Op<Relu6GradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Relu6GradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gradients();
  Value features();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value backprops();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::Relu6Op declarations
//===----------------------------------------------------------------------===//

class Relu6OpAdaptor {
public:
  Relu6OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Relu6OpAdaptor(Relu6Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Relu6Op : public Op<Relu6Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Relu6OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value activations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ReluGradOp declarations
//===----------------------------------------------------------------------===//

class ReluGradOpAdaptor {
public:
  ReluGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReluGradOpAdaptor(ReluGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gradients();
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReluGradOp : public Op<ReluGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReluGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gradients();
  Value features();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value backprops();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ReluOp declarations
//===----------------------------------------------------------------------===//

class ReluOpAdaptor {
public:
  ReluOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReluOpAdaptor(ReluOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReluOp : public Op<ReluOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, OpTrait::TF::LayoutAgnostic, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReluOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value activations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ReshapeOp declarations
//===----------------------------------------------------------------------===//

class ReshapeOpAdaptor {
public:
  ReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReshapeOpAdaptor(ReshapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value tensor();
  Value shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReshapeOp : public Op<ReshapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReshapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value tensor();
  Value shape();
  ::mlir::MutableOperandRange tensorMutable();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tshape();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value  tensor, Value  shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value tensor, Value shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, Value shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ResizeBilinearGradOp declarations
//===----------------------------------------------------------------------===//

class ResizeBilinearGradOpAdaptor {
public:
  ResizeBilinearGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResizeBilinearGradOpAdaptor(ResizeBilinearGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value grads();
  Value original_image();
  BoolAttr align_corners();
  BoolAttr half_pixel_centers();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResizeBilinearGradOp : public Op<ResizeBilinearGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResizeBilinearGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value grads();
  Value original_image();
  ::mlir::MutableOperandRange gradsMutable();
  ::mlir::MutableOperandRange original_imageMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr align_cornersAttr();
  bool align_corners();
  BoolAttr half_pixel_centersAttr();
  bool half_pixel_centers();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void align_cornersAttr(BoolAttr attr);
  void half_pixel_centersAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value grads, Value original_image, BoolAttr align_corners, BoolAttr half_pixel_centers);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value grads, Value original_image, BoolAttr align_corners, BoolAttr half_pixel_centers);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value grads, Value original_image, bool align_corners = false, bool half_pixel_centers = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value grads, Value original_image, bool align_corners = false, bool half_pixel_centers = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ResizeBilinearOp declarations
//===----------------------------------------------------------------------===//

class ResizeBilinearOpAdaptor {
public:
  ResizeBilinearOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResizeBilinearOpAdaptor(ResizeBilinearOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value images();
  Value size();
  BoolAttr align_corners();
  BoolAttr half_pixel_centers();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResizeBilinearOp : public Op<ResizeBilinearOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResizeBilinearOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value images();
  Value size();
  ::mlir::MutableOperandRange imagesMutable();
  ::mlir::MutableOperandRange sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value resized_images();
  BoolAttr align_cornersAttr();
  bool align_corners();
  BoolAttr half_pixel_centersAttr();
  bool half_pixel_centers();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void align_cornersAttr(BoolAttr attr);
  void half_pixel_centersAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resized_images, Value images, Value size, BoolAttr align_corners, BoolAttr half_pixel_centers);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images, Value size, BoolAttr align_corners, BoolAttr half_pixel_centers);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resized_images, Value images, Value size, bool align_corners = false, bool half_pixel_centers = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images, Value size, bool align_corners = false, bool half_pixel_centers = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ResizeNearestNeighborOp declarations
//===----------------------------------------------------------------------===//

class ResizeNearestNeighborOpAdaptor {
public:
  ResizeNearestNeighborOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResizeNearestNeighborOpAdaptor(ResizeNearestNeighborOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value images();
  Value size();
  BoolAttr align_corners();
  BoolAttr half_pixel_centers();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResizeNearestNeighborOp : public Op<ResizeNearestNeighborOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResizeNearestNeighborOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value images();
  Value size();
  ::mlir::MutableOperandRange imagesMutable();
  ::mlir::MutableOperandRange sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value resized_images();
  BoolAttr align_cornersAttr();
  bool align_corners();
  BoolAttr half_pixel_centersAttr();
  bool half_pixel_centers();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void align_cornersAttr(BoolAttr attr);
  void half_pixel_centersAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resized_images, Value images, Value size, BoolAttr align_corners, BoolAttr half_pixel_centers);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images, Value size, BoolAttr align_corners, BoolAttr half_pixel_centers);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resized_images, Value images, Value size, bool align_corners = false, bool half_pixel_centers = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value images, Value size, bool align_corners = false, bool half_pixel_centers = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ResourceApplyAdagradV2Op declarations
//===----------------------------------------------------------------------===//

class ResourceApplyAdagradV2OpAdaptor {
public:
  ResourceApplyAdagradV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceApplyAdagradV2OpAdaptor(ResourceApplyAdagradV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value var();
  Value accum();
  Value lr();
  Value epsilon();
  Value grad();
  BoolAttr use_locking();
  BoolAttr update_slots();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceApplyAdagradV2Op : public Op<ResourceApplyAdagradV2Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceApplyAdagradV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value var();
  Value accum();
  Value lr();
  Value epsilon();
  Value grad();
  ::mlir::MutableOperandRange varMutable();
  ::mlir::MutableOperandRange accumMutable();
  ::mlir::MutableOperandRange lrMutable();
  ::mlir::MutableOperandRange epsilonMutable();
  ::mlir::MutableOperandRange gradMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr use_lockingAttr();
  bool use_locking();
  BoolAttr update_slotsAttr();
  bool update_slots();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void use_lockingAttr(BoolAttr attr);
  void update_slotsAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value accum, Value lr, Value epsilon, Value grad, BoolAttr use_locking, BoolAttr update_slots);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value accum, Value lr, Value epsilon, Value grad, BoolAttr use_locking, BoolAttr update_slots);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value accum, Value lr, Value epsilon, Value grad, bool use_locking = false, bool update_slots = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value accum, Value lr, Value epsilon, Value grad, bool use_locking = false, bool update_slots = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ResourceApplyAdamOp declarations
//===----------------------------------------------------------------------===//

class ResourceApplyAdamOpAdaptor {
public:
  ResourceApplyAdamOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceApplyAdamOpAdaptor(ResourceApplyAdamOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value var();
  Value m();
  Value v();
  Value beta1_power();
  Value beta2_power();
  Value lr();
  Value beta1();
  Value beta2();
  Value epsilon();
  Value grad();
  BoolAttr use_locking();
  BoolAttr use_nesterov();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceApplyAdamOp : public Op<ResourceApplyAdamOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<10>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceApplyAdamOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value var();
  Value m();
  Value v();
  Value beta1_power();
  Value beta2_power();
  Value lr();
  Value beta1();
  Value beta2();
  Value epsilon();
  Value grad();
  ::mlir::MutableOperandRange varMutable();
  ::mlir::MutableOperandRange mMutable();
  ::mlir::MutableOperandRange vMutable();
  ::mlir::MutableOperandRange beta1_powerMutable();
  ::mlir::MutableOperandRange beta2_powerMutable();
  ::mlir::MutableOperandRange lrMutable();
  ::mlir::MutableOperandRange beta1Mutable();
  ::mlir::MutableOperandRange beta2Mutable();
  ::mlir::MutableOperandRange epsilonMutable();
  ::mlir::MutableOperandRange gradMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr use_lockingAttr();
  bool use_locking();
  BoolAttr use_nesterovAttr();
  bool use_nesterov();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void use_lockingAttr(BoolAttr attr);
  void use_nesterovAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value m, Value v, Value beta1_power, Value beta2_power, Value lr, Value beta1, Value beta2, Value epsilon, Value grad, BoolAttr use_locking, BoolAttr use_nesterov);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value m, Value v, Value beta1_power, Value beta2_power, Value lr, Value beta1, Value beta2, Value epsilon, Value grad, BoolAttr use_locking, BoolAttr use_nesterov);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value m, Value v, Value beta1_power, Value beta2_power, Value lr, Value beta1, Value beta2, Value epsilon, Value grad, bool use_locking = false, bool use_nesterov = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value m, Value v, Value beta1_power, Value beta2_power, Value lr, Value beta1, Value beta2, Value epsilon, Value grad, bool use_locking = false, bool use_nesterov = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ResourceApplyCenteredRMSPropOp declarations
//===----------------------------------------------------------------------===//

class ResourceApplyCenteredRMSPropOpAdaptor {
public:
  ResourceApplyCenteredRMSPropOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceApplyCenteredRMSPropOpAdaptor(ResourceApplyCenteredRMSPropOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value var();
  Value mg();
  Value ms();
  Value mom();
  Value lr();
  Value rho();
  Value momentum();
  Value epsilon();
  Value grad();
  BoolAttr use_locking();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceApplyCenteredRMSPropOp : public Op<ResourceApplyCenteredRMSPropOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<9>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceApplyCenteredRMSPropOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value var();
  Value mg();
  Value ms();
  Value mom();
  Value lr();
  Value rho();
  Value momentum();
  Value epsilon();
  Value grad();
  ::mlir::MutableOperandRange varMutable();
  ::mlir::MutableOperandRange mgMutable();
  ::mlir::MutableOperandRange msMutable();
  ::mlir::MutableOperandRange momMutable();
  ::mlir::MutableOperandRange lrMutable();
  ::mlir::MutableOperandRange rhoMutable();
  ::mlir::MutableOperandRange momentumMutable();
  ::mlir::MutableOperandRange epsilonMutable();
  ::mlir::MutableOperandRange gradMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr use_lockingAttr();
  bool use_locking();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void use_lockingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value mg, Value ms, Value mom, Value lr, Value rho, Value momentum, Value epsilon, Value grad, BoolAttr use_locking);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value mg, Value ms, Value mom, Value lr, Value rho, Value momentum, Value epsilon, Value grad, BoolAttr use_locking);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value mg, Value ms, Value mom, Value lr, Value rho, Value momentum, Value epsilon, Value grad, bool use_locking = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value mg, Value ms, Value mom, Value lr, Value rho, Value momentum, Value epsilon, Value grad, bool use_locking = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ResourceApplyGradientDescentOp declarations
//===----------------------------------------------------------------------===//

class ResourceApplyGradientDescentOpAdaptor {
public:
  ResourceApplyGradientDescentOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceApplyGradientDescentOpAdaptor(ResourceApplyGradientDescentOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value var();
  Value alpha();
  Value delta();
  BoolAttr use_locking();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceApplyGradientDescentOp : public Op<ResourceApplyGradientDescentOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceApplyGradientDescentOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value var();
  Value alpha();
  Value delta();
  ::mlir::MutableOperandRange varMutable();
  ::mlir::MutableOperandRange alphaMutable();
  ::mlir::MutableOperandRange deltaMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr use_lockingAttr();
  bool use_locking();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void use_lockingAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value alpha, Value delta, BoolAttr use_locking);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value alpha, Value delta, BoolAttr use_locking);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value alpha, Value delta, bool use_locking = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value alpha, Value delta, bool use_locking = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ResourceApplyKerasMomentumOp declarations
//===----------------------------------------------------------------------===//

class ResourceApplyKerasMomentumOpAdaptor {
public:
  ResourceApplyKerasMomentumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceApplyKerasMomentumOpAdaptor(ResourceApplyKerasMomentumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value var();
  Value accum();
  Value lr();
  Value grad();
  Value momentum();
  BoolAttr use_locking();
  BoolAttr use_nesterov();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceApplyKerasMomentumOp : public Op<ResourceApplyKerasMomentumOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceApplyKerasMomentumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value var();
  Value accum();
  Value lr();
  Value grad();
  Value momentum();
  ::mlir::MutableOperandRange varMutable();
  ::mlir::MutableOperandRange accumMutable();
  ::mlir::MutableOperandRange lrMutable();
  ::mlir::MutableOperandRange gradMutable();
  ::mlir::MutableOperandRange momentumMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr use_lockingAttr();
  bool use_locking();
  BoolAttr use_nesterovAttr();
  bool use_nesterov();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void use_lockingAttr(BoolAttr attr);
  void use_nesterovAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value accum, Value lr, Value grad, Value momentum, BoolAttr use_locking, BoolAttr use_nesterov);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value accum, Value lr, Value grad, Value momentum, BoolAttr use_locking, BoolAttr use_nesterov);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value accum, Value lr, Value grad, Value momentum, bool use_locking = false, bool use_nesterov = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value accum, Value lr, Value grad, Value momentum, bool use_locking = false, bool use_nesterov = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ResourceApplyMomentumOp declarations
//===----------------------------------------------------------------------===//

class ResourceApplyMomentumOpAdaptor {
public:
  ResourceApplyMomentumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceApplyMomentumOpAdaptor(ResourceApplyMomentumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value var();
  Value accum();
  Value lr();
  Value grad();
  Value momentum();
  BoolAttr use_locking();
  BoolAttr use_nesterov();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceApplyMomentumOp : public Op<ResourceApplyMomentumOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceApplyMomentumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value var();
  Value accum();
  Value lr();
  Value grad();
  Value momentum();
  ::mlir::MutableOperandRange varMutable();
  ::mlir::MutableOperandRange accumMutable();
  ::mlir::MutableOperandRange lrMutable();
  ::mlir::MutableOperandRange gradMutable();
  ::mlir::MutableOperandRange momentumMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr use_lockingAttr();
  bool use_locking();
  BoolAttr use_nesterovAttr();
  bool use_nesterov();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void use_lockingAttr(BoolAttr attr);
  void use_nesterovAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value accum, Value lr, Value grad, Value momentum, BoolAttr use_locking, BoolAttr use_nesterov);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value accum, Value lr, Value grad, Value momentum, BoolAttr use_locking, BoolAttr use_nesterov);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value var, Value accum, Value lr, Value grad, Value momentum, bool use_locking = false, bool use_nesterov = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value var, Value accum, Value lr, Value grad, Value momentum, bool use_locking = false, bool use_nesterov = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ResourceGatherOp declarations
//===----------------------------------------------------------------------===//

class ResourceGatherOpAdaptor {
public:
  ResourceGatherOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceGatherOpAdaptor(ResourceGatherOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value resource();
  Value indices();
  IntegerAttr batch_dims();
  BoolAttr validate_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceGatherOp : public Op<ResourceGatherOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceGatherOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value resource();
  Value indices();
  ::mlir::MutableOperandRange resourceMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr batch_dimsAttr();
  APInt batch_dims();
  BoolAttr validate_indicesAttr();
  bool validate_indices();
  Type Tindices();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void batch_dimsAttr(IntegerAttr attr);
  void validate_indicesAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value resource, Value indices, IntegerAttr batch_dims, BoolAttr validate_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value resource, Value indices, IntegerAttr batch_dims, BoolAttr validate_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value resource, Value indices, APInt batch_dims, bool validate_indices = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value resource, Value indices, APInt batch_dims, bool validate_indices = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ResourceScatterUpdateOp declarations
//===----------------------------------------------------------------------===//

class ResourceScatterUpdateOpAdaptor {
public:
  ResourceScatterUpdateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResourceScatterUpdateOpAdaptor(ResourceScatterUpdateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value resource();
  Value indices();
  Value updates();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResourceScatterUpdateOp : public Op<ResourceScatterUpdateOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ResourceScatterUpdateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value resource();
  Value indices();
  Value updates();
  ::mlir::MutableOperandRange resourceMutable();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange updatesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Type Tindices();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value resource, Value indices, Value updates);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value resource, Value indices, Value updates);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ReverseSequenceOp declarations
//===----------------------------------------------------------------------===//

class ReverseSequenceOpAdaptor {
public:
  ReverseSequenceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReverseSequenceOpAdaptor(ReverseSequenceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value seq_lengths();
  IntegerAttr seq_dim();
  IntegerAttr batch_dim();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReverseSequenceOp : public Op<ReverseSequenceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReverseSequenceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value seq_lengths();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange seq_lengthsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr seq_dimAttr();
  APInt seq_dim();
  IntegerAttr batch_dimAttr();
  APInt batch_dim();
  Type Tlen();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void seq_dimAttr(IntegerAttr attr);
  void batch_dimAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value seq_lengths, IntegerAttr seq_dim, IntegerAttr batch_dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value seq_lengths, IntegerAttr seq_dim, IntegerAttr batch_dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value seq_lengths, APInt seq_dim, APInt batch_dim);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value seq_lengths, APInt seq_dim, APInt batch_dim);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ReverseV2Op declarations
//===----------------------------------------------------------------------===//

class ReverseV2OpAdaptor {
public:
  ReverseV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReverseV2OpAdaptor(ReverseV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value tensor();
  Value axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReverseV2Op : public Op<ReverseV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReverseV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value tensor();
  Value axis();
  ::mlir::MutableOperandRange tensorMutable();
  ::mlir::MutableOperandRange axisMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value tensor, Value axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, Value axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RightShiftOp declarations
//===----------------------------------------------------------------------===//

class RightShiftOpAdaptor {
public:
  RightShiftOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RightShiftOpAdaptor(RightShiftOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RightShiftOp : public Op<RightShiftOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RightShiftOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RintOp declarations
//===----------------------------------------------------------------------===//

class RintOpAdaptor {
public:
  RintOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RintOpAdaptor(RintOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RintOp : public Op<RintOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RintOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RoundOp declarations
//===----------------------------------------------------------------------===//

class RoundOpAdaptor {
public:
  RoundOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RoundOpAdaptor(RoundOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RoundOp : public Op<RoundOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RoundOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RsqrtGradOp declarations
//===----------------------------------------------------------------------===//

class RsqrtGradOpAdaptor {
public:
  RsqrtGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RsqrtGradOpAdaptor(RsqrtGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y();
  Value dy();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RsqrtGradOp : public Op<RsqrtGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RsqrtGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y();
  Value dy();
  ::mlir::MutableOperandRange yMutable();
  ::mlir::MutableOperandRange dyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y, Value dy);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::RsqrtOp declarations
//===----------------------------------------------------------------------===//

class RsqrtOpAdaptor {
public:
  RsqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RsqrtOpAdaptor(RsqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RsqrtOp : public Op<RsqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RsqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ScatterNdOp declarations
//===----------------------------------------------------------------------===//

class ScatterNdOpAdaptor {
public:
  ScatterNdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ScatterNdOpAdaptor(ScatterNdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value indices();
  Value updates();
  Value shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ScatterNdOp : public Op<ScatterNdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ScatterNdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value indices();
  Value updates();
  Value shape();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange updatesMutable();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value indices, Value updates, Value shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value indices, Value updates, Value shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SegmentMaxOp declarations
//===----------------------------------------------------------------------===//

class SegmentMaxOpAdaptor {
public:
  SegmentMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SegmentMaxOpAdaptor(SegmentMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SegmentMaxOp : public Op<SegmentMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SegmentMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SegmentMeanOp declarations
//===----------------------------------------------------------------------===//

class SegmentMeanOpAdaptor {
public:
  SegmentMeanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SegmentMeanOpAdaptor(SegmentMeanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SegmentMeanOp : public Op<SegmentMeanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SegmentMeanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SegmentMinOp declarations
//===----------------------------------------------------------------------===//

class SegmentMinOpAdaptor {
public:
  SegmentMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SegmentMinOpAdaptor(SegmentMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SegmentMinOp : public Op<SegmentMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SegmentMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SegmentProdOp declarations
//===----------------------------------------------------------------------===//

class SegmentProdOpAdaptor {
public:
  SegmentProdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SegmentProdOpAdaptor(SegmentProdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SegmentProdOp : public Op<SegmentProdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SegmentProdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SegmentSumOp declarations
//===----------------------------------------------------------------------===//

class SegmentSumOpAdaptor {
public:
  SegmentSumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SegmentSumOpAdaptor(SegmentSumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SegmentSumOp : public Op<SegmentSumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SegmentSumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpAdaptor {
public:
  SelectOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SelectOpAdaptor(SelectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  Value t();
  Value e();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectOp : public Op<SelectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value condition();
  Value t();
  Value e();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange tMutable();
  ::mlir::MutableOperandRange eMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value condition, Value t, Value e);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, Value t, Value e);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SelectV2Op declarations
//===----------------------------------------------------------------------===//

class SelectV2OpAdaptor {
public:
  SelectV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SelectV2OpAdaptor(SelectV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  Value t();
  Value e();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectV2Op : public Op<SelectV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value condition();
  Value t();
  Value e();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange tMutable();
  ::mlir::MutableOperandRange eMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value  condition, Value  e, Value  t);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value condition, Value t, Value e);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, Value t, Value e);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SeluGradOp declarations
//===----------------------------------------------------------------------===//

class SeluGradOpAdaptor {
public:
  SeluGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SeluGradOpAdaptor(SeluGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gradients();
  Value outputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SeluGradOp : public Op<SeluGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SeluGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gradients();
  Value outputs();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange outputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value backprops();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value outputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value outputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value gradients, Value outputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SeluOp declarations
//===----------------------------------------------------------------------===//

class SeluOpAdaptor {
public:
  SeluOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SeluOpAdaptor(SeluOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SeluOp : public Op<SeluOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SeluOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value activations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SendTPUEmbeddingGradientsOp declarations
//===----------------------------------------------------------------------===//

class SendTPUEmbeddingGradientsOpAdaptor {
public:
  SendTPUEmbeddingGradientsOpAdaptor(ValueRange values, DictionaryAttr attrs);
  SendTPUEmbeddingGradientsOpAdaptor(SendTPUEmbeddingGradientsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  ValueRange learning_rates();
  StringAttr config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SendTPUEmbeddingGradientsOp : public Op<SendTPUEmbeddingGradientsOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::AttrSizedOperandSegments, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SendTPUEmbeddingGradientsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  Operation::operand_range learning_rates();
  ::mlir::MutableOperandRange inputsMutable();
  ::mlir::MutableOperandRange learning_ratesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr configAttr();
  StringRef config();
  size_t N();
  size_t NN();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange inputs, ValueRange learning_rates, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, ValueRange learning_rates, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange inputs, ValueRange learning_rates, StringRef config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, ValueRange learning_rates, StringRef config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ShapeNOp declarations
//===----------------------------------------------------------------------===//

class ShapeNOpAdaptor {
public:
  ShapeNOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShapeNOpAdaptor(ShapeNOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShapeNOp : public Op<ShapeNOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShapeNOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  Type T();
  Type out_type();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ShapeOp declarations
//===----------------------------------------------------------------------===//

class ShapeOpAdaptor {
public:
  ShapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShapeOpAdaptor(ShapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShapeOp : public Op<ShapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type out_type();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value  input, BoolAttr use32Bit);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SigmoidGradOp declarations
//===----------------------------------------------------------------------===//

class SigmoidGradOpAdaptor {
public:
  SigmoidGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SigmoidGradOpAdaptor(SigmoidGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y();
  Value dy();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SigmoidGradOp : public Op<SigmoidGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SigmoidGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y();
  Value dy();
  ::mlir::MutableOperandRange yMutable();
  ::mlir::MutableOperandRange dyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y, Value dy);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SigmoidOp declarations
//===----------------------------------------------------------------------===//

class SigmoidOpAdaptor {
public:
  SigmoidOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SigmoidOpAdaptor(SigmoidOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SigmoidOp : public Op<SigmoidOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SigmoidOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SignOp declarations
//===----------------------------------------------------------------------===//

class SignOpAdaptor {
public:
  SignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SignOpAdaptor(SignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SignOp : public Op<SignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SignOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SinOp declarations
//===----------------------------------------------------------------------===//

class SinOpAdaptor {
public:
  SinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SinOpAdaptor(SinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SinOp : public Op<SinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SinhOp declarations
//===----------------------------------------------------------------------===//

class SinhOpAdaptor {
public:
  SinhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SinhOpAdaptor(SinhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SinhOp : public Op<SinhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SinhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SizeOp declarations
//===----------------------------------------------------------------------===//

class SizeOpAdaptor {
public:
  SizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SizeOpAdaptor(SizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SizeOp : public Op<SizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type out_type();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SliceOp declarations
//===----------------------------------------------------------------------===//

class SliceOpAdaptor {
public:
  SliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SliceOpAdaptor(SliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value begin();
  Value size();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SliceOp : public Op<SliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value begin();
  Value size();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange beginMutable();
  ::mlir::MutableOperandRange sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Index();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value begin, Value size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value begin, Value size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SnapshotOp declarations
//===----------------------------------------------------------------------===//

class SnapshotOpAdaptor {
public:
  SnapshotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SnapshotOpAdaptor(SnapshotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SnapshotOp : public Op<SnapshotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SnapshotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SoftmaxCrossEntropyWithLogitsOp declarations
//===----------------------------------------------------------------------===//

class SoftmaxCrossEntropyWithLogitsOpAdaptor {
public:
  SoftmaxCrossEntropyWithLogitsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SoftmaxCrossEntropyWithLogitsOpAdaptor(SoftmaxCrossEntropyWithLogitsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  Value labels();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SoftmaxCrossEntropyWithLogitsOp : public Op<SoftmaxCrossEntropyWithLogitsOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SoftmaxCrossEntropyWithLogitsOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  Value labels();
  ::mlir::MutableOperandRange featuresMutable();
  ::mlir::MutableOperandRange labelsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value loss();
  Value backprop();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type loss, Type backprop, Value features, Value labels);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features, Value labels);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SoftmaxOp declarations
//===----------------------------------------------------------------------===//

class SoftmaxOpAdaptor {
public:
  SoftmaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SoftmaxOpAdaptor(SoftmaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value logits();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SoftmaxOp : public Op<SoftmaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SoftmaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value logits();
  ::mlir::MutableOperandRange logitsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value softmax();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type softmax, Value logits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value logits);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value logits);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SoftplusGradOp declarations
//===----------------------------------------------------------------------===//

class SoftplusGradOpAdaptor {
public:
  SoftplusGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SoftplusGradOpAdaptor(SoftplusGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gradients();
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SoftplusGradOp : public Op<SoftplusGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SoftplusGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gradients();
  Value features();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value backprops();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SoftplusOp declarations
//===----------------------------------------------------------------------===//

class SoftplusOpAdaptor {
public:
  SoftplusOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SoftplusOpAdaptor(SoftplusOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SoftplusOp : public Op<SoftplusOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SoftplusOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value activations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SoftsignGradOp declarations
//===----------------------------------------------------------------------===//

class SoftsignGradOpAdaptor {
public:
  SoftsignGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SoftsignGradOpAdaptor(SoftsignGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gradients();
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SoftsignGradOp : public Op<SoftsignGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SoftsignGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gradients();
  Value features();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value backprops();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type backprops, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value gradients, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value gradients, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SoftsignOp declarations
//===----------------------------------------------------------------------===//

class SoftsignOpAdaptor {
public:
  SoftsignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SoftsignOpAdaptor(SoftsignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SoftsignOp : public Op<SoftsignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SoftsignOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  ::mlir::MutableOperandRange featuresMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value activations();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type activations, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value features);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SpaceToBatchNDOp declarations
//===----------------------------------------------------------------------===//

class SpaceToBatchNDOpAdaptor {
public:
  SpaceToBatchNDOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SpaceToBatchNDOpAdaptor(SpaceToBatchNDOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value block_shape();
  Value paddings();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SpaceToBatchNDOp : public Op<SpaceToBatchNDOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SpaceToBatchNDOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value block_shape();
  Value paddings();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange block_shapeMutable();
  ::mlir::MutableOperandRange paddingsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tpaddings();
  Type Tblock_shape();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value block_shape, Value paddings);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value block_shape, Value paddings);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SpaceToBatchOp declarations
//===----------------------------------------------------------------------===//

class SpaceToBatchOpAdaptor {
public:
  SpaceToBatchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SpaceToBatchOpAdaptor(SpaceToBatchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value paddings();
  IntegerAttr block_size();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SpaceToBatchOp : public Op<SpaceToBatchOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SpaceToBatchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value paddings();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange paddingsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr block_sizeAttr();
  APInt block_size();
  Type T();
  Type Tpaddings();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void block_sizeAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value paddings, IntegerAttr block_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value paddings, IntegerAttr block_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value paddings, APInt block_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value paddings, APInt block_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SpaceToDepthOp declarations
//===----------------------------------------------------------------------===//

class SpaceToDepthOpAdaptor {
public:
  SpaceToDepthOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SpaceToDepthOpAdaptor(SpaceToDepthOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  IntegerAttr block_size();
  StringAttr data_format();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SpaceToDepthOp : public Op<SpaceToDepthOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SpaceToDepthOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr block_sizeAttr();
  APInt block_size();
  StringAttr data_formatAttr();
  StringRef data_format();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void block_sizeAttr(IntegerAttr attr);
  void data_formatAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, IntegerAttr block_size, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, IntegerAttr block_size, StringAttr data_format);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, APInt block_size, StringRef data_format = "NHWC");
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, APInt block_size, StringRef data_format = "NHWC");
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SparseMatMulOp declarations
//===----------------------------------------------------------------------===//

class SparseMatMulOpAdaptor {
public:
  SparseMatMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SparseMatMulOpAdaptor(SparseMatMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  BoolAttr a_is_sparse();
  BoolAttr b_is_sparse();
  BoolAttr transpose_a();
  BoolAttr transpose_b();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SparseMatMulOp : public Op<SparseMatMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SparseMatMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value product();
  BoolAttr a_is_sparseAttr();
  bool a_is_sparse();
  BoolAttr b_is_sparseAttr();
  bool b_is_sparse();
  BoolAttr transpose_aAttr();
  bool transpose_a();
  BoolAttr transpose_bAttr();
  bool transpose_b();
  Type Ta();
  Type Tb();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void a_is_sparseAttr(BoolAttr attr);
  void b_is_sparseAttr(BoolAttr attr);
  void transpose_aAttr(BoolAttr attr);
  void transpose_bAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type product, Value a, Value b, BoolAttr a_is_sparse, BoolAttr b_is_sparse, BoolAttr transpose_a, BoolAttr transpose_b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, BoolAttr a_is_sparse, BoolAttr b_is_sparse, BoolAttr transpose_a, BoolAttr transpose_b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type product, Value a, Value b, bool a_is_sparse = true, bool b_is_sparse = false, bool transpose_a = false, bool transpose_b = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, bool a_is_sparse = true, bool b_is_sparse = false, bool transpose_a = false, bool transpose_b = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SparseSoftmaxCrossEntropyWithLogitsOp declarations
//===----------------------------------------------------------------------===//

class SparseSoftmaxCrossEntropyWithLogitsOpAdaptor {
public:
  SparseSoftmaxCrossEntropyWithLogitsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SparseSoftmaxCrossEntropyWithLogitsOpAdaptor(SparseSoftmaxCrossEntropyWithLogitsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value features();
  Value labels();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SparseSoftmaxCrossEntropyWithLogitsOp : public Op<SparseSoftmaxCrossEntropyWithLogitsOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SparseSoftmaxCrossEntropyWithLogitsOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value features();
  Value labels();
  ::mlir::MutableOperandRange featuresMutable();
  ::mlir::MutableOperandRange labelsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value loss();
  Value backprop();
  Type T();
  Type Tlabels();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type loss, Type backprop, Value features, Value labels);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value features, Value labels);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SparseToDenseOp declarations
//===----------------------------------------------------------------------===//

class SparseToDenseOpAdaptor {
public:
  SparseToDenseOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SparseToDenseOpAdaptor(SparseToDenseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value sparse_indices();
  Value output_shape();
  Value sparse_values();
  Value default_value();
  BoolAttr validate_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SparseToDenseOp : public Op<SparseToDenseOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SparseToDenseOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value sparse_indices();
  Value output_shape();
  Value sparse_values();
  Value default_value();
  ::mlir::MutableOperandRange sparse_indicesMutable();
  ::mlir::MutableOperandRange output_shapeMutable();
  ::mlir::MutableOperandRange sparse_valuesMutable();
  ::mlir::MutableOperandRange default_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value dense();
  BoolAttr validate_indicesAttr();
  bool validate_indices();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void validate_indicesAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type dense, Value sparse_indices, Value output_shape, Value sparse_values, Value default_value, BoolAttr validate_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value sparse_indices, Value output_shape, Value sparse_values, Value default_value, BoolAttr validate_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type dense, Value sparse_indices, Value output_shape, Value sparse_values, Value default_value, bool validate_indices = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value sparse_indices, Value output_shape, Value sparse_values, Value default_value, bool validate_indices = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SplitOp declarations
//===----------------------------------------------------------------------===//

class SplitOpAdaptor {
public:
  SplitOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SplitOpAdaptor(SplitOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value split_dim();
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SplitOp : public Op<SplitOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SplitOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value split_dim();
  Value value();
  ::mlir::MutableOperandRange split_dimMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  Type T();
  size_t num_split();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value split_dim, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SplitVOp declarations
//===----------------------------------------------------------------------===//

class SplitVOpAdaptor {
public:
  SplitVOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SplitVOpAdaptor(SplitVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value size_splits();
  Value split_dim();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SplitVOp : public Op<SplitVOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SplitVOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value size_splits();
  Value split_dim();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange size_splitsMutable();
  ::mlir::MutableOperandRange split_dimMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  Type Tlen();
  Type T();
  size_t num_split();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value value, Value size_splits, Value split_dim);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SqrtGradOp declarations
//===----------------------------------------------------------------------===//

class SqrtGradOpAdaptor {
public:
  SqrtGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SqrtGradOpAdaptor(SqrtGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y();
  Value dy();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SqrtGradOp : public Op<SqrtGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SqrtGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y();
  Value dy();
  ::mlir::MutableOperandRange yMutable();
  ::mlir::MutableOperandRange dyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y, Value dy);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SqrtOp declarations
//===----------------------------------------------------------------------===//

class SqrtOpAdaptor {
public:
  SqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SqrtOpAdaptor(SqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SqrtOp : public Op<SqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SquareOp declarations
//===----------------------------------------------------------------------===//

class SquareOpAdaptor {
public:
  SquareOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SquareOpAdaptor(SquareOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SquareOp : public Op<SquareOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SquareOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SquaredDifferenceOp declarations
//===----------------------------------------------------------------------===//

class SquaredDifferenceOpAdaptor {
public:
  SquaredDifferenceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SquaredDifferenceOpAdaptor(SquaredDifferenceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SquaredDifferenceOp : public Op<SquaredDifferenceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SquaredDifferenceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SqueezeOp declarations
//===----------------------------------------------------------------------===//

class SqueezeOpAdaptor {
public:
  SqueezeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SqueezeOpAdaptor(SqueezeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  ArrayAttr squeeze_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SqueezeOp : public Op<SqueezeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SqueezeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr squeeze_dimsAttr();
  ArrayAttr squeeze_dims();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void squeeze_dimsAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, ArrayAttr squeeze_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, ArrayAttr squeeze_dims);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::StackCloseV2Op declarations
//===----------------------------------------------------------------------===//

class StackCloseV2OpAdaptor {
public:
  StackCloseV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StackCloseV2OpAdaptor(StackCloseV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StackCloseV2Op : public Op<StackCloseV2Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = StackCloseV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  ::mlir::MutableOperandRange handleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value handle);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::StackPopV2Op declarations
//===----------------------------------------------------------------------===//

class StackPopV2OpAdaptor {
public:
  StackPopV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StackPopV2OpAdaptor(StackPopV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StackPopV2Op : public Op<StackPopV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StackPopV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  ::mlir::MutableOperandRange handleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value elem();
  Type elem_type();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type elem, Value handle);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::StackPushV2Op declarations
//===----------------------------------------------------------------------===//

class StackPushV2OpAdaptor {
public:
  StackPushV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StackPushV2OpAdaptor(StackPushV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value elem();
  BoolAttr swap_memory();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StackPushV2Op : public Op<StackPushV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StackPushV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value elem();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange elemMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr swap_memoryAttr();
  bool swap_memory();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void swap_memoryAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value handle, Value elem, BoolAttr swap_memory);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value elem, BoolAttr swap_memory);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value handle, Value elem, bool swap_memory = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value elem, bool swap_memory = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::StackV2Op declarations
//===----------------------------------------------------------------------===//

class StackV2OpAdaptor {
public:
  StackV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StackV2OpAdaptor(StackV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value max_size();
  TypeAttr elem_type();
  StringAttr stack_name();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StackV2Op : public Op<StackV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = StackV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value max_size();
  ::mlir::MutableOperandRange max_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  TypeAttr elem_typeAttr();
  Type elem_type();
  StringAttr stack_nameAttr();
  StringRef stack_name();
  void elem_typeAttr(TypeAttr attr);
  void stack_nameAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value max_size, TypeAttr elem_type, StringAttr stack_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value max_size, TypeAttr elem_type, StringAttr stack_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value max_size, TypeAttr elem_type, StringRef stack_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value max_size, TypeAttr elem_type, StringRef stack_name);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::StatefulPartitionedCallOp declarations
//===----------------------------------------------------------------------===//

class StatefulPartitionedCallOpAdaptor {
public:
  StatefulPartitionedCallOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StatefulPartitionedCallOpAdaptor(StatefulPartitionedCallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  FlatSymbolRefAttr f();
  StringAttr config();
  StringAttr config_proto();
  StringAttr executor_type();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StatefulPartitionedCallOp : public Op<StatefulPartitionedCallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, CallOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StatefulPartitionedCallOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  FlatSymbolRefAttr fAttr();
  StringRef f();
  StringAttr configAttr();
  StringRef config();
  StringAttr config_protoAttr();
  StringRef config_proto();
  StringAttr executor_typeAttr();
  StringRef executor_type();
  mlir::OperandElementTypeRange Tin();
  mlir::ResultElementTypeRange Tout();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void fAttr(FlatSymbolRefAttr attr);
  void configAttr(StringAttr attr);
  void config_protoAttr(StringAttr attr);
  void executor_typeAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange args, FlatSymbolRefAttr f, StringAttr config, StringAttr config_proto, StringAttr executor_type);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange args, StringRef f, StringRef config, StringRef config_proto, StringRef executor_type);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();

    // Gets the argument operands to the called function.
    operand_range getArgOperands() { return args(); }

    // Returns the callee of this operation.
    CallInterfaceCallable getCallableForCallee() {
      return getAttrOfType<SymbolRefAttr>("f");
    }
  
};

//===----------------------------------------------------------------------===//
// TF::StatelessRandomUniformOp declarations
//===----------------------------------------------------------------------===//

class StatelessRandomUniformOpAdaptor {
public:
  StatelessRandomUniformOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StatelessRandomUniformOpAdaptor(StatelessRandomUniformOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  Value seed();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StatelessRandomUniformOp : public Op<StatelessRandomUniformOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StatelessRandomUniformOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  Value seed();
  ::mlir::MutableOperandRange shapeMutable();
  ::mlir::MutableOperandRange seedMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  Type Tseed();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, Value seed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, Value seed);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::StopGradientOp declarations
//===----------------------------------------------------------------------===//

class StopGradientOpAdaptor {
public:
  StopGradientOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StopGradientOpAdaptor(StopGradientOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StopGradientOp : public Op<StopGradientOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StopGradientOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::StridedSliceGradOp declarations
//===----------------------------------------------------------------------===//

class StridedSliceGradOpAdaptor {
public:
  StridedSliceGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StridedSliceGradOpAdaptor(StridedSliceGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  Value begin();
  Value end();
  Value strides();
  Value dy();
  IntegerAttr begin_mask();
  IntegerAttr end_mask();
  IntegerAttr ellipsis_mask();
  IntegerAttr new_axis_mask();
  IntegerAttr shrink_axis_mask();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StridedSliceGradOp : public Op<StridedSliceGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StridedSliceGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  Value begin();
  Value end();
  Value strides();
  Value dy();
  ::mlir::MutableOperandRange shapeMutable();
  ::mlir::MutableOperandRange beginMutable();
  ::mlir::MutableOperandRange endMutable();
  ::mlir::MutableOperandRange stridesMutable();
  ::mlir::MutableOperandRange dyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr begin_maskAttr();
  APInt begin_mask();
  IntegerAttr end_maskAttr();
  APInt end_mask();
  IntegerAttr ellipsis_maskAttr();
  APInt ellipsis_mask();
  IntegerAttr new_axis_maskAttr();
  APInt new_axis_mask();
  IntegerAttr shrink_axis_maskAttr();
  APInt shrink_axis_mask();
  Type T();
  Type Index();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void begin_maskAttr(IntegerAttr attr);
  void end_maskAttr(IntegerAttr attr);
  void ellipsis_maskAttr(IntegerAttr attr);
  void new_axis_maskAttr(IntegerAttr attr);
  void shrink_axis_maskAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, Value begin, Value end, Value strides, Value dy, IntegerAttr begin_mask, IntegerAttr end_mask, IntegerAttr ellipsis_mask, IntegerAttr new_axis_mask, IntegerAttr shrink_axis_mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, Value begin, Value end, Value strides, Value dy, IntegerAttr begin_mask, IntegerAttr end_mask, IntegerAttr ellipsis_mask, IntegerAttr new_axis_mask, IntegerAttr shrink_axis_mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, Value begin, Value end, Value strides, Value dy, APInt begin_mask, APInt end_mask, APInt ellipsis_mask, APInt new_axis_mask, APInt shrink_axis_mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, Value begin, Value end, Value strides, Value dy, APInt begin_mask, APInt end_mask, APInt ellipsis_mask, APInt new_axis_mask, APInt shrink_axis_mask);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // If sliced shape is able to be deduced, returns true, updates `shape`
    // with the final shape after performing StridedSlice, and updates
    // `begin_indices`, `end_indices`, and `strides` with their canonical
    // values, respectively.
    bool GetSlicedShapeAndBoundRanges(
      ::llvm::SmallVectorImpl<int64_t> *input_shape,
      ::llvm::SmallVectorImpl<int64_t> *slice_begin,
      ::llvm::SmallVectorImpl<int64_t> *slice_end,
      ::llvm::SmallVectorImpl<int64_t> *slice_stride);
  
};

//===----------------------------------------------------------------------===//
// TF::StridedSliceOp declarations
//===----------------------------------------------------------------------===//

class StridedSliceOpAdaptor {
public:
  StridedSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StridedSliceOpAdaptor(StridedSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value begin();
  Value end();
  Value strides();
  IntegerAttr begin_mask();
  IntegerAttr end_mask();
  IntegerAttr ellipsis_mask();
  IntegerAttr new_axis_mask();
  IntegerAttr shrink_axis_mask();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StridedSliceOp : public Op<StridedSliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StridedSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value begin();
  Value end();
  Value strides();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange beginMutable();
  ::mlir::MutableOperandRange endMutable();
  ::mlir::MutableOperandRange stridesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr begin_maskAttr();
  APInt begin_mask();
  IntegerAttr end_maskAttr();
  APInt end_mask();
  IntegerAttr ellipsis_maskAttr();
  APInt ellipsis_mask();
  IntegerAttr new_axis_maskAttr();
  APInt new_axis_mask();
  IntegerAttr shrink_axis_maskAttr();
  APInt shrink_axis_mask();
  Type T();
  Type Index();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void begin_maskAttr(IntegerAttr attr);
  void end_maskAttr(IntegerAttr attr);
  void ellipsis_maskAttr(IntegerAttr attr);
  void new_axis_maskAttr(IntegerAttr attr);
  void shrink_axis_maskAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value begin, Value end, Value strides, IntegerAttr begin_mask, IntegerAttr end_mask, IntegerAttr ellipsis_mask, IntegerAttr new_axis_mask, IntegerAttr shrink_axis_mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value begin, Value end, Value strides, IntegerAttr begin_mask, IntegerAttr end_mask, IntegerAttr ellipsis_mask, IntegerAttr new_axis_mask, IntegerAttr shrink_axis_mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value begin, Value end, Value strides, APInt begin_mask, APInt end_mask, APInt ellipsis_mask, APInt new_axis_mask, APInt shrink_axis_mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value begin, Value end, Value strides, APInt begin_mask, APInt end_mask, APInt ellipsis_mask, APInt new_axis_mask, APInt shrink_axis_mask);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // If sliced shape is able to be deduced, returns true, updates
    // `begin_indices`, `end_indices`, and `strides` with their canonical
    // values, respectively.
    bool GetSlicedBoundRanges(
      ::llvm::SmallVectorImpl<int64_t> *slice_begin,
      ::llvm::SmallVectorImpl<int64_t> *slice_end,
      ::llvm::SmallVectorImpl<int64_t> *slice_stride);
  
};

//===----------------------------------------------------------------------===//
// TF::StringFormatOp declarations
//===----------------------------------------------------------------------===//

class StringFormatOpAdaptor {
public:
  StringFormatOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StringFormatOpAdaptor(StringFormatOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  StringAttr strtemplate();
  StringAttr placeholder();
  IntegerAttr summarize();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StringFormatOp : public Op<StringFormatOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StringFormatOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr strtemplateAttr();
  StringRef strtemplate();
  StringAttr placeholderAttr();
  StringRef placeholder();
  IntegerAttr summarizeAttr();
  APInt summarize();
  mlir::OperandElementTypeRange T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void strtemplateAttr(StringAttr attr);
  void placeholderAttr(StringAttr attr);
  void summarizeAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange inputs, StringAttr strtemplate, StringAttr placeholder, IntegerAttr summarize);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, StringAttr strtemplate, StringAttr placeholder, IntegerAttr summarize);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange inputs, StringRef strtemplate, StringRef placeholder, APInt summarize);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, StringRef strtemplate, StringRef placeholder, APInt summarize);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SubOp declarations
//===----------------------------------------------------------------------===//

class SubOpAdaptor {
public:
  SubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubOpAdaptor(SubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubOp : public Op<SubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::SumOp declarations
//===----------------------------------------------------------------------===//

class SumOpAdaptor {
public:
  SumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SumOpAdaptor(SumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  BoolAttr keep_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SumOp : public Op<SumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value reduction_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange reduction_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr keep_dimsAttr();
  bool keep_dims();
  Type T();
  Type Tidx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keep_dimsAttr(BoolAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, BoolAttr keep_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value reduction_indices, bool keep_dims = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TPUCompilationResultOp declarations
//===----------------------------------------------------------------------===//

class TPUCompilationResultOpAdaptor {
public:
  TPUCompilationResultOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUCompilationResultOpAdaptor(TPUCompilationResultOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUCompilationResultOp : public Op<TPUCompilationResultOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUCompilationResultOpAdaptor;
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
// TF::TPUCompileSucceededAssertOp declarations
//===----------------------------------------------------------------------===//

class TPUCompileSucceededAssertOpAdaptor {
public:
  TPUCompileSucceededAssertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUCompileSucceededAssertOpAdaptor(TPUCompileSucceededAssertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value compilation_status();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUCompileSucceededAssertOp : public Op<TPUCompileSucceededAssertOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = TPUCompileSucceededAssertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value compilation_status();
  ::mlir::MutableOperandRange compilation_statusMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value compilation_status);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value compilation_status);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TPUCopyWithLayoutOp declarations
//===----------------------------------------------------------------------===//

class TPUCopyWithLayoutOpAdaptor {
public:
  TPUCopyWithLayoutOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUCopyWithLayoutOpAdaptor(TPUCopyWithLayoutOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value layout();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUCopyWithLayoutOp : public Op<TPUCopyWithLayoutOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUCopyWithLayoutOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value layout();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange layoutMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value layout);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value layout);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TPUExecuteAndUpdateVariablesOp declarations
//===----------------------------------------------------------------------===//

class TPUExecuteAndUpdateVariablesOpAdaptor {
public:
  TPUExecuteAndUpdateVariablesOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUExecuteAndUpdateVariablesOpAdaptor(TPUExecuteAndUpdateVariablesOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  Value key();
  ArrayAttr device_var_reads_indices();
  ArrayAttr device_var_updates_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUExecuteAndUpdateVariablesOp : public Op<TPUExecuteAndUpdateVariablesOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUExecuteAndUpdateVariablesOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  Value key();
  ::mlir::MutableOperandRange argsMutable();
  ::mlir::MutableOperandRange keyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  ArrayAttr device_var_reads_indicesAttr();
  ArrayAttr device_var_reads_indices();
  ArrayAttr device_var_updates_indicesAttr();
  ArrayAttr device_var_updates_indices();
  mlir::OperandElementTypeRange Targs();
  mlir::ResultElementTypeRange Tresults();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void device_var_reads_indicesAttr(ArrayAttr attr);
  void device_var_updates_indicesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, ValueRange args, Value key, ArrayAttr device_var_reads_indices, ArrayAttr device_var_updates_indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TPUExecuteOp declarations
//===----------------------------------------------------------------------===//

class TPUExecuteOpAdaptor {
public:
  TPUExecuteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUExecuteOpAdaptor(TPUExecuteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  Value key();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUExecuteOp : public Op<TPUExecuteOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUExecuteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  Value key();
  ::mlir::MutableOperandRange argsMutable();
  ::mlir::MutableOperandRange keyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  mlir::OperandElementTypeRange Targs();
  mlir::ResultElementTypeRange Tresults();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, ValueRange args, Value key);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TPUGetLayoutOp declarations
//===----------------------------------------------------------------------===//

class TPUGetLayoutOpAdaptor {
public:
  TPUGetLayoutOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUGetLayoutOpAdaptor(TPUGetLayoutOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value cache_key();
  IntegerAttr index();
  BoolAttr is_output();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUGetLayoutOp : public Op<TPUGetLayoutOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUGetLayoutOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value cache_key();
  ::mlir::MutableOperandRange cache_keyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value layout();
  IntegerAttr indexAttr();
  APInt index();
  BoolAttr is_outputAttr();
  bool is_output();
  void indexAttr(IntegerAttr attr);
  void is_outputAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type layout, Value cache_key, IntegerAttr index, BoolAttr is_output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value cache_key, IntegerAttr index, BoolAttr is_output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type layout, Value cache_key, APInt index, bool is_output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value cache_key, APInt index, bool is_output);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TPUReplicateMetadataOp declarations
//===----------------------------------------------------------------------===//

class TPUReplicateMetadataOpAdaptor {
public:
  TPUReplicateMetadataOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUReplicateMetadataOpAdaptor(TPUReplicateMetadataOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr num_replicas();
  IntegerAttr num_cores_per_replica();
  StringAttr topology();
  BoolAttr use_tpu();
  ArrayAttr device_assignment();
  ArrayAttr computation_shape();
  ArrayAttr host_compute_core();
  ArrayAttr padding_map();
  StringAttr step_marker_location();
  BoolAttr allow_soft_placement();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUReplicateMetadataOp : public Op<TPUReplicateMetadataOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = TPUReplicateMetadataOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr num_replicasAttr();
  APInt num_replicas();
  IntegerAttr num_cores_per_replicaAttr();
  APInt num_cores_per_replica();
  StringAttr topologyAttr();
  StringRef topology();
  BoolAttr use_tpuAttr();
  bool use_tpu();
  ArrayAttr device_assignmentAttr();
  ArrayAttr device_assignment();
  ArrayAttr computation_shapeAttr();
  ArrayAttr computation_shape();
  ArrayAttr host_compute_coreAttr();
  ArrayAttr host_compute_core();
  ArrayAttr padding_mapAttr();
  ArrayAttr padding_map();
  StringAttr step_marker_locationAttr();
  StringRef step_marker_location();
  BoolAttr allow_soft_placementAttr();
  bool allow_soft_placement();
  void num_replicasAttr(IntegerAttr attr);
  void num_cores_per_replicaAttr(IntegerAttr attr);
  void topologyAttr(StringAttr attr);
  void use_tpuAttr(BoolAttr attr);
  void device_assignmentAttr(ArrayAttr attr);
  void computation_shapeAttr(ArrayAttr attr);
  void host_compute_coreAttr(ArrayAttr attr);
  void padding_mapAttr(ArrayAttr attr);
  void step_marker_locationAttr(StringAttr attr);
  void allow_soft_placementAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr num_replicas, IntegerAttr num_cores_per_replica, StringAttr topology, BoolAttr use_tpu, ArrayAttr device_assignment, ArrayAttr computation_shape, ArrayAttr host_compute_core, ArrayAttr padding_map, StringAttr step_marker_location, BoolAttr allow_soft_placement);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr num_replicas, IntegerAttr num_cores_per_replica, StringAttr topology, BoolAttr use_tpu, ArrayAttr device_assignment, ArrayAttr computation_shape, ArrayAttr host_compute_core, ArrayAttr padding_map, StringAttr step_marker_location, BoolAttr allow_soft_placement);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, APInt num_replicas, APInt num_cores_per_replica, StringRef topology, bool use_tpu, ArrayAttr device_assignment, ArrayAttr computation_shape, ArrayAttr host_compute_core, ArrayAttr padding_map, StringRef step_marker_location = "STEP_MARK_AT_ENTRY", bool allow_soft_placement = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, APInt num_replicas, APInt num_cores_per_replica, StringRef topology, bool use_tpu, ArrayAttr device_assignment, ArrayAttr computation_shape, ArrayAttr host_compute_core, ArrayAttr padding_map, StringRef step_marker_location = "STEP_MARK_AT_ENTRY", bool allow_soft_placement = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TPUReplicatedInputOp declarations
//===----------------------------------------------------------------------===//

class TPUReplicatedInputOpAdaptor {
public:
  TPUReplicatedInputOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUReplicatedInputOpAdaptor(TPUReplicatedInputOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  BoolAttr is_mirrored_variable();
  IntegerAttr index();
  BoolAttr is_packed();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUReplicatedInputOp : public Op<TPUReplicatedInputOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUReplicatedInputOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  BoolAttr is_mirrored_variableAttr();
  bool is_mirrored_variable();
  IntegerAttr indexAttr();
  APInt index();
  BoolAttr is_packedAttr();
  bool is_packed();
  Type T();
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void is_mirrored_variableAttr(BoolAttr attr);
  void indexAttr(IntegerAttr attr);
  void is_packedAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange inputs, BoolAttr is_mirrored_variable, IntegerAttr index, BoolAttr is_packed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, BoolAttr is_mirrored_variable, IntegerAttr index, BoolAttr is_packed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, ValueRange inputs, bool is_mirrored_variable, APInt index, bool is_packed = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, bool is_mirrored_variable, APInt index, bool is_packed = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TPUReplicatedOutputOp declarations
//===----------------------------------------------------------------------===//

class TPUReplicatedOutputOpAdaptor {
public:
  TPUReplicatedOutputOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUReplicatedOutputOpAdaptor(TPUReplicatedOutputOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUReplicatedOutputOp : public Op<TPUReplicatedOutputOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUReplicatedOutputOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  size_t num_replicas();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TPUReshardVariablesOp declarations
//===----------------------------------------------------------------------===//

class TPUReshardVariablesOpAdaptor {
public:
  TPUReshardVariablesOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TPUReshardVariablesOpAdaptor(TPUReshardVariablesOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange vars();
  Value new_format_key();
  Value format_state_var();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TPUReshardVariablesOp : public Op<TPUReshardVariablesOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TPUReshardVariablesOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range vars();
  Value new_format_key();
  Value format_state_var();
  ::mlir::MutableOperandRange varsMutable();
  ::mlir::MutableOperandRange new_format_keyMutable();
  ::mlir::MutableOperandRange format_state_varMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  size_t N();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange vars, Value new_format_key, Value format_state_var);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange vars, Value new_format_key, Value format_state_var);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TanOp declarations
//===----------------------------------------------------------------------===//

class TanOpAdaptor {
public:
  TanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TanOpAdaptor(TanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TanOp : public Op<TanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TanhGradOp declarations
//===----------------------------------------------------------------------===//

class TanhGradOpAdaptor {
public:
  TanhGradOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TanhGradOpAdaptor(TanhGradOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value y();
  Value dy();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TanhGradOp : public Op<TanhGradOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TanhGradOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value y();
  Value dy();
  ::mlir::MutableOperandRange yMutable();
  ::mlir::MutableOperandRange dyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value y, Value dy);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value y, Value dy);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TanhOp declarations
//===----------------------------------------------------------------------===//

class TanhOpAdaptor {
public:
  TanhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TanhOpAdaptor(TanhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TanhOp : public Op<TanhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, OpTrait::TF::LayoutAgnostic, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TanhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayCloseV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayCloseV3OpAdaptor {
public:
  TensorArrayCloseV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayCloseV3OpAdaptor(TensorArrayCloseV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayCloseV3Op : public Op<TensorArrayCloseV3Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = TensorArrayCloseV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  ::mlir::MutableOperandRange handleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value handle);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayConcatV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayConcatV3OpAdaptor {
public:
  TensorArrayConcatV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayConcatV3OpAdaptor(TensorArrayConcatV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value flow_in();
  Attribute element_shape_except0();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayConcatV3Op : public Op<TensorArrayConcatV3Op, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArrayConcatV3OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value value();
  Value lengths();
  Attribute element_shape_except0Attr();
  llvm::Optional<llvm::ArrayRef<int64_t>> element_shape_except0();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void element_shape_except0Attr(Attribute attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type value, Type lengths, Value handle, Value flow_in, Attribute element_shape_except0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value flow_in, Attribute element_shape_except0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type value, Type lengths, Value handle, Value flow_in, llvm::Optional<llvm::ArrayRef<int64_t>> element_shape_except0 = llvm::None);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value flow_in, llvm::Optional<llvm::ArrayRef<int64_t>> element_shape_except0 = llvm::None);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayGatherV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayGatherV3OpAdaptor {
public:
  TensorArrayGatherV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayGatherV3OpAdaptor(TensorArrayGatherV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value indices();
  Value flow_in();
  Attribute element_shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayGatherV3Op : public Op<TensorArrayGatherV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArrayGatherV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value indices();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value value();
  Attribute element_shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> element_shape();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void element_shapeAttr(Attribute attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type value, Value handle, Value indices, Value flow_in, Attribute element_shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value indices, Value flow_in, Attribute element_shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type value, Value handle, Value indices, Value flow_in, llvm::Optional<llvm::ArrayRef<int64_t>> element_shape = llvm::None);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value indices, Value flow_in, llvm::Optional<llvm::ArrayRef<int64_t>> element_shape = llvm::None);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayGradV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayGradV3OpAdaptor {
public:
  TensorArrayGradV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayGradV3OpAdaptor(TensorArrayGradV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value flow_in();
  StringAttr source();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayGradV3Op : public Op<TensorArrayGradV3Op, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArrayGradV3OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value grad_handle();
  Value flow_out();
  StringAttr sourceAttr();
  StringRef source();
  void sourceAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type grad_handle, Type flow_out, Value handle, Value flow_in, StringAttr source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value flow_in, StringAttr source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type grad_handle, Type flow_out, Value handle, Value flow_in, StringRef source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value flow_in, StringRef source);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayReadV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayReadV3OpAdaptor {
public:
  TensorArrayReadV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayReadV3OpAdaptor(TensorArrayReadV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value index();
  Value flow_in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayReadV3Op : public Op<TensorArrayReadV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArrayReadV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value index();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange indexMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value value();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type value, Value handle, Value index, Value flow_in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value index, Value flow_in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayScatterV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayScatterV3OpAdaptor {
public:
  TensorArrayScatterV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayScatterV3OpAdaptor(TensorArrayScatterV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value indices();
  Value value();
  Value flow_in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayScatterV3Op : public Op<TensorArrayScatterV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArrayScatterV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value indices();
  Value value();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value flow_out();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type flow_out, Value handle, Value indices, Value value, Value flow_in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value indices, Value value, Value flow_in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArraySizeV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArraySizeV3OpAdaptor {
public:
  TensorArraySizeV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArraySizeV3OpAdaptor(TensorArraySizeV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value flow_in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArraySizeV3Op : public Op<TensorArraySizeV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = TensorArraySizeV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value size();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type size, Value handle, Value flow_in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value flow_in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArraySplitV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArraySplitV3OpAdaptor {
public:
  TensorArraySplitV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArraySplitV3OpAdaptor(TensorArraySplitV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value value();
  Value lengths();
  Value flow_in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArraySplitV3Op : public Op<TensorArraySplitV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArraySplitV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value value();
  Value lengths();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange lengthsMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value flow_out();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type flow_out, Value handle, Value value, Value lengths, Value flow_in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value value, Value lengths, Value flow_in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayV3OpAdaptor {
public:
  TensorArrayV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayV3OpAdaptor(TensorArrayV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value size();
  TypeAttr dtype();
  Attribute element_shape();
  BoolAttr dynamic_size();
  BoolAttr clear_after_read();
  BoolAttr identical_element_shapes();
  StringAttr tensor_array_name();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayV3Op : public Op<TensorArrayV3Op, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArrayV3OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value size();
  ::mlir::MutableOperandRange sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  Value flow();
  TypeAttr dtypeAttr();
  Type dtype();
  Attribute element_shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> element_shape();
  BoolAttr dynamic_sizeAttr();
  bool dynamic_size();
  BoolAttr clear_after_readAttr();
  bool clear_after_read();
  BoolAttr identical_element_shapesAttr();
  bool identical_element_shapes();
  StringAttr tensor_array_nameAttr();
  StringRef tensor_array_name();
  void dtypeAttr(TypeAttr attr);
  void element_shapeAttr(Attribute attr);
  void dynamic_sizeAttr(BoolAttr attr);
  void clear_after_readAttr(BoolAttr attr);
  void identical_element_shapesAttr(BoolAttr attr);
  void tensor_array_nameAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Type flow, Value size, TypeAttr dtype, Attribute element_shape, BoolAttr dynamic_size, BoolAttr clear_after_read, BoolAttr identical_element_shapes, StringAttr tensor_array_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value size, TypeAttr dtype, Attribute element_shape, BoolAttr dynamic_size, BoolAttr clear_after_read, BoolAttr identical_element_shapes, StringAttr tensor_array_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Type flow, Value size, TypeAttr dtype, llvm::Optional<llvm::ArrayRef<int64_t>> element_shape, bool dynamic_size, bool clear_after_read, bool identical_element_shapes, StringRef tensor_array_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value size, TypeAttr dtype, llvm::Optional<llvm::ArrayRef<int64_t>> element_shape, bool dynamic_size, bool clear_after_read, bool identical_element_shapes, StringRef tensor_array_name);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorArrayWriteV3Op declarations
//===----------------------------------------------------------------------===//

class TensorArrayWriteV3OpAdaptor {
public:
  TensorArrayWriteV3OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorArrayWriteV3OpAdaptor(TensorArrayWriteV3Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value handle();
  Value index();
  Value value();
  Value flow_in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorArrayWriteV3Op : public Op<TensorArrayWriteV3Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorArrayWriteV3OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value handle();
  Value index();
  Value value();
  Value flow_in();
  ::mlir::MutableOperandRange handleMutable();
  ::mlir::MutableOperandRange indexMutable();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange flow_inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value flow_out();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type flow_out, Value handle, Value index, Value value, Value flow_in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value handle, Value index, Value value, Value flow_in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TensorListConcatV2Op declarations
//===----------------------------------------------------------------------===//

class TensorListConcatV2OpAdaptor {
public:
  TensorListConcatV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListConcatV2OpAdaptor(TensorListConcatV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value element_shape();
  Value leading_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListConcatV2Op : public Op<TensorListConcatV2Op, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListConcatV2OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value element_shape();
  Value leading_dims();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange element_shapeMutable();
  ::mlir::MutableOperandRange leading_dimsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value tensor();
  Value lengths();
  Type shape_type();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type tensor, Type lengths, Value input_handle, Value element_shape, Value leading_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value element_shape, Value leading_dims);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListElementShapeOp declarations
//===----------------------------------------------------------------------===//

class TensorListElementShapeOpAdaptor {
public:
  TensorListElementShapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListElementShapeOpAdaptor(TensorListElementShapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListElementShapeOp : public Op<TensorListElementShapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListElementShapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  ::mlir::MutableOperandRange input_handleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value element_shape();
  Type shape_type();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type element_shape, Value input_handle);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListFromTensorOp declarations
//===----------------------------------------------------------------------===//

class TensorListFromTensorOpAdaptor {
public:
  TensorListFromTensorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListFromTensorOpAdaptor(TensorListFromTensorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value tensor();
  Value element_shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListFromTensorOp : public Op<TensorListFromTensorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListFromTensorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value tensor();
  Value element_shape();
  ::mlir::MutableOperandRange tensorMutable();
  ::mlir::MutableOperandRange element_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output_handle();
  Type shape_type();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output_handle, Value tensor, Value element_shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, Value element_shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListGatherOp declarations
//===----------------------------------------------------------------------===//

class TensorListGatherOpAdaptor {
public:
  TensorListGatherOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListGatherOpAdaptor(TensorListGatherOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value indices();
  Value element_shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListGatherOp : public Op<TensorListGatherOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListGatherOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value indices();
  Value element_shape();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange element_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value values();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type values, Value input_handle, Value indices, Value element_shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value indices, Value element_shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListGetItemOp declarations
//===----------------------------------------------------------------------===//

class TensorListGetItemOpAdaptor {
public:
  TensorListGetItemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListGetItemOpAdaptor(TensorListGetItemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value index();
  Value element_shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListGetItemOp : public Op<TensorListGetItemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListGetItemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value index();
  Value element_shape();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange indexMutable();
  ::mlir::MutableOperandRange element_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value item();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type item, Value input_handle, Value index, Value element_shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value index, Value element_shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListLengthOp declarations
//===----------------------------------------------------------------------===//

class TensorListLengthOpAdaptor {
public:
  TensorListLengthOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListLengthOpAdaptor(TensorListLengthOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListLengthOp : public Op<TensorListLengthOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListLengthOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  ::mlir::MutableOperandRange input_handleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value length();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type length, Value input_handle);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListPopBackOp declarations
//===----------------------------------------------------------------------===//

class TensorListPopBackOpAdaptor {
public:
  TensorListPopBackOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListPopBackOpAdaptor(TensorListPopBackOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value element_shape();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListPopBackOp : public Op<TensorListPopBackOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListPopBackOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value element_shape();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange element_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output_handle();
  Value tensor();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output_handle, Type tensor, Value input_handle, Value element_shape);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value element_shape);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListPushBackOp declarations
//===----------------------------------------------------------------------===//

class TensorListPushBackOpAdaptor {
public:
  TensorListPushBackOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListPushBackOpAdaptor(TensorListPushBackOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value tensor();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListPushBackOp : public Op<TensorListPushBackOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListPushBackOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value tensor();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange tensorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output_handle();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output_handle, Value input_handle, Value tensor);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value tensor);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListReserveOp declarations
//===----------------------------------------------------------------------===//

class TensorListReserveOpAdaptor {
public:
  TensorListReserveOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListReserveOpAdaptor(TensorListReserveOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value element_shape();
  Value num_elements();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListReserveOp : public Op<TensorListReserveOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListReserveOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value element_shape();
  Value num_elements();
  ::mlir::MutableOperandRange element_shapeMutable();
  ::mlir::MutableOperandRange num_elementsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  Type shape_type();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, Value element_shape, Value num_elements);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value element_shape, Value num_elements);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // Returns type of the TensorList element produced by this op.
    TensorType element_type() { return handle_dtype().getSubtypes()[0]; }

    // Returns data type of the result handle. Returned type contains type of
    // the TensorList element as a subtype.
    VariantType handle_dtype() {
      return getElementTypeOrSelf(handle().getType()).cast<TF::VariantType>();
    }
  
};

//===----------------------------------------------------------------------===//
// TF::TensorListResizeOp declarations
//===----------------------------------------------------------------------===//

class TensorListResizeOpAdaptor {
public:
  TensorListResizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListResizeOpAdaptor(TensorListResizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value size();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListResizeOp : public Op<TensorListResizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListResizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value size();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output_handle();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output_handle, Value input_handle, Value size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListScatterIntoExistingListOp declarations
//===----------------------------------------------------------------------===//

class TensorListScatterIntoExistingListOpAdaptor {
public:
  TensorListScatterIntoExistingListOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListScatterIntoExistingListOpAdaptor(TensorListScatterIntoExistingListOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value tensor();
  Value indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListScatterIntoExistingListOp : public Op<TensorListScatterIntoExistingListOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListScatterIntoExistingListOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value tensor();
  Value indices();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange tensorMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output_handle();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output_handle, Value input_handle, Value tensor, Value indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value tensor, Value indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListSetItemOp declarations
//===----------------------------------------------------------------------===//

class TensorListSetItemOpAdaptor {
public:
  TensorListSetItemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListSetItemOpAdaptor(TensorListSetItemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value index();
  Value item();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListSetItemOp : public Op<TensorListSetItemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListSetItemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value index();
  Value item();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange indexMutable();
  ::mlir::MutableOperandRange itemMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output_handle();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output_handle, Value input_handle, Value index, Value item);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value index, Value item);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorListStackOp declarations
//===----------------------------------------------------------------------===//

class TensorListStackOpAdaptor {
public:
  TensorListStackOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorListStackOpAdaptor(TensorListStackOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input_handle();
  Value element_shape();
  IntegerAttr num_elements();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorListStackOp : public Op<TensorListStackOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorListStackOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input_handle();
  Value element_shape();
  ::mlir::MutableOperandRange input_handleMutable();
  ::mlir::MutableOperandRange element_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value tensor();
  IntegerAttr num_elementsAttr();
  APInt num_elements();
  Type element_dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void num_elementsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type tensor, Value input_handle, Value element_shape, IntegerAttr num_elements);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value element_shape, IntegerAttr num_elements);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type tensor, Value input_handle, Value element_shape, APInt num_elements);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input_handle, Value element_shape, APInt num_elements);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorScatterUpdateOp declarations
//===----------------------------------------------------------------------===//

class TensorScatterUpdateOpAdaptor {
public:
  TensorScatterUpdateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorScatterUpdateOpAdaptor(TensorScatterUpdateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value tensor();
  Value indices();
  Value updates();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorScatterUpdateOp : public Op<TensorScatterUpdateOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorScatterUpdateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value tensor();
  Value indices();
  Value updates();
  ::mlir::MutableOperandRange tensorMutable();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange updatesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value tensor, Value indices, Value updates);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value tensor, Value indices, Value updates);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, Value indices, Value updates);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TensorSliceDatasetOp declarations
//===----------------------------------------------------------------------===//

class TensorSliceDatasetOpAdaptor {
public:
  TensorSliceDatasetOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorSliceDatasetOpAdaptor(TensorSliceDatasetOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange components();
  ArrayAttr output_shapes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorSliceDatasetOp : public Op<TensorSliceDatasetOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorSliceDatasetOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range components();
  ::mlir::MutableOperandRange componentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value handle();
  ArrayAttr output_shapesAttr();
  ArrayAttr output_shapes();
  mlir::OperandElementTypeRange Toutput_types();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void output_shapesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type handle, ValueRange components, ArrayAttr output_shapes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange components, ArrayAttr output_shapes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::TileOp declarations
//===----------------------------------------------------------------------===//

class TileOpAdaptor {
public:
  TileOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TileOpAdaptor(TileOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value multiples();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TileOp : public Op<TileOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TileOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value multiples();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange multiplesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tmultiples();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value multiples);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value multiples);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::ToBoolOp declarations
//===----------------------------------------------------------------------===//

class ToBoolOpAdaptor {
public:
  ToBoolOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ToBoolOpAdaptor(ToBoolOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ToBoolOp : public Op<ToBoolOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ToBoolOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TopKV2Op declarations
//===----------------------------------------------------------------------===//

class TopKV2OpAdaptor {
public:
  TopKV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TopKV2OpAdaptor(TopKV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value k();
  BoolAttr sorted();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TopKV2Op : public Op<TopKV2Op, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TopKV2OpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value k();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange kMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value values();
  Value indices();
  BoolAttr sortedAttr();
  bool sorted();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void sortedAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type values, Type indices, Value input, Value k, BoolAttr sorted);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value k, BoolAttr sorted);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type values, Type indices, Value input, Value k, bool sorted = true);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value k, bool sorted = true);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TransposeOp declarations
//===----------------------------------------------------------------------===//

class TransposeOpAdaptor {
public:
  TransposeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TransposeOpAdaptor(TransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value perm();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TransposeOp : public Op<TransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TransposeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value perm();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange permMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  Type Tperm();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder& builder, OperationState& result, Value  x, Value  perm);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x, Value perm);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value perm);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TruncateDivOp declarations
//===----------------------------------------------------------------------===//

class TruncateDivOpAdaptor {
public:
  TruncateDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TruncateDivOpAdaptor(TruncateDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TruncateDivOp : public Op<TruncateDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TruncateDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TruncateModOp declarations
//===----------------------------------------------------------------------===//

class TruncateModOpAdaptor {
public:
  TruncateModOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TruncateModOpAdaptor(TruncateModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TruncateModOp : public Op<TruncateModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TruncateModOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::TruncatedNormalOp declarations
//===----------------------------------------------------------------------===//

class TruncatedNormalOpAdaptor {
public:
  TruncatedNormalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TruncatedNormalOpAdaptor(TruncatedNormalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value shape();
  IntegerAttr seed();
  IntegerAttr seed2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TruncatedNormalOp : public Op<TruncatedNormalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TruncatedNormalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value shape();
  ::mlir::MutableOperandRange shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  IntegerAttr seedAttr();
  APInt seed();
  IntegerAttr seed2Attr();
  APInt seed2();
  Type T();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void seedAttr(IntegerAttr attr);
  void seed2Attr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, IntegerAttr seed, IntegerAttr seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value shape, APInt seed, APInt seed2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, APInt seed, APInt seed2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::UniqueOp declarations
//===----------------------------------------------------------------------===//

class UniqueOpAdaptor {
public:
  UniqueOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UniqueOpAdaptor(UniqueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UniqueOp : public Op<UniqueOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UniqueOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Value idx();
  Type T();
  Type out_idx();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Type idx, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::UnpackOp declarations
//===----------------------------------------------------------------------===//

class UnpackOpAdaptor {
public:
  UnpackOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnpackOpAdaptor(UnpackOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  IntegerAttr axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnpackOp : public Op<UnpackOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UnpackOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  IntegerAttr axisAttr();
  APInt axis();
  size_t num();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void axisAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value value, IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, Value value, APInt axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::UnsortedSegmentMaxOp declarations
//===----------------------------------------------------------------------===//

class UnsortedSegmentMaxOpAdaptor {
public:
  UnsortedSegmentMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnsortedSegmentMaxOpAdaptor(UnsortedSegmentMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnsortedSegmentMaxOp : public Op<UnsortedSegmentMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UnsortedSegmentMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  ::mlir::MutableOperandRange num_segmentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  Type Tnumsegments();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::UnsortedSegmentMinOp declarations
//===----------------------------------------------------------------------===//

class UnsortedSegmentMinOpAdaptor {
public:
  UnsortedSegmentMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnsortedSegmentMinOpAdaptor(UnsortedSegmentMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnsortedSegmentMinOp : public Op<UnsortedSegmentMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UnsortedSegmentMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  ::mlir::MutableOperandRange num_segmentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  Type Tnumsegments();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::UnsortedSegmentProdOp declarations
//===----------------------------------------------------------------------===//

class UnsortedSegmentProdOpAdaptor {
public:
  UnsortedSegmentProdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnsortedSegmentProdOpAdaptor(UnsortedSegmentProdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnsortedSegmentProdOp : public Op<UnsortedSegmentProdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UnsortedSegmentProdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  ::mlir::MutableOperandRange num_segmentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  Type Tnumsegments();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::UnsortedSegmentSumOp declarations
//===----------------------------------------------------------------------===//

class UnsortedSegmentSumOpAdaptor {
public:
  UnsortedSegmentSumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnsortedSegmentSumOpAdaptor(UnsortedSegmentSumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnsortedSegmentSumOp : public Op<UnsortedSegmentSumOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UnsortedSegmentSumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value segment_ids();
  Value num_segments();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange segment_idsMutable();
  ::mlir::MutableOperandRange num_segmentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  Type Tnumsegments();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value segment_ids, Value num_segments);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::VarHandleOp declarations
//===----------------------------------------------------------------------===//

class VarHandleOpAdaptor {
public:
  VarHandleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  VarHandleOpAdaptor(VarHandleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr container();
  StringAttr shared_name();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class VarHandleOp : public Op<VarHandleOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = VarHandleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value resource();
  StringAttr containerAttr();
  StringRef container();
  StringAttr shared_nameAttr();
  StringRef shared_name();
  Type dtype();
  ShapedType shape();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void containerAttr(StringAttr attr);
  void shared_nameAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resource, StringAttr container, StringAttr shared_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr container, StringAttr shared_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resource, StringRef container, StringRef shared_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef container, StringRef shared_name);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::VariableShapeOp declarations
//===----------------------------------------------------------------------===//

class VariableShapeOpAdaptor {
public:
  VariableShapeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  VariableShapeOpAdaptor(VariableShapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class VariableShapeOp : public Op<VariableShapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = VariableShapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type out_type();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
};

//===----------------------------------------------------------------------===//
// TF::VariableV2Op declarations
//===----------------------------------------------------------------------===//

class VariableV2OpAdaptor {
public:
  VariableV2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  VariableV2OpAdaptor(VariableV2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Attribute shape();
  StringAttr container();
  StringAttr shared_name();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class VariableV2Op : public Op<VariableV2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = VariableV2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value ref();
  Attribute shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> shape();
  StringAttr containerAttr();
  StringRef container();
  StringAttr shared_nameAttr();
  StringRef shared_name();
  Type dtype();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void shapeAttr(Attribute attr);
  void containerAttr(StringAttr attr);
  void shared_nameAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type ref, Attribute shape, StringAttr container, StringAttr shared_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Attribute shape, StringAttr container, StringAttr shared_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type ref, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef container, StringRef shared_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef container, StringRef shared_name);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::WhereOp declarations
//===----------------------------------------------------------------------===//

class WhereOpAdaptor {
public:
  WhereOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  WhereOpAdaptor(WhereOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class WhereOp : public Op<WhereOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = WhereOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value index();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type index, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::WhileOp declarations
//===----------------------------------------------------------------------===//

class WhileOpAdaptor {
public:
  WhileOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  WhileOpAdaptor(WhileOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange input();
  FlatSymbolRefAttr cond();
  FlatSymbolRefAttr body();
  ArrayAttr output_shapes();
  IntegerAttr parallel_iterations();
  BoolAttr is_stateless();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class WhileOp : public Op<WhileOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = WhileOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output();
  FlatSymbolRefAttr condAttr();
  StringRef cond();
  FlatSymbolRefAttr bodyAttr();
  StringRef body();
  ArrayAttr output_shapesAttr();
  ArrayAttr output_shapes();
  IntegerAttr parallel_iterationsAttr();
  APInt parallel_iterations();
  BoolAttr is_statelessAttr();
  bool is_stateless();
  mlir::OperandElementTypeRange T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void condAttr(FlatSymbolRefAttr attr);
  void bodyAttr(FlatSymbolRefAttr attr);
  void output_shapesAttr(ArrayAttr attr);
  void parallel_iterationsAttr(IntegerAttr attr);
  void is_statelessAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange input, FlatSymbolRefAttr cond, FlatSymbolRefAttr body, ArrayAttr output_shapes, IntegerAttr parallel_iterations, BoolAttr is_stateless);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output, ValueRange input, StringRef cond, StringRef body, ArrayAttr output_shapes, APInt parallel_iterations, bool is_stateless);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::XdivyOp declarations
//===----------------------------------------------------------------------===//

class XdivyOpAdaptor {
public:
  XdivyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XdivyOpAdaptor(XdivyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XdivyOp : public Op<XdivyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XdivyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaBroadcastHelperOp declarations
//===----------------------------------------------------------------------===//

class XlaBroadcastHelperOpAdaptor {
public:
  XlaBroadcastHelperOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaBroadcastHelperOpAdaptor(XlaBroadcastHelperOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value broadcast_dims();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaBroadcastHelperOp : public Op<XlaBroadcastHelperOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaBroadcastHelperOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value broadcast_dims();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange broadcast_dimsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value lhs_output();
  Value rhs_output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type lhs_output, Type rhs_output, Value lhs, Value rhs, Value broadcast_dims);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value broadcast_dims);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaConvOp declarations
//===----------------------------------------------------------------------===//

class XlaConvOpAdaptor {
public:
  XlaConvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaConvOpAdaptor(XlaConvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value window_strides();
  Value padding();
  Value lhs_dilation();
  Value rhs_dilation();
  Value feature_group_count();
  StringAttr dimension_numbers();
  StringAttr precision_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaConvOp : public Op<XlaConvOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<7>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaConvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value window_strides();
  Value padding();
  Value lhs_dilation();
  Value rhs_dilation();
  Value feature_group_count();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange window_stridesMutable();
  ::mlir::MutableOperandRange paddingMutable();
  ::mlir::MutableOperandRange lhs_dilationMutable();
  ::mlir::MutableOperandRange rhs_dilationMutable();
  ::mlir::MutableOperandRange feature_group_countMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr dimension_numbersAttr();
  StringRef dimension_numbers();
  StringAttr precision_configAttr();
  StringRef precision_config();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void dimension_numbersAttr(StringAttr attr);
  void precision_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value lhs, Value rhs, Value window_strides, Value padding, Value lhs_dilation, Value rhs_dilation, Value feature_group_count, StringAttr dimension_numbers, StringAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value window_strides, Value padding, Value lhs_dilation, Value rhs_dilation, Value feature_group_count, StringAttr dimension_numbers, StringAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value lhs, Value rhs, Value window_strides, Value padding, Value lhs_dilation, Value rhs_dilation, Value feature_group_count, StringRef dimension_numbers, StringRef precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value window_strides, Value padding, Value lhs_dilation, Value rhs_dilation, Value feature_group_count, StringRef dimension_numbers, StringRef precision_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaDotOp declarations
//===----------------------------------------------------------------------===//

class XlaDotOpAdaptor {
public:
  XlaDotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaDotOpAdaptor(XlaDotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  StringAttr dimension_numbers();
  StringAttr precision_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaDotOp : public Op<XlaDotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaDotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr dimension_numbersAttr();
  StringRef dimension_numbers();
  StringAttr precision_configAttr();
  StringRef precision_config();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void dimension_numbersAttr(StringAttr attr);
  void precision_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value lhs, Value rhs, StringAttr dimension_numbers, StringAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, StringAttr dimension_numbers, StringAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value lhs, Value rhs, StringRef dimension_numbers, StringRef precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, StringRef dimension_numbers, StringRef precision_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaDynamicSliceOp declarations
//===----------------------------------------------------------------------===//

class XlaDynamicSliceOpAdaptor {
public:
  XlaDynamicSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaDynamicSliceOpAdaptor(XlaDynamicSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value start_indices();
  Value size_indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaDynamicSliceOp : public Op<XlaDynamicSliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaDynamicSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value start_indices();
  Value size_indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange start_indicesMutable();
  ::mlir::MutableOperandRange size_indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value start_indices, Value size_indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value start_indices, Value size_indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaDynamicUpdateSliceOp declarations
//===----------------------------------------------------------------------===//

class XlaDynamicUpdateSliceOpAdaptor {
public:
  XlaDynamicUpdateSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaDynamicUpdateSliceOpAdaptor(XlaDynamicUpdateSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value update();
  Value indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaDynamicUpdateSliceOp : public Op<XlaDynamicUpdateSliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaDynamicUpdateSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value update();
  Value indices();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange updateMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value update, Value indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value update, Value indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaGatherOp declarations
//===----------------------------------------------------------------------===//

class XlaGatherOpAdaptor {
public:
  XlaGatherOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaGatherOpAdaptor(XlaGatherOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  Value start_indices();
  Value slice_sizes();
  StringAttr dimension_numbers();
  BoolAttr indices_are_sorted();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaGatherOp : public Op<XlaGatherOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaGatherOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  Value start_indices();
  Value slice_sizes();
  ::mlir::MutableOperandRange operandMutable();
  ::mlir::MutableOperandRange start_indicesMutable();
  ::mlir::MutableOperandRange slice_sizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr dimension_numbersAttr();
  StringRef dimension_numbers();
  BoolAttr indices_are_sortedAttr();
  bool indices_are_sorted();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void dimension_numbersAttr(StringAttr attr);
  void indices_are_sortedAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value operand, Value start_indices, Value slice_sizes, StringAttr dimension_numbers, BoolAttr indices_are_sorted);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value start_indices, Value slice_sizes, StringAttr dimension_numbers, BoolAttr indices_are_sorted);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value operand, Value start_indices, Value slice_sizes, StringRef dimension_numbers, bool indices_are_sorted);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value start_indices, Value slice_sizes, StringRef dimension_numbers, bool indices_are_sorted);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaHostComputeOp declarations
//===----------------------------------------------------------------------===//

class XlaHostComputeOpAdaptor {
public:
  XlaHostComputeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaHostComputeOpAdaptor(XlaHostComputeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  ArrayAttr ancestors();
  ArrayAttr shapes();
  SymbolRefAttr shape_inference_graph();
  StringAttr key();
  IntegerAttr cost_estimate_ns();
  IntegerAttr tpu_core();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaHostComputeOp : public Op<XlaHostComputeOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaHostComputeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  ArrayAttr ancestorsAttr();
  ArrayAttr ancestors();
  ArrayAttr shapesAttr();
  ArrayAttr shapes();
  SymbolRefAttr shape_inference_graphAttr();
  SymbolRefAttr shape_inference_graph();
  StringAttr keyAttr();
  StringRef key();
  IntegerAttr cost_estimate_nsAttr();
  APInt cost_estimate_ns();
  IntegerAttr tpu_coreAttr();
  APInt tpu_core();
  mlir::OperandElementTypeRange Tinputs();
  mlir::ResultElementTypeRange Toutputs();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void ancestorsAttr(ArrayAttr attr);
  void shapesAttr(ArrayAttr attr);
  void shape_inference_graphAttr(SymbolRefAttr attr);
  void keyAttr(StringAttr attr);
  void cost_estimate_nsAttr(IntegerAttr attr);
  void tpu_coreAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, ArrayAttr ancestors, ArrayAttr shapes, SymbolRefAttr shape_inference_graph, StringAttr key, IntegerAttr cost_estimate_ns, IntegerAttr tpu_core);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, ArrayAttr ancestors, ArrayAttr shapes, SymbolRefAttr shape_inference_graph, StringRef key, APInt cost_estimate_ns, APInt tpu_core);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::XlaKeyValueSortOp declarations
//===----------------------------------------------------------------------===//

class XlaKeyValueSortOpAdaptor {
public:
  XlaKeyValueSortOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaKeyValueSortOpAdaptor(XlaKeyValueSortOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value keys();
  Value values();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaKeyValueSortOp : public Op<XlaKeyValueSortOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaKeyValueSortOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value keys();
  Value values();
  ::mlir::MutableOperandRange keysMutable();
  ::mlir::MutableOperandRange valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value sorted_keys();
  Value sorted_values();
  Type V();
  Type K();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type sorted_keys, Type sorted_values, Value keys, Value values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value keys, Value values);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaPadOp declarations
//===----------------------------------------------------------------------===//

class XlaPadOpAdaptor {
public:
  XlaPadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaPadOpAdaptor(XlaPadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value padding_value();
  Value padding_low();
  Value padding_high();
  Value padding_interior();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaPadOp : public Op<XlaPadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaPadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value padding_value();
  Value padding_low();
  Value padding_high();
  Value padding_interior();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange padding_valueMutable();
  ::mlir::MutableOperandRange padding_lowMutable();
  ::mlir::MutableOperandRange padding_highMutable();
  ::mlir::MutableOperandRange padding_interiorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Type Tindices();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value padding_value, Value padding_low, Value padding_high, Value padding_interior);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value padding_value, Value padding_low, Value padding_high, Value padding_interior);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaRecvFromHostOp declarations
//===----------------------------------------------------------------------===//

class XlaRecvFromHostOpAdaptor {
public:
  XlaRecvFromHostOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaRecvFromHostOpAdaptor(XlaRecvFromHostOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Attribute shape();
  StringAttr key();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaRecvFromHostOp : public Op<XlaRecvFromHostOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaRecvFromHostOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Attribute shapeAttr();
  llvm::Optional<llvm::ArrayRef<int64_t>> shape();
  StringAttr keyAttr();
  StringRef key();
  Type Toutput();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void shapeAttr(Attribute attr);
  void keyAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Attribute shape, StringAttr key);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Attribute shape, StringAttr key);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef key);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, llvm::Optional<llvm::ArrayRef<int64_t>> shape, StringRef key);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::XlaReduceOp declarations
//===----------------------------------------------------------------------===//

class XlaReduceOpAdaptor {
public:
  XlaReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaReduceOpAdaptor(XlaReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value init_value();
  ArrayAttr dimensions_to_reduce();
  SymbolRefAttr reducer();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaReduceOp : public Op<XlaReduceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value init_value();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange init_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr dimensions_to_reduceAttr();
  ArrayAttr dimensions_to_reduce();
  SymbolRefAttr reducerAttr();
  SymbolRefAttr reducer();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void dimensions_to_reduceAttr(ArrayAttr attr);
  void reducerAttr(SymbolRefAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value init_value, ArrayAttr dimensions_to_reduce, SymbolRefAttr reducer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value init_value, ArrayAttr dimensions_to_reduce, SymbolRefAttr reducer);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaReplicaIdOp declarations
//===----------------------------------------------------------------------===//

class XlaReplicaIdOpAdaptor {
public:
  XlaReplicaIdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaReplicaIdOpAdaptor(XlaReplicaIdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaReplicaIdOp : public Op<XlaReplicaIdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaReplicaIdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value id();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type id);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaSelfAdjointEigOp declarations
//===----------------------------------------------------------------------===//

class XlaSelfAdjointEigOpAdaptor {
public:
  XlaSelfAdjointEigOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaSelfAdjointEigOpAdaptor(XlaSelfAdjointEigOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  BoolAttr lower();
  IntegerAttr max_iter();
  FloatAttr epsilon();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaSelfAdjointEigOp : public Op<XlaSelfAdjointEigOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaSelfAdjointEigOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  ::mlir::MutableOperandRange aMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value w();
  Value v();
  BoolAttr lowerAttr();
  bool lower();
  IntegerAttr max_iterAttr();
  APInt max_iter();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void lowerAttr(BoolAttr attr);
  void max_iterAttr(IntegerAttr attr);
  void epsilonAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type w, Type v, Value a, BoolAttr lower, IntegerAttr max_iter, FloatAttr epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, BoolAttr lower, IntegerAttr max_iter, FloatAttr epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type w, Type v, Value a, bool lower, APInt max_iter, APFloat epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, bool lower, APInt max_iter, APFloat epsilon);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaSendToHostOp declarations
//===----------------------------------------------------------------------===//

class XlaSendToHostOpAdaptor {
public:
  XlaSendToHostOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaSendToHostOpAdaptor(XlaSendToHostOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  StringAttr key();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaSendToHostOp : public Op<XlaSendToHostOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaSendToHostOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr keyAttr();
  StringRef key();
  Type Tinput();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keyAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, StringAttr key);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, StringAttr key);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, StringRef key);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, StringRef key);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::XlaShardingOp declarations
//===----------------------------------------------------------------------===//

class XlaShardingOpAdaptor {
public:
  XlaShardingOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaShardingOpAdaptor(XlaShardingOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  StringAttr _XlaSharding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaShardingOp : public Op<XlaShardingOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaShardingOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr _XlaShardingAttr();
  Optional< StringRef > _XlaSharding();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void _XlaShardingAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, /*optional*/StringAttr _XlaSharding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, /*optional*/StringAttr _XlaSharding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlaSvdOp declarations
//===----------------------------------------------------------------------===//

class XlaSvdOpAdaptor {
public:
  XlaSvdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlaSvdOpAdaptor(XlaSvdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  IntegerAttr max_iter();
  FloatAttr epsilon();
  StringAttr precision_config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlaSvdOp : public Op<XlaSvdOp, OpTrait::ZeroRegion, OpTrait::NResults<3>::Impl, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlaSvdOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  ::mlir::MutableOperandRange aMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value s();
  Value u();
  Value v();
  IntegerAttr max_iterAttr();
  APInt max_iter();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  StringAttr precision_configAttr();
  StringRef precision_config();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void max_iterAttr(IntegerAttr attr);
  void epsilonAttr(FloatAttr attr);
  void precision_configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type s, Type u, Type v, Value a, IntegerAttr max_iter, FloatAttr epsilon, StringAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, IntegerAttr max_iter, FloatAttr epsilon, StringAttr precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type s, Type u, Type v, Value a, APInt max_iter, APFloat epsilon, StringRef precision_config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, APInt max_iter, APFloat epsilon, StringRef precision_config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::Xlog1pyOp declarations
//===----------------------------------------------------------------------===//

class Xlog1pyOpAdaptor {
public:
  Xlog1pyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Xlog1pyOpAdaptor(Xlog1pyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Xlog1pyOp : public Op<Xlog1pyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Xlog1pyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::XlogyOp declarations
//===----------------------------------------------------------------------===//

class XlogyOpAdaptor {
public:
  XlogyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XlogyOpAdaptor(XlogyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  Value y();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XlogyOp : public Op<XlogyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::ResultsBroadcastableShape, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = XlogyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  Value y();
  ::mlir::MutableOperandRange xMutable();
  ::mlir::MutableOperandRange yMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value z();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &builder, OperationState &result, Value  x, Value  y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type z, Value x, Value y);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x, Value y);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::YieldOp declarations
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
class YieldOp : public Op<YieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsTerminator> {
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::ZerosLikeOp declarations
//===----------------------------------------------------------------------===//

class ZerosLikeOpAdaptor {
public:
  ZerosLikeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ZerosLikeOpAdaptor(ZerosLikeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value x();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ZerosLikeOp : public Op<ZerosLikeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ZerosLikeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value x();
  ::mlir::MutableOperandRange xMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value y();
  Type T();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type y, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value x);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value x);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::_FusedConv2DOp declarations
//===----------------------------------------------------------------------===//

class _FusedConv2DOpAdaptor {
public:
  _FusedConv2DOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _FusedConv2DOpAdaptor(_FusedConv2DOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value filter();
  ValueRange args();
  ArrayAttr strides();
  StringAttr padding();
  ArrayAttr explicit_paddings();
  StringAttr data_format();
  ArrayAttr dilations();
  BoolAttr use_cudnn_on_gpu();
  ArrayAttr fused_ops();
  FloatAttr epsilon();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _FusedConv2DOp : public Op<_FusedConv2DOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _FusedConv2DOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value filter();
  Operation::operand_range args();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange filterMutable();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  StringAttr paddingAttr();
  StringRef padding();
  ArrayAttr explicit_paddingsAttr();
  ArrayAttr explicit_paddings();
  StringAttr data_formatAttr();
  StringRef data_format();
  ArrayAttr dilationsAttr();
  ArrayAttr dilations();
  BoolAttr use_cudnn_on_gpuAttr();
  bool use_cudnn_on_gpu();
  ArrayAttr fused_opsAttr();
  ArrayAttr fused_ops();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  Type T();
  size_t num_args();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void stridesAttr(ArrayAttr attr);
  void paddingAttr(StringAttr attr);
  void explicit_paddingsAttr(ArrayAttr attr);
  void data_formatAttr(StringAttr attr);
  void dilationsAttr(ArrayAttr attr);
  void use_cudnn_on_gpuAttr(BoolAttr attr);
  void fused_opsAttr(ArrayAttr attr);
  void epsilonAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ValueRange args, ArrayAttr strides, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations, BoolAttr use_cudnn_on_gpu, ArrayAttr fused_ops, FloatAttr epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ValueRange args, ArrayAttr strides, StringAttr padding, ArrayAttr explicit_paddings, StringAttr data_format, ArrayAttr dilations, BoolAttr use_cudnn_on_gpu, ArrayAttr fused_ops, FloatAttr epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input, Value filter, ValueRange args, ArrayAttr strides, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations, bool use_cudnn_on_gpu, ArrayAttr fused_ops, APFloat epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value filter, ValueRange args, ArrayAttr strides, StringRef padding, ArrayAttr explicit_paddings, StringRef data_format, ArrayAttr dilations, bool use_cudnn_on_gpu, ArrayAttr fused_ops, APFloat epsilon);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::_FusedMatMulOp declarations
//===----------------------------------------------------------------------===//

class _FusedMatMulOpAdaptor {
public:
  _FusedMatMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _FusedMatMulOpAdaptor(_FusedMatMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  ValueRange args();
  BoolAttr transpose_a();
  BoolAttr transpose_b();
  ArrayAttr fused_ops();
  FloatAttr epsilon();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _FusedMatMulOp : public Op<_FusedMatMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _FusedMatMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  Operation::operand_range args();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value product();
  BoolAttr transpose_aAttr();
  bool transpose_a();
  BoolAttr transpose_bAttr();
  bool transpose_b();
  ArrayAttr fused_opsAttr();
  ArrayAttr fused_ops();
  FloatAttr epsilonAttr();
  APFloat epsilon();
  Type T();
  size_t num_args();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void transpose_aAttr(BoolAttr attr);
  void transpose_bAttr(BoolAttr attr);
  void fused_opsAttr(ArrayAttr attr);
  void epsilonAttr(FloatAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type product, Value a, Value b, ValueRange args, BoolAttr transpose_a, BoolAttr transpose_b, ArrayAttr fused_ops, FloatAttr epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, ValueRange args, BoolAttr transpose_a, BoolAttr transpose_b, ArrayAttr fused_ops, FloatAttr epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type product, Value a, Value b, ValueRange args, bool transpose_a, bool transpose_b, ArrayAttr fused_ops, APFloat epsilon);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, ValueRange args, bool transpose_a, bool transpose_b, ArrayAttr fused_ops, APFloat epsilon);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TF::_HostComputeMlirOp declarations
//===----------------------------------------------------------------------===//

class _HostComputeMlirOpAdaptor {
public:
  _HostComputeMlirOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _HostComputeMlirOpAdaptor(_HostComputeMlirOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  StringAttr key();
  IntegerAttr tpu_core();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _HostComputeMlirOp : public Op<_HostComputeMlirOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _HostComputeMlirOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  StringAttr keyAttr();
  StringRef key();
  IntegerAttr tpu_coreAttr();
  APInt tpu_core();
  mlir::OperandElementTypeRange Tinputs();
  mlir::ResultElementTypeRange Toutputs();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keyAttr(StringAttr attr);
  void tpu_coreAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, StringAttr key, IntegerAttr tpu_core);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, StringRef key, APInt tpu_core);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::_RecvTPUEmbeddingActivationsOp declarations
//===----------------------------------------------------------------------===//

class _RecvTPUEmbeddingActivationsOpAdaptor {
public:
  _RecvTPUEmbeddingActivationsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _RecvTPUEmbeddingActivationsOpAdaptor(_RecvTPUEmbeddingActivationsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value deduplication_data();
  StringAttr config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _RecvTPUEmbeddingActivationsOp : public Op<_RecvTPUEmbeddingActivationsOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _RecvTPUEmbeddingActivationsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value deduplication_data();
  ::mlir::MutableOperandRange deduplication_dataMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  StringAttr configAttr();
  StringRef config();
  size_t num_tables();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Value deduplication_data, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Value deduplication_data, StringRef config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::_RecvTPUEmbeddingDeduplicationDataOp declarations
//===----------------------------------------------------------------------===//

class _RecvTPUEmbeddingDeduplicationDataOpAdaptor {
public:
  _RecvTPUEmbeddingDeduplicationDataOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _RecvTPUEmbeddingDeduplicationDataOpAdaptor(_RecvTPUEmbeddingDeduplicationDataOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _RecvTPUEmbeddingDeduplicationDataOp : public Op<_RecvTPUEmbeddingDeduplicationDataOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = _RecvTPUEmbeddingDeduplicationDataOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  StringAttr configAttr();
  StringRef config();
  void configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, StringRef config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::_SendTPUEmbeddingGradientsOp declarations
//===----------------------------------------------------------------------===//

class _SendTPUEmbeddingGradientsOpAdaptor {
public:
  _SendTPUEmbeddingGradientsOpAdaptor(ValueRange values, DictionaryAttr attrs);
  _SendTPUEmbeddingGradientsOpAdaptor(_SendTPUEmbeddingGradientsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange gradients();
  ValueRange learning_rates();
  Value deduplication_data();
  StringAttr config();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _SendTPUEmbeddingGradientsOp : public Op<_SendTPUEmbeddingGradientsOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _SendTPUEmbeddingGradientsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range gradients();
  Operation::operand_range learning_rates();
  Value deduplication_data();
  ::mlir::MutableOperandRange gradientsMutable();
  ::mlir::MutableOperandRange learning_ratesMutable();
  ::mlir::MutableOperandRange deduplication_dataMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr configAttr();
  StringRef config();
  size_t NumTables();
  size_t NumLearningRateTags();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void configAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange gradients, ValueRange learning_rates, Value deduplication_data, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange gradients, ValueRange learning_rates, Value deduplication_data, StringAttr config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange gradients, ValueRange learning_rates, Value deduplication_data, StringRef config);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange gradients, ValueRange learning_rates, Value deduplication_data, StringRef config);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::_TPUCompileMlirOp declarations
//===----------------------------------------------------------------------===//

class _TPUCompileMlirOpAdaptor {
public:
  _TPUCompileMlirOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _TPUCompileMlirOpAdaptor(_TPUCompileMlirOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange dynamic_shapes();
  StringAttr mlir_module();
  StringAttr metadata();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _TPUCompileMlirOp : public Op<_TPUCompileMlirOp, OpTrait::ZeroRegion, OpTrait::AtLeastNResults<1>::Impl, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpAsmOpInterface::Trait, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _TPUCompileMlirOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range dynamic_shapes();
  ::mlir::MutableOperandRange dynamic_shapesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value compilation_status();
  Operation::result_range program();
  StringAttr mlir_moduleAttr();
  StringRef mlir_module();
  StringAttr metadataAttr();
  StringRef metadata();
  size_t num_computations();
  size_t NumDynamicShapes();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void mlir_moduleAttr(StringAttr attr);
  void metadataAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type compilation_status, ArrayRef<Type> program, ValueRange dynamic_shapes, StringAttr mlir_module, StringAttr metadata);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange dynamic_shapes, StringAttr mlir_module, StringAttr metadata);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type compilation_status, ArrayRef<Type> program, ValueRange dynamic_shapes, StringRef mlir_module, StringRef metadata);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange dynamic_shapes, StringRef mlir_module, StringRef metadata);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::_XlaRecvAtHostOp declarations
//===----------------------------------------------------------------------===//

class _XlaRecvAtHostOpAdaptor {
public:
  _XlaRecvAtHostOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _XlaRecvAtHostOpAdaptor(_XlaRecvAtHostOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value dynamic_key();
  StringAttr key();
  IntegerAttr device_ordinal();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _XlaRecvAtHostOp : public Op<_XlaRecvAtHostOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _XlaRecvAtHostOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value dynamic_key();
  ::mlir::MutableOperandRange dynamic_keyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  StringAttr keyAttr();
  StringRef key();
  IntegerAttr device_ordinalAttr();
  APInt device_ordinal();
  mlir::ResultElementTypeRange Toutputs();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keyAttr(StringAttr attr);
  void device_ordinalAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Value dynamic_key, StringAttr key, IntegerAttr device_ordinal);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Value dynamic_key, StringRef key, APInt device_ordinal);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// TF::_XlaSendFromHostOp declarations
//===----------------------------------------------------------------------===//

class _XlaSendFromHostOpAdaptor {
public:
  _XlaSendFromHostOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  _XlaSendFromHostOpAdaptor(_XlaSendFromHostOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  Value dynamic_key();
  StringAttr key();
  IntegerAttr device_ordinal();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class _XlaSendFromHostOp : public Op<_XlaSendFromHostOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = _XlaSendFromHostOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  Value dynamic_key();
  ::mlir::MutableOperandRange inputsMutable();
  ::mlir::MutableOperandRange dynamic_keyMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr keyAttr();
  StringRef key();
  IntegerAttr device_ordinalAttr();
  APInt device_ordinal();
  mlir::OperandElementTypeRange Tinputs();
  static bool isDerivedAttribute(StringRef name);
  DictionaryAttr materializeDerivedAttributes();
  void keyAttr(StringAttr attr);
  void device_ordinalAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange inputs, Value dynamic_key, StringAttr key, IntegerAttr device_ordinal);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, Value dynamic_key, StringAttr key, IntegerAttr device_ordinal);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange inputs, Value dynamic_key, StringRef key, APInt device_ordinal);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs, Value dynamic_key, StringRef key, APInt device_ordinal);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

