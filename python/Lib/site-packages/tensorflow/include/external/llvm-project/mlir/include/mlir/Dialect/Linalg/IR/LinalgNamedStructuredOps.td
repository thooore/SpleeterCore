  def MatmulOp : LinalgNamedStructured_Op<"matmul", [
    NInputs<2>,
    NOutputs<1>,
    NamedStructuredOpTraits,
    SingleBlockImplicitTerminator<"YieldOp">]> {
      let arguments = (ins Variadic<LinalgOperand>:$views);
      let results = (outs Variadic<AnyRankedTensor>:$output_tensors);
      let regions = (region SizedRegion<1>:$region);
      let builders = [OpBuilder<
        "OpBuilder &b, OperationState &result, TypeRange outputTypes, "
        # "ValueRange views",
        [{
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<MatmulOp>(
            b, result, TypeRange(views), outputTypes);
        }]>
      ];
      let parser = [{
        return ::parseNamedStructuredOp<MatmulOp>(parser, result);
      }];
      let extraClassDeclaration = [{
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
      }];
  }
  def MatvecOp : LinalgNamedStructured_Op<"matvec", [
    NInputs<2>,
    NOutputs<1>,
    NamedStructuredOpTraits,
    SingleBlockImplicitTerminator<"YieldOp">]> {
      let arguments = (ins Variadic<LinalgOperand>:$views);
      let results = (outs Variadic<AnyRankedTensor>:$output_tensors);
      let regions = (region SizedRegion<1>:$region);
      let builders = [OpBuilder<
        "OpBuilder &b, OperationState &result, TypeRange outputTypes, "
        # "ValueRange views",
        [{
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<MatvecOp>(
            b, result, TypeRange(views), outputTypes);
        }]>
      ];
      let parser = [{
        return ::parseNamedStructuredOp<MatvecOp>(parser, result);
      }];
      let extraClassDeclaration = [{
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
      }];
  }
  def BatchMatmulOp : LinalgNamedStructured_Op<"batch_matmul", [
    NInputs<2>,
    NOutputs<1>,
    NamedStructuredOpTraits,
    SingleBlockImplicitTerminator<"YieldOp">]> {
      let arguments = (ins Variadic<LinalgOperand>:$views);
      let results = (outs Variadic<AnyRankedTensor>:$output_tensors);
      let regions = (region SizedRegion<1>:$region);
      let builders = [OpBuilder<
        "OpBuilder &b, OperationState &result, TypeRange outputTypes, "
        # "ValueRange views",
        [{
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<BatchMatmulOp>(
            b, result, TypeRange(views), outputTypes);
        }]>
      ];
      let parser = [{
        return ::parseNamedStructuredOp<BatchMatmulOp>(parser, result);
      }];
      let extraClassDeclaration = [{
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
      }];
  }
