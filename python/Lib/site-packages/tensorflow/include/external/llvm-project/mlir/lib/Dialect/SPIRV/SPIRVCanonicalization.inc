/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/* Generated from:
	external/llvm-project/mlir/lib/Dialect/SPIRV/SPIRVCanonicalization.td:19
*/
struct ConvertChainedBitcast : public RewritePattern {
  ConvertChainedBitcast(MLIRContext *context)
      : RewritePattern("spv.Bitcast", {"spv.Bitcast"}, 2, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range operand(op0->getOperands());
    Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<spirv::BitcastOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = dyn_cast_or_null<spirv::BitcastOp>(op1); (void)castedOp1;
      if (!castedOp1) return failure();
      operand = castedOp1.getODSOperands(0);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    spirv::BitcastOp tblgen_BitcastOp_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*operand.begin()));
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v : castedOp0.getODSResults(0)) {tblgen_types.push_back(v.getType()); }
      tblgen_BitcastOp_0 = rewriter.create<spirv::BitcastOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    
    for (auto v : SmallVector<Value, 4>{ tblgen_BitcastOp_0.getODSResults(0) }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Dialect/SPIRV/SPIRVCanonicalization.td:26
*/
struct ConvertLogicalNotOfIEqual : public RewritePattern {
  ConvertLogicalNotOfIEqual(MLIRContext *context)
      : RewritePattern("spv.LogicalNot", {"spv.INotEqual"}, 2, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range lhs(op0->getOperands());
    Operation::operand_range rhs(op0->getOperands());
    Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<spirv::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = dyn_cast_or_null<spirv::IEqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return failure();
      lhs = castedOp1.getODSOperands(0);
      rhs = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    spirv::INotEqualOp tblgen_INotEqualOp_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v : castedOp0.getODSResults(0)) {tblgen_types.push_back(v.getType()); }
      tblgen_INotEqualOp_0 = rewriter.create<spirv::INotEqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    
    for (auto v : SmallVector<Value, 4>{ tblgen_INotEqualOp_0.getODSResults(0) }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Dialect/SPIRV/SPIRVCanonicalization.td:30
*/
struct ConvertLogicalNotOfINotEqual : public RewritePattern {
  ConvertLogicalNotOfINotEqual(MLIRContext *context)
      : RewritePattern("spv.LogicalNot", {"spv.IEqual"}, 2, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range lhs(op0->getOperands());
    Operation::operand_range rhs(op0->getOperands());
    Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<spirv::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = dyn_cast_or_null<spirv::INotEqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return failure();
      lhs = castedOp1.getODSOperands(0);
      rhs = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    spirv::IEqualOp tblgen_IEqualOp_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v : castedOp0.getODSResults(0)) {tblgen_types.push_back(v.getType()); }
      tblgen_IEqualOp_0 = rewriter.create<spirv::IEqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    
    for (auto v : SmallVector<Value, 4>{ tblgen_IEqualOp_0.getODSResults(0) }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Dialect/SPIRV/SPIRVCanonicalization.td:34
*/
struct ConvertLogicalNotOfLogicalEqual : public RewritePattern {
  ConvertLogicalNotOfLogicalEqual(MLIRContext *context)
      : RewritePattern("spv.LogicalNot", {"spv.LogicalNotEqual"}, 2, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range lhs(op0->getOperands());
    Operation::operand_range rhs(op0->getOperands());
    Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<spirv::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = dyn_cast_or_null<spirv::LogicalEqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return failure();
      lhs = castedOp1.getODSOperands(0);
      rhs = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    spirv::LogicalNotEqualOp tblgen_LogicalNotEqualOp_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v : castedOp0.getODSResults(0)) {tblgen_types.push_back(v.getType()); }
      tblgen_LogicalNotEqualOp_0 = rewriter.create<spirv::LogicalNotEqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    
    for (auto v : SmallVector<Value, 4>{ tblgen_LogicalNotEqualOp_0.getODSResults(0) }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
/* Generated from:
	external/llvm-project/mlir/lib/Dialect/SPIRV/SPIRVCanonicalization.td:38
*/
struct ConvertLogicalNotOfLogicalNotEqual : public RewritePattern {
  ConvertLogicalNotOfLogicalNotEqual(MLIRContext *context)
      : RewritePattern("spv.LogicalNot", {"spv.LogicalEqual"}, 2, context) {}

  LogicalResult matchAndRewrite(Operation *op0,
                                     PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used for creating ops
    Operation::operand_range lhs(op0->getOperands());
    Operation::operand_range rhs(op0->getOperands());
    Operation *tblgen_ops[2];

    // Match
    tblgen_ops[0] = op0;
    auto castedOp0 = dyn_cast_or_null<spirv::LogicalNotOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      auto castedOp1 = dyn_cast_or_null<spirv::LogicalNotEqualOp>(op1); (void)castedOp1;
      if (!castedOp1) return failure();
      lhs = castedOp1.getODSOperands(0);
      rhs = castedOp1.getODSOperands(1);
      tblgen_ops[1] = op1;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    SmallVector<Value, 4> tblgen_repl_values;
    spirv::LogicalEqualOp tblgen_LogicalEqualOp_0;
    {
      SmallVector<Value, 4> tblgen_values; (void)tblgen_values;
      SmallVector<NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      SmallVector<Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v : castedOp0.getODSResults(0)) {tblgen_types.push_back(v.getType()); }
      tblgen_LogicalEqualOp_0 = rewriter.create<spirv::LogicalEqualOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    
    for (auto v : SmallVector<Value, 4>{ tblgen_LogicalEqualOp_0.getODSResults(0) }) { tblgen_repl_values.push_back(v); }    
    rewriter.replaceOp(op0, tblgen_repl_values);
    return success();
  };
};
void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(MLIRContext *context, OwningRewritePatternList *patterns) {
  patterns->insert<ConvertChainedBitcast>(context);
  patterns->insert<ConvertLogicalNotOfIEqual>(context);
  patterns->insert<ConvertLogicalNotOfINotEqual>(context);
  patterns->insert<ConvertLogicalNotOfLogicalEqual>(context);
  patterns->insert<ConvertLogicalNotOfLogicalNotEqual>(context);
}
