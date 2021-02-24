/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

avx512::MaskRndScaleOp,
avx512::MaskScaleFOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// avx512::MaskRndScaleOp definitions
//===----------------------------------------------------------------------===//

MaskRndScaleOpAdaptor::MaskRndScaleOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MaskRndScaleOpAdaptor::MaskRndScaleOpAdaptor(MaskRndScaleOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MaskRndScaleOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MaskRndScaleOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MaskRndScaleOpAdaptor::src() {
  return *getODSOperands(0).begin();
}

Value MaskRndScaleOpAdaptor::k() {
  return *getODSOperands(1).begin();
}

Value MaskRndScaleOpAdaptor::a() {
  return *getODSOperands(2).begin();
}

Value MaskRndScaleOpAdaptor::imm() {
  return *getODSOperands(3).begin();
}

Value MaskRndScaleOpAdaptor::rounding() {
  return *getODSOperands(4).begin();
}

LogicalResult MaskRndScaleOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MaskRndScaleOp::getOperationName() {
  return "avx512.mask.rndscale";
}

std::pair<unsigned, unsigned> MaskRndScaleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MaskRndScaleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MaskRndScaleOp::src() {
  return *getODSOperands(0).begin();
}

Value MaskRndScaleOp::k() {
  return *getODSOperands(1).begin();
}

Value MaskRndScaleOp::a() {
  return *getODSOperands(2).begin();
}

Value MaskRndScaleOp::imm() {
  return *getODSOperands(3).begin();
}

Value MaskRndScaleOp::rounding() {
  return *getODSOperands(4).begin();
}

::mlir::MutableOperandRange MaskRndScaleOp::srcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskRndScaleOp::kMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskRndScaleOp::aMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskRndScaleOp::immMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskRndScaleOp::roundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MaskRndScaleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MaskRndScaleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MaskRndScaleOp::dst() {
  return *getODSResults(0).begin();
}

void MaskRndScaleOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type dst, Value src, Value k, Value a, Value imm, Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  odsState.addTypes(dst);
}

void MaskRndScaleOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value src, Value k, Value a, Value imm, Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(k);
  odsState.addOperands(a);
  odsState.addOperands(imm);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskRndScaleOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MaskRndScaleOp::verify() {
  if (failed(MaskRndScaleOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 16)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 8)))))) {
        return emitOpError("operand #") << index << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isSignlessInteger(32)))) {
        return emitOpError("operand #") << index << " must be 32-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 16)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 8)))))) {
        return emitOpError("operand #") << index << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
      (void)v;
      if (!(((v.getType().isSignlessInteger(16))) || ((v.getType().isSignlessInteger(8))))) {
        return emitOpError("operand #") << index << " must be 16-bit signless integer or 8-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (Value v : valueGroup4) {
      (void)v;
      if (!((v.getType().isSignlessInteger(32)))) {
        return emitOpError("operand #") << index << " must be 32-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 16)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 8)))))) {
        return emitOpError("result #") << index << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(0).begin()).getType(), (*this->getODSOperands(2).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {src, a, dst} have same type");
  if (!((IntegerType::get(((*this->getODSResults(0).begin()).getType().cast<VectorType>().getShape()[0]),  (*this->getODSResults(0).begin()).getType().getContext()) == (*this->getODSOperands(3).begin()).getType())))
    return emitOpError("failed to verify that imm has the same number of bits as elements in dst");
  return mlir::success();
}

ParseResult MaskRndScaleOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType srcRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> srcOperands(srcRawOperands);  llvm::SMLoc srcOperandsLoc = parser.getCurrentLocation();
  (void)srcOperandsLoc;
  OpAsmParser::OperandType kRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> kOperands(kRawOperands);  llvm::SMLoc kOperandsLoc = parser.getCurrentLocation();
  (void)kOperandsLoc;
  OpAsmParser::OperandType aRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> aOperands(aRawOperands);  llvm::SMLoc aOperandsLoc = parser.getCurrentLocation();
  (void)aOperandsLoc;
  OpAsmParser::OperandType immRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> immOperands(immRawOperands);  llvm::SMLoc immOperandsLoc = parser.getCurrentLocation();
  (void)immOperandsLoc;
  OpAsmParser::OperandType roundingRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> roundingOperands(roundingRawOperands);  llvm::SMLoc roundingOperandsLoc = parser.getCurrentLocation();
  (void)roundingOperandsLoc;
  Type dstRawTypes[1];
  ArrayRef<Type> dstTypes(dstRawTypes);

  if (parser.parseOperand(srcRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(kRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(aRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(immRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(roundingRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(dstRawTypes[0]))
    return failure();
  for (Type type : dstTypes) {
    (void)type;
    if (!((((type.isa<VectorType>())) && (((type.cast<ShapedType>().getElementType().isF32())) || ((type.cast<ShapedType>().getElementType().isF64())))) && (((type.isa<VectorType>())) && (((type.cast<VectorType>().getNumElements()
                           == 16)) || ((type.cast<VectorType>().getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'dst' must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << type;
    }
  }
  Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(dstTypes);
  if (parser.resolveOperands(srcOperands, dstTypes, srcOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(kOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(aOperands, dstTypes, aOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(immOperands, IntegerType::get((dstTypes[0].cast<VectorType>().getShape()[0]),  dstTypes[0].getContext()), immOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(roundingOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void MaskRndScaleOp::print(OpAsmPrinter &p) {
  p << "avx512.mask.rndscale";
  p << " ";
  p << src();
  p << ",";
  p << " ";
  p << k();
  p << ",";
  p << " ";
  p << a();
  p << ",";
  p << " ";
  p << imm();
  p << ",";
  p << " ";
  p << rounding();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(dst().getType());
}

void MaskRndScaleOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// avx512::MaskScaleFOp definitions
//===----------------------------------------------------------------------===//

MaskScaleFOpAdaptor::MaskScaleFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MaskScaleFOpAdaptor::MaskScaleFOpAdaptor(MaskScaleFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MaskScaleFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MaskScaleFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MaskScaleFOpAdaptor::src() {
  return *getODSOperands(0).begin();
}

Value MaskScaleFOpAdaptor::a() {
  return *getODSOperands(1).begin();
}

Value MaskScaleFOpAdaptor::b() {
  return *getODSOperands(2).begin();
}

Value MaskScaleFOpAdaptor::k() {
  return *getODSOperands(3).begin();
}

Value MaskScaleFOpAdaptor::rounding() {
  return *getODSOperands(4).begin();
}

LogicalResult MaskScaleFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MaskScaleFOp::getOperationName() {
  return "avx512.mask.scalef";
}

std::pair<unsigned, unsigned> MaskScaleFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MaskScaleFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MaskScaleFOp::src() {
  return *getODSOperands(0).begin();
}

Value MaskScaleFOp::a() {
  return *getODSOperands(1).begin();
}

Value MaskScaleFOp::b() {
  return *getODSOperands(2).begin();
}

Value MaskScaleFOp::k() {
  return *getODSOperands(3).begin();
}

Value MaskScaleFOp::rounding() {
  return *getODSOperands(4).begin();
}

::mlir::MutableOperandRange MaskScaleFOp::srcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskScaleFOp::aMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskScaleFOp::bMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskScaleFOp::kMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskScaleFOp::roundingMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MaskScaleFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MaskScaleFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MaskScaleFOp::dst() {
  return *getODSResults(0).begin();
}

void MaskScaleFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type dst, Value src, Value a, Value b, Value k, Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  odsState.addTypes(dst);
}

void MaskScaleFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value src, Value a, Value b, Value k, Value rounding) {
  odsState.addOperands(src);
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(k);
  odsState.addOperands(rounding);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskScaleFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 5u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MaskScaleFOp::verify() {
  if (failed(MaskScaleFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 16)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 8)))))) {
        return emitOpError("operand #") << index << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 16)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 8)))))) {
        return emitOpError("operand #") << index << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 16)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 8)))))) {
        return emitOpError("operand #") << index << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
      (void)v;
      if (!(((v.getType().isSignlessInteger(16))) || ((v.getType().isSignlessInteger(8))))) {
        return emitOpError("operand #") << index << " must be 16-bit signless integer or 8-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (Value v : valueGroup4) {
      (void)v;
      if (!((v.getType().isSignlessInteger(32)))) {
        return emitOpError("operand #") << index << " must be 32-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isF32())) || ((v.getType().cast<ShapedType>().getElementType().isF64())))) && (((v.getType().isa<VectorType>())) && (((v.getType().cast<VectorType>().getNumElements()
                           == 16)) || ((v.getType().cast<VectorType>().getNumElements()
                           == 8)))))) {
        return emitOpError("result #") << index << " must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(0).begin()).getType(), (*this->getODSOperands(1).begin()).getType(), (*this->getODSOperands(2).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {src, a, b, dst} have same type");
  if (!((IntegerType::get(((*this->getODSResults(0).begin()).getType().cast<VectorType>().getShape()[0]),  (*this->getODSResults(0).begin()).getType().getContext()) == (*this->getODSOperands(3).begin()).getType())))
    return emitOpError("failed to verify that k has the same number of bits as elements in dst");
  return mlir::success();
}

ParseResult MaskScaleFOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType srcRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> srcOperands(srcRawOperands);  llvm::SMLoc srcOperandsLoc = parser.getCurrentLocation();
  (void)srcOperandsLoc;
  OpAsmParser::OperandType aRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> aOperands(aRawOperands);  llvm::SMLoc aOperandsLoc = parser.getCurrentLocation();
  (void)aOperandsLoc;
  OpAsmParser::OperandType bRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> bOperands(bRawOperands);  llvm::SMLoc bOperandsLoc = parser.getCurrentLocation();
  (void)bOperandsLoc;
  OpAsmParser::OperandType kRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> kOperands(kRawOperands);  llvm::SMLoc kOperandsLoc = parser.getCurrentLocation();
  (void)kOperandsLoc;
  OpAsmParser::OperandType roundingRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> roundingOperands(roundingRawOperands);  llvm::SMLoc roundingOperandsLoc = parser.getCurrentLocation();
  (void)roundingOperandsLoc;
  Type dstRawTypes[1];
  ArrayRef<Type> dstTypes(dstRawTypes);

  if (parser.parseOperand(srcRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(aRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(bRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(kRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(roundingRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(dstRawTypes[0]))
    return failure();
  for (Type type : dstTypes) {
    (void)type;
    if (!((((type.isa<VectorType>())) && (((type.cast<ShapedType>().getElementType().isF32())) || ((type.cast<ShapedType>().getElementType().isF64())))) && (((type.isa<VectorType>())) && (((type.cast<VectorType>().getNumElements()
                           == 16)) || ((type.cast<VectorType>().getNumElements()
                           == 8)))))) {
      return parser.emitError(parser.getNameLoc()) << "'dst' must be vector of 32-bit float or 64-bit float values of length 16/8, but got " << type;
    }
  }
  Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  result.addTypes(dstTypes);
  if (parser.resolveOperands(srcOperands, dstTypes, srcOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(aOperands, dstTypes, aOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(bOperands, dstTypes, bOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(kOperands, IntegerType::get((dstTypes[0].cast<VectorType>().getShape()[0]),  dstTypes[0].getContext()), kOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(roundingOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void MaskScaleFOp::print(OpAsmPrinter &p) {
  p << "avx512.mask.scalef";
  p << " ";
  p << src();
  p << ",";
  p << " ";
  p << a();
  p << ",";
  p << " ";
  p << b();
  p << ",";
  p << " ";
  p << k();
  p << ",";
  p << " ";
  p << rounding();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(dst().getType());
}

void MaskScaleFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

