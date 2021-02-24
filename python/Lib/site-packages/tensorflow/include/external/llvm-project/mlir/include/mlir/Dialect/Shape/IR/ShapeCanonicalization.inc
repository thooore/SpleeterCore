/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
	external/llvm-project/mlir/lib/Dialect/Shape/IR/ShapeCanonicalization.td:12
*/
struct CstrBroadcastableEqOps : public RewritePattern {
  CstrBroadcastableEqOps(MLIRContext *context)
      : RewritePattern("shape.cstr_broadcastable", {"shape.const_witness"}, 1, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range lhs(op0->getOperands());
    Operation::operand_range rhs(op0->getOperands());
    shape::CstrBroadcastableOp op;
    Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<shape::CstrBroadcastableOp>(op0); (void)castedOp0;
    op = castedOp0;
    lhs = castedOp0.getODSOperands(0);
    rhs = castedOp0.getODSOperands(1);

    if (!(((*lhs.begin()) == (*rhs.begin())))) {
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'lhs, rhs' failed to satisfy constraint: EqualBinaryOperands";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    shape::ConstWitnessOp tblgen_ConstWitnessOp_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (rewriter.getBoolAttr(true)) {  tblgen_attrs.emplace_back(rewriter.getIdentifier("passing"), rewriter.getBoolAttr(true)); }
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v : castedOp0.getODSResults(0)) {tblgen_types.push_back(v.getType()); }
      tblgen_ConstWitnessOp_0 = rewriter.create<shape::ConstWitnessOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    
    for (auto v : SmallVector<Value, 4>{ tblgen_ConstWitnessOp_0.getODSResults(0) }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Dialect/Shape/IR/ShapeCanonicalization.td:16
*/
struct CstrEqEqOps : public RewritePattern {
  CstrEqEqOps(MLIRContext *context)
      : RewritePattern("shape.cstr_eq", {"shape.const_witness"}, 1, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range shapes(op0->getOperands());
    shape::CstrEqOp op;
    Operation *tblgen_ops[1];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<shape::CstrEqOp>(op0); (void)castedOp0;
    op = castedOp0;
    shapes = castedOp0.getODSOperands(0);

    if (!((
  llvm::all_of(shapes, [&](mlir::Value val) {
    return shapes[0] == val;
  })
))) {
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'shapes' failed to satisfy constraint: AllInputShapesEq";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    shape::ConstWitnessOp tblgen_ConstWitnessOp_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (rewriter.getBoolAttr(true)) {  tblgen_attrs.emplace_back(rewriter.getIdentifier("passing"), rewriter.getBoolAttr(true)); }
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v : castedOp0.getODSResults(0)) {tblgen_types.push_back(v.getType()); }
      tblgen_ConstWitnessOp_0 = rewriter.create<shape::ConstWitnessOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    
    for (auto v : SmallVector<Value, 4>{ tblgen_ConstWitnessOp_0.getODSResults(0) }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(MLIRContext *context, OwningRewritePatternList *patterns) {
  patterns->insert<CstrBroadcastableEqOps>(context);
  patterns->insert<CstrEqEqOps>(context);
}
