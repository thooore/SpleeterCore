/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class BroadcastOp;
class ConstantMaskOp;
class ContractionOp;
class CreateMaskOp;
class ExtractElementOp;
class ExtractOp;
class ExtractSlicesOp;
class ExtractStridedSliceOp;
class FMAOp;
class FlatTransposeOp;
class InsertElementOp;
class InsertOp;
class InsertSlicesOp;
class InsertStridedSliceOp;
class MatmulOp;
class OuterProductOp;
class PrintOp;
class ReductionOp;
class ReshapeOp;
class ShapeCastOp;
class ShuffleOp;
class TransferReadOp;
class TransferWriteOp;
class TransposeOp;
class TupleGetOp;
class TupleOp;
class TypeCastOp;

//===----------------------------------------------------------------------===//
// vector::BroadcastOp declarations
//===----------------------------------------------------------------------===//

class BroadcastOpAdaptor {
public:
  BroadcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BroadcastOpAdaptor(BroadcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BroadcastOp : public Op<BroadcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BroadcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  ::mlir::MutableOperandRange sourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value vector();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    Type getSourceType() { return source().getType(); }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ConstantMaskOp declarations
//===----------------------------------------------------------------------===//

class ConstantMaskOpAdaptor {
public:
  ConstantMaskOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstantMaskOpAdaptor(ConstantMaskOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ArrayAttr mask_dim_sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstantMaskOp : public Op<ConstantMaskOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstantMaskOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr mask_dim_sizesAttr();
  ArrayAttr mask_dim_sizes();
  void mask_dim_sizesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ArrayAttr mask_dim_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ArrayAttr mask_dim_sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getMaskDimSizesAttrName() { return "mask_dim_sizes"; }
  
};

//===----------------------------------------------------------------------===//
// vector::ContractionOp declarations
//===----------------------------------------------------------------------===//

class ContractionOpAdaptor {
public:
  ContractionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ContractionOpAdaptor(ContractionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value acc();
  ValueRange masks();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_types();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ContractionOp : public Op<ContractionOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ContractionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value acc();
  Operation::operand_range masks();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange accMutable();
  ::mlir::MutableOperandRange masksMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr indexing_mapsAttr();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_typesAttr();
  ArrayAttr iterator_types();
  void indexing_mapsAttr(ArrayAttr attr);
  void iterator_typesAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value lhs, Value rhs, Value acc, ArrayAttr indexingMaps, ArrayAttr iteratorTypes);
  static void build(OpBuilder &builder, OperationState &result, Value lhs, Value rhs, Value acc, ArrayRef<ArrayRef<AffineExpr>> indexingExprs, ArrayRef<StringRef> iteratorTypes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getLhsType() {
      return lhs().getType().cast<VectorType>();
    }
    VectorType getRhsType() {
      return rhs().getType().cast<VectorType>();
    }
    Type getAccType() { return acc().getType(); }
    VectorType getLHSVectorMaskType() {
      if (llvm::size(masks()) != 2) return VectorType();
      return getOperand(3).getType().cast<VectorType>();
    }
    VectorType getRHSVectorMaskType() {
      if (llvm::size(masks()) != 2) return VectorType();
      return getOperand(4).getType().cast<VectorType>();
    }
    Type getResultType() { return getResult().getType(); }
    ArrayRef<StringRef> getTraitAttrNames();
    SmallVector<AffineMap, 4> getIndexingMaps();
    static unsigned getAccOperandIndex() { return 2; }

    // Returns the bounds of each dimension in the iteration space spanned
    // by the iterator types of this operation.
    void getIterationBounds(SmallVectorImpl<int64_t> &iterationBounds);

    // Returns a list of index maps, where there is a list entry for each
    // op indexing map attribute (i.e. one for each input and output, with
    // the output listed last). Each index map, maps from this operations
    // iteration space, to vector dimensions of the maps input/output.
    void getIterationIndexMap(
      std::vector<DenseMap<int64_t, int64_t>> &iterationIndexMap);

    std::vector<std::pair<int64_t, int64_t>> getContractingDimMap();
    std::vector<std::pair<int64_t, int64_t>> getBatchDimMap();
  
};

//===----------------------------------------------------------------------===//
// vector::CreateMaskOp declarations
//===----------------------------------------------------------------------===//

class CreateMaskOpAdaptor {
public:
  CreateMaskOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CreateMaskOpAdaptor(CreateMaskOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CreateMaskOp : public Op<CreateMaskOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CreateMaskOpAdaptor;
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
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// vector::ExtractElementOp declarations
//===----------------------------------------------------------------------===//

class ExtractElementOpAdaptor {
public:
  ExtractElementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExtractElementOpAdaptor(ExtractElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  Value position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExtractElementOp : public Op<ExtractElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractElementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  Value position();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange positionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value vector, Value position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ExtractOp declarations
//===----------------------------------------------------------------------===//

class ExtractOpAdaptor {
public:
  ExtractOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExtractOpAdaptor(ExtractOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  ArrayAttr position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExtractOp : public Op<ExtractOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  ::mlir::MutableOperandRange vectorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr positionAttr();
  ArrayAttr position();
  void positionAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value source,ArrayRef<int64_t> position);
  static void build(OpBuilder &builder, OperationState &result, Value source,ValueRange position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vector, ArrayAttr position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getPositionAttrName() { return "position"; }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ExtractSlicesOp declarations
//===----------------------------------------------------------------------===//

class ExtractSlicesOpAdaptor {
public:
  ExtractSlicesOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExtractSlicesOpAdaptor(ExtractSlicesOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  ArrayAttr sizes();
  ArrayAttr strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExtractSlicesOp : public Op<ExtractSlicesOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractSlicesOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  ::mlir::MutableOperandRange vectorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr sizesAttr();
  ArrayAttr sizes();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  void sizesAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, TupleType tupleType, Value vector, ArrayRef<int64_t> sizes, ArrayRef<int64_t> strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vector, ArrayAttr sizes, ArrayAttr strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr sizes, ArrayAttr strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getSourceVectorType() {
      return vector().getType().cast<VectorType>();
    }
    TupleType getResultTupleType() {
      return getResult().getType().cast<TupleType>();
    }
    void getSizes(SmallVectorImpl<int64_t> &results);
    void getStrides(SmallVectorImpl<int64_t> &results);
    static StringRef getSizesAttrName() { return "sizes"; }
    static StringRef getStridesAttrName() { return "strides"; }
  
};

//===----------------------------------------------------------------------===//
// vector::ExtractStridedSliceOp declarations
//===----------------------------------------------------------------------===//

class ExtractStridedSliceOpAdaptor {
public:
  ExtractStridedSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExtractStridedSliceOpAdaptor(ExtractStridedSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  ArrayAttr offsets();
  ArrayAttr sizes();
  ArrayAttr strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExtractStridedSliceOp : public Op<ExtractStridedSliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractStridedSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  ::mlir::MutableOperandRange vectorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr offsetsAttr();
  ArrayAttr offsets();
  ArrayAttr sizesAttr();
  ArrayAttr sizes();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  void offsetsAttr(ArrayAttr attr);
  void sizesAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value source, ArrayRef<int64_t> offsets, ArrayRef<int64_t> sizes, ArrayRef<int64_t> strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getOffsetsAttrName() { return "offsets"; }
    static StringRef getSizesAttrName() { return "sizes"; }
    static StringRef getStridesAttrName() { return "strides"; }
    VectorType getVectorType(){ return vector().getType().cast<VectorType>(); }
    void getOffsets(SmallVectorImpl<int64_t> &results);
  
};

//===----------------------------------------------------------------------===//
// vector::FMAOp declarations
//===----------------------------------------------------------------------===//

class FMAOpAdaptor {
public:
  FMAOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FMAOpAdaptor(FMAOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value acc();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FMAOp : public Op<FMAOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FMAOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Value acc();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange accMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &b, OperationState &result, Value lhs, Value rhs, Value acc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs, Value acc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value acc);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getVectorType() { return lhs().getType().cast<VectorType>(); }
  
};

//===----------------------------------------------------------------------===//
// vector::FlatTransposeOp declarations
//===----------------------------------------------------------------------===//

class FlatTransposeOpAdaptor {
public:
  FlatTransposeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FlatTransposeOpAdaptor(FlatTransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value matrix();
  IntegerAttr rows();
  IntegerAttr columns();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FlatTransposeOp : public Op<FlatTransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FlatTransposeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value matrix();
  ::mlir::MutableOperandRange matrixMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr rowsAttr();
  APInt rows();
  IntegerAttr columnsAttr();
  APInt columns();
  void rowsAttr(IntegerAttr attr);
  void columnsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, APInt rows, APInt columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, APInt rows, APInt columns);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// vector::InsertElementOp declarations
//===----------------------------------------------------------------------===//

class InsertElementOpAdaptor {
public:
  InsertElementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InsertElementOpAdaptor(InsertElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  Value dest();
  Value position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InsertElementOp : public Op<InsertElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertElementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  Value dest();
  Value position();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange destMutable();
  ::mlir::MutableOperandRange positionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value source, Value dest, Value position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value dest, Value position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    Type getSourceType() { return source().getType(); }
    VectorType getDestVectorType() {
      return dest().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::InsertOp declarations
//===----------------------------------------------------------------------===//

class InsertOpAdaptor {
public:
  InsertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InsertOpAdaptor(InsertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  Value dest();
  ArrayAttr position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InsertOp : public Op<InsertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  Value dest();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange destMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  ArrayAttr positionAttr();
  ArrayAttr position();
  void positionAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value source, Value dest, ArrayRef<int64_t> position);
  static void build(OpBuilder &builder, OperationState &result, Value source, Value dest, ValueRange position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value source, Value dest, ArrayAttr position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getPositionAttrName() { return "position"; }
    Type getSourceType() { return source().getType(); }
    VectorType getDestVectorType() {
      return dest().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::InsertSlicesOp declarations
//===----------------------------------------------------------------------===//

class InsertSlicesOpAdaptor {
public:
  InsertSlicesOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InsertSlicesOpAdaptor(InsertSlicesOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vectors();
  ArrayAttr sizes();
  ArrayAttr strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InsertSlicesOp : public Op<InsertSlicesOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertSlicesOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vectors();
  ::mlir::MutableOperandRange vectorsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr sizesAttr();
  ArrayAttr sizes();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  void sizesAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vectors, ArrayAttr sizes, ArrayAttr strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vectors, ArrayAttr sizes, ArrayAttr strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    TupleType getSourceTupleType() {
      return vectors().getType().cast<TupleType>();
    }
    VectorType getResultVectorType() {
      return getResult().getType().cast<VectorType>();
    }
    void getSizes(SmallVectorImpl<int64_t> &results);
    void getStrides(SmallVectorImpl<int64_t> &results);
    static StringRef getSizesAttrName() { return "sizes"; }
    static StringRef getStridesAttrName() { return "strides"; }
  
};

//===----------------------------------------------------------------------===//
// vector::InsertStridedSliceOp declarations
//===----------------------------------------------------------------------===//

class InsertStridedSliceOpAdaptor {
public:
  InsertStridedSliceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InsertStridedSliceOpAdaptor(InsertStridedSliceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  Value dest();
  ArrayAttr offsets();
  ArrayAttr strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InsertStridedSliceOp : public Op<InsertStridedSliceOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertStridedSliceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  Value dest();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange destMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  ArrayAttr offsetsAttr();
  ArrayAttr offsets();
  ArrayAttr stridesAttr();
  ArrayAttr strides();
  void offsetsAttr(ArrayAttr attr);
  void stridesAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value source, Value dest, ArrayRef<int64_t> offsets, ArrayRef<int64_t> strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getOffsetsAttrName() { return "offsets"; }
    static StringRef getStridesAttrName() { return "strides"; }
    VectorType getSourceVectorType() {
      return source().getType().cast<VectorType>();
    }
    VectorType getDestVectorType() {
      return dest().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::MatmulOp declarations
//===----------------------------------------------------------------------===//

class MatmulOpAdaptor {
public:
  MatmulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatmulOpAdaptor(MatmulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  IntegerAttr lhs_rows();
  IntegerAttr lhs_columns();
  IntegerAttr rhs_columns();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatmulOp : public Op<MatmulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatmulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr lhs_rowsAttr();
  APInt lhs_rows();
  IntegerAttr lhs_columnsAttr();
  APInt lhs_columns();
  IntegerAttr rhs_columnsAttr();
  APInt rhs_columns();
  void lhs_rowsAttr(IntegerAttr attr);
  void lhs_columnsAttr(IntegerAttr attr);
  void rhs_columnsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value lhs, Value rhs, unsigned lhsRows, unsigned lhsColumns, unsigned rhsColumns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// vector::OuterProductOp declarations
//===----------------------------------------------------------------------===//

class OuterProductOpAdaptor {
public:
  OuterProductOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OuterProductOpAdaptor(OuterProductOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ValueRange acc();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class OuterProductOp : public Op<OuterProductOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = OuterProductOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  Operation::operand_range acc();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  ::mlir::MutableOperandRange accMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value lhs, Value rhs, Value acc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, ValueRange acc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, ValueRange acc);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getOperandVectorTypeLHS() {
      return lhs().getType().cast<VectorType>();
    }
    VectorType getOperandVectorTypeRHS() {
      return rhs().getType().cast<VectorType>();
    }
    VectorType getOperandVectorTypeACC() {
      return (llvm::size(acc()) == 0) ? VectorType() :
        (*acc().begin()).getType().cast<VectorType>();
    }
    VectorType getVectorType() {
      return getResult().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::PrintOp declarations
//===----------------------------------------------------------------------===//

class PrintOpAdaptor {
public:
  PrintOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PrintOpAdaptor(PrintOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PrintOp : public Op<PrintOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = PrintOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  ::mlir::MutableOperandRange sourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    Type getPrintType() {
      return source().getType();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ReductionOp declarations
//===----------------------------------------------------------------------===//

class ReductionOpAdaptor {
public:
  ReductionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReductionOpAdaptor(ReductionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  ValueRange acc();
  StringAttr kind();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReductionOp : public Op<ReductionOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReductionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  Operation::operand_range acc();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange accMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value dest();
  StringAttr kindAttr();
  StringRef kind();
  void kindAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type dest, StringAttr kind, Value vector, ValueRange acc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr kind, Value vector, ValueRange acc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type dest, StringRef kind, Value vector, ValueRange acc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef kind, Value vector, ValueRange acc);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ReshapeOp declarations
//===----------------------------------------------------------------------===//

class ReshapeOpAdaptor {
public:
  ReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs);
  ReshapeOpAdaptor(ReshapeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  ValueRange input_shape();
  ValueRange output_shape();
  ArrayAttr fixed_vector_sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReshapeOp : public Op<ReshapeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReshapeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  Operation::operand_range input_shape();
  Operation::operand_range output_shape();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange input_shapeMutable();
  ::mlir::MutableOperandRange output_shapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  ArrayAttr fixed_vector_sizesAttr();
  ArrayAttr fixed_vector_sizes();
  void fixed_vector_sizesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getInputVectorType() {
      return vector().getType().cast<VectorType>();
    }
    VectorType getOutputVectorType() {
      return getResult().getType().cast<VectorType>();
    }

    /// Returns as integer value the number of input shape operands.
    int64_t getNumInputShapeSizes() { return input_shape().size(); }

    /// Returns as integer value the number of output shape operands.
    int64_t getNumOutputShapeSizes() { return output_shape().size(); }

    void getFixedVectorSizes(SmallVectorImpl<int64_t> &results);

    static StringRef getFixedVectorSizesAttrName() {
      return "fixed_vector_sizes";
    }
    static StringRef getInputShapeAttrName() { return "input_shape"; }
    static StringRef getOutputShapeAttrName() { return "output_shape"; }
  
};

//===----------------------------------------------------------------------===//
// vector::ShapeCastOp declarations
//===----------------------------------------------------------------------===//

class ShapeCastOpAdaptor {
public:
  ShapeCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShapeCastOpAdaptor(ShapeCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShapeCastOp : public Op<ShapeCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShapeCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  ::mlir::MutableOperandRange sourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getSourceVectorType() {
      return source().getType().cast<VectorType>();
    }
    VectorType getResultVectorType() {
      return getResult().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::ShuffleOp declarations
//===----------------------------------------------------------------------===//

class ShuffleOpAdaptor {
public:
  ShuffleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShuffleOpAdaptor(ShuffleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value v1();
  Value v2();
  ArrayAttr mask();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShuffleOp : public Op<ShuffleOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShuffleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value v1();
  Value v2();
  ::mlir::MutableOperandRange v1Mutable();
  ::mlir::MutableOperandRange v2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value vector();
  ArrayAttr maskAttr();
  ArrayAttr mask();
  void maskAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result,Value v1, Value v2, ArrayRef<int64_t>);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value v1, Value v2, ArrayAttr mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getMaskAttrName() { return "mask"; }
    VectorType getV1VectorType() {
      return v1().getType().cast<VectorType>();
    }
    VectorType getV2VectorType() {
      return v2().getType().cast<VectorType>();
    }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::TransferReadOp declarations
//===----------------------------------------------------------------------===//

class TransferReadOpAdaptor {
public:
  TransferReadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TransferReadOpAdaptor(TransferReadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  ValueRange indices();
  Value padding();
  AffineMapAttr permutation_map();
  ArrayAttr masked();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TransferReadOp : public Op<TransferReadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = TransferReadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  Operation::operand_range indices();
  Value padding();
  ::mlir::MutableOperandRange memrefMutable();
  ::mlir::MutableOperandRange indicesMutable();
  ::mlir::MutableOperandRange paddingMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value vector();
  AffineMapAttr permutation_mapAttr();
  AffineMap permutation_map();
  ArrayAttr maskedAttr();
  Optional< ArrayAttr > masked();
  void permutation_mapAttr(AffineMapAttr attr);
  void maskedAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, VectorType vector, Value memref, ValueRange indices, AffineMap permutationMap, ArrayRef<bool> maybeMasked = {});
  static void build(OpBuilder &builder, OperationState &result, VectorType vector, Value memref, ValueRange indices, ArrayRef<bool> maybeMasked = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value memref, ValueRange indices, AffineMap permutation_map, Value padding, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMap permutation_map, Value padding, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);

    static StringRef getMaskedAttrName() { return "masked"; }
    static StringRef getPermutationMapAttrName() { return "permutation_map"; }
    bool isMaskedDim(unsigned dim) {
      return !masked() ||
        masked()->cast<ArrayAttr>()[dim].cast<BoolAttr>().getValue();
    }
    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
    /// Build the default minor identity map suitable for a vector transfer.
    /// This also handles the case memref<... x vector<...>> -> vector<...> in
    /// which the rank of the identity map must take the vector element type
    /// into account.
    static AffineMap getTransferMinorIdentityMap(
      MemRefType memRefType, VectorType vectorType) {
        return impl::getTransferMinorIdentityMap(memRefType, vectorType);
      }
  
};

//===----------------------------------------------------------------------===//
// vector::TransferWriteOp declarations
//===----------------------------------------------------------------------===//

class TransferWriteOpAdaptor {
public:
  TransferWriteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TransferWriteOpAdaptor(TransferWriteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  Value memref();
  ValueRange indices();
  AffineMapAttr permutation_map();
  ArrayAttr masked();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TransferWriteOp : public Op<TransferWriteOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = TransferWriteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  Value memref();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange memrefMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr permutation_mapAttr();
  AffineMap permutation_map();
  ArrayAttr maskedAttr();
  Optional< ArrayAttr > masked();
  void permutation_mapAttr(AffineMapAttr attr);
  void maskedAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value vector, Value memref, ValueRange indices, ArrayRef<bool> maybeMasked = {});
  static void build(OpBuilder &builder, OperationState &result, Value vector, Value memref, ValueRange indices, AffineMap permutationMap);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value vector, Value memref, ValueRange indices, AffineMap permutation_map, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMap permutation_map, /*optional*/ArrayAttr masked);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    static StringRef getMaskedAttrName() { return "masked"; }
    static StringRef getPermutationMapAttrName() { return "permutation_map"; }
    bool isMaskedDim(unsigned dim) {
      return !masked() ||
        masked()->cast<ArrayAttr>()[dim].cast<BoolAttr>().getValue();
    }
    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
  
    /// Build the default minor identity map suitable for a vector transfer.
    /// This also handles the case memref<... x vector<...>> -> vector<...> in
    /// which the rank of the identity map must take the vector element type
    /// into account.
    static AffineMap getTransferMinorIdentityMap(
      MemRefType memRefType, VectorType vectorType) {
        return impl::getTransferMinorIdentityMap(memRefType, vectorType);
      }
  
};

//===----------------------------------------------------------------------===//
// vector::TransposeOp declarations
//===----------------------------------------------------------------------===//

class TransposeOpAdaptor {
public:
  TransposeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TransposeOpAdaptor(TransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  ArrayAttr transp();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TransposeOp : public Op<TransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TransposeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  ::mlir::MutableOperandRange vectorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  ArrayAttr transpAttr();
  ArrayAttr transp();
  void transpAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value vector, ArrayRef<int64_t> transp);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value vector, ArrayAttr transp);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr transp);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getVectorType() {
      return vector().getType().cast<VectorType>();
    }
    VectorType getResultType() {
      return result().getType().cast<VectorType>();
    }
    void getTransp(SmallVectorImpl<int64_t> &results);
    static StringRef getTranspAttrName() { return "transp"; }
  
};

//===----------------------------------------------------------------------===//
// vector::TupleGetOp declarations
//===----------------------------------------------------------------------===//

class TupleGetOpAdaptor {
public:
  TupleGetOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TupleGetOpAdaptor(TupleGetOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vectors();
  IntegerAttr index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TupleGetOp : public Op<TupleGetOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TupleGetOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vectors();
  ::mlir::MutableOperandRange vectorsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr indexAttr();
  APInt index();
  void indexAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vectors, IntegerAttr index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vectors, IntegerAttr index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    VectorType getResultVectorType() {
      return getResult().getType().cast<VectorType>();
    }
    int64_t getIndex() {
      return getAttrOfType<IntegerAttr>("index").getValue().getSExtValue();
    }
    static StringRef getIndexAttrName() { return "index"; }
  
};

//===----------------------------------------------------------------------===//
// vector::TupleOp declarations
//===----------------------------------------------------------------------===//

class TupleOpAdaptor {
public:
  TupleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TupleOpAdaptor(TupleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange vectors();
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
  Operation::operand_range vectors();
  ::mlir::MutableOperandRange vectorsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange vectors);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange vectors);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    TupleType getResultTupleType() {
      return getResult().getType().cast<TupleType>();
    }
  
};

//===----------------------------------------------------------------------===//
// vector::TypeCastOp declarations
//===----------------------------------------------------------------------===//

class TypeCastOpAdaptor {
public:
  TypeCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TypeCastOpAdaptor(TypeCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TypeCastOp : public Op<TypeCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TypeCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  ::mlir::MutableOperandRange memrefMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, Value source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
    MemRefType getResultMemRefType() {
      return getResult().getType().cast<MemRefType>();
    }
  
};

#endif  // GET_OP_CLASSES

