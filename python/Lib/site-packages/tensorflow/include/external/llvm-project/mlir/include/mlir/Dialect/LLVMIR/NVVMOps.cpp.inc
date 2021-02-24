/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

NVVM::Barrier0Op,
NVVM::BlockDimXOp,
NVVM::BlockDimYOp,
NVVM::BlockDimZOp,
NVVM::BlockIdXOp,
NVVM::BlockIdYOp,
NVVM::BlockIdZOp,
NVVM::GridDimXOp,
NVVM::GridDimYOp,
NVVM::GridDimZOp,
NVVM::LaneIdOp,
NVVM::MmaOp,
NVVM::ShflBflyOp,
NVVM::ThreadIdXOp,
NVVM::ThreadIdYOp,
NVVM::ThreadIdZOp,
NVVM::VoteBallotOp,
NVVM::WarpSizeOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// NVVM::Barrier0Op definitions
//===----------------------------------------------------------------------===//

Barrier0OpAdaptor::Barrier0OpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

Barrier0OpAdaptor::Barrier0OpAdaptor(Barrier0Op& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> Barrier0OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange Barrier0OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult Barrier0OpAdaptor::verify(Location loc) {
  return success();
}

StringRef Barrier0Op::getOperationName() {
  return "nvvm.barrier0";
}

std::pair<unsigned, unsigned> Barrier0Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Barrier0Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> Barrier0Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range Barrier0Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Barrier0Op::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void Barrier0Op::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Barrier0Op::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult Barrier0Op::verify() {
  if (failed(Barrier0OpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult Barrier0Op::parse(OpAsmParser &parser, OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  return success();
}

void Barrier0Op::print(OpAsmPrinter &p) {
  p << "nvvm.barrier0";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// NVVM::BlockDimXOp definitions
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
  return "nvvm.read.ptx.sreg.ntid.x";
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
  p << "nvvm.read.ptx.sreg.ntid.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockDimXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::BlockDimYOp definitions
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
  return "nvvm.read.ptx.sreg.ntid.y";
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
  p << "nvvm.read.ptx.sreg.ntid.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockDimYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::BlockDimZOp definitions
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
  return "nvvm.read.ptx.sreg.ntid.z";
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
  p << "nvvm.read.ptx.sreg.ntid.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockDimZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::BlockIdXOp definitions
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
  return "nvvm.read.ptx.sreg.ctaid.x";
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
  p << "nvvm.read.ptx.sreg.ctaid.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockIdXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::BlockIdYOp definitions
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
  return "nvvm.read.ptx.sreg.ctaid.y";
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
  p << "nvvm.read.ptx.sreg.ctaid.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockIdYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::BlockIdZOp definitions
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
  return "nvvm.read.ptx.sreg.ctaid.z";
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
  p << "nvvm.read.ptx.sreg.ctaid.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void BlockIdZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::GridDimXOp definitions
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
  return "nvvm.read.ptx.sreg.nctaid.x";
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
  p << "nvvm.read.ptx.sreg.nctaid.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void GridDimXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::GridDimYOp definitions
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
  return "nvvm.read.ptx.sreg.nctaid.y";
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
  p << "nvvm.read.ptx.sreg.nctaid.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void GridDimYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::GridDimZOp definitions
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
  return "nvvm.read.ptx.sreg.nctaid.z";
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
  p << "nvvm.read.ptx.sreg.nctaid.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void GridDimZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::LaneIdOp definitions
//===----------------------------------------------------------------------===//

LaneIdOpAdaptor::LaneIdOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LaneIdOpAdaptor::LaneIdOpAdaptor(LaneIdOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LaneIdOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange LaneIdOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult LaneIdOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LaneIdOp::getOperationName() {
  return "nvvm.read.ptx.sreg.laneid";
}

std::pair<unsigned, unsigned> LaneIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range LaneIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> LaneIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LaneIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value LaneIdOp::res() {
  return *getODSResults(0).begin();
}

void LaneIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void LaneIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LaneIdOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult LaneIdOp::verify() {
  if (failed(LaneIdOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult LaneIdOp::parse(OpAsmParser &parser, OperationState &result) {
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

void LaneIdOp::print(OpAsmPrinter &p) {
  p << "nvvm.read.ptx.sreg.laneid";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void LaneIdOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::MmaOp definitions
//===----------------------------------------------------------------------===//

MmaOpAdaptor::MmaOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MmaOpAdaptor::MmaOpAdaptor(MmaOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MmaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange MmaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange MmaOpAdaptor::args() {
  return getODSOperands(0);
}

LogicalResult MmaOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MmaOp::getOperationName() {
  return "nvvm.mma.sync";
}

std::pair<unsigned, unsigned> MmaOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range MmaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range MmaOp::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MmaOp::argsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MmaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MmaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MmaOp::res() {
  return *getODSResults(0).begin();
}

void MmaOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args) {
  odsState.addOperands(args);
  odsState.addTypes(res);
}

void MmaOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MmaOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MmaOp::verify() {
  if (failed(MmaOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verify(*this);
}

ParseResult MmaOp::parse(OpAsmParser &parser, OperationState &result) {
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

void MmaOp::print(OpAsmPrinter &p) {
  p << "nvvm.mma.sync";
  p << " ";
  p << args();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(args().getTypes(), ArrayRef<Type>(res().getType()));
}


//===----------------------------------------------------------------------===//
// NVVM::ShflBflyOp definitions
//===----------------------------------------------------------------------===//

ShflBflyOpAdaptor::ShflBflyOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShflBflyOpAdaptor::ShflBflyOpAdaptor(ShflBflyOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShflBflyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ShflBflyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ShflBflyOpAdaptor::dst() {
  return *getODSOperands(0).begin();
}

Value ShflBflyOpAdaptor::val() {
  return *getODSOperands(1).begin();
}

Value ShflBflyOpAdaptor::offset() {
  return *getODSOperands(2).begin();
}

Value ShflBflyOpAdaptor::mask_and_clamp() {
  return *getODSOperands(3).begin();
}

UnitAttr ShflBflyOpAdaptor::return_value_and_is_valid() {
  assert(odsAttrs && "no attributes when constructing adapter");
  UnitAttr attr = odsAttrs.get("return_value_and_is_valid").dyn_cast_or_null<UnitAttr>();
  return attr;
}

LogicalResult ShflBflyOpAdaptor::verify(Location loc) {
  {
  auto tblgen_return_value_and_is_valid = odsAttrs.get("return_value_and_is_valid");
  if (tblgen_return_value_and_is_valid) {
    if (!((tblgen_return_value_and_is_valid.isa<UnitAttr>()))) return emitError(loc, "'nvvm.shfl.sync.bfly' op ""attribute 'return_value_and_is_valid' failed to satisfy constraint: unit attribute");
  }
  }
  return success();
}

StringRef ShflBflyOp::getOperationName() {
  return "nvvm.shfl.sync.bfly";
}

std::pair<unsigned, unsigned> ShflBflyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShflBflyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShflBflyOp::dst() {
  return *getODSOperands(0).begin();
}

Value ShflBflyOp::val() {
  return *getODSOperands(1).begin();
}

Value ShflBflyOp::offset() {
  return *getODSOperands(2).begin();
}

Value ShflBflyOp::mask_and_clamp() {
  return *getODSOperands(3).begin();
}

::mlir::MutableOperandRange ShflBflyOp::dstMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShflBflyOp::valMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShflBflyOp::offsetMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShflBflyOp::mask_and_clampMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShflBflyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ShflBflyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ShflBflyOp::res() {
  return *getODSResults(0).begin();
}

UnitAttr ShflBflyOp::return_value_and_is_validAttr() {
  return this->getAttr("return_value_and_is_valid").dyn_cast_or_null<UnitAttr>();
}

Optional<bool> ShflBflyOp::return_value_and_is_valid() {
  auto attr = return_value_and_is_validAttr();
  return attr ? Optional<bool>(attr != nullptr) : (llvm::None);
}

void ShflBflyOp::return_value_and_is_validAttr(UnitAttr attr) {
  this->getOperation()->setAttr("return_value_and_is_valid", attr);
}

void ShflBflyOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid) {
  odsState.addOperands(dst);
  odsState.addOperands(val);
  odsState.addOperands(offset);
  odsState.addOperands(mask_and_clamp);
  if (return_value_and_is_valid) {
  odsState.addAttribute("return_value_and_is_valid", return_value_and_is_valid);
  }
  odsState.addTypes(res);
}

void ShflBflyOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid) {
  odsState.addOperands(dst);
  odsState.addOperands(val);
  odsState.addOperands(offset);
  odsState.addOperands(mask_and_clamp);
  if (return_value_and_is_valid) {
  odsState.addAttribute("return_value_and_is_valid", return_value_and_is_valid);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShflBflyOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ShflBflyOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNVVMShflSyncBflyOp(parser, result);
}

void ShflBflyOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
}

LogicalResult ShflBflyOp::verify() {
  if (failed(ShflBflyOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  if (!getAttrOfType<UnitAttr>("return_value_and_is_valid"))
      return success();
    auto type = getType().cast<LLVM::LLVMType>();
    if (!type.isStructTy() || type.getStructNumElements() != 2 ||
        !type.getStructElementType(1).isIntegerTy(
            /*Bitwidth=*/1))
      return emitError("expected return type !llvm<\"{ ?, i1 }\">");
    return success();
}


//===----------------------------------------------------------------------===//
// NVVM::ThreadIdXOp definitions
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
  return "nvvm.read.ptx.sreg.tid.x";
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
  p << "nvvm.read.ptx.sreg.tid.x";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void ThreadIdXOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::ThreadIdYOp definitions
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
  return "nvvm.read.ptx.sreg.tid.y";
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
  p << "nvvm.read.ptx.sreg.tid.y";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void ThreadIdYOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::ThreadIdZOp definitions
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
  return "nvvm.read.ptx.sreg.tid.z";
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
  p << "nvvm.read.ptx.sreg.tid.z";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void ThreadIdZOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NVVM::VoteBallotOp definitions
//===----------------------------------------------------------------------===//

VoteBallotOpAdaptor::VoteBallotOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

VoteBallotOpAdaptor::VoteBallotOpAdaptor(VoteBallotOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> VoteBallotOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange VoteBallotOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value VoteBallotOpAdaptor::mask() {
  return *getODSOperands(0).begin();
}

Value VoteBallotOpAdaptor::pred() {
  return *getODSOperands(1).begin();
}

LogicalResult VoteBallotOpAdaptor::verify(Location loc) {
  return success();
}

StringRef VoteBallotOp::getOperationName() {
  return "nvvm.vote.ballot.sync";
}

std::pair<unsigned, unsigned> VoteBallotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range VoteBallotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value VoteBallotOp::mask() {
  return *getODSOperands(0).begin();
}

Value VoteBallotOp::pred() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange VoteBallotOp::maskMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange VoteBallotOp::predMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> VoteBallotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range VoteBallotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value VoteBallotOp::res() {
  return *getODSResults(0).begin();
}

void VoteBallotOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value mask, Value pred) {
  odsState.addOperands(mask);
  odsState.addOperands(pred);
  odsState.addTypes(res);
}

void VoteBallotOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value mask, Value pred) {
  odsState.addOperands(mask);
  odsState.addOperands(pred);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void VoteBallotOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult VoteBallotOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseNVVMVoteBallotOp(parser, result);
}

void VoteBallotOp::print(OpAsmPrinter &p) {
  printNVVMIntrinsicOp(p, this->getOperation());
}

LogicalResult VoteBallotOp::verify() {
  if (failed(VoteBallotOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
// NVVM::WarpSizeOp definitions
//===----------------------------------------------------------------------===//

WarpSizeOpAdaptor::WarpSizeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

WarpSizeOpAdaptor::WarpSizeOpAdaptor(WarpSizeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> WarpSizeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange WarpSizeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult WarpSizeOpAdaptor::verify(Location loc) {
  return success();
}

StringRef WarpSizeOp::getOperationName() {
  return "nvvm.read.ptx.sreg.warpsize";
}

std::pair<unsigned, unsigned> WarpSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range WarpSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> WarpSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range WarpSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value WarpSizeOp::res() {
  return *getODSResults(0).begin();
}

void WarpSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void WarpSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WarpSizeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult WarpSizeOp::verify() {
  if (failed(WarpSizeOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult WarpSizeOp::parse(OpAsmParser &parser, OperationState &result) {
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

void WarpSizeOp::print(OpAsmPrinter &p) {
  p << "nvvm.read.ptx.sreg.warpsize";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void WarpSizeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

