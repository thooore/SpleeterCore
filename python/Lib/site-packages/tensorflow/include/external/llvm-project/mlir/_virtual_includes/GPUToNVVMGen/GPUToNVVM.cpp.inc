/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
	external/llvm-project/mlir/lib/Conversion/GPUToNVVM/GPUToNVVM.td:19
*/
struct GeneratedConvert0 : public RewritePattern {
  GeneratedConvert0(MLIRContext *context)
      : RewritePattern("gpu.barrier", {"nvvm.barrier0"}, 1, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<gpu::BarrierOp>(op0); (void)castedOp0;

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    NVVM::Barrier0Op tblgen_Barrier0Op_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_Barrier0Op_0 = rewriter.create<NVVM::Barrier0Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    rewriter.eraseOp(op0);
    return success();
  };
};
void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(MLIRContext *context, OwningRewritePatternList *patterns) {
  patterns->insert<GeneratedConvert0>(context);
}
