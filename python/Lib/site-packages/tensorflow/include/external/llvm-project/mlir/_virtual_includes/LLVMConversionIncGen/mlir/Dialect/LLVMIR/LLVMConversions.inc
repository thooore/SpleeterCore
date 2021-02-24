if (auto op = dyn_cast<LLVM::AShrOp>(opInst)) {
valueMapping[op.res()] = builder.CreateAShr(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::AddOp>(opInst)) {
valueMapping[op.res()] = builder.CreateAdd(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::AddrSpaceCastOp>(opInst)) {
valueMapping[op.res()] = builder.CreateAddrSpaceCast(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::AllocaOp>(opInst)) {

    auto *alloca = builder.CreateAlloca(
      op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType()->getPointerElementType(), valueMapping.lookup(op.arraySize()));
    if (op.alignment().hasValue()) {
      auto align = op.alignment().getValue().getZExtValue();
      if (align != 0)
        alloca->setAlignment(llvm::Align(align));
    }
    valueMapping[op.res()] = alloca;
  
  return success();
}
if (auto op = dyn_cast<LLVM::AndOp>(opInst)) {
valueMapping[op.res()] = builder.CreateAnd(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::AssumeOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn =
        llvm::Intrinsic::getDeclaration(module, llvm::Intrinsic::assume, {});
    builder.CreateCall(fn, {valueMapping.lookup(op.cond())});
  
  return success();
}
if (auto op = dyn_cast<LLVM::AtomicCmpXchgOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateAtomicCmpXchg(valueMapping.lookup(op.ptr()), valueMapping.lookup(op.cmp()), valueMapping.lookup(op.val()),
                   getLLVMAtomicOrdering(op.success_ordering()),
                   getLLVMAtomicOrdering(op.failure_ordering()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::AtomicRMWOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateAtomicRMW(getLLVMAtomicBinOp(op.bin_op()), valueMapping.lookup(op.ptr()), valueMapping.lookup(op.val()),
                                   getLLVMAtomicOrdering(op.ordering()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::BitcastOp>(opInst)) {
valueMapping[op.res()] = builder.CreateBitCast(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::ConstantOp>(opInst)) {
valueMapping[op.res()] = getLLVMConstant(op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType(), op.value(), opInst.getLoc());
  return success();
}
if (auto op = dyn_cast<LLVM::CopySignOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::copysign,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::CosOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::cos,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::Exp2Op>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::exp2,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::ExpOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::exp,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::ExtractElementOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateExtractElement(valueMapping.lookup(op.vector()), valueMapping.lookup(op.position()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::ExtractValueOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateExtractValue(valueMapping.lookup(op.container()), extractPosition(op.position()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::FAbsOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fabs,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::FAddOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFAdd(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::FCeilOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::ceil,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::FCmpOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateFCmp(getLLVMCmpPredicate(op.predicate()), valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::FDivOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFDiv(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::FMAOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fma,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::FMulAddOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::fmuladd,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::FMulOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFMul(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::FNegOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFNeg(valueMapping.lookup(op.operand()));
  return success();
}
if (auto op = dyn_cast<LLVM::FPExtOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFPExt(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::FPToSIOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFPToSI(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::FPToUIOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFPToUI(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::FPTruncOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFPTrunc(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::FRemOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFRem(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::FSubOp>(opInst)) {
valueMapping[op.res()] = builder.CreateFSub(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::FenceOp>(opInst)) {

    llvm::LLVMContext &llvmContext = builder.getContext();
    builder.CreateFence(getLLVMAtomicOrdering(op.ordering()),
      llvmContext.getOrInsertSyncScopeID(op.syncscope()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::FreezeOp>(opInst)) {
builder.CreateFreeze(valueMapping.lookup(op.val()));
  return success();
}
if (auto op = dyn_cast<LLVM::GEPOp>(opInst)) {
valueMapping[op.res()] = builder.CreateGEP(valueMapping.lookup(op.base()), lookupValues(op.indices()));
  return success();
}
if (auto op = dyn_cast<LLVM::ICmpOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateICmp(getLLVMCmpPredicate(op.predicate()), valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::InsertElementOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateInsertElement(valueMapping.lookup(op.vector()), valueMapping.lookup(op.value()), valueMapping.lookup(op.position()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::InsertValueOp>(opInst)) {

    valueMapping[op.res()] = builder.CreateInsertValue(valueMapping.lookup(op.container()), valueMapping.lookup(op.value()),
                                     extractPosition(op.position()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::IntToPtrOp>(opInst)) {
valueMapping[op.res()] = builder.CreateIntToPtr(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::LShrOp>(opInst)) {
valueMapping[op.res()] = builder.CreateLShr(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::LoadOp>(opInst)) {
valueMapping[op.res()] = builder.CreateLoad(valueMapping.lookup(op.addr()));
  return success();
}
if (auto op = dyn_cast<LLVM::Log10Op>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::log10,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::Log2Op>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::log2,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::LogOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::log,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::MaskedLoadOp>(opInst)) {

    valueMapping[op.res()] = lookupValues(op.pass_thru()).empty() ? builder.CreateMaskedLoad(
      valueMapping.lookup(op.data()), llvm::Align(op.alignment().getZExtValue()), valueMapping.lookup(op.mask())) :
      builder.CreateMaskedLoad(
        valueMapping.lookup(op.data()), llvm::Align(op.alignment().getZExtValue()), valueMapping.lookup(op.mask()), lookupValues(op.pass_thru())[0]);
  
  return success();
}
if (auto op = dyn_cast<LLVM::MaskedStoreOp>(opInst)) {

    builder.CreateMaskedStore(
      valueMapping.lookup(op.value()), valueMapping.lookup(op.data()), llvm::Align(op.alignment().getZExtValue()), valueMapping.lookup(op.mask()));
  
  return success();
}
if (auto op = dyn_cast<LLVM::MatrixColumnMajorLoadOp>(opInst)) {

    llvm::MatrixBuilder<decltype(builder)> mb(builder);
    const llvm::DataLayout &dl =
      builder.GetInsertBlock()->getModule()->getDataLayout();
    llvm::Align align = dl.getABITypeAlign(
      valueMapping.lookup(op.data())->getType()->getPointerElementType());
    valueMapping[op.res()] = mb.CreateColumnMajorLoad(
      valueMapping.lookup(op.data()), align, valueMapping.lookup(op.stride()), op.isVolatile().getZExtValue(), op.rows().getZExtValue(),
      op.columns().getZExtValue());
  
  return success();
}
if (auto op = dyn_cast<LLVM::MatrixColumnMajorStoreOp>(opInst)) {

    llvm::MatrixBuilder<decltype(builder)> mb(builder);
    const llvm::DataLayout &dl =
      builder.GetInsertBlock()->getModule()->getDataLayout();
    llvm::Align align = dl.getABITypeAlign(
      valueMapping.lookup(op.data())->getType()->getPointerElementType());
    mb.CreateColumnMajorStore(
      valueMapping.lookup(op.matrix()), valueMapping.lookup(op.data()), align, valueMapping.lookup(op.stride()), op.isVolatile().getZExtValue(),
      op.rows().getZExtValue(), op.columns().getZExtValue());
  
  return success();
}
if (auto op = dyn_cast<LLVM::MatrixMultiplyOp>(opInst)) {

    llvm::MatrixBuilder<decltype(builder)> mb(builder);
    valueMapping[op.res()] = mb.CreateMatrixMultiply(
      valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()), op.lhs_rows().getZExtValue(), op.lhs_columns().getZExtValue(),
      op.rhs_columns().getZExtValue());
  
  return success();
}
if (auto op = dyn_cast<LLVM::MatrixTransposeOp>(opInst)) {

    llvm::MatrixBuilder<decltype(builder)> mb(builder);
    valueMapping[op.res()] = mb.CreateMatrixTranspose(
      valueMapping.lookup(op.matrix()), op.rows().getZExtValue(), op.columns().getZExtValue());
  
  return success();
}
if (auto op = dyn_cast<LLVM::MulOp>(opInst)) {
valueMapping[op.res()] = builder.CreateMul(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::NullOp>(opInst)) {
valueMapping[op.res()] = llvm::ConstantPointerNull::get(    cast<llvm::PointerType>(op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType()));
  return success();
}
if (auto op = dyn_cast<LLVM::OrOp>(opInst)) {
valueMapping[op.res()] = builder.CreateOr(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::PowOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::pow,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::Prefetch>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::prefetch,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::PtrToIntOp>(opInst)) {
valueMapping[op.res()] = builder.CreatePtrToInt(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::ResumeOp>(opInst)) {
 builder.CreateResume(valueMapping.lookup(op.value())); 
  return success();
}
if (auto op = dyn_cast<LLVM::ReturnOp>(opInst)) {

    if (opInst.getNumOperands() != 0)
      builder.CreateRet(lookupValues(op.args())[0]);
    else
      builder.CreateRetVoid();
  
  return success();
}
if (auto op = dyn_cast<LLVM::SDivOp>(opInst)) {
valueMapping[op.res()] = builder.CreateSDiv(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::SExtOp>(opInst)) {
valueMapping[op.res()] = builder.CreateSExt(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::SIToFPOp>(opInst)) {
valueMapping[op.res()] = builder.CreateSIToFP(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::SRemOp>(opInst)) {
valueMapping[op.res()] = builder.CreateSRem(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::SelectOp>(opInst)) {
valueMapping[op.res()] = builder.CreateSelect(valueMapping.lookup(op.condition()), valueMapping.lookup(op.trueValue()), valueMapping.lookup(op.falseValue()));
  return success();
}
if (auto op = dyn_cast<LLVM::ShlOp>(opInst)) {
valueMapping[op.res()] = builder.CreateShl(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::ShuffleVectorOp>(opInst)) {

      SmallVector<unsigned, 4> position = extractPosition(op.mask());
      SmallVector<int, 4> mask(position.begin(), position.end());
      valueMapping[op.res()] = builder.CreateShuffleVector(valueMapping.lookup(op.v1()), valueMapping.lookup(op.v2()), mask);
  
  return success();
}
if (auto op = dyn_cast<LLVM::SinOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::sin,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::SqrtOp>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::sqrt,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::StoreOp>(opInst)) {
builder.CreateStore(valueMapping.lookup(op.value()), valueMapping.lookup(op.addr()));
  return success();
}
if (auto op = dyn_cast<LLVM::SubOp>(opInst)) {
valueMapping[op.res()] = builder.CreateSub(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::TruncOp>(opInst)) {
valueMapping[op.res()] = builder.CreateTrunc(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::UDivOp>(opInst)) {
valueMapping[op.res()] = builder.CreateUDiv(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::UIToFPOp>(opInst)) {
valueMapping[op.res()] = builder.CreateUIToFP(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::URemOp>(opInst)) {
valueMapping[op.res()] = builder.CreateURem(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::UndefOp>(opInst)) {
valueMapping[op.res()] = llvm::UndefValue::get(op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::UnreachableOp>(opInst)) {
 builder.CreateUnreachable(); 
  return success();
}
if (auto op = dyn_cast<LLVM::XOrOp>(opInst)) {
valueMapping[op.res()] = builder.CreateXor(valueMapping.lookup(op.lhs()), valueMapping.lookup(op.rhs()));
  return success();
}
if (auto op = dyn_cast<LLVM::ZExtOp>(opInst)) {
valueMapping[op.res()] = builder.CreateZExt(valueMapping.lookup(op.arg()), op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType());
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_add>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_add,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_and>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_and,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_fmax>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_fmax,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_fmin>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_fmin,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_mul>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_mul,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_or>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_or,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_smax>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_smax,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_smin>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_smin,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_umax>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_umax,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_umin>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_umin,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_v2_fadd>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_v2_fadd,
        { opInst.getResult(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType(), opInst.getOperand(1).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_v2_fmul>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_v2_fmul,
        { opInst.getResult(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType(), opInst.getOperand(1).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
if (auto op = dyn_cast<LLVM::experimental_vector_reduce_xor>(opInst)) {

    llvm::Module *module = builder.GetInsertBlock()->getModule();
    llvm::Function *fn = llvm::Intrinsic::getDeclaration(
        module,
        llvm::Intrinsic::experimental_vector_reduce_xor,
        { opInst.getOperand(0).getType()
      .cast<LLVM::LLVMType>().getUnderlyingType()
        });
    auto operands = lookupValues(opInst.getOperands());
    valueMapping[op.res()] = builder.CreateCall(fn, operands);
  
  return success();
}
