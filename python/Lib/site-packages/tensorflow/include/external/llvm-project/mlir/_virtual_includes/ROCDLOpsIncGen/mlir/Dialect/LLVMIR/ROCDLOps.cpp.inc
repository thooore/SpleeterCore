/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

ROCDL::BarrierOp,
ROCDL::BlockDimXOp,
ROCDL::BlockDimYOp,
ROCDL::BlockDimZOp,
ROCDL::BlockIdXOp,
ROCDL::BlockIdYOp,
ROCDL::BlockIdZOp,
ROCDL::GridDimXOp,
ROCDL::GridDimYOp,
ROCDL::GridDimZOp,
ROCDL::MubufLoadOp,
ROCDL::MubufStoreOp,
ROCDL::ThreadIdXOp,
ROCDL::ThreadIdYOp,
ROCDL::ThreadIdZOp,
ROCDL::mfma_f32_16x16x16f16,
ROCDL::mfma_f32_16x16x1f32,
ROCDL::mfma_f32_16x16x2bf16,
ROCDL::mfma_f32_16x16x4f16,
ROCDL::mfma_f32_16x16x4f32,
ROCDL::mfma_f32_16x16x8bf16,
ROCDL::mfma_f32_32x32x1f32,
ROCDL::mfma_f32_32x32x2bf16,
ROCDL::mfma_f32_32x32x2f32,
ROCDL::mfma_f32_32x32x4bf16,
ROCDL::mfma_f32_32x32x4f16,
ROCDL::mfma_f32_32x32x8f16,
ROCDL::mfma_f32_4x4x1f32,
ROCDL::mfma_f32_4x4x2bf16,
ROCDL::mfma_f32_4x4x4f16,
ROCDL::mfma_i32_16x16x16i8,
ROCDL::mfma_i32_16x16x4i8,
ROCDL::mfma_i32_32x32x4i8,
ROCDL::mfma_i32_32x32x8i8,
ROCDL::mfma_i32_4x4x4i8
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// ROCDL::BarrierOp definitions
//===----------------------------------------------------------------------===//

BarrierOpAdaptor::BarrierOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BarrierOpAdaptor::BarrierOpAdaptor(BarrierOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BarrierOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BarrierOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BarrierOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BarrierOp::getOperationName() {
  return "rocdl.barrier";
}

std::pair<unsigned, unsigned> BarrierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BarrierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BarrierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BarrierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BarrierOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void BarrierOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BarrierOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BarrierOp::verify() {
  if (failed(BarrierOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult BarrierOp::parse(OpAsmParser &parser, OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  return success();
}

void BarrierOp::print(OpAsmPrinter &p) {
  p << "rocdl.barrier";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// ROCDL::BlockDimXOp definitions
//===----------------------------------------------------------------------===//

BlockDimXOpAdaptor::BlockDimXOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockDimXOpAdaptor::BlockDimXOpAdaptor(BlockDimXOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockDimXOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockDimXOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BlockDimXOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BlockDimXOp::getOperationName() {
  return "rocdl.workgroup.dim.x";
}

std::pair<unsigned, unsigned> BlockDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BlockDimXOp::res() {
  return *getODSResults(0).begin();
}

void BlockDimXOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void BlockDimXOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimXOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockDimXOp::verify() {
  if (failed(BlockDimXOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult BlockDimXOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void BlockDimXOp::print(OpAsmPrinter &p) {
  p << "rocdl.workgroup.dim.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockDimXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::BlockDimYOp definitions
//===----------------------------------------------------------------------===//

BlockDimYOpAdaptor::BlockDimYOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockDimYOpAdaptor::BlockDimYOpAdaptor(BlockDimYOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockDimYOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockDimYOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BlockDimYOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BlockDimYOp::getOperationName() {
  return "rocdl.workgroup.dim.y";
}

std::pair<unsigned, unsigned> BlockDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BlockDimYOp::res() {
  return *getODSResults(0).begin();
}

void BlockDimYOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void BlockDimYOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimYOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockDimYOp::verify() {
  if (failed(BlockDimYOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult BlockDimYOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void BlockDimYOp::print(OpAsmPrinter &p) {
  p << "rocdl.workgroup.dim.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockDimYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::BlockDimZOp definitions
//===----------------------------------------------------------------------===//

BlockDimZOpAdaptor::BlockDimZOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockDimZOpAdaptor::BlockDimZOpAdaptor(BlockDimZOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockDimZOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockDimZOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BlockDimZOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BlockDimZOp::getOperationName() {
  return "rocdl.workgroup.dim.z";
}

std::pair<unsigned, unsigned> BlockDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BlockDimZOp::res() {
  return *getODSResults(0).begin();
}

void BlockDimZOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void BlockDimZOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimZOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockDimZOp::verify() {
  if (failed(BlockDimZOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult BlockDimZOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void BlockDimZOp::print(OpAsmPrinter &p) {
  p << "rocdl.workgroup.dim.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockDimZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::BlockIdXOp definitions
//===----------------------------------------------------------------------===//

BlockIdXOpAdaptor::BlockIdXOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockIdXOpAdaptor::BlockIdXOpAdaptor(BlockIdXOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockIdXOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockIdXOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BlockIdXOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BlockIdXOp::getOperationName() {
  return "rocdl.workgroup.id.x";
}

std::pair<unsigned, unsigned> BlockIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BlockIdXOp::res() {
  return *getODSResults(0).begin();
}

void BlockIdXOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void BlockIdXOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdXOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockIdXOp::verify() {
  if (failed(BlockIdXOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult BlockIdXOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void BlockIdXOp::print(OpAsmPrinter &p) {
  p << "rocdl.workgroup.id.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockIdXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::BlockIdYOp definitions
//===----------------------------------------------------------------------===//

BlockIdYOpAdaptor::BlockIdYOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockIdYOpAdaptor::BlockIdYOpAdaptor(BlockIdYOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockIdYOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockIdYOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BlockIdYOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BlockIdYOp::getOperationName() {
  return "rocdl.workgroup.id.y";
}

std::pair<unsigned, unsigned> BlockIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BlockIdYOp::res() {
  return *getODSResults(0).begin();
}

void BlockIdYOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void BlockIdYOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdYOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockIdYOp::verify() {
  if (failed(BlockIdYOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult BlockIdYOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void BlockIdYOp::print(OpAsmPrinter &p) {
  p << "rocdl.workgroup.id.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockIdYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::BlockIdZOp definitions
//===----------------------------------------------------------------------===//

BlockIdZOpAdaptor::BlockIdZOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockIdZOpAdaptor::BlockIdZOpAdaptor(BlockIdZOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockIdZOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockIdZOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BlockIdZOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BlockIdZOp::getOperationName() {
  return "rocdl.workgroup.id.z";
}

std::pair<unsigned, unsigned> BlockIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BlockIdZOp::res() {
  return *getODSResults(0).begin();
}

void BlockIdZOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void BlockIdZOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdZOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockIdZOp::verify() {
  if (failed(BlockIdZOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult BlockIdZOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void BlockIdZOp::print(OpAsmPrinter &p) {
  p << "rocdl.workgroup.id.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockIdZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::GridDimXOp definitions
//===----------------------------------------------------------------------===//

GridDimXOpAdaptor::GridDimXOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GridDimXOpAdaptor::GridDimXOpAdaptor(GridDimXOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GridDimXOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GridDimXOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult GridDimXOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GridDimXOp::getOperationName() {
  return "rocdl.grid.dim.x";
}

std::pair<unsigned, unsigned> GridDimXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GridDimXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GridDimXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value GridDimXOp::res() {
  return *getODSResults(0).begin();
}

void GridDimXOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void GridDimXOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimXOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult GridDimXOp::verify() {
  if (failed(GridDimXOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult GridDimXOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void GridDimXOp::print(OpAsmPrinter &p) {
  p << "rocdl.grid.dim.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void GridDimXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::GridDimYOp definitions
//===----------------------------------------------------------------------===//

GridDimYOpAdaptor::GridDimYOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GridDimYOpAdaptor::GridDimYOpAdaptor(GridDimYOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GridDimYOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GridDimYOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult GridDimYOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GridDimYOp::getOperationName() {
  return "rocdl.grid.dim.y";
}

std::pair<unsigned, unsigned> GridDimYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GridDimYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GridDimYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value GridDimYOp::res() {
  return *getODSResults(0).begin();
}

void GridDimYOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void GridDimYOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimYOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult GridDimYOp::verify() {
  if (failed(GridDimYOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult GridDimYOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void GridDimYOp::print(OpAsmPrinter &p) {
  p << "rocdl.grid.dim.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void GridDimYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::GridDimZOp definitions
//===----------------------------------------------------------------------===//

GridDimZOpAdaptor::GridDimZOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GridDimZOpAdaptor::GridDimZOpAdaptor(GridDimZOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GridDimZOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GridDimZOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult GridDimZOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GridDimZOp::getOperationName() {
  return "rocdl.grid.dim.z";
}

std::pair<unsigned, unsigned> GridDimZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GridDimZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GridDimZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value GridDimZOp::res() {
  return *getODSResults(0).begin();
}

void GridDimZOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void GridDimZOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimZOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult GridDimZOp::verify() {
  if (failed(GridDimZOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult GridDimZOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void GridDimZOp::print(OpAsmPrinter &p) {
  p << "rocdl.grid.dim.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void GridDimZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::MubufLoadOp definitions
//===----------------------------------------------------------------------===//

MubufLoadOpAdaptor::MubufLoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MubufLoadOpAdaptor::MubufLoadOpAdaptor(MubufLoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MubufLoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MubufLoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MubufLoadOpAdaptor::rsrc() {
  return *getODSOperands(0).begin();
}

Value MubufLoadOpAdaptor::vindex() {
  return *getODSOperands(1).begin();
}

Value MubufLoadOpAdaptor::offset() {
  return *getODSOperands(2).begin();
}

Value MubufLoadOpAdaptor::glc() {
  return *getODSOperands(3).begin();
}

Value MubufLoadOpAdaptor::slc() {
  return *getODSOperands(4).begin();
}

LogicalResult MubufLoadOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MubufLoadOp::getOperationName() {
  return "rocdl.buffer.load";
}

std::pair<unsigned, unsigned> MubufLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MubufLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MubufLoadOp::rsrc() {
  return *getODSOperands(0).begin();
}

Value MubufLoadOp::vindex() {
  return *getODSOperands(1).begin();
}

Value MubufLoadOp::offset() {
  return *getODSOperands(2).begin();
}

Value MubufLoadOp::glc() {
  return *getODSOperands(3).begin();
}

Value MubufLoadOp::slc() {
  return *getODSOperands(4).begin();
}

::mlir::MutableOperandRange MubufLoadOp::rsrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufLoadOp::vindexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufLoadOp::offsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufLoadOp::glcMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufLoadOp::slcMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MubufLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MubufLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MubufLoadOp::res() {
  return *getODSResults(0).begin();
}

void MubufLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value rsrc, Value vindex, Value offset, Value glc, Value slc) {
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
  odsState.addTypes(res);
}

void MubufLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value rsrc, Value vindex, Value offset, Value glc, Value slc) {
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MubufLoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult MubufLoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLMubufLoadOp(parser, result);
}

void MubufLoadOp::print(OpAsmPrinter &p) {
  Operation *op = this->getOperation();
    p << op->getName() << " " << op->getOperands()
      << " : " << op->getResultTypes();
}

LogicalResult MubufLoadOp::verify() {
  if (failed(MubufLoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (Value v : valueGroup4) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::MubufStoreOp definitions
//===----------------------------------------------------------------------===//

MubufStoreOpAdaptor::MubufStoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MubufStoreOpAdaptor::MubufStoreOpAdaptor(MubufStoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MubufStoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MubufStoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MubufStoreOpAdaptor::vdata() {
  return *getODSOperands(0).begin();
}

Value MubufStoreOpAdaptor::rsrc() {
  return *getODSOperands(1).begin();
}

Value MubufStoreOpAdaptor::vindex() {
  return *getODSOperands(2).begin();
}

Value MubufStoreOpAdaptor::offset() {
  return *getODSOperands(3).begin();
}

Value MubufStoreOpAdaptor::glc() {
  return *getODSOperands(4).begin();
}

Value MubufStoreOpAdaptor::slc() {
  return *getODSOperands(5).begin();
}

LogicalResult MubufStoreOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MubufStoreOp::getOperationName() {
  return "rocdl.buffer.store";
}

std::pair<unsigned, unsigned> MubufStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MubufStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MubufStoreOp::vdata() {
  return *getODSOperands(0).begin();
}

Value MubufStoreOp::rsrc() {
  return *getODSOperands(1).begin();
}

Value MubufStoreOp::vindex() {
  return *getODSOperands(2).begin();
}

Value MubufStoreOp::offset() {
  return *getODSOperands(3).begin();
}

Value MubufStoreOp::glc() {
  return *getODSOperands(4).begin();
}

Value MubufStoreOp::slc() {
  return *getODSOperands(5).begin();
}

::mlir::MutableOperandRange MubufStoreOp::vdataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufStoreOp::rsrcMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufStoreOp::vindexMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufStoreOp::offsetMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufStoreOp::glcMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MubufStoreOp::slcMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MubufStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MubufStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MubufStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value vdata, Value rsrc, Value vindex, Value offset, Value glc, Value slc) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
}

void MubufStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vdata, Value rsrc, Value vindex, Value offset, Value glc, Value slc) {
  odsState.addOperands(vdata);
  odsState.addOperands(rsrc);
  odsState.addOperands(vindex);
  odsState.addOperands(offset);
  odsState.addOperands(glc);
  odsState.addOperands(slc);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MubufStoreOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 6u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult MubufStoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseROCDLMubufStoreOp(parser, result);
}

void MubufStoreOp::print(OpAsmPrinter &p) {
  Operation *op = this->getOperation();
    p << op->getName() << " " << op->getOperands()
      << " : " << vdata().getType();
}

LogicalResult MubufStoreOp::verify() {
  if (failed(MubufStoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (Value v : valueGroup4) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (Value v : valueGroup5) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// ROCDL::ThreadIdXOp definitions
//===----------------------------------------------------------------------===//

ThreadIdXOpAdaptor::ThreadIdXOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ThreadIdXOpAdaptor::ThreadIdXOpAdaptor(ThreadIdXOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ThreadIdXOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ThreadIdXOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult ThreadIdXOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ThreadIdXOp::getOperationName() {
  return "rocdl.workitem.id.x";
}

std::pair<unsigned, unsigned> ThreadIdXOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ThreadIdXOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdXOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ThreadIdXOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ThreadIdXOp::res() {
  return *getODSResults(0).begin();
}

void ThreadIdXOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void ThreadIdXOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdXOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ThreadIdXOp::verify() {
  if (failed(ThreadIdXOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult ThreadIdXOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void ThreadIdXOp::print(OpAsmPrinter &p) {
  p << "rocdl.workitem.id.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void ThreadIdXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::ThreadIdYOp definitions
//===----------------------------------------------------------------------===//

ThreadIdYOpAdaptor::ThreadIdYOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ThreadIdYOpAdaptor::ThreadIdYOpAdaptor(ThreadIdYOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ThreadIdYOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ThreadIdYOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult ThreadIdYOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ThreadIdYOp::getOperationName() {
  return "rocdl.workitem.id.y";
}

std::pair<unsigned, unsigned> ThreadIdYOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ThreadIdYOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdYOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ThreadIdYOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ThreadIdYOp::res() {
  return *getODSResults(0).begin();
}

void ThreadIdYOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void ThreadIdYOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdYOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ThreadIdYOp::verify() {
  if (failed(ThreadIdYOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult ThreadIdYOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void ThreadIdYOp::print(OpAsmPrinter &p) {
  p << "rocdl.workitem.id.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void ThreadIdYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::ThreadIdZOp definitions
//===----------------------------------------------------------------------===//

ThreadIdZOpAdaptor::ThreadIdZOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ThreadIdZOpAdaptor::ThreadIdZOpAdaptor(ThreadIdZOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ThreadIdZOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ThreadIdZOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult ThreadIdZOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ThreadIdZOp::getOperationName() {
  return "rocdl.workitem.id.z";
}

std::pair<unsigned, unsigned> ThreadIdZOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ThreadIdZOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdZOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ThreadIdZOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ThreadIdZOp::res() {
  return *getODSResults(0).begin();
}

void ThreadIdZOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void ThreadIdZOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdZOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ThreadIdZOp::verify() {
  if (failed(ThreadIdZOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult ThreadIdZOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void ThreadIdZOp::print(OpAsmPrinter &p) {
  p << "rocdl.workitem.id.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void ThreadIdZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_16x16x16f16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_16x16x16f16Adaptor::mfma_f32_16x16x16f16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_16x16x16f16Adaptor::mfma_f32_16x16x16f16Adaptor(mfma_f32_16x16x16f16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_16x16x16f16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_16x16x16f16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_16x16x16f16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_16x16x16f16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_16x16x16f16::getOperationName() {
  return "rocdl.mfma.f32.16x16x16f16";
}

std::pair<unsigned, unsigned> mfma_f32_16x16x16f16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_16x16x16f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_16x16x16f16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x16f16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_16x16x16f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_16x16x16f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_16x16x16f16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_16x16x16f16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x16f16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_16x16x16f16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_16x16x16f16::verify() {
  if (failed(mfma_f32_16x16x16f16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_16x16x16f16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_16x16x16f16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.16x16x16f16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_16x16x1f32 definitions
//===----------------------------------------------------------------------===//

mfma_f32_16x16x1f32Adaptor::mfma_f32_16x16x1f32Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_16x16x1f32Adaptor::mfma_f32_16x16x1f32Adaptor(mfma_f32_16x16x1f32& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_16x16x1f32Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_16x16x1f32Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_16x16x1f32Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_16x16x1f32Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_16x16x1f32::getOperationName() {
  return "rocdl.mfma.f32.16x16x1f32";
}

std::pair<unsigned, unsigned> mfma_f32_16x16x1f32::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_16x16x1f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_16x16x1f32::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x1f32::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_16x16x1f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_16x16x1f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_16x16x1f32::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_16x16x1f32::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x1f32::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_16x16x1f32::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_16x16x1f32::verify() {
  if (failed(mfma_f32_16x16x1f32Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_16x16x1f32::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_16x16x1f32::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.16x16x1f32";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_16x16x2bf16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_16x16x2bf16Adaptor::mfma_f32_16x16x2bf16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_16x16x2bf16Adaptor::mfma_f32_16x16x2bf16Adaptor(mfma_f32_16x16x2bf16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_16x16x2bf16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_16x16x2bf16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_16x16x2bf16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_16x16x2bf16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_16x16x2bf16::getOperationName() {
  return "rocdl.mfma.f32.16x16x2bf16";
}

std::pair<unsigned, unsigned> mfma_f32_16x16x2bf16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_16x16x2bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_16x16x2bf16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x2bf16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_16x16x2bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_16x16x2bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_16x16x2bf16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_16x16x2bf16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x2bf16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_16x16x2bf16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_16x16x2bf16::verify() {
  if (failed(mfma_f32_16x16x2bf16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_16x16x2bf16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_16x16x2bf16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.16x16x2bf16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_16x16x4f16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_16x16x4f16Adaptor::mfma_f32_16x16x4f16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_16x16x4f16Adaptor::mfma_f32_16x16x4f16Adaptor(mfma_f32_16x16x4f16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_16x16x4f16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_16x16x4f16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_16x16x4f16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_16x16x4f16::getOperationName() {
  return "rocdl.mfma.f32.16x16x4f16";
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_16x16x4f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_16x16x4f16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x4f16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_16x16x4f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_16x16x4f16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_16x16x4f16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x4f16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_16x16x4f16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_16x16x4f16::verify() {
  if (failed(mfma_f32_16x16x4f16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_16x16x4f16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_16x16x4f16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.16x16x4f16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_16x16x4f32 definitions
//===----------------------------------------------------------------------===//

mfma_f32_16x16x4f32Adaptor::mfma_f32_16x16x4f32Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_16x16x4f32Adaptor::mfma_f32_16x16x4f32Adaptor(mfma_f32_16x16x4f32& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f32Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_16x16x4f32Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_16x16x4f32Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_16x16x4f32Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_16x16x4f32::getOperationName() {
  return "rocdl.mfma.f32.16x16x4f32";
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f32::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_16x16x4f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_16x16x4f32::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x4f32::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_16x16x4f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_16x16x4f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_16x16x4f32::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_16x16x4f32::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x4f32::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_16x16x4f32::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_16x16x4f32::verify() {
  if (failed(mfma_f32_16x16x4f32Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_16x16x4f32::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_16x16x4f32::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.16x16x4f32";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_16x16x8bf16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_16x16x8bf16Adaptor::mfma_f32_16x16x8bf16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_16x16x8bf16Adaptor::mfma_f32_16x16x8bf16Adaptor(mfma_f32_16x16x8bf16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_16x16x8bf16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_16x16x8bf16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_16x16x8bf16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_16x16x8bf16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_16x16x8bf16::getOperationName() {
  return "rocdl.mfma.f32.16x16x8bf16";
}

std::pair<unsigned, unsigned> mfma_f32_16x16x8bf16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_16x16x8bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_16x16x8bf16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_16x16x8bf16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_16x16x8bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_16x16x8bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_16x16x8bf16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_16x16x8bf16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_16x16x8bf16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_16x16x8bf16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_16x16x8bf16::verify() {
  if (failed(mfma_f32_16x16x8bf16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_16x16x8bf16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_16x16x8bf16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.16x16x8bf16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_32x32x1f32 definitions
//===----------------------------------------------------------------------===//

mfma_f32_32x32x1f32Adaptor::mfma_f32_32x32x1f32Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_32x32x1f32Adaptor::mfma_f32_32x32x1f32Adaptor(mfma_f32_32x32x1f32& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_32x32x1f32Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_32x32x1f32Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_32x32x1f32Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_32x32x1f32Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_32x32x1f32::getOperationName() {
  return "rocdl.mfma.f32.32x32x1f32";
}

std::pair<unsigned, unsigned> mfma_f32_32x32x1f32::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_32x32x1f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_32x32x1f32::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x1f32::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_32x32x1f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_32x32x1f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_32x32x1f32::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_32x32x1f32::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x1f32::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_32x32x1f32::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_32x32x1f32::verify() {
  if (failed(mfma_f32_32x32x1f32Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_32x32x1f32::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_32x32x1f32::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.32x32x1f32";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_32x32x2bf16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_32x32x2bf16Adaptor::mfma_f32_32x32x2bf16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_32x32x2bf16Adaptor::mfma_f32_32x32x2bf16Adaptor(mfma_f32_32x32x2bf16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_32x32x2bf16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_32x32x2bf16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_32x32x2bf16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_32x32x2bf16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_32x32x2bf16::getOperationName() {
  return "rocdl.mfma.f32.32x32x2bf16";
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2bf16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_32x32x2bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_32x32x2bf16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x2bf16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_32x32x2bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_32x32x2bf16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_32x32x2bf16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x2bf16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_32x32x2bf16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_32x32x2bf16::verify() {
  if (failed(mfma_f32_32x32x2bf16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_32x32x2bf16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_32x32x2bf16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.32x32x2bf16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_32x32x2f32 definitions
//===----------------------------------------------------------------------===//

mfma_f32_32x32x2f32Adaptor::mfma_f32_32x32x2f32Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_32x32x2f32Adaptor::mfma_f32_32x32x2f32Adaptor(mfma_f32_32x32x2f32& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_32x32x2f32Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_32x32x2f32Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_32x32x2f32Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_32x32x2f32Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_32x32x2f32::getOperationName() {
  return "rocdl.mfma.f32.32x32x2f32";
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2f32::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_32x32x2f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_32x32x2f32::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x2f32::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_32x32x2f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_32x32x2f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_32x32x2f32::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_32x32x2f32::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x2f32::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_32x32x2f32::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_32x32x2f32::verify() {
  if (failed(mfma_f32_32x32x2f32Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_32x32x2f32::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_32x32x2f32::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.32x32x2f32";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_32x32x4bf16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_32x32x4bf16Adaptor::mfma_f32_32x32x4bf16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_32x32x4bf16Adaptor::mfma_f32_32x32x4bf16Adaptor(mfma_f32_32x32x4bf16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_32x32x4bf16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_32x32x4bf16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_32x32x4bf16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_32x32x4bf16::getOperationName() {
  return "rocdl.mfma.f32.32x32x4bf16";
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_32x32x4bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_32x32x4bf16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x4bf16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_32x32x4bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_32x32x4bf16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_32x32x4bf16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x4bf16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_32x32x4bf16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_32x32x4bf16::verify() {
  if (failed(mfma_f32_32x32x4bf16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_32x32x4bf16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_32x32x4bf16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.32x32x4bf16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_32x32x4f16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_32x32x4f16Adaptor::mfma_f32_32x32x4f16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_32x32x4f16Adaptor::mfma_f32_32x32x4f16Adaptor(mfma_f32_32x32x4f16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_32x32x4f16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_32x32x4f16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_32x32x4f16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_32x32x4f16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_32x32x4f16::getOperationName() {
  return "rocdl.mfma.f32.32x32x4f16";
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4f16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_32x32x4f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_32x32x4f16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x4f16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_32x32x4f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_32x32x4f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_32x32x4f16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_32x32x4f16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x4f16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_32x32x4f16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_32x32x4f16::verify() {
  if (failed(mfma_f32_32x32x4f16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_32x32x4f16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_32x32x4f16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.32x32x4f16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_32x32x8f16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_32x32x8f16Adaptor::mfma_f32_32x32x8f16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_32x32x8f16Adaptor::mfma_f32_32x32x8f16Adaptor(mfma_f32_32x32x8f16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_32x32x8f16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_32x32x8f16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_32x32x8f16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_32x32x8f16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_32x32x8f16::getOperationName() {
  return "rocdl.mfma.f32.32x32x8f16";
}

std::pair<unsigned, unsigned> mfma_f32_32x32x8f16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_32x32x8f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_32x32x8f16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_32x32x8f16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_32x32x8f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_32x32x8f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_32x32x8f16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_32x32x8f16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_32x32x8f16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_32x32x8f16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_32x32x8f16::verify() {
  if (failed(mfma_f32_32x32x8f16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_32x32x8f16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_32x32x8f16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.32x32x8f16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_4x4x1f32 definitions
//===----------------------------------------------------------------------===//

mfma_f32_4x4x1f32Adaptor::mfma_f32_4x4x1f32Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_4x4x1f32Adaptor::mfma_f32_4x4x1f32Adaptor(mfma_f32_4x4x1f32& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_4x4x1f32Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_4x4x1f32Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_4x4x1f32Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_4x4x1f32Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_4x4x1f32::getOperationName() {
  return "rocdl.mfma.f32.4x4x1f32";
}

std::pair<unsigned, unsigned> mfma_f32_4x4x1f32::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_4x4x1f32::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_4x4x1f32::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_4x4x1f32::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_4x4x1f32::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_4x4x1f32::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_4x4x1f32::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_4x4x1f32::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_4x4x1f32::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_4x4x1f32::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_4x4x1f32::verify() {
  if (failed(mfma_f32_4x4x1f32Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_4x4x1f32::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_4x4x1f32::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.4x4x1f32";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_4x4x2bf16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_4x4x2bf16Adaptor::mfma_f32_4x4x2bf16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_4x4x2bf16Adaptor::mfma_f32_4x4x2bf16Adaptor(mfma_f32_4x4x2bf16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_4x4x2bf16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_4x4x2bf16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_4x4x2bf16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_4x4x2bf16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_4x4x2bf16::getOperationName() {
  return "rocdl.mfma.f32.4x4x2bf16";
}

std::pair<unsigned, unsigned> mfma_f32_4x4x2bf16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_4x4x2bf16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_4x4x2bf16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_4x4x2bf16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_4x4x2bf16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_4x4x2bf16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_4x4x2bf16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_4x4x2bf16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_4x4x2bf16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_4x4x2bf16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_4x4x2bf16::verify() {
  if (failed(mfma_f32_4x4x2bf16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_4x4x2bf16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_4x4x2bf16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.4x4x2bf16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_f32_4x4x4f16 definitions
//===----------------------------------------------------------------------===//

mfma_f32_4x4x4f16Adaptor::mfma_f32_4x4x4f16Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_f32_4x4x4f16Adaptor::mfma_f32_4x4x4f16Adaptor(mfma_f32_4x4x4f16& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_f32_4x4x4f16Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_f32_4x4x4f16Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_f32_4x4x4f16Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_f32_4x4x4f16Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_f32_4x4x4f16::getOperationName() {
  return "rocdl.mfma.f32.4x4x4f16";
}

std::pair<unsigned, unsigned> mfma_f32_4x4x4f16::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_f32_4x4x4f16::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_f32_4x4x4f16::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_f32_4x4x4f16::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_f32_4x4x4f16::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_f32_4x4x4f16::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_f32_4x4x4f16::res() {
  return *getODSResults(0).begin();
}

void mfma_f32_4x4x4f16::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_f32_4x4x4f16::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_f32_4x4x4f16::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_f32_4x4x4f16::verify() {
  if (failed(mfma_f32_4x4x4f16Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_f32_4x4x4f16::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_f32_4x4x4f16::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.f32.4x4x4f16";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_i32_16x16x16i8 definitions
//===----------------------------------------------------------------------===//

mfma_i32_16x16x16i8Adaptor::mfma_i32_16x16x16i8Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_i32_16x16x16i8Adaptor::mfma_i32_16x16x16i8Adaptor(mfma_i32_16x16x16i8& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_i32_16x16x16i8Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_i32_16x16x16i8Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_i32_16x16x16i8Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_i32_16x16x16i8Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_i32_16x16x16i8::getOperationName() {
  return "rocdl.mfma.i32.16x16x16i8";
}

std::pair<unsigned, unsigned> mfma_i32_16x16x16i8::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_i32_16x16x16i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_i32_16x16x16i8::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_16x16x16i8::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_i32_16x16x16i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_i32_16x16x16i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_i32_16x16x16i8::res() {
  return *getODSResults(0).begin();
}

void mfma_i32_16x16x16i8::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_16x16x16i8::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_i32_16x16x16i8::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_i32_16x16x16i8::verify() {
  if (failed(mfma_i32_16x16x16i8Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_i32_16x16x16i8::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_i32_16x16x16i8::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.i32.16x16x16i8";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_i32_16x16x4i8 definitions
//===----------------------------------------------------------------------===//

mfma_i32_16x16x4i8Adaptor::mfma_i32_16x16x4i8Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_i32_16x16x4i8Adaptor::mfma_i32_16x16x4i8Adaptor(mfma_i32_16x16x4i8& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_i32_16x16x4i8Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_i32_16x16x4i8Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_i32_16x16x4i8Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_i32_16x16x4i8Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_i32_16x16x4i8::getOperationName() {
  return "rocdl.mfma.i32.16x16x4i8";
}

std::pair<unsigned, unsigned> mfma_i32_16x16x4i8::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_i32_16x16x4i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_i32_16x16x4i8::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_16x16x4i8::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_i32_16x16x4i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_i32_16x16x4i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_i32_16x16x4i8::res() {
  return *getODSResults(0).begin();
}

void mfma_i32_16x16x4i8::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_16x16x4i8::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_i32_16x16x4i8::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_i32_16x16x4i8::verify() {
  if (failed(mfma_i32_16x16x4i8Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_i32_16x16x4i8::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_i32_16x16x4i8::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.i32.16x16x4i8";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_i32_32x32x4i8 definitions
//===----------------------------------------------------------------------===//

mfma_i32_32x32x4i8Adaptor::mfma_i32_32x32x4i8Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_i32_32x32x4i8Adaptor::mfma_i32_32x32x4i8Adaptor(mfma_i32_32x32x4i8& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_i32_32x32x4i8Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_i32_32x32x4i8Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_i32_32x32x4i8Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_i32_32x32x4i8Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_i32_32x32x4i8::getOperationName() {
  return "rocdl.mfma.i32.32x32x4i8";
}

std::pair<unsigned, unsigned> mfma_i32_32x32x4i8::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_i32_32x32x4i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_i32_32x32x4i8::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_32x32x4i8::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_i32_32x32x4i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_i32_32x32x4i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_i32_32x32x4i8::res() {
  return *getODSResults(0).begin();
}

void mfma_i32_32x32x4i8::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_32x32x4i8::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_i32_32x32x4i8::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_i32_32x32x4i8::verify() {
  if (failed(mfma_i32_32x32x4i8Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_i32_32x32x4i8::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_i32_32x32x4i8::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.i32.32x32x4i8";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_i32_32x32x8i8 definitions
//===----------------------------------------------------------------------===//

mfma_i32_32x32x8i8Adaptor::mfma_i32_32x32x8i8Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_i32_32x32x8i8Adaptor::mfma_i32_32x32x8i8Adaptor(mfma_i32_32x32x8i8& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_i32_32x32x8i8Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_i32_32x32x8i8Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_i32_32x32x8i8Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_i32_32x32x8i8Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_i32_32x32x8i8::getOperationName() {
  return "rocdl.mfma.i32.32x32x8i8";
}

std::pair<unsigned, unsigned> mfma_i32_32x32x8i8::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_i32_32x32x8i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_i32_32x32x8i8::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_32x32x8i8::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_i32_32x32x8i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_i32_32x32x8i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_i32_32x32x8i8::res() {
  return *getODSResults(0).begin();
}

void mfma_i32_32x32x8i8::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_32x32x8i8::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_i32_32x32x8i8::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_i32_32x32x8i8::verify() {
  if (failed(mfma_i32_32x32x8i8Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_i32_32x32x8i8::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_i32_32x32x8i8::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.i32.32x32x8i8";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// ROCDL::mfma_i32_4x4x4i8 definitions
//===----------------------------------------------------------------------===//

mfma_i32_4x4x4i8Adaptor::mfma_i32_4x4x4i8Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

mfma_i32_4x4x4i8Adaptor::mfma_i32_4x4x4i8Adaptor(mfma_i32_4x4x4i8& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> mfma_i32_4x4x4i8Adaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange mfma_i32_4x4x4i8Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange mfma_i32_4x4x4i8Adaptor::args() {
  return getODSOperands(0);
}

LogicalResult mfma_i32_4x4x4i8Adaptor::verify(Location loc) {
  return success();
}

StringRef mfma_i32_4x4x4i8::getOperationName() {
  return "rocdl.mfma.i32.4x4x4i8";
}

std::pair<unsigned, unsigned> mfma_i32_4x4x4i8::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range mfma_i32_4x4x4i8::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range mfma_i32_4x4x4i8::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange mfma_i32_4x4x4i8::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> mfma_i32_4x4x4i8::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range mfma_i32_4x4x4i8::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value mfma_i32_4x4x4i8::res() {
  return *getODSResults(0).begin();
}

void mfma_i32_4x4x4i8::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void mfma_i32_4x4x4i8::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void mfma_i32_4x4x4i8::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult mfma_i32_4x4x4i8::verify() {
  if (failed(mfma_i32_4x4x4i8Adaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("operand #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult mfma_i32_4x4x4i8::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> argsOperands;
  llvm::SMLoc argsOperandsLoc = parser.getCurrentLocation();
  (void)argsOperandsLoc;
  ArrayRef<Type> argsTypes;
  ArrayRef<Type> resTypes;

  if (parser.parseOperandList(argsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType args__res_functionType;
  if (parser.parseType(args__res_functionType))
    return failure();
  argsTypes = args__res_functionType.getInputs();
  resTypes = args__res_functionType.getResults();
  result.addTypes(resTypes);
  if (parser.resolveOperands(argsOperands, argsTypes, argsOperandsLoc, result.operands))
    return failure();
  return success();
}

void mfma_i32_4x4x4i8::print(OpAsmPrinter &p) {
  p << "rocdl.mfma.i32.4x4x4i8";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


#endif  // GET_OP_CLASSES

