/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* SPIR-V Serialization Utilities/Functions                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_SERIALIZATION_FNS

template <> LogicalResult
Serializer::processOp<spirv::AccessChainOp>(spirv::AccessChainOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAccessChain, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicAndOp>(spirv::AtomicAndOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicAnd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicCompareExchangeWeakOp>(spirv::AtomicCompareExchangeWeakOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("equal_semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("equal_semantics");
  }
  {
    if (auto attr = op.getAttr("unequal_semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("unequal_semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(2)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #2 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicCompareExchangeWeak, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicIAddOp>(spirv::AtomicIAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicIAdd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicIDecrementOp>(spirv::AtomicIDecrementOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("memory_scope")) {
    operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
  }
  elidedAttrs.push_back("memory_scope");
  if (auto attr = op.getAttr("semantics")) {
    operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
  }
  elidedAttrs.push_back("semantics");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicIDecrement, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicIIncrementOp>(spirv::AtomicIIncrementOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("memory_scope")) {
    operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
  }
  elidedAttrs.push_back("memory_scope");
  if (auto attr = op.getAttr("semantics")) {
    operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
  }
  elidedAttrs.push_back("semantics");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicIIncrement, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicISubOp>(spirv::AtomicISubOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicISub, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicOrOp>(spirv::AtomicOrOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicOr, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicSMaxOp>(spirv::AtomicSMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicSMax, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicSMinOp>(spirv::AtomicSMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicSMin, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicUMaxOp>(spirv::AtomicUMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicUMax, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicUMinOp>(spirv::AtomicUMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicUMin, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::AtomicXorOp>(spirv::AtomicXorOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    if (auto attr = op.getAttr("memory_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("memory_scope");
  }
  {
    if (auto attr = op.getAttr("semantics")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("semantics");
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpAtomicXor, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitCountOp>(spirv::BitCountOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitCount, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitFieldInsertOp>(spirv::BitFieldInsertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitFieldInsert, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitFieldSExtractOp>(spirv::BitFieldSExtractOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitFieldSExtract, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitFieldUExtractOp>(spirv::BitFieldUExtractOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitFieldUExtract, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitReverseOp>(spirv::BitReverseOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitReverse, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitcastOp>(spirv::BitcastOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitcast, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitwiseAndOp>(spirv::BitwiseAndOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitwiseAnd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitwiseOrOp>(spirv::BitwiseOrOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitwiseOr, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::BitwiseXorOp>(spirv::BitwiseXorOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpBitwiseXor, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CompositeConstructOp>(spirv::CompositeConstructOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpCompositeConstruct, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CompositeExtractOp>(spirv::CompositeExtractOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("indices")) {
    for (auto attrElem : attr.cast<ArrayAttr>()) {
      operands.push_back(static_cast<uint32_t>(attrElem.cast<IntegerAttr>().getValue().getZExtValue()));
    }
  }
  elidedAttrs.push_back("indices");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpCompositeExtract, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CompositeInsertOp>(spirv::CompositeInsertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("indices")) {
    for (auto attrElem : attr.cast<ArrayAttr>()) {
      operands.push_back(static_cast<uint32_t>(attrElem.cast<IntegerAttr>().getValue().getZExtValue()));
    }
  }
  elidedAttrs.push_back("indices");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpCompositeInsert, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertFToSOp>(spirv::ConvertFToSOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpConvertFToS, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertFToUOp>(spirv::ConvertFToUOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpConvertFToU, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertSToFOp>(spirv::ConvertSToFOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpConvertSToF, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ConvertUToFOp>(spirv::ConvertUToFOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpConvertUToF, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CooperativeMatrixLengthNVOp>(spirv::CooperativeMatrixLengthNVOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  if (auto attr = op.getAttr("type")) {
    operands.push_back(static_cast<uint32_t>(getTypeID(attr.cast<TypeAttr>().getValue())));
  }
  elidedAttrs.push_back("type");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpCooperativeMatrixLengthNV, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CooperativeMatrixLoadNVOp>(spirv::CooperativeMatrixLoadNVOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("memory_access")) {
    operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
  }
  elidedAttrs.push_back("memory_access");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpCooperativeMatrixLoadNV, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CooperativeMatrixMulAddNVOp>(spirv::CooperativeMatrixMulAddNVOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpCooperativeMatrixMulAddNV, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::CooperativeMatrixStoreNVOp>(spirv::CooperativeMatrixStoreNVOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("memory_access")) {
    operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
  }
  elidedAttrs.push_back("memory_access");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpCooperativeMatrixStoreNV, operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FAddOp>(spirv::FAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFAdd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FConvertOp>(spirv::FConvertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFConvert, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FDivOp>(spirv::FDivOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFDiv, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FModOp>(spirv::FModOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFMod, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FMulOp>(spirv::FMulOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFMul, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FNegateOp>(spirv::FNegateOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFNegate, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdEqualOp>(spirv::FOrdEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFOrdEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdGreaterThanEqualOp>(spirv::FOrdGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFOrdGreaterThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdGreaterThanOp>(spirv::FOrdGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFOrdGreaterThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdLessThanEqualOp>(spirv::FOrdLessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFOrdLessThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdLessThanOp>(spirv::FOrdLessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFOrdLessThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FOrdNotEqualOp>(spirv::FOrdNotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFOrdNotEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FRemOp>(spirv::FRemOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFRem, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FSubOp>(spirv::FSubOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFSub, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordEqualOp>(spirv::FUnordEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFUnordEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordGreaterThanEqualOp>(spirv::FUnordGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFUnordGreaterThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordGreaterThanOp>(spirv::FUnordGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFUnordGreaterThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordLessThanEqualOp>(spirv::FUnordLessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFUnordLessThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordLessThanOp>(spirv::FUnordLessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFUnordLessThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::FUnordNotEqualOp>(spirv::FUnordNotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpFUnordNotEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLCeilOp>(spirv::GLSLCeilOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 9, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLCosOp>(spirv::GLSLCosOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 14, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLExpOp>(spirv::GLSLExpOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 27, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFAbsOp>(spirv::GLSLFAbsOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 4, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFMaxOp>(spirv::GLSLFMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 40, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFMinOp>(spirv::GLSLFMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 37, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFSignOp>(spirv::GLSLFSignOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 6, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLFloorOp>(spirv::GLSLFloorOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 8, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLInverseSqrtOp>(spirv::GLSLInverseSqrtOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 32, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLLogOp>(spirv::GLSLLogOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 28, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSAbsOp>(spirv::GLSLSAbsOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 5, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSMaxOp>(spirv::GLSLSMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 42, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSMinOp>(spirv::GLSLSMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 39, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSSignOp>(spirv::GLSLSSignOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 7, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSinOp>(spirv::GLSLSinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 13, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLSqrtOp>(spirv::GLSLSqrtOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 31, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLTanOp>(spirv::GLSLTanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 15, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GLSLTanhOp>(spirv::GLSLTanhOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  encodeExtensionInstruction(op, "GLSL.std.450", 21, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformBallotOp>(spirv::GroupNonUniformBallotOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformBallot, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformElectOp>(spirv::GroupNonUniformElectOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  if (auto attr = op.getAttr("execution_scope")) {
    operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
  }
  elidedAttrs.push_back("execution_scope");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformElect, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformFAddOp>(spirv::GroupNonUniformFAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformFAdd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformFMaxOp>(spirv::GroupNonUniformFMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformFMax, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformFMinOp>(spirv::GroupNonUniformFMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformFMin, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformFMulOp>(spirv::GroupNonUniformFMulOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformFMul, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformIAddOp>(spirv::GroupNonUniformIAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformIAdd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformIMulOp>(spirv::GroupNonUniformIMulOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformIMul, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformSMaxOp>(spirv::GroupNonUniformSMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformSMax, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformSMinOp>(spirv::GroupNonUniformSMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformSMin, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformUMaxOp>(spirv::GroupNonUniformUMaxOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformUMax, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::GroupNonUniformUMinOp>(spirv::GroupNonUniformUMinOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("execution_scope")) {
      operands.push_back(prepareConstantInt(op.getLoc(), attr.cast<IntegerAttr>()));
    }
    elidedAttrs.push_back("execution_scope");
  }
  {
    if (auto attr = op.getAttr("group_operation")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("group_operation");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  {
    for (auto arg : op.getODSOperands(1)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #1 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpGroupNonUniformUMin, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::IAddOp>(spirv::IAddOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpIAdd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::IEqualOp>(spirv::IEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpIEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::IMulOp>(spirv::IMulOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpIMul, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::INotEqualOp>(spirv::INotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpINotEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ISubOp>(spirv::ISubOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpISub, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LoadOp>(spirv::LoadOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("memory_access")) {
    operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
  }
  elidedAttrs.push_back("memory_access");
  if (auto attr = op.getAttr("alignment")) {
    operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
  }
  elidedAttrs.push_back("alignment");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpLoad, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalAndOp>(spirv::LogicalAndOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpLogicalAnd, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalEqualOp>(spirv::LogicalEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpLogicalEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalNotEqualOp>(spirv::LogicalNotEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpLogicalNotEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalNotOp>(spirv::LogicalNotOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpLogicalNot, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::LogicalOrOp>(spirv::LogicalOrOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpLogicalOr, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::MatrixTimesScalarOp>(spirv::MatrixTimesScalarOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpMatrixTimesScalar, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::NotOp>(spirv::NotOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpNot, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ReturnOp>(spirv::ReturnOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpReturn, operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ReturnValueOp>(spirv::ReturnValueOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpReturnValue, operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SConvertOp>(spirv::SConvertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSConvert, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SDivOp>(spirv::SDivOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSDiv, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SGreaterThanEqualOp>(spirv::SGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSGreaterThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SGreaterThanOp>(spirv::SGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSGreaterThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SLessThanEqualOp>(spirv::SLessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSLessThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SLessThanOp>(spirv::SLessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSLessThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SModOp>(spirv::SModOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSMod, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SRemOp>(spirv::SRemOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSRem, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SelectOp>(spirv::SelectOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSelect, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ShiftLeftLogicalOp>(spirv::ShiftLeftLogicalOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpShiftLeftLogical, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ShiftRightArithmeticOp>(spirv::ShiftRightArithmeticOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpShiftRightArithmetic, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ShiftRightLogicalOp>(spirv::ShiftRightLogicalOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpShiftRightLogical, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::StoreOp>(spirv::StoreOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  if (auto attr = op.getAttr("memory_access")) {
    operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
  }
  elidedAttrs.push_back("memory_access");
  if (auto attr = op.getAttr("alignment")) {
    operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
  }
  elidedAttrs.push_back("alignment");
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpStore, operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::SubgroupBallotKHROp>(spirv::SubgroupBallotKHROp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpSubgroupBallotKHR, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UConvertOp>(spirv::UConvertOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpUConvert, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UDivOp>(spirv::UDivOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpUDiv, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UGreaterThanEqualOp>(spirv::UGreaterThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpUGreaterThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UGreaterThanOp>(spirv::UGreaterThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpUGreaterThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ULessThanEqualOp>(spirv::ULessThanEqualOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpULessThanEqual, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::ULessThanOp>(spirv::ULessThanOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpULessThan, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UModOp>(spirv::UModOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  for (Value operand : op.getOperation()->getOperands()) {
    auto id = getValueID(operand);
    assert(id && "use before def!");
    operands.push_back(id);
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpUMod, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::UnreachableOp>(spirv::UnreachableOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpUnreachable, operands);
  return success();
}

template <> LogicalResult
Serializer::processOp<spirv::VariableOp>(spirv::VariableOp op) {
  SmallVector<uint32_t, 4> operands;
  SmallVector<StringRef, 2> elidedAttrs;
  uint32_t resultID = 0;
  uint32_t resultTypeID = 0;
  if (failed(processType(op.getLoc(), op.getType(), resultTypeID))) {
    return failure();
  }
  operands.push_back(resultTypeID);
  resultID = getNextID();
  valueIDMap[op.getResult()] = resultID;
  operands.push_back(resultID);
  {
    if (auto attr = op.getAttr("storage_class")) {
      operands.push_back(static_cast<uint32_t>(attr.cast<IntegerAttr>().getValue().getZExtValue()));
    }
    elidedAttrs.push_back("storage_class");
  }
  {
    for (auto arg : op.getODSOperands(0)) {
      auto argID = getValueID(arg);
      if (!argID) {
        return emitError(op.getLoc(), "operand #0 has a use before def");
      }
      operands.push_back(argID);
    }
  }
  emitDebugLine(functionBody, op.getLoc());
  encodeInstructionInto(functionBody, spirv::Opcode::OpVariable, operands);
  for (auto attr : op.getAttrs()) {
    if (llvm::any_of(elidedAttrs, [&](StringRef elided) {return attr.first == elided;})) {
      continue;
    }
    if (failed(processDecoration(op.getLoc(), resultID, attr))) {
      return failure();
    }
  }
  return success();
}

LogicalResult Serializer::dispatchToAutogenSerialization(Operation *op) {
  if (isa<spirv::AccessChainOp>(op)) {
    return processOp(cast<spirv::AccessChainOp>(op));
  }
  if (isa<spirv::AtomicAndOp>(op)) {
    return processOp(cast<spirv::AtomicAndOp>(op));
  }
  if (isa<spirv::AtomicCompareExchangeWeakOp>(op)) {
    return processOp(cast<spirv::AtomicCompareExchangeWeakOp>(op));
  }
  if (isa<spirv::AtomicIAddOp>(op)) {
    return processOp(cast<spirv::AtomicIAddOp>(op));
  }
  if (isa<spirv::AtomicIDecrementOp>(op)) {
    return processOp(cast<spirv::AtomicIDecrementOp>(op));
  }
  if (isa<spirv::AtomicIIncrementOp>(op)) {
    return processOp(cast<spirv::AtomicIIncrementOp>(op));
  }
  if (isa<spirv::AtomicISubOp>(op)) {
    return processOp(cast<spirv::AtomicISubOp>(op));
  }
  if (isa<spirv::AtomicOrOp>(op)) {
    return processOp(cast<spirv::AtomicOrOp>(op));
  }
  if (isa<spirv::AtomicSMaxOp>(op)) {
    return processOp(cast<spirv::AtomicSMaxOp>(op));
  }
  if (isa<spirv::AtomicSMinOp>(op)) {
    return processOp(cast<spirv::AtomicSMinOp>(op));
  }
  if (isa<spirv::AtomicUMaxOp>(op)) {
    return processOp(cast<spirv::AtomicUMaxOp>(op));
  }
  if (isa<spirv::AtomicUMinOp>(op)) {
    return processOp(cast<spirv::AtomicUMinOp>(op));
  }
  if (isa<spirv::AtomicXorOp>(op)) {
    return processOp(cast<spirv::AtomicXorOp>(op));
  }
  if (isa<spirv::BitCountOp>(op)) {
    return processOp(cast<spirv::BitCountOp>(op));
  }
  if (isa<spirv::BitFieldInsertOp>(op)) {
    return processOp(cast<spirv::BitFieldInsertOp>(op));
  }
  if (isa<spirv::BitFieldSExtractOp>(op)) {
    return processOp(cast<spirv::BitFieldSExtractOp>(op));
  }
  if (isa<spirv::BitFieldUExtractOp>(op)) {
    return processOp(cast<spirv::BitFieldUExtractOp>(op));
  }
  if (isa<spirv::BitReverseOp>(op)) {
    return processOp(cast<spirv::BitReverseOp>(op));
  }
  if (isa<spirv::BitcastOp>(op)) {
    return processOp(cast<spirv::BitcastOp>(op));
  }
  if (isa<spirv::BitwiseAndOp>(op)) {
    return processOp(cast<spirv::BitwiseAndOp>(op));
  }
  if (isa<spirv::BitwiseOrOp>(op)) {
    return processOp(cast<spirv::BitwiseOrOp>(op));
  }
  if (isa<spirv::BitwiseXorOp>(op)) {
    return processOp(cast<spirv::BitwiseXorOp>(op));
  }
  if (isa<spirv::BranchConditionalOp>(op)) {
    return processOp(cast<spirv::BranchConditionalOp>(op));
  }
  if (isa<spirv::BranchOp>(op)) {
    return processOp(cast<spirv::BranchOp>(op));
  }
  if (isa<spirv::CompositeConstructOp>(op)) {
    return processOp(cast<spirv::CompositeConstructOp>(op));
  }
  if (isa<spirv::CompositeExtractOp>(op)) {
    return processOp(cast<spirv::CompositeExtractOp>(op));
  }
  if (isa<spirv::CompositeInsertOp>(op)) {
    return processOp(cast<spirv::CompositeInsertOp>(op));
  }
  if (isa<spirv::ControlBarrierOp>(op)) {
    return processOp(cast<spirv::ControlBarrierOp>(op));
  }
  if (isa<spirv::ConvertFToSOp>(op)) {
    return processOp(cast<spirv::ConvertFToSOp>(op));
  }
  if (isa<spirv::ConvertFToUOp>(op)) {
    return processOp(cast<spirv::ConvertFToUOp>(op));
  }
  if (isa<spirv::ConvertSToFOp>(op)) {
    return processOp(cast<spirv::ConvertSToFOp>(op));
  }
  if (isa<spirv::ConvertUToFOp>(op)) {
    return processOp(cast<spirv::ConvertUToFOp>(op));
  }
  if (isa<spirv::CooperativeMatrixLengthNVOp>(op)) {
    return processOp(cast<spirv::CooperativeMatrixLengthNVOp>(op));
  }
  if (isa<spirv::CooperativeMatrixLoadNVOp>(op)) {
    return processOp(cast<spirv::CooperativeMatrixLoadNVOp>(op));
  }
  if (isa<spirv::CooperativeMatrixMulAddNVOp>(op)) {
    return processOp(cast<spirv::CooperativeMatrixMulAddNVOp>(op));
  }
  if (isa<spirv::CooperativeMatrixStoreNVOp>(op)) {
    return processOp(cast<spirv::CooperativeMatrixStoreNVOp>(op));
  }
  if (isa<spirv::EntryPointOp>(op)) {
    return processOp(cast<spirv::EntryPointOp>(op));
  }
  if (isa<spirv::ExecutionModeOp>(op)) {
    return processOp(cast<spirv::ExecutionModeOp>(op));
  }
  if (isa<spirv::FAddOp>(op)) {
    return processOp(cast<spirv::FAddOp>(op));
  }
  if (isa<spirv::FConvertOp>(op)) {
    return processOp(cast<spirv::FConvertOp>(op));
  }
  if (isa<spirv::FDivOp>(op)) {
    return processOp(cast<spirv::FDivOp>(op));
  }
  if (isa<spirv::FModOp>(op)) {
    return processOp(cast<spirv::FModOp>(op));
  }
  if (isa<spirv::FMulOp>(op)) {
    return processOp(cast<spirv::FMulOp>(op));
  }
  if (isa<spirv::FNegateOp>(op)) {
    return processOp(cast<spirv::FNegateOp>(op));
  }
  if (isa<spirv::FOrdEqualOp>(op)) {
    return processOp(cast<spirv::FOrdEqualOp>(op));
  }
  if (isa<spirv::FOrdGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::FOrdGreaterThanEqualOp>(op));
  }
  if (isa<spirv::FOrdGreaterThanOp>(op)) {
    return processOp(cast<spirv::FOrdGreaterThanOp>(op));
  }
  if (isa<spirv::FOrdLessThanEqualOp>(op)) {
    return processOp(cast<spirv::FOrdLessThanEqualOp>(op));
  }
  if (isa<spirv::FOrdLessThanOp>(op)) {
    return processOp(cast<spirv::FOrdLessThanOp>(op));
  }
  if (isa<spirv::FOrdNotEqualOp>(op)) {
    return processOp(cast<spirv::FOrdNotEqualOp>(op));
  }
  if (isa<spirv::FRemOp>(op)) {
    return processOp(cast<spirv::FRemOp>(op));
  }
  if (isa<spirv::FSubOp>(op)) {
    return processOp(cast<spirv::FSubOp>(op));
  }
  if (isa<spirv::FUnordEqualOp>(op)) {
    return processOp(cast<spirv::FUnordEqualOp>(op));
  }
  if (isa<spirv::FUnordGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::FUnordGreaterThanEqualOp>(op));
  }
  if (isa<spirv::FUnordGreaterThanOp>(op)) {
    return processOp(cast<spirv::FUnordGreaterThanOp>(op));
  }
  if (isa<spirv::FUnordLessThanEqualOp>(op)) {
    return processOp(cast<spirv::FUnordLessThanEqualOp>(op));
  }
  if (isa<spirv::FUnordLessThanOp>(op)) {
    return processOp(cast<spirv::FUnordLessThanOp>(op));
  }
  if (isa<spirv::FUnordNotEqualOp>(op)) {
    return processOp(cast<spirv::FUnordNotEqualOp>(op));
  }
  if (isa<spirv::FunctionCallOp>(op)) {
    return processOp(cast<spirv::FunctionCallOp>(op));
  }
  if (isa<spirv::GLSLCeilOp>(op)) {
    return processOp(cast<spirv::GLSLCeilOp>(op));
  }
  if (isa<spirv::GLSLCosOp>(op)) {
    return processOp(cast<spirv::GLSLCosOp>(op));
  }
  if (isa<spirv::GLSLExpOp>(op)) {
    return processOp(cast<spirv::GLSLExpOp>(op));
  }
  if (isa<spirv::GLSLFAbsOp>(op)) {
    return processOp(cast<spirv::GLSLFAbsOp>(op));
  }
  if (isa<spirv::GLSLFMaxOp>(op)) {
    return processOp(cast<spirv::GLSLFMaxOp>(op));
  }
  if (isa<spirv::GLSLFMinOp>(op)) {
    return processOp(cast<spirv::GLSLFMinOp>(op));
  }
  if (isa<spirv::GLSLFSignOp>(op)) {
    return processOp(cast<spirv::GLSLFSignOp>(op));
  }
  if (isa<spirv::GLSLFloorOp>(op)) {
    return processOp(cast<spirv::GLSLFloorOp>(op));
  }
  if (isa<spirv::GLSLInverseSqrtOp>(op)) {
    return processOp(cast<spirv::GLSLInverseSqrtOp>(op));
  }
  if (isa<spirv::GLSLLogOp>(op)) {
    return processOp(cast<spirv::GLSLLogOp>(op));
  }
  if (isa<spirv::GLSLSAbsOp>(op)) {
    return processOp(cast<spirv::GLSLSAbsOp>(op));
  }
  if (isa<spirv::GLSLSMaxOp>(op)) {
    return processOp(cast<spirv::GLSLSMaxOp>(op));
  }
  if (isa<spirv::GLSLSMinOp>(op)) {
    return processOp(cast<spirv::GLSLSMinOp>(op));
  }
  if (isa<spirv::GLSLSSignOp>(op)) {
    return processOp(cast<spirv::GLSLSSignOp>(op));
  }
  if (isa<spirv::GLSLSinOp>(op)) {
    return processOp(cast<spirv::GLSLSinOp>(op));
  }
  if (isa<spirv::GLSLSqrtOp>(op)) {
    return processOp(cast<spirv::GLSLSqrtOp>(op));
  }
  if (isa<spirv::GLSLTanOp>(op)) {
    return processOp(cast<spirv::GLSLTanOp>(op));
  }
  if (isa<spirv::GLSLTanhOp>(op)) {
    return processOp(cast<spirv::GLSLTanhOp>(op));
  }
  if (isa<spirv::GroupNonUniformBallotOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformBallotOp>(op));
  }
  if (isa<spirv::GroupNonUniformElectOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformElectOp>(op));
  }
  if (isa<spirv::GroupNonUniformFAddOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformFAddOp>(op));
  }
  if (isa<spirv::GroupNonUniformFMaxOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformFMaxOp>(op));
  }
  if (isa<spirv::GroupNonUniformFMinOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformFMinOp>(op));
  }
  if (isa<spirv::GroupNonUniformFMulOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformFMulOp>(op));
  }
  if (isa<spirv::GroupNonUniformIAddOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformIAddOp>(op));
  }
  if (isa<spirv::GroupNonUniformIMulOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformIMulOp>(op));
  }
  if (isa<spirv::GroupNonUniformSMaxOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformSMaxOp>(op));
  }
  if (isa<spirv::GroupNonUniformSMinOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformSMinOp>(op));
  }
  if (isa<spirv::GroupNonUniformUMaxOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformUMaxOp>(op));
  }
  if (isa<spirv::GroupNonUniformUMinOp>(op)) {
    return processOp(cast<spirv::GroupNonUniformUMinOp>(op));
  }
  if (isa<spirv::IAddOp>(op)) {
    return processOp(cast<spirv::IAddOp>(op));
  }
  if (isa<spirv::IEqualOp>(op)) {
    return processOp(cast<spirv::IEqualOp>(op));
  }
  if (isa<spirv::IMulOp>(op)) {
    return processOp(cast<spirv::IMulOp>(op));
  }
  if (isa<spirv::INotEqualOp>(op)) {
    return processOp(cast<spirv::INotEqualOp>(op));
  }
  if (isa<spirv::ISubOp>(op)) {
    return processOp(cast<spirv::ISubOp>(op));
  }
  if (isa<spirv::LoadOp>(op)) {
    return processOp(cast<spirv::LoadOp>(op));
  }
  if (isa<spirv::LogicalAndOp>(op)) {
    return processOp(cast<spirv::LogicalAndOp>(op));
  }
  if (isa<spirv::LogicalEqualOp>(op)) {
    return processOp(cast<spirv::LogicalEqualOp>(op));
  }
  if (isa<spirv::LogicalNotEqualOp>(op)) {
    return processOp(cast<spirv::LogicalNotEqualOp>(op));
  }
  if (isa<spirv::LogicalNotOp>(op)) {
    return processOp(cast<spirv::LogicalNotOp>(op));
  }
  if (isa<spirv::LogicalOrOp>(op)) {
    return processOp(cast<spirv::LogicalOrOp>(op));
  }
  if (isa<spirv::MatrixTimesScalarOp>(op)) {
    return processOp(cast<spirv::MatrixTimesScalarOp>(op));
  }
  if (isa<spirv::MemoryBarrierOp>(op)) {
    return processOp(cast<spirv::MemoryBarrierOp>(op));
  }
  if (isa<spirv::NotOp>(op)) {
    return processOp(cast<spirv::NotOp>(op));
  }
  if (isa<spirv::ReturnOp>(op)) {
    return processOp(cast<spirv::ReturnOp>(op));
  }
  if (isa<spirv::ReturnValueOp>(op)) {
    return processOp(cast<spirv::ReturnValueOp>(op));
  }
  if (isa<spirv::SConvertOp>(op)) {
    return processOp(cast<spirv::SConvertOp>(op));
  }
  if (isa<spirv::SDivOp>(op)) {
    return processOp(cast<spirv::SDivOp>(op));
  }
  if (isa<spirv::SGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::SGreaterThanEqualOp>(op));
  }
  if (isa<spirv::SGreaterThanOp>(op)) {
    return processOp(cast<spirv::SGreaterThanOp>(op));
  }
  if (isa<spirv::SLessThanEqualOp>(op)) {
    return processOp(cast<spirv::SLessThanEqualOp>(op));
  }
  if (isa<spirv::SLessThanOp>(op)) {
    return processOp(cast<spirv::SLessThanOp>(op));
  }
  if (isa<spirv::SModOp>(op)) {
    return processOp(cast<spirv::SModOp>(op));
  }
  if (isa<spirv::SRemOp>(op)) {
    return processOp(cast<spirv::SRemOp>(op));
  }
  if (isa<spirv::SelectOp>(op)) {
    return processOp(cast<spirv::SelectOp>(op));
  }
  if (isa<spirv::ShiftLeftLogicalOp>(op)) {
    return processOp(cast<spirv::ShiftLeftLogicalOp>(op));
  }
  if (isa<spirv::ShiftRightArithmeticOp>(op)) {
    return processOp(cast<spirv::ShiftRightArithmeticOp>(op));
  }
  if (isa<spirv::ShiftRightLogicalOp>(op)) {
    return processOp(cast<spirv::ShiftRightLogicalOp>(op));
  }
  if (isa<spirv::StoreOp>(op)) {
    return processOp(cast<spirv::StoreOp>(op));
  }
  if (isa<spirv::SubgroupBallotKHROp>(op)) {
    return processOp(cast<spirv::SubgroupBallotKHROp>(op));
  }
  if (isa<spirv::UConvertOp>(op)) {
    return processOp(cast<spirv::UConvertOp>(op));
  }
  if (isa<spirv::UDivOp>(op)) {
    return processOp(cast<spirv::UDivOp>(op));
  }
  if (isa<spirv::UGreaterThanEqualOp>(op)) {
    return processOp(cast<spirv::UGreaterThanEqualOp>(op));
  }
  if (isa<spirv::UGreaterThanOp>(op)) {
    return processOp(cast<spirv::UGreaterThanOp>(op));
  }
  if (isa<spirv::ULessThanEqualOp>(op)) {
    return processOp(cast<spirv::ULessThanEqualOp>(op));
  }
  if (isa<spirv::ULessThanOp>(op)) {
    return processOp(cast<spirv::ULessThanOp>(op));
  }
  if (isa<spirv::UModOp>(op)) {
    return processOp(cast<spirv::UModOp>(op));
  }
  if (isa<spirv::UnreachableOp>(op)) {
    return processOp(cast<spirv::UnreachableOp>(op));
  }
  if (isa<spirv::VariableOp>(op)) {
    return processOp(cast<spirv::VariableOp>(op));
  }
  return op->emitError("unhandled operation serialization");
}

#endif // GET_SERIALIZATION_FNS

#ifdef GET_DESERIALIZATION_FNS

template <> LogicalResult
Deserializer::processOp<spirv::AccessChainOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AccessChainOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AccessChainOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AccessChainOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AccessChainOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicAndOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicAndOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicAndOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicAndOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicAndOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicCompareExchangeWeakOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicCompareExchangeWeakOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicCompareExchangeWeakOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("equal_semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("unequal_semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicCompareExchangeWeakOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicCompareExchangeWeakOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicIAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicIAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicIAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicIAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicIAddOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicIDecrementOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicIDecrementOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicIDecrementOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicIDecrementOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicIDecrementOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicIIncrementOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicIIncrementOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicIIncrementOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicIIncrementOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicIIncrementOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicISubOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicISubOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicISubOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicISubOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicISubOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicOrOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicOrOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicOrOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicOrOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicOrOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicSMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicSMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicSMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicSMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicSMaxOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicSMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicSMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicSMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicSMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicSMinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicUMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicUMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicUMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicUMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicUMaxOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicUMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicUMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicUMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicUMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicUMinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::AtomicXorOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::AtomicXorOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::AtomicXorOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("semantics", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::AtomicXorOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::AtomicXorOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitCountOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitCountOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitCountOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitCountOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitCountOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitFieldInsertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitFieldInsertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitFieldInsertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitFieldInsertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitFieldInsertOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitFieldSExtractOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitFieldSExtractOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitFieldSExtractOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitFieldSExtractOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitFieldSExtractOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitFieldUExtractOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitFieldUExtractOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitFieldUExtractOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitFieldUExtractOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitFieldUExtractOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitReverseOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitReverseOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitReverseOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitReverseOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitReverseOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitcastOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitcastOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitcastOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitcastOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitcastOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitwiseAndOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitwiseAndOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitwiseAndOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitwiseAndOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitwiseAndOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitwiseOrOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitwiseOrOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitwiseOrOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitwiseOrOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitwiseOrOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::BitwiseXorOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::BitwiseXorOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::BitwiseXorOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::BitwiseXorOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::BitwiseXorOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CompositeConstructOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CompositeConstructOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CompositeConstructOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CompositeConstructOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::CompositeConstructOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CompositeExtractOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CompositeExtractOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CompositeExtractOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    SmallVector<Attribute, 4> attrListElems;
    while (wordIndex < words.size()) {
      attrListElems.push_back(opBuilder.getI32IntegerAttr(words[wordIndex++]));
    }
    attributes.push_back(opBuilder.getNamedAttr("indices", opBuilder.getArrayAttr(attrListElems)));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CompositeExtractOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::CompositeExtractOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CompositeInsertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CompositeInsertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CompositeInsertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    SmallVector<Attribute, 4> attrListElems;
    while (wordIndex < words.size()) {
      attrListElems.push_back(opBuilder.getI32IntegerAttr(words[wordIndex++]));
    }
    attributes.push_back(opBuilder.getNamedAttr("indices", opBuilder.getArrayAttr(attrListElems)));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CompositeInsertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::CompositeInsertOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertFToSOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertFToSOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertFToSOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertFToSOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ConvertFToSOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertFToUOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertFToUOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertFToUOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertFToUOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ConvertFToUOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertSToFOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertSToFOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertSToFOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertSToFOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ConvertSToFOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ConvertUToFOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ConvertUToFOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ConvertUToFOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ConvertUToFOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ConvertUToFOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CooperativeMatrixLengthNVOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CooperativeMatrixLengthNVOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CooperativeMatrixLengthNVOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("type", TypeAttr::get(getType(words[wordIndex++]))));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CooperativeMatrixLengthNVOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::CooperativeMatrixLengthNVOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CooperativeMatrixLoadNVOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CooperativeMatrixLoadNVOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CooperativeMatrixLoadNVOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_access", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CooperativeMatrixLoadNVOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::CooperativeMatrixLoadNVOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CooperativeMatrixMulAddNVOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::CooperativeMatrixMulAddNVOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::CooperativeMatrixMulAddNVOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CooperativeMatrixMulAddNVOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::CooperativeMatrixMulAddNVOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::CooperativeMatrixStoreNVOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_access", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::CooperativeMatrixStoreNVOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::CooperativeMatrixStoreNVOp>(loc, resultTypes, operands, attributes); (void)op;
  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FAddOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FConvertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FConvertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FConvertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FConvertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FConvertOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FDivOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FDivOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FDivOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FDivOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FDivOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FModOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FModOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FModOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FModOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FModOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FMulOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FMulOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FMulOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FMulOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FMulOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FNegateOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FNegateOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FNegateOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FNegateOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FNegateOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FOrdEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FOrdGreaterThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FOrdGreaterThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdLessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdLessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdLessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdLessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FOrdLessThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdLessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdLessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdLessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdLessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FOrdLessThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FOrdNotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FOrdNotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FOrdNotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FOrdNotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FOrdNotEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FRemOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FRemOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FRemOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FRemOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FRemOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FSubOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FSubOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FSubOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FSubOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FSubOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FUnordEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FUnordGreaterThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FUnordGreaterThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordLessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordLessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordLessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordLessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FUnordLessThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordLessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordLessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordLessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordLessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FUnordLessThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::FUnordNotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::FUnordNotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::FUnordNotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::FUnordNotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::FUnordNotEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLCeilOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLCeilOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLCeilOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLCeilOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLCeilOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLCosOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLCosOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLCosOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLCosOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLCosOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLExpOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLExpOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLExpOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLExpOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLExpOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFAbsOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFAbsOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFAbsOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFAbsOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLFAbsOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLFMaxOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLFMinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFSignOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFSignOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFSignOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFSignOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLFSignOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLFloorOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLFloorOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLFloorOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLFloorOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLFloorOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLInverseSqrtOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLInverseSqrtOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLInverseSqrtOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLInverseSqrtOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLInverseSqrtOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLLogOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLLogOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLLogOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLLogOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLLogOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSAbsOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSAbsOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSAbsOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSAbsOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLSAbsOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLSMaxOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLSMinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSSignOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSSignOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSSignOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSSignOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLSSignOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLSinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLSqrtOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLSqrtOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLSqrtOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLSqrtOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLSqrtOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLTanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLTanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLTanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLTanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLTanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GLSLTanhOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GLSLTanhOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GLSLTanhOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GLSLTanhOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GLSLTanhOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformBallotOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformBallotOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformBallotOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformBallotOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformBallotOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformElectOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformElectOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformElectOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformElectOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformElectOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformFAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformFAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformFAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformFAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformFAddOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformFMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformFMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformFMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformFMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformFMaxOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformFMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformFMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformFMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformFMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformFMinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformFMulOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformFMulOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformFMulOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformFMulOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformFMulOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformIAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformIAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformIAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformIAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformIAddOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformIMulOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformIMulOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformIMulOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformIMulOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformIMulOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformSMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformSMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformSMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformSMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformSMaxOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformSMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformSMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformSMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformSMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformSMinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformUMaxOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformUMaxOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformUMaxOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformUMaxOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformUMaxOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::GroupNonUniformUMinOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::GroupNonUniformUMinOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::GroupNonUniformUMinOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("execution_scope", getConstantInt(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("group_operation", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::GroupNonUniformUMinOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::GroupNonUniformUMinOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::IAddOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::IAddOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::IAddOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::IAddOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::IAddOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::IEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::IEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::IEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::IEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::IEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::IMulOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::IMulOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::IMulOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::IMulOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::IMulOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::INotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::INotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::INotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::INotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::INotEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ISubOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ISubOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ISubOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ISubOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ISubOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LoadOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LoadOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LoadOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_access", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("alignment", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LoadOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::LoadOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalAndOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalAndOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalAndOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalAndOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::LogicalAndOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::LogicalEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalNotEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalNotEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalNotEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalNotEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::LogicalNotEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalNotOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalNotOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalNotOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalNotOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::LogicalNotOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::LogicalOrOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::LogicalOrOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::LogicalOrOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::LogicalOrOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::LogicalOrOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::MatrixTimesScalarOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::MatrixTimesScalarOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::MatrixTimesScalarOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::MatrixTimesScalarOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::MatrixTimesScalarOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::NotOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::NotOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::NotOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::NotOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::NotOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ReturnOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ReturnOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ReturnOp>(loc, resultTypes, operands, attributes); (void)op;
  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ReturnValueOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ReturnValueOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ReturnValueOp>(loc, resultTypes, operands, attributes); (void)op;
  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SConvertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SConvertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SConvertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SConvertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SConvertOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SDivOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SDivOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SDivOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SDivOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SDivOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SGreaterThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SGreaterThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SLessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SLessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SLessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SLessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SLessThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SLessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SLessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SLessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SLessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SLessThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SModOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SModOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SModOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SModOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SModOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SRemOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SRemOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SRemOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SRemOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SRemOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SelectOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SelectOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SelectOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SelectOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SelectOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ShiftLeftLogicalOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ShiftLeftLogicalOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ShiftLeftLogicalOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ShiftLeftLogicalOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ShiftLeftLogicalOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ShiftRightArithmeticOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ShiftRightArithmeticOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ShiftRightArithmeticOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ShiftRightArithmeticOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ShiftRightArithmeticOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ShiftRightLogicalOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ShiftRightLogicalOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ShiftRightLogicalOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ShiftRightLogicalOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ShiftRightLogicalOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::StoreOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("memory_access", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("alignment", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::StoreOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::StoreOp>(loc, resultTypes, operands, attributes); (void)op;
  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::SubgroupBallotKHROp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::SubgroupBallotKHROp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::SubgroupBallotKHROp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::SubgroupBallotKHROp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::SubgroupBallotKHROp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UConvertOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UConvertOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UConvertOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UConvertOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::UConvertOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UDivOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UDivOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UDivOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UDivOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::UDivOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UGreaterThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UGreaterThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UGreaterThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UGreaterThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::UGreaterThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UGreaterThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UGreaterThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UGreaterThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UGreaterThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::UGreaterThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ULessThanEqualOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ULessThanEqualOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ULessThanEqualOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ULessThanEqualOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ULessThanEqualOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::ULessThanOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::ULessThanOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::ULessThanOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::ULessThanOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::ULessThanOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UModOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::UModOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::UModOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex < words.size()) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
    wordIndex++;
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UModOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::UModOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::UnreachableOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::UnreachableOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::UnreachableOp>(loc, resultTypes, operands, attributes); (void)op;
  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  return success();
}

template <> LogicalResult
Deserializer::processOp<spirv::VariableOp>(ArrayRef<uint32_t> words) {
  SmallVector<Type, 1> resultTypes;
  size_t wordIndex = 0; (void)wordIndex;
  uint32_t valueID = 0; (void)valueID;
  {
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result type <id> while deserializing spirv::VariableOp");
    }
    auto ty = getType(words[wordIndex]);
    if (!ty) {
      return emitError(unknownLoc, "unknown type result <id> : ") << words[wordIndex];
    }
    resultTypes.push_back(ty);
    wordIndex++;
    if (wordIndex >= words.size()) {
      return emitError(unknownLoc, "expected result <id> while deserializing spirv::VariableOp");
    }
  }
  valueID = words[wordIndex++];
  SmallVector<Value, 4> operands;
  SmallVector<NamedAttribute, 4> attributes;
  if (wordIndex < words.size()) {
    attributes.push_back(opBuilder.getNamedAttr("storage_class", opBuilder.getI32IntegerAttr(words[wordIndex++])));
  }
  for (; wordIndex < words.size(); ++wordIndex) {
    auto arg = getValue(words[wordIndex]);
    if (!arg) {
      return emitError(unknownLoc, "unknown result <id> : ") << words[wordIndex];
    }
    operands.push_back(arg);
  }
  if (wordIndex != words.size()) {
    return emitError(unknownLoc, "found more operands than expected when deserializing spirv::VariableOp, only ") << wordIndex << " of " << words.size() << " processed";
  }

  Location loc = createFileLineColLoc(opBuilder);
  auto op = opBuilder.create<spirv::VariableOp>(loc, resultTypes, operands, attributes); (void)op;
  valueMap[valueID] = op.getResult();

  if (op.hasTrait<OpTrait::IsTerminator>())
    clearDebugLine();
  if (decorations.count(valueID)) {
    auto attrs = decorations[valueID].getAttrs();
    attributes.append(attrs.begin(), attrs.end());
  }
  return success();
}

LogicalResult Deserializer::dispatchToAutogenDeserialization(spirv::Opcode opcode, ArrayRef<uint32_t> words) {
  switch (opcode) {
  case spirv::Opcode::OpAccessChain:
    return processOp<spirv::AccessChainOp>(words);
  case spirv::Opcode::OpAtomicAnd:
    return processOp<spirv::AtomicAndOp>(words);
  case spirv::Opcode::OpAtomicCompareExchangeWeak:
    return processOp<spirv::AtomicCompareExchangeWeakOp>(words);
  case spirv::Opcode::OpAtomicIAdd:
    return processOp<spirv::AtomicIAddOp>(words);
  case spirv::Opcode::OpAtomicIDecrement:
    return processOp<spirv::AtomicIDecrementOp>(words);
  case spirv::Opcode::OpAtomicIIncrement:
    return processOp<spirv::AtomicIIncrementOp>(words);
  case spirv::Opcode::OpAtomicISub:
    return processOp<spirv::AtomicISubOp>(words);
  case spirv::Opcode::OpAtomicOr:
    return processOp<spirv::AtomicOrOp>(words);
  case spirv::Opcode::OpAtomicSMax:
    return processOp<spirv::AtomicSMaxOp>(words);
  case spirv::Opcode::OpAtomicSMin:
    return processOp<spirv::AtomicSMinOp>(words);
  case spirv::Opcode::OpAtomicUMax:
    return processOp<spirv::AtomicUMaxOp>(words);
  case spirv::Opcode::OpAtomicUMin:
    return processOp<spirv::AtomicUMinOp>(words);
  case spirv::Opcode::OpAtomicXor:
    return processOp<spirv::AtomicXorOp>(words);
  case spirv::Opcode::OpBitCount:
    return processOp<spirv::BitCountOp>(words);
  case spirv::Opcode::OpBitFieldInsert:
    return processOp<spirv::BitFieldInsertOp>(words);
  case spirv::Opcode::OpBitFieldSExtract:
    return processOp<spirv::BitFieldSExtractOp>(words);
  case spirv::Opcode::OpBitFieldUExtract:
    return processOp<spirv::BitFieldUExtractOp>(words);
  case spirv::Opcode::OpBitReverse:
    return processOp<spirv::BitReverseOp>(words);
  case spirv::Opcode::OpBitcast:
    return processOp<spirv::BitcastOp>(words);
  case spirv::Opcode::OpBitwiseAnd:
    return processOp<spirv::BitwiseAndOp>(words);
  case spirv::Opcode::OpBitwiseOr:
    return processOp<spirv::BitwiseOrOp>(words);
  case spirv::Opcode::OpBitwiseXor:
    return processOp<spirv::BitwiseXorOp>(words);
  case spirv::Opcode::OpBranchConditional:
    return processOp<spirv::BranchConditionalOp>(words);
  case spirv::Opcode::OpBranch:
    return processOp<spirv::BranchOp>(words);
  case spirv::Opcode::OpCompositeConstruct:
    return processOp<spirv::CompositeConstructOp>(words);
  case spirv::Opcode::OpCompositeExtract:
    return processOp<spirv::CompositeExtractOp>(words);
  case spirv::Opcode::OpCompositeInsert:
    return processOp<spirv::CompositeInsertOp>(words);
  case spirv::Opcode::OpControlBarrier:
    return processOp<spirv::ControlBarrierOp>(words);
  case spirv::Opcode::OpConvertFToS:
    return processOp<spirv::ConvertFToSOp>(words);
  case spirv::Opcode::OpConvertFToU:
    return processOp<spirv::ConvertFToUOp>(words);
  case spirv::Opcode::OpConvertSToF:
    return processOp<spirv::ConvertSToFOp>(words);
  case spirv::Opcode::OpConvertUToF:
    return processOp<spirv::ConvertUToFOp>(words);
  case spirv::Opcode::OpCooperativeMatrixLengthNV:
    return processOp<spirv::CooperativeMatrixLengthNVOp>(words);
  case spirv::Opcode::OpCooperativeMatrixLoadNV:
    return processOp<spirv::CooperativeMatrixLoadNVOp>(words);
  case spirv::Opcode::OpCooperativeMatrixMulAddNV:
    return processOp<spirv::CooperativeMatrixMulAddNVOp>(words);
  case spirv::Opcode::OpCooperativeMatrixStoreNV:
    return processOp<spirv::CooperativeMatrixStoreNVOp>(words);
  case spirv::Opcode::OpEntryPoint:
    return processOp<spirv::EntryPointOp>(words);
  case spirv::Opcode::OpExecutionMode:
    return processOp<spirv::ExecutionModeOp>(words);
  case spirv::Opcode::OpFAdd:
    return processOp<spirv::FAddOp>(words);
  case spirv::Opcode::OpFConvert:
    return processOp<spirv::FConvertOp>(words);
  case spirv::Opcode::OpFDiv:
    return processOp<spirv::FDivOp>(words);
  case spirv::Opcode::OpFMod:
    return processOp<spirv::FModOp>(words);
  case spirv::Opcode::OpFMul:
    return processOp<spirv::FMulOp>(words);
  case spirv::Opcode::OpFNegate:
    return processOp<spirv::FNegateOp>(words);
  case spirv::Opcode::OpFOrdEqual:
    return processOp<spirv::FOrdEqualOp>(words);
  case spirv::Opcode::OpFOrdGreaterThanEqual:
    return processOp<spirv::FOrdGreaterThanEqualOp>(words);
  case spirv::Opcode::OpFOrdGreaterThan:
    return processOp<spirv::FOrdGreaterThanOp>(words);
  case spirv::Opcode::OpFOrdLessThanEqual:
    return processOp<spirv::FOrdLessThanEqualOp>(words);
  case spirv::Opcode::OpFOrdLessThan:
    return processOp<spirv::FOrdLessThanOp>(words);
  case spirv::Opcode::OpFOrdNotEqual:
    return processOp<spirv::FOrdNotEqualOp>(words);
  case spirv::Opcode::OpFRem:
    return processOp<spirv::FRemOp>(words);
  case spirv::Opcode::OpFSub:
    return processOp<spirv::FSubOp>(words);
  case spirv::Opcode::OpFUnordEqual:
    return processOp<spirv::FUnordEqualOp>(words);
  case spirv::Opcode::OpFUnordGreaterThanEqual:
    return processOp<spirv::FUnordGreaterThanEqualOp>(words);
  case spirv::Opcode::OpFUnordGreaterThan:
    return processOp<spirv::FUnordGreaterThanOp>(words);
  case spirv::Opcode::OpFUnordLessThanEqual:
    return processOp<spirv::FUnordLessThanEqualOp>(words);
  case spirv::Opcode::OpFUnordLessThan:
    return processOp<spirv::FUnordLessThanOp>(words);
  case spirv::Opcode::OpFUnordNotEqual:
    return processOp<spirv::FUnordNotEqualOp>(words);
  case spirv::Opcode::OpFunctionCall:
    return processOp<spirv::FunctionCallOp>(words);
  case spirv::Opcode::OpGroupNonUniformBallot:
    return processOp<spirv::GroupNonUniformBallotOp>(words);
  case spirv::Opcode::OpGroupNonUniformElect:
    return processOp<spirv::GroupNonUniformElectOp>(words);
  case spirv::Opcode::OpGroupNonUniformFAdd:
    return processOp<spirv::GroupNonUniformFAddOp>(words);
  case spirv::Opcode::OpGroupNonUniformFMax:
    return processOp<spirv::GroupNonUniformFMaxOp>(words);
  case spirv::Opcode::OpGroupNonUniformFMin:
    return processOp<spirv::GroupNonUniformFMinOp>(words);
  case spirv::Opcode::OpGroupNonUniformFMul:
    return processOp<spirv::GroupNonUniformFMulOp>(words);
  case spirv::Opcode::OpGroupNonUniformIAdd:
    return processOp<spirv::GroupNonUniformIAddOp>(words);
  case spirv::Opcode::OpGroupNonUniformIMul:
    return processOp<spirv::GroupNonUniformIMulOp>(words);
  case spirv::Opcode::OpGroupNonUniformSMax:
    return processOp<spirv::GroupNonUniformSMaxOp>(words);
  case spirv::Opcode::OpGroupNonUniformSMin:
    return processOp<spirv::GroupNonUniformSMinOp>(words);
  case spirv::Opcode::OpGroupNonUniformUMax:
    return processOp<spirv::GroupNonUniformUMaxOp>(words);
  case spirv::Opcode::OpGroupNonUniformUMin:
    return processOp<spirv::GroupNonUniformUMinOp>(words);
  case spirv::Opcode::OpIAdd:
    return processOp<spirv::IAddOp>(words);
  case spirv::Opcode::OpIEqual:
    return processOp<spirv::IEqualOp>(words);
  case spirv::Opcode::OpIMul:
    return processOp<spirv::IMulOp>(words);
  case spirv::Opcode::OpINotEqual:
    return processOp<spirv::INotEqualOp>(words);
  case spirv::Opcode::OpISub:
    return processOp<spirv::ISubOp>(words);
  case spirv::Opcode::OpLoad:
    return processOp<spirv::LoadOp>(words);
  case spirv::Opcode::OpLogicalAnd:
    return processOp<spirv::LogicalAndOp>(words);
  case spirv::Opcode::OpLogicalEqual:
    return processOp<spirv::LogicalEqualOp>(words);
  case spirv::Opcode::OpLogicalNotEqual:
    return processOp<spirv::LogicalNotEqualOp>(words);
  case spirv::Opcode::OpLogicalNot:
    return processOp<spirv::LogicalNotOp>(words);
  case spirv::Opcode::OpLogicalOr:
    return processOp<spirv::LogicalOrOp>(words);
  case spirv::Opcode::OpMatrixTimesScalar:
    return processOp<spirv::MatrixTimesScalarOp>(words);
  case spirv::Opcode::OpMemoryBarrier:
    return processOp<spirv::MemoryBarrierOp>(words);
  case spirv::Opcode::OpNot:
    return processOp<spirv::NotOp>(words);
  case spirv::Opcode::OpReturn:
    return processOp<spirv::ReturnOp>(words);
  case spirv::Opcode::OpReturnValue:
    return processOp<spirv::ReturnValueOp>(words);
  case spirv::Opcode::OpSConvert:
    return processOp<spirv::SConvertOp>(words);
  case spirv::Opcode::OpSDiv:
    return processOp<spirv::SDivOp>(words);
  case spirv::Opcode::OpSGreaterThanEqual:
    return processOp<spirv::SGreaterThanEqualOp>(words);
  case spirv::Opcode::OpSGreaterThan:
    return processOp<spirv::SGreaterThanOp>(words);
  case spirv::Opcode::OpSLessThanEqual:
    return processOp<spirv::SLessThanEqualOp>(words);
  case spirv::Opcode::OpSLessThan:
    return processOp<spirv::SLessThanOp>(words);
  case spirv::Opcode::OpSMod:
    return processOp<spirv::SModOp>(words);
  case spirv::Opcode::OpSRem:
    return processOp<spirv::SRemOp>(words);
  case spirv::Opcode::OpSelect:
    return processOp<spirv::SelectOp>(words);
  case spirv::Opcode::OpShiftLeftLogical:
    return processOp<spirv::ShiftLeftLogicalOp>(words);
  case spirv::Opcode::OpShiftRightArithmetic:
    return processOp<spirv::ShiftRightArithmeticOp>(words);
  case spirv::Opcode::OpShiftRightLogical:
    return processOp<spirv::ShiftRightLogicalOp>(words);
  case spirv::Opcode::OpStore:
    return processOp<spirv::StoreOp>(words);
  case spirv::Opcode::OpSubgroupBallotKHR:
    return processOp<spirv::SubgroupBallotKHROp>(words);
  case spirv::Opcode::OpUConvert:
    return processOp<spirv::UConvertOp>(words);
  case spirv::Opcode::OpUDiv:
    return processOp<spirv::UDivOp>(words);
  case spirv::Opcode::OpUGreaterThanEqual:
    return processOp<spirv::UGreaterThanEqualOp>(words);
  case spirv::Opcode::OpUGreaterThan:
    return processOp<spirv::UGreaterThanOp>(words);
  case spirv::Opcode::OpULessThanEqual:
    return processOp<spirv::ULessThanEqualOp>(words);
  case spirv::Opcode::OpULessThan:
    return processOp<spirv::ULessThanOp>(words);
  case spirv::Opcode::OpUMod:
    return processOp<spirv::UModOp>(words);
  case spirv::Opcode::OpUnreachable:
    return processOp<spirv::UnreachableOp>(words);
  case spirv::Opcode::OpVariable:
    return processOp<spirv::VariableOp>(words);
  default:
    ;
  }
  auto opcodeString = spirv::stringifyOpcode(opcode);
  if (!opcodeString.empty()) {
    return emitError(unknownLoc, "unhandled deserialization of ") << opcodeString;
  } else {
   return emitError(unknownLoc, "unhandled opcode ") << static_cast<uint32_t>(opcode);
  }
}
LogicalResult Deserializer::dispatchToExtensionSetAutogenDeserialization(StringRef extensionSetName, uint32_t instructionID, ArrayRef<uint32_t> words) {
  if (extensionSetName == "GLSL.std.450") {
    switch (instructionID) {
    case 9:
      return processOp<spirv::GLSLCeilOp>(words);
    case 14:
      return processOp<spirv::GLSLCosOp>(words);
    case 27:
      return processOp<spirv::GLSLExpOp>(words);
    case 4:
      return processOp<spirv::GLSLFAbsOp>(words);
    case 40:
      return processOp<spirv::GLSLFMaxOp>(words);
    case 37:
      return processOp<spirv::GLSLFMinOp>(words);
    case 6:
      return processOp<spirv::GLSLFSignOp>(words);
    case 8:
      return processOp<spirv::GLSLFloorOp>(words);
    case 32:
      return processOp<spirv::GLSLInverseSqrtOp>(words);
    case 28:
      return processOp<spirv::GLSLLogOp>(words);
    case 5:
      return processOp<spirv::GLSLSAbsOp>(words);
    case 42:
      return processOp<spirv::GLSLSMaxOp>(words);
    case 39:
      return processOp<spirv::GLSLSMinOp>(words);
    case 7:
      return processOp<spirv::GLSLSSignOp>(words);
    case 13:
      return processOp<spirv::GLSLSinOp>(words);
    case 31:
      return processOp<spirv::GLSLSqrtOp>(words);
    case 15:
      return processOp<spirv::GLSLTanOp>(words);
    case 21:
      return processOp<spirv::GLSLTanhOp>(words);
    default:
      return emitError(unknownLoc, "unhandled deserializations of ") << instructionID << " from extension set " << extensionSetName;
    }
  }
  return emitError(unknownLoc, "unhandled deserialization of extended instruction set extensionSetName");
}
#endif // GET_DESERIALIZATION_FNS

