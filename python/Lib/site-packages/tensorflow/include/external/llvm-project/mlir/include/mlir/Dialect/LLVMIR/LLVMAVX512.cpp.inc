/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

LLVM::x86_avx512_mask_rndscale_pd_512,
LLVM::x86_avx512_mask_rndscale_ps_512,
LLVM::x86_avx512_mask_scalef_pd_512,
LLVM::x86_avx512_mask_scalef_ps_512
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_rndscale_pd_512 definitions
//===----------------------------------------------------------------------===//

x86_avx512_mask_rndscale_pd_512Adaptor::x86_avx512_mask_rndscale_pd_512Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

x86_avx512_mask_rndscale_pd_512Adaptor::x86_avx512_mask_rndscale_pd_512Adaptor(x86_avx512_mask_rndscale_pd_512& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> x86_avx512_mask_rndscale_pd_512Adaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange x86_avx512_mask_rndscale_pd_512Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult x86_avx512_mask_rndscale_pd_512Adaptor::verify(Location loc) {
  return success();
}

StringRef x86_avx512_mask_rndscale_pd_512::getOperationName() {
  return "llvm_avx512.mask.rndscale.pd.512";
}

std::pair<unsigned, unsigned> x86_avx512_mask_rndscale_pd_512::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range x86_avx512_mask_rndscale_pd_512::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_avx512_mask_rndscale_pd_512::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range x86_avx512_mask_rndscale_pd_512::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value x86_avx512_mask_rndscale_pd_512::res() {
  return *getODSResults(0).begin();
}

void x86_avx512_mask_rndscale_pd_512::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addTypes(res);
}

void x86_avx512_mask_rndscale_pd_512::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_avx512_mask_rndscale_pd_512::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult x86_avx512_mask_rndscale_pd_512::verify() {
  if (failed(x86_avx512_mask_rndscale_pd_512Adaptor(*this).verify(this->getLoc()))) return failure();
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
// LLVM::x86_avx512_mask_rndscale_ps_512 definitions
//===----------------------------------------------------------------------===//

x86_avx512_mask_rndscale_ps_512Adaptor::x86_avx512_mask_rndscale_ps_512Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

x86_avx512_mask_rndscale_ps_512Adaptor::x86_avx512_mask_rndscale_ps_512Adaptor(x86_avx512_mask_rndscale_ps_512& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> x86_avx512_mask_rndscale_ps_512Adaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange x86_avx512_mask_rndscale_ps_512Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult x86_avx512_mask_rndscale_ps_512Adaptor::verify(Location loc) {
  return success();
}

StringRef x86_avx512_mask_rndscale_ps_512::getOperationName() {
  return "llvm_avx512.mask.rndscale.ps.512";
}

std::pair<unsigned, unsigned> x86_avx512_mask_rndscale_ps_512::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range x86_avx512_mask_rndscale_ps_512::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_avx512_mask_rndscale_ps_512::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range x86_avx512_mask_rndscale_ps_512::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value x86_avx512_mask_rndscale_ps_512::res() {
  return *getODSResults(0).begin();
}

void x86_avx512_mask_rndscale_ps_512::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addTypes(res);
}

void x86_avx512_mask_rndscale_ps_512::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_avx512_mask_rndscale_ps_512::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult x86_avx512_mask_rndscale_ps_512::verify() {
  if (failed(x86_avx512_mask_rndscale_ps_512Adaptor(*this).verify(this->getLoc()))) return failure();
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
// LLVM::x86_avx512_mask_scalef_pd_512 definitions
//===----------------------------------------------------------------------===//

x86_avx512_mask_scalef_pd_512Adaptor::x86_avx512_mask_scalef_pd_512Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

x86_avx512_mask_scalef_pd_512Adaptor::x86_avx512_mask_scalef_pd_512Adaptor(x86_avx512_mask_scalef_pd_512& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> x86_avx512_mask_scalef_pd_512Adaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange x86_avx512_mask_scalef_pd_512Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult x86_avx512_mask_scalef_pd_512Adaptor::verify(Location loc) {
  return success();
}

StringRef x86_avx512_mask_scalef_pd_512::getOperationName() {
  return "llvm_avx512.mask.scalef.pd.512";
}

std::pair<unsigned, unsigned> x86_avx512_mask_scalef_pd_512::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range x86_avx512_mask_scalef_pd_512::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_avx512_mask_scalef_pd_512::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range x86_avx512_mask_scalef_pd_512::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value x86_avx512_mask_scalef_pd_512::res() {
  return *getODSResults(0).begin();
}

void x86_avx512_mask_scalef_pd_512::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addTypes(res);
}

void x86_avx512_mask_scalef_pd_512::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_avx512_mask_scalef_pd_512::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult x86_avx512_mask_scalef_pd_512::verify() {
  if (failed(x86_avx512_mask_scalef_pd_512Adaptor(*this).verify(this->getLoc()))) return failure();
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
// LLVM::x86_avx512_mask_scalef_ps_512 definitions
//===----------------------------------------------------------------------===//

x86_avx512_mask_scalef_ps_512Adaptor::x86_avx512_mask_scalef_ps_512Adaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

x86_avx512_mask_scalef_ps_512Adaptor::x86_avx512_mask_scalef_ps_512Adaptor(x86_avx512_mask_scalef_ps_512& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> x86_avx512_mask_scalef_ps_512Adaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange x86_avx512_mask_scalef_ps_512Adaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult x86_avx512_mask_scalef_ps_512Adaptor::verify(Location loc) {
  return success();
}

StringRef x86_avx512_mask_scalef_ps_512::getOperationName() {
  return "llvm_avx512.mask.scalef.ps.512";
}

std::pair<unsigned, unsigned> x86_avx512_mask_scalef_ps_512::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range x86_avx512_mask_scalef_ps_512::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> x86_avx512_mask_scalef_ps_512::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range x86_avx512_mask_scalef_ps_512::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value x86_avx512_mask_scalef_ps_512::res() {
  return *getODSResults(0).begin();
}

void x86_avx512_mask_scalef_ps_512::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  odsState.addTypes(res);
}

void x86_avx512_mask_scalef_ps_512::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  odsState.addOperands(odsArg_3);
  odsState.addOperands(odsArg_4);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void x86_avx512_mask_scalef_ps_512::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult x86_avx512_mask_scalef_ps_512::verify() {
  if (failed(x86_avx512_mask_scalef_ps_512Adaptor(*this).verify(this->getLoc()))) return failure();
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


#endif  // GET_OP_CLASSES

