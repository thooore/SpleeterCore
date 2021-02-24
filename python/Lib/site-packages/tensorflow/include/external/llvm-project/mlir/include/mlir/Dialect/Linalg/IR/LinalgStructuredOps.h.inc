/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class BatchMatmulOp;
class ConvOp;
class CopyOp;
class DotOp;
class FillOp;
class GenericOp;
class IndexedGenericOp;
class MatmulOp;
class MatvecOp;
class PoolingMaxOp;
class PoolingMinOp;
class PoolingSumOp;

//===----------------------------------------------------------------------===//
// linalg::BatchMatmulOp declarations
//===----------------------------------------------------------------------===//

class BatchMatmulOpAdaptor {
public:
  BatchMatmulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BatchMatmulOpAdaptor(BatchMatmulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange views();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BatchMatmulOp : public Op<BatchMatmulOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::NamedStructuredOpTraits, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = BatchMatmulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output_tensors();
  Region &region();
  static void build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

        llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
        static SmallVector<StringRef, 8> referenceIterators(
          TypeRange inputTypes, TypeRange outputTypes);

        llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
        static SmallVector<AffineMap, 8> referenceIndexingMaps(
          TypeRange inputTypes, TypeRange outputTypes);

        static void regionBuilder(Block &block);

        std::string getLibraryCallName() {
          return generateLibraryCallName(getOperation());
        }
      
};

//===----------------------------------------------------------------------===//
// linalg::ConvOp declarations
//===----------------------------------------------------------------------===//

class ConvOpAdaptor {
public:
  ConvOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvOpAdaptor(ConvOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value filter();
  Value input();
  Value output();
  ArrayAttr strides();
  ArrayAttr dilations();
  DenseIntElementsAttr padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvOp : public Op<ConvOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value filter();
  Value input();
  Value output();
  ::mlir::MutableOperandRange filterMutable();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr stridesAttr();
  Optional< ArrayAttr > strides();
  ArrayAttr dilationsAttr();
  Optional< ArrayAttr > dilations();
  DenseIntElementsAttr paddingAttr();
  Optional< DenseIntElementsAttr > padding();
  void stridesAttr(ArrayAttr attr);
  void dilationsAttr(ArrayAttr attr);
  void paddingAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    // TODO(ntv) extend to support more than 1 dimensions and potentially
    // grouping too.
    unsigned getNumBatchDimensions() { return 1; }

    unsigned getNumInputFeatureDimensions() { return 1; }

    unsigned getNumOutputFeatureDimensions() { return 1; }

    unsigned getNumSpatialDimensions() {
      return getOutputShapedType(0).getRank() - getNumBatchDimensions() -
             getNumOutputFeatureDimensions();
    }

    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions; i.e.
      // [b, xs, q] in the TF notation above.
      unsigned nPar = getOutputShapedType(0).getRank();
      unsigned nRed = getNumInputFeatureDimensions();
      // Window loops are a special kind of reduction that is never tiled or
      // parallelized across; i.e. [zs] in the TF notation above whose number
      // match `xs` (i.e. 1 window loop per "image" dimension).
      // This may evolve in the future.
      unsigned nWin =
        nPar - getNumBatchDimensions() - getNumInputFeatureDimensions();
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nRed + nWin);
      iters.append(nRed, getReductionIteratorTypeName());
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    //   F(z0, ..., zN-1, q, k) *
    //     I(b, x0 + z0 - pad_low_0, ..., xN-1 + zN-1 - pad_low_N-1, q)
    //   ->  O(b, x0, ..., xN-1, k)
    // for N equal to `nWindow`. If there is no padding attribute, it will be
    // ignored.
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      // In the following, AffineDimExprs are indexed in loop order:
      //   [ b, xs, k,           q,                     zs]
      //    parallels     non-window reductions     windows
      //
      // Parallel dims are exactly the dimensions indexing `output`:
      //     output[b, x[0], ..., x[N-1], k]; i.e.
      //  * batch dimensions (bs with #bs = 1 for now)
      //  * "image" dimensions (xs with #xs = #zs = output_rank - #bs - #ks)
      //  * output filter dimensions (ks with #ks = 1 for now)
      auto bs = makeAffineDimExprs(getNumBatchDimensions(), idx, context);
      auto xs = makeAffineDimExprs(nWin, idx, context);
      auto ks = makeAffineDimExprs(
        getNumOutputFeatureDimensions(), idx, context);
      // Non-window reduction dim: sum_{z[0], ..., z[N-1], q}
      auto qs = makeAffineDimExprs(
        getNumInputFeatureDimensions(), idx, context);
      // Window reduction dims: sum_{z[0], ..., z[N-1], q}
      auto zs = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto ws = weightedPoolingInputIndex(*this, xs, zs);
      return SmallVector<AffineMap, 8>{
        // filter[z[0], ..., z[N-1], q, k]
        AffineMap::get(idx, 0, concat(concat(zs, qs), ks), context),
        // input[b,
        //       x[0]*s[0] + d[0]*z[0] - pad_low[0],
        //       ...
        //       x[N-1]*s[N-1] + d[N-1]*z[N-1] - pad_low[N-1],
        //       q]
        AffineMap::get(idx, 0, concat(concat(bs, ws), qs), context),
        // output[b, x[0], ..., x[N-1], k]
        AffineMap::get(idx, 0, concat(concat(bs, xs), ks), context)};
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::CopyOp declarations
//===----------------------------------------------------------------------===//

class CopyOpAdaptor {
public:
  CopyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CopyOpAdaptor(CopyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value output();
  AffineMapAttr inputPermutation();
  AffineMapAttr outputPermutation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CopyOp : public Op<CopyOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::linalg::NInputs<1>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = CopyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr inputPermutationAttr();
  Optional< AffineMap > inputPermutation();
  AffineMapAttr outputPermutationAttr();
  Optional< AffineMap > outputPermutation();
  void inputPermutationAttr(AffineMapAttr attr);
  void outputPermutationAttr(AffineMapAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value input, Value output);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    // Rank-polymorphic.
    //   filling_value -> O(ivs) with parallel iterators.
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      unsigned nPar = input().getType().cast<ShapedType>().getRank();
      return SmallVector<StringRef, 8>(nPar, getParallelIteratorTypeName());
    }

    // I(input_perm(ivs)) -> O(output_perm(ivs))
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto maybeInputMap = inputPermutation();
      auto maybeOutputMap = outputPermutation();
      unsigned inputRank = getInputShapedType(0).getRank();
      unsigned outputRank = getOutputShapedType(0).getRank();
      return SmallVector<AffineMap, 8>{
          extractOrIdentityMap(maybeInputMap, inputRank, context),
          extractOrIdentityMap(maybeOutputMap, outputRank, context)};
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::DotOp declarations
//===----------------------------------------------------------------------===//

class DotOpAdaptor {
public:
  DotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DotOpAdaptor(DotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DotOp : public Op<DotOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = DotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value odsArg_0, Value odsArg_1, Value odsArg_2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      return SmallVector<StringRef, 8>{getReductionIteratorTypeName()};
    }

    // A(r_i) * B(r_i) -> C()
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto r_i = getAffineDimExpr(0, context);
      return SmallVector<AffineMap, 8>{
        AffineMap::get(1, 0, {r_i}, context),
        AffineMap::get(1, 0, {r_i}, context),
        AffineMap::get(1, 0, {}, context)};
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::FillOp declarations
//===----------------------------------------------------------------------===//

class FillOpAdaptor {
public:
  FillOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FillOpAdaptor(FillOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value output();
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FillOp : public Op<FillOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::linalg::NInputs<0>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = FillOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value output();
  Value value();
  ::mlir::MutableOperandRange outputMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value output, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value output, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    // Rank-polymorphic.
    //   filling_value -> O(ivs) with parallel iterators.
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      unsigned nPar = output().getType().cast<ShapedType>().getRank();
      return SmallVector<StringRef, 8>(nPar, getParallelIteratorTypeName());
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      // filling_value -> O(ivs)
      return SmallVector<AffineMap, 8>{
          extractOrIdentityMap(llvm::None, getNumParallelLoops(), context)};
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::GenericOp declarations
//===----------------------------------------------------------------------===//

class GenericOpAdaptor {
public:
  GenericOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GenericOpAdaptor(GenericOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange views();
  IntegerAttr args_in();
  IntegerAttr args_out();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_types();
  StringAttr doc();
  StringAttr library_call();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GenericOp : public Op<GenericOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = GenericOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output_tensors();
  Region &region();
  IntegerAttr args_inAttr();
  APInt args_in();
  IntegerAttr args_outAttr();
  APInt args_out();
  ArrayAttr indexing_mapsAttr();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_typesAttr();
  ArrayAttr iterator_types();
  StringAttr docAttr();
  Optional< StringRef > doc();
  StringAttr library_callAttr();
  Optional< StringRef > library_call();
  void args_inAttr(IntegerAttr attr);
  void args_outAttr(IntegerAttr attr);
  void indexing_mapsAttr(ArrayAttr attr);
  void iterator_typesAttr(ArrayAttr attr);
  void docAttr(StringAttr attr);
  void library_callAttr(StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result, ArrayRef<Type> resultTypes, ValueRange args, int64_t inputCount, int64_t outputCount, ArrayRef<AffineMap> indexingMaps, ArrayRef<StringRef> iteratorTypes, function_ref<void(OpBuilder &, Location, ValueRange)> = nullptr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    SmallVector<StringRef, 8> linalgTraitAttrNames() {
      return SmallVector<StringRef, 8>{
        getArgsInAttrName(), getArgsOutAttrName(), getDocAttrName(),
        getIndexingMapsAttrName(), getLibraryCallAttrName(),
        getIteratorTypesAttrName()
      };
    }

    unsigned getNumInputs() { return args_in().getSExtValue(); }

    unsigned getNumOutputs() { return args_out().getSExtValue(); }

    StringRef getLibraryCallName() {
      return library_call().hasValue() ? library_call().getValue() : "";
    }

    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      llvm_unreachable(
        "No such thing as reference iterator types for a generic op.");
     }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      llvm_unreachable(
        "No such thing as reference indexing maps for a generic op.");
     }
  
};

//===----------------------------------------------------------------------===//
// linalg::IndexedGenericOp declarations
//===----------------------------------------------------------------------===//

class IndexedGenericOpAdaptor {
public:
  IndexedGenericOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IndexedGenericOpAdaptor(IndexedGenericOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange views();
  IntegerAttr args_in();
  IntegerAttr args_out();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_types();
  StringAttr doc();
  StringAttr library_call();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IndexedGenericOp : public Op<IndexedGenericOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = IndexedGenericOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output_tensors();
  Region &region();
  IntegerAttr args_inAttr();
  APInt args_in();
  IntegerAttr args_outAttr();
  APInt args_out();
  ArrayAttr indexing_mapsAttr();
  ArrayAttr indexing_maps();
  ArrayAttr iterator_typesAttr();
  ArrayAttr iterator_types();
  StringAttr docAttr();
  Optional< StringRef > doc();
  StringAttr library_callAttr();
  Optional< StringRef > library_call();
  void args_inAttr(IntegerAttr attr);
  void args_outAttr(IntegerAttr attr);
  void indexing_mapsAttr(ArrayAttr attr);
  void iterator_typesAttr(ArrayAttr attr);
  void docAttr(StringAttr attr);
  void library_callAttr(StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result, ArrayRef<Type> resultTypes, ValueRange args, int64_t inputCount, int64_t outputCount, ArrayRef<AffineMap> indexingMaps, ArrayRef<StringRef> iteratorTypes, function_ref<void(OpBuilder &, Location, ValueRange, ValueRange)> = nullptr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    SmallVector<StringRef, 8> linalgTraitAttrNames() {
      return SmallVector<StringRef, 8>{
        getArgsInAttrName(), getArgsOutAttrName(), getDocAttrName(),
        getIndexingMapsAttrName(), getLibraryCallAttrName(),
        getIteratorTypesAttrName()
      };
    }

    unsigned getNumInputs() { return args_in().getSExtValue(); }

    unsigned getNumOutputs() { return args_out().getSExtValue(); }

    StringRef getLibraryCallName() {
      return library_call().hasValue() ? library_call().getValue() : "";
    }

    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      llvm_unreachable(
        "No such thing as reference iterator types for a generic op.");
     }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      llvm_unreachable(
        "No such thing as reference indexing maps for a generic op.");
     }
  
};

//===----------------------------------------------------------------------===//
// linalg::MatmulOp declarations
//===----------------------------------------------------------------------===//

class MatmulOpAdaptor {
public:
  MatmulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatmulOpAdaptor(MatmulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange views();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatmulOp : public Op<MatmulOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::NamedStructuredOpTraits, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = MatmulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output_tensors();
  Region &region();
  static void build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

        llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
        static SmallVector<StringRef, 8> referenceIterators(
          TypeRange inputTypes, TypeRange outputTypes);

        llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
        static SmallVector<AffineMap, 8> referenceIndexingMaps(
          TypeRange inputTypes, TypeRange outputTypes);

        static void regionBuilder(Block &block);

        std::string getLibraryCallName() {
          return generateLibraryCallName(getOperation());
        }
      
};

//===----------------------------------------------------------------------===//
// linalg::MatvecOp declarations
//===----------------------------------------------------------------------===//

class MatvecOpAdaptor {
public:
  MatvecOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatvecOpAdaptor(MatvecOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange views();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatvecOp : public Op<MatvecOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::NamedStructuredOpTraits, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = MatvecOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range views();
  ::mlir::MutableOperandRange viewsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range output_tensors();
  Region &region();
  static void build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

        llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
        static SmallVector<StringRef, 8> referenceIterators(
          TypeRange inputTypes, TypeRange outputTypes);

        llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
        static SmallVector<AffineMap, 8> referenceIndexingMaps(
          TypeRange inputTypes, TypeRange outputTypes);

        static void regionBuilder(Block &block);

        std::string getLibraryCallName() {
          return generateLibraryCallName(getOperation());
        }
      
};

//===----------------------------------------------------------------------===//
// linalg::PoolingMaxOp declarations
//===----------------------------------------------------------------------===//

class PoolingMaxOpAdaptor {
public:
  PoolingMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PoolingMaxOpAdaptor(PoolingMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value windowDims();
  Value output();
  ArrayAttr strides();
  ArrayAttr dilations();
  DenseIntElementsAttr padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PoolingMaxOp : public Op<PoolingMaxOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = PoolingMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value windowDims();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange windowDimsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr stridesAttr();
  Optional< ArrayAttr > strides();
  ArrayAttr dilationsAttr();
  Optional< ArrayAttr > dilations();
  DenseIntElementsAttr paddingAttr();
  Optional< DenseIntElementsAttr > padding();
  void stridesAttr(ArrayAttr attr);
  void dilationsAttr(ArrayAttr attr);
  void paddingAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions.
      unsigned nPar = getOutputShapedType(0).getRank();
      // The window loops has the same number loops with output dimensions.
      unsigned nWin = nPar;
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nWin);
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nPar = getNumParallelLoops();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      auto outputDims = makeAffineDimExprs(nPar, idx, context);
      auto windowDims = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto inputDims =
          weightedPoolingInputIndex(*this, outputDims, windowDims);
      return SmallVector<AffineMap, 8>{
        // input
        AffineMap::get(idx, 0, inputDims, context),
        // windowDims
        AffineMap::get(idx, 0, windowDims, context),
        // output
        AffineMap::get(idx, 0, outputDims, context)
        };
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::PoolingMinOp declarations
//===----------------------------------------------------------------------===//

class PoolingMinOpAdaptor {
public:
  PoolingMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PoolingMinOpAdaptor(PoolingMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value windowDims();
  Value output();
  ArrayAttr strides();
  ArrayAttr dilations();
  DenseIntElementsAttr padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PoolingMinOp : public Op<PoolingMinOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = PoolingMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value windowDims();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange windowDimsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr stridesAttr();
  Optional< ArrayAttr > strides();
  ArrayAttr dilationsAttr();
  Optional< ArrayAttr > dilations();
  DenseIntElementsAttr paddingAttr();
  Optional< DenseIntElementsAttr > padding();
  void stridesAttr(ArrayAttr attr);
  void dilationsAttr(ArrayAttr attr);
  void paddingAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions.
      unsigned nPar = getOutputShapedType(0).getRank();
      // The window loops has the same number loops with output dimensions.
      unsigned nWin = nPar;
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nWin);
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nPar = getNumParallelLoops();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      auto outputDims = makeAffineDimExprs(nPar, idx, context);
      auto windowDims = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto inputDims =
          weightedPoolingInputIndex(*this, outputDims, windowDims);
      return SmallVector<AffineMap, 8>{
        // input
        AffineMap::get(idx, 0, inputDims, context),
        // windowDims
        AffineMap::get(idx, 0, windowDims, context),
        // output
        AffineMap::get(idx, 0, outputDims, context)
        };
    }
  
};

//===----------------------------------------------------------------------===//
// linalg::PoolingSumOp declarations
//===----------------------------------------------------------------------===//

class PoolingSumOpAdaptor {
public:
  PoolingSumOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PoolingSumOpAdaptor(PoolingSumOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  Value windowDims();
  Value output();
  ArrayAttr strides();
  ArrayAttr dilations();
  DenseIntElementsAttr padding();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PoolingSumOp : public Op<PoolingSumOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, OpTrait::linalg::NInputs<2>::Impl, OpTrait::linalg::NOutputs<1>::Impl, OpTrait::linalg::StructuredOpTraits, LinalgOp::Trait> {
public:
  using Op::Op;
  using Adaptor = PoolingSumOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Value windowDims();
  Value output();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange windowDimsMutable();
  ::mlir::MutableOperandRange outputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ArrayAttr stridesAttr();
  Optional< ArrayAttr > strides();
  ArrayAttr dilationsAttr();
  Optional< ArrayAttr > dilations();
  DenseIntElementsAttr paddingAttr();
  Optional< DenseIntElementsAttr > padding();
  void stridesAttr(ArrayAttr attr);
  void dilationsAttr(ArrayAttr attr);
  void paddingAttr(DenseIntElementsAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    std::string getLibraryCallName() {
      return generateLibraryCallName(getOperation());
    }
  
    int64_t getStride(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!strides().hasValue()) return 1;
      return strides()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getDilation(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!dilations().hasValue()) return 1;
      return dilations()->getValue()[i]
        .cast<IntegerAttr>().getValue().getSExtValue();
    }

    int64_t getLowPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 0});
    }

    int64_t getHighPad(unsigned i) {
      assert(i < getNumWindowLoops());
      if (!padding().hasValue()) return 0;
      return padding().getValue().getValue<int64_t>({i, 1});
    }
  
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators() {
      // Outer parallel loops are always the number of output dimensions.
      unsigned nPar = getOutputShapedType(0).getRank();
      // The window loops has the same number loops with output dimensions.
      unsigned nWin = nPar;
      SmallVector<StringRef, 8> iters(nPar, getParallelIteratorTypeName());
      iters.reserve(nPar + nWin);
      iters.append(nWin, getWindowIteratorTypeName());
      return iters;
    }

    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps() {
      MLIRContext *context = getContext();
      auto nPar = getNumParallelLoops();
      auto nWin = getNumWindowLoops();
      assert(nWin > 0 && "expected at least one window dimension");
      unsigned idx = 0;
      auto outputDims = makeAffineDimExprs(nPar, idx, context);
      auto windowDims = makeAffineDimExprs(nWin, idx, context);
      // Construct the weighedSum expression.
      auto inputDims =
          weightedPoolingInputIndex(*this, outputDims, windowDims);
      return SmallVector<AffineMap, 8>{
        // input
        AffineMap::get(idx, 0, inputDims, context),
        // windowDims
        AffineMap::get(idx, 0, windowDims, context),
        // output
        AffineMap::get(idx, 0, outputDims, context)
        };
    }
  
};

#endif  // GET_OP_CLASSES

