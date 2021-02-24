/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
	external/llvm-project/mlir/lib/Conversion/ShapeToStandard/ShapeToStandardPatterns.td:6
*/
struct FromExtentTensorOpConversion : public RewritePattern {
  FromExtentTensorOpConversion(MLIRContext *context)
      : RewritePattern("shape.from_extent_tensor", {}, 1, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range input(op0->getOperands());
    Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<shape::FromExtentTensorOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    
    for (auto v : SmallVector<Value, 4>{ input }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Conversion/ShapeToStandard/ShapeToStandardPatterns.td:15
*/
struct IndexToSizeOpConversion : public RewritePattern {
  IndexToSizeOpConversion(MLIRContext *context)
      : RewritePattern("shape.index_to_size", {}, 1, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range arg(op0->getOperands());
    Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<shape::IndexToSizeOp>(op0); (void)castedOp0;
    arg = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    
    for (auto v : SmallVector<Value, 4>{ arg }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Conversion/ShapeToStandard/ShapeToStandardPatterns.td:18
*/
struct SizeToIndexOpConversion : public RewritePattern {
  SizeToIndexOpConversion(MLIRContext *context)
      : RewritePattern("shape.size_to_index", {}, 1, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range arg(op0->getOperands());
    Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<shape::SizeToIndexOp>(op0); (void)castedOp0;
    arg = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    
    for (auto v : SmallVector<Value, 4>{ arg }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Conversion/ShapeToStandard/ShapeToStandardPatterns.td:9
*/
struct ToExtentTensorOpConversion : public RewritePattern {
  ToExtentTensorOpConversion(MLIRContext *context)
      : RewritePattern("shape.to_extent_tensor", {}, 1, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range input(op0->getOperands());
    Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<shape::ToExtentTensorOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    
    for (auto v : SmallVector<Value, 4>{ input }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(MLIRContext *context, OwningRewritePatternList *patterns) {
  patterns->insert<FromExtentTensorOpConversion>(context);
  patterns->insert<IndexToSizeOpConversion>(context);
  patterns->insert<SizeToIndexOpConversion>(context);
  patterns->insert<ToExtentTensorOpConversion>(context);
}
