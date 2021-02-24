if (auto op = dyn_cast<NVVM::Barrier0Op>(opInst)) {

      createIntrinsicCall(builder, llvm::Intrinsic::nvvm_barrier0);
  
  return success();
}
if (auto op = dyn_cast<NVVM::BlockDimXOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_x);
  return success();
}
if (auto op = dyn_cast<NVVM::BlockDimYOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_y);
  return success();
}
if (auto op = dyn_cast<NVVM::BlockDimZOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_ntid_z);
  return success();
}
if (auto op = dyn_cast<NVVM::BlockIdXOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_x);
  return success();
}
if (auto op = dyn_cast<NVVM::BlockIdYOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_y);
  return success();
}
if (auto op = dyn_cast<NVVM::BlockIdZOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_ctaid_z);
  return success();
}
if (auto op = dyn_cast<NVVM::GridDimXOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_x);
  return success();
}
if (auto op = dyn_cast<NVVM::GridDimYOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_y);
  return success();
}
if (auto op = dyn_cast<NVVM::GridDimZOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_nctaid_z);
  return success();
}
if (auto op = dyn_cast<NVVM::LaneIdOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_laneid);
  return success();
}
if (auto op = dyn_cast<NVVM::MmaOp>(opInst)) {

    valueMapping[op.res()] = createIntrinsicCall(
        builder, llvm::Intrinsic::nvvm_mma_m8n8k4_row_col_f32_f32, lookupValues(op.args()));
  
  return success();
}
if (auto op = dyn_cast<NVVM::ShflBflyOp>(opInst)) {

      auto intId = getShflBflyIntrinsicId(
          op.getResult().getType().cast<LLVM::LLVMType>().getUnderlyingType(), static_cast<bool>(op.return_value_and_is_valid()));
      valueMapping[op.res()] = createIntrinsicCall(builder,
          intId, {valueMapping.lookup(op.dst()), valueMapping.lookup(op.val()), valueMapping.lookup(op.offset()), valueMapping.lookup(op.mask_and_clamp())});
  
  return success();
}
if (auto op = dyn_cast<NVVM::ThreadIdXOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_tid_x);
  return success();
}
if (auto op = dyn_cast<NVVM::ThreadIdYOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_tid_y);
  return success();
}
if (auto op = dyn_cast<NVVM::ThreadIdZOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_tid_z);
  return success();
}
if (auto op = dyn_cast<NVVM::VoteBallotOp>(opInst)) {

      valueMapping[op.res()] = createIntrinsicCall(builder,
            llvm::Intrinsic::nvvm_vote_ballot_sync, {valueMapping.lookup(op.mask()), valueMapping.lookup(op.pred())});
  
  return success();
}
if (auto op = dyn_cast<NVVM::WarpSizeOp>(opInst)) {
valueMapping[op.res()] = createIntrinsicCall(builder,llvm::Intrinsic::nvvm_read_ptx_sreg_warpsize);
  return success();
}
