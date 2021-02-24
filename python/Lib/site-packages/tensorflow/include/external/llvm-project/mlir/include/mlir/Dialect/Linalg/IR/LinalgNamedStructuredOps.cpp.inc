
    // This is temporary until we transition out of manually specified ops
    // that should be auto-generated with linalg-ods-gen.
    llvm::Optional<SmallVector<StringRef, 8>> MatmulOp::referenceIterators() {
      llvm_unreachable("Unexpected missing `iterator_types` attribute.");
    }
    SmallVector<StringRef, 8> MatmulOp::referenceIterators(
      TypeRange inputTypes, TypeRange outputTypes) {
      return SmallVector<StringRef, 8>{ getParallelIteratorTypeName(), getParallelIteratorTypeName(), getReductionIteratorTypeName() };
    }
  // This is temporary until we transition out of manually specified ops that
  // should be auto-generated with linalg-ods-gen.
  llvm::Optional<SmallVector<AffineMap, 8>> MatmulOp::referenceIndexingMaps() {
    llvm_unreachable("Unexpected missing `indexing_maps` attribute.");
  }
  SmallVector<AffineMap, 8> MatmulOp::referenceIndexingMaps(
    TypeRange inputTypes, TypeRange outputTypes) {
    assert(!inputTypes.empty() && "At least one input expected");
    MLIRContext *context = (*inputTypes.begin()).getContext();
    AffineExpr d0, d1, d2;
    bindDims(context, d0, d1, d2);
    return SmallVector<AffineMap, 8>{ 
	AffineMap::get(3, 0, {d0, d2}, context), 
	AffineMap::get(3, 0, {d2, d1}, context), 
	AffineMap::get(3, 0, {d0, d1}, context) };
  }
  void MatmulOp::regionBuilder(Block &block) {
    using namespace edsc;
    using namespace intrinsics;
    auto args = block.getArguments();
    Value _0(args[0]), _1(args[1]), _2(args[2]);
    
    Value _4 = std_mulf(_0, _1);
    Value _5 = std_addf(_2, _4);
    (linalg_yield(ValueRange{ _5 }));
  }

    // This is temporary until we transition out of manually specified ops
    // that should be auto-generated with linalg-ods-gen.
    llvm::Optional<SmallVector<StringRef, 8>> MatvecOp::referenceIterators() {
      llvm_unreachable("Unexpected missing `iterator_types` attribute.");
    }
    SmallVector<StringRef, 8> MatvecOp::referenceIterators(
      TypeRange inputTypes, TypeRange outputTypes) {
      return SmallVector<StringRef, 8>{ getParallelIteratorTypeName(), getReductionIteratorTypeName() };
    }
  // This is temporary until we transition out of manually specified ops that
  // should be auto-generated with linalg-ods-gen.
  llvm::Optional<SmallVector<AffineMap, 8>> MatvecOp::referenceIndexingMaps() {
    llvm_unreachable("Unexpected missing `indexing_maps` attribute.");
  }
  SmallVector<AffineMap, 8> MatvecOp::referenceIndexingMaps(
    TypeRange inputTypes, TypeRange outputTypes) {
    assert(!inputTypes.empty() && "At least one input expected");
    MLIRContext *context = (*inputTypes.begin()).getContext();
    AffineExpr d0, d1;
    bindDims(context, d0, d1);
    return SmallVector<AffineMap, 8>{ 
	AffineMap::get(2, 0, {d0, d1}, context), 
	AffineMap::get(2, 0, {d1}, context), 
	AffineMap::get(2, 0, {d0}, context) };
  }
  void MatvecOp::regionBuilder(Block &block) {
    using namespace edsc;
    using namespace intrinsics;
    auto args = block.getArguments();
    Value _0(args[0]), _1(args[1]), _2(args[2]);
    
    Value _4 = std_mulf(_0, _1);
    Value _5 = std_addf(_2, _4);
    (linalg_yield(ValueRange{ _5 }));
  }

    // This is temporary until we transition out of manually specified ops
    // that should be auto-generated with linalg-ods-gen.
    llvm::Optional<SmallVector<StringRef, 8>> BatchMatmulOp::referenceIterators() {
      llvm_unreachable("Unexpected missing `iterator_types` attribute.");
    }
    SmallVector<StringRef, 8> BatchMatmulOp::referenceIterators(
      TypeRange inputTypes, TypeRange outputTypes) {
      return SmallVector<StringRef, 8>{ getParallelIteratorTypeName(), getParallelIteratorTypeName(), getParallelIteratorTypeName(), getReductionIteratorTypeName() };
    }
  // This is temporary until we transition out of manually specified ops that
  // should be auto-generated with linalg-ods-gen.
  llvm::Optional<SmallVector<AffineMap, 8>> BatchMatmulOp::referenceIndexingMaps() {
    llvm_unreachable("Unexpected missing `indexing_maps` attribute.");
  }
  SmallVector<AffineMap, 8> BatchMatmulOp::referenceIndexingMaps(
    TypeRange inputTypes, TypeRange outputTypes) {
    assert(!inputTypes.empty() && "At least one input expected");
    MLIRContext *context = (*inputTypes.begin()).getContext();
    AffineExpr d0, d1, d2, d3;
    bindDims(context, d0, d1, d2, d3);
    return SmallVector<AffineMap, 8>{ 
	AffineMap::get(4, 0, {d0, d1, d3}, context), 
	AffineMap::get(4, 0, {d0, d3, d2}, context), 
	AffineMap::get(4, 0, {d0, d1, d2}, context) };
  }
  void BatchMatmulOp::regionBuilder(Block &block) {
    using namespace edsc;
    using namespace intrinsics;
    auto args = block.getArguments();
    Value _0(args[0]), _1(args[1]), _2(args[2]);
    
    Value _4 = std_mulf(_0, _1);
    Value _5 = std_addf(_2, _4);
    (linalg_yield(ValueRange{ _5 }));
  }
