/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

linalg::RangeOp,
linalg::ReshapeOp,
linalg::SliceOp,
linalg::TensorReshapeOp,
linalg::TransposeOp,
linalg::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// linalg::RangeOp definitions
//===----------------------------------------------------------------------===//

RangeOpAdaptor::RangeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

RangeOpAdaptor::RangeOpAdaptor(RangeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> RangeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange RangeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value RangeOpAdaptor::min() {
  return *getODSOperands(0).begin();
}

Value RangeOpAdaptor::max() {
  return *getODSOperands(1).begin();
}

Value RangeOpAdaptor::step() {
  return *getODSOperands(2).begin();
}

LogicalResult RangeOpAdaptor::verify(Location loc) {
  return success();
}

StringRef RangeOp::getOperationName() {
  return "linalg.range";
}

std::pair<unsigned, unsigned> RangeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range RangeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value RangeOp::min() {
  return *getODSOperands(0).begin();
}

Value RangeOp::max() {
  return *getODSOperands(1).begin();
}

Value RangeOp::step() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange RangeOp::minMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RangeOp::maxMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RangeOp::stepMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RangeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range RangeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RangeOp::build(OpBuilder &builder, OperationState &result, Value min, Value max, Value step) {
      auto rangeType = RangeType::get(builder.getContext());
      build(builder, result, rangeType, min, max, step);
    
}

void RangeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value min, Value max, Value step) {
  odsState.addOperands(min);
  odsState.addOperands(max);
  odsState.addOperands(step);
  odsState.addTypes(resultType0);
}

void RangeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value min, Value max, Value step) {
  odsState.addOperands(min);
  odsState.addOperands(max);
  odsState.addOperands(step);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RangeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult RangeOp::verify() {
  if (failed(RangeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<RangeType>()))) {
        return emitOpError("result #") << index << " must be range, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult RangeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType minRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> minOperands(minRawOperands);  llvm::SMLoc minOperandsLoc = parser.getCurrentLocation();
  (void)minOperandsLoc;
  OpAsmParser::OperandType maxRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> maxOperands(maxRawOperands);  llvm::SMLoc maxOperandsLoc = parser.getCurrentLocation();
  (void)maxOperandsLoc;
  OpAsmParser::OperandType stepRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> stepOperands(stepRawOperands);  llvm::SMLoc stepOperandsLoc = parser.getCurrentLocation();
  (void)stepOperandsLoc;
  SmallVector<Type, 1> allResultTypes;

  if (parser.parseOperand(minRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseOperand(maxRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseOperand(stepRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(minOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(maxOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(stepOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void RangeOp::print(OpAsmPrinter &p) {
  p << "linalg.range";
  p << " ";
  p << min();
  p << " " << ":";
  p << " ";
  p << max();
  p << " " << ":";
  p << " ";
  p << step();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getResultTypes();
}

void RangeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// linalg::ReshapeOp definitions
//===----------------------------------------------------------------------===//

ReshapeOpAdaptor::ReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ReshapeOpAdaptor::ReshapeOpAdaptor(ReshapeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReshapeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ReshapeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ReshapeOpAdaptor::src() {
  return *getODSOperands(0).begin();
}

ArrayAttr ReshapeOpAdaptor::reassociation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("reassociation").cast<ArrayAttr>();
  return attr;
}

LogicalResult ReshapeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_reassociation = odsAttrs.get("reassociation");
  if (!tblgen_reassociation) return emitError(loc, "'linalg.reshape' op ""requires attribute 'reassociation'");
    if (!(((tblgen_reassociation.isa<ArrayAttr>())) && (llvm::all_of(tblgen_reassociation.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'linalg.reshape' op ""attribute 'reassociation' failed to satisfy constraint: AffineMap array attribute");
  }
  return success();
}

StringRef ReshapeOp::getOperationName() {
  return "linalg.reshape";
}

std::pair<unsigned, unsigned> ReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ReshapeOp::src() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ReshapeOp::srcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReshapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ReshapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ReshapeOp::result() {
  return *getODSResults(0).begin();
}

ArrayAttr ReshapeOp::reassociationAttr() {
  return this->getAttr("reassociation").cast<ArrayAttr>();
}

ArrayAttr ReshapeOp::reassociation() {
  auto attr = reassociationAttr();
  return attr;
}

void ReshapeOp::reassociationAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("reassociation", attr);
}



void ReshapeOp::build(OpBuilder &b, OperationState &result, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs ) {
      auto reassociationMaps =
          convertReassociationIndicesToMaps(b, reassociation);
      build(b, result, src, reassociationMaps, attrs);
    
}



void ReshapeOp::build(OpBuilder &b, OperationState &result, Type resultType, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs ) {
      auto reassociationMaps =
          convertReassociationIndicesToMaps(b, reassociation);
      build(b, result, src, reassociationMaps, attrs);
    
}

void ReshapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value src, ArrayAttr reassociation) {
  odsState.addOperands(src);
  odsState.addAttribute("reassociation", reassociation);
  odsState.addTypes(result);
}

void ReshapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value src, ArrayAttr reassociation) {
  odsState.addOperands(src);
  odsState.addAttribute("reassociation", reassociation);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ReshapeOp::verify() {
  if (failed(ReshapeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("result #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}





ParseResult ReshapeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType srcRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> srcOperands(srcRawOperands);  llvm::SMLoc srcOperandsLoc = parser.getCurrentLocation();
  (void)srcOperandsLoc;
  Type srcRawTypes[1];
  ArrayRef<Type> srcTypes(srcRawTypes);
  SmallVector<Type, 1> allResultTypes;

  if (parser.parseOperand(srcRawOperands[0]))
    return failure();

  ArrayAttr reassociationAttr;
  if (parser.parseAttribute(reassociationAttr, parser.getBuilder().getType<NoneType>(), "reassociation", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(srcRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return failure();
  return success();
}

void ReshapeOp::print(OpAsmPrinter &p) {
  p << "linalg.reshape";
  p << " ";
  p << src();
  p << " ";
  p.printAttributeWithoutType(reassociationAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"reassociation"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(src().getType());
  p << " " << "into";
  p << " ";
  p << getOperation()->getResultTypes();
}

void ReshapeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// linalg::SliceOp definitions
//===----------------------------------------------------------------------===//

SliceOpAdaptor::SliceOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SliceOpAdaptor::SliceOpAdaptor(SliceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange SliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SliceOpAdaptor::view() {
  return *getODSOperands(0).begin();
}

ValueRange SliceOpAdaptor::indexings() {
  return getODSOperands(1);
}

LogicalResult SliceOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SliceOp::getOperationName() {
  return "linalg.slice";
}

std::pair<unsigned, unsigned> SliceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range SliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SliceOp::view() {
  return *getODSOperands(0).begin();
}

Operation::operand_range SliceOp::indexings() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange SliceOp::viewMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SliceOp::indexingsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}



void SliceOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value view, ValueRange indexings) {
  odsState.addOperands(view);
  odsState.addOperands(indexings);
  odsState.addTypes(resultType0);
}

void SliceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value view, ValueRange indexings) {
  odsState.addOperands(view);
  odsState.addOperands(indexings);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SliceOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult SliceOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSliceOp(parser, result);
}

void SliceOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult SliceOp::verify() {
  if (failed(SliceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<RangeType>())) || ((v.getType().isa<IndexType>())))) {
        return emitOpError("operand #") << index << " must be range or index, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("result #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}





void SliceOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// linalg::TensorReshapeOp definitions
//===----------------------------------------------------------------------===//

TensorReshapeOpAdaptor::TensorReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TensorReshapeOpAdaptor::TensorReshapeOpAdaptor(TensorReshapeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TensorReshapeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TensorReshapeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TensorReshapeOpAdaptor::src() {
  return *getODSOperands(0).begin();
}

ArrayAttr TensorReshapeOpAdaptor::reassociation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("reassociation").cast<ArrayAttr>();
  return attr;
}

LogicalResult TensorReshapeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_reassociation = odsAttrs.get("reassociation");
  if (!tblgen_reassociation) return emitError(loc, "'linalg.tensor_reshape' op ""requires attribute 'reassociation'");
    if (!(((tblgen_reassociation.isa<ArrayAttr>())) && (llvm::all_of(tblgen_reassociation.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'linalg.tensor_reshape' op ""attribute 'reassociation' failed to satisfy constraint: AffineMap array attribute");
  }
  return success();
}

StringRef TensorReshapeOp::getOperationName() {
  return "linalg.tensor_reshape";
}

std::pair<unsigned, unsigned> TensorReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TensorReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TensorReshapeOp::src() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TensorReshapeOp::srcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TensorReshapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TensorReshapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value TensorReshapeOp::result() {
  return *getODSResults(0).begin();
}

ArrayAttr TensorReshapeOp::reassociationAttr() {
  return this->getAttr("reassociation").cast<ArrayAttr>();
}

ArrayAttr TensorReshapeOp::reassociation() {
  auto attr = reassociationAttr();
  return attr;
}

void TensorReshapeOp::reassociationAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("reassociation", attr);
}



void TensorReshapeOp::build(OpBuilder &b, OperationState &result, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs ) {
      auto reassociationMaps =
          convertReassociationIndicesToMaps(b, reassociation);
      build(b, result, src, reassociationMaps, attrs);
    
}



void TensorReshapeOp::build(OpBuilder &b, OperationState &result, Type resultType, Value src, ArrayRef<ReassociationIndices> reassociation, ArrayRef<NamedAttribute> attrs ) {
      auto reassociationMaps =
          convertReassociationIndicesToMaps(b, reassociation);
      build(b, result, src, reassociationMaps, attrs);
    
}

void TensorReshapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value src, ArrayAttr reassociation) {
  odsState.addOperands(src);
  odsState.addAttribute("reassociation", reassociation);
  odsState.addTypes(result);
}

void TensorReshapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value src, ArrayAttr reassociation) {
  odsState.addOperands(src);
  odsState.addAttribute("reassociation", reassociation);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TensorReshapeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult TensorReshapeOp::verify() {
  if (failed(TensorReshapeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}





ParseResult TensorReshapeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType srcRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> srcOperands(srcRawOperands);  llvm::SMLoc srcOperandsLoc = parser.getCurrentLocation();
  (void)srcOperandsLoc;
  Type srcRawTypes[1];
  ArrayRef<Type> srcTypes(srcRawTypes);
  SmallVector<Type, 1> allResultTypes;

  if (parser.parseOperand(srcRawOperands[0]))
    return failure();

  ArrayAttr reassociationAttr;
  if (parser.parseAttribute(reassociationAttr, parser.getBuilder().getType<NoneType>(), "reassociation", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(srcRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(srcOperands, srcTypes, srcOperandsLoc, result.operands))
    return failure();
  return success();
}

void TensorReshapeOp::print(OpAsmPrinter &p) {
  p << "linalg.tensor_reshape";
  p << " ";
  p << src();
  p << " ";
  p.printAttributeWithoutType(reassociationAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"reassociation"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(src().getType());
  p << " " << "into";
  p << " ";
  p << getOperation()->getResultTypes();
}

void TensorReshapeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// linalg::TransposeOp definitions
//===----------------------------------------------------------------------===//

TransposeOpAdaptor::TransposeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TransposeOpAdaptor::TransposeOpAdaptor(TransposeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TransposeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TransposeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TransposeOpAdaptor::view() {
  return *getODSOperands(0).begin();
}

AffineMapAttr TransposeOpAdaptor::permutation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("permutation").cast<AffineMapAttr>();
  return attr;
}

LogicalResult TransposeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_permutation = odsAttrs.get("permutation");
  if (!tblgen_permutation) return emitError(loc, "'linalg.transpose' op ""requires attribute 'permutation'");
    if (!((tblgen_permutation.isa<AffineMapAttr>()))) return emitError(loc, "'linalg.transpose' op ""attribute 'permutation' failed to satisfy constraint: AffineMap attribute");
  }
  return success();
}

StringRef TransposeOp::getOperationName() {
  return "linalg.transpose";
}

std::pair<unsigned, unsigned> TransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TransposeOp::view() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TransposeOp::viewMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr TransposeOp::permutationAttr() {
  return this->getAttr("permutation").cast<AffineMapAttr>();
}

AffineMap TransposeOp::permutation() {
  auto attr = permutationAttr();
  return attr.getValue();
}

void TransposeOp::permutationAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("permutation", attr);
}



void TransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value view, AffineMapAttr permutation) {
  odsState.addOperands(view);
  odsState.addAttribute("permutation", permutation);
  odsState.addTypes(resultType0);
}

void TransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value view, AffineMapAttr permutation) {
  odsState.addOperands(view);
  odsState.addAttribute("permutation", permutation);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value view, AffineMap permutation) {
  odsState.addOperands(view);
  odsState.addAttribute("permutation", AffineMapAttr::get(permutation));
  odsState.addTypes(resultType0);
}

void TransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value view, AffineMap permutation) {
  odsState.addOperands(view);
  odsState.addAttribute("permutation", AffineMapAttr::get(permutation));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransposeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TransposeOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTransposeOp(parser, result);
}

void TransposeOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TransposeOp::verify() {
  if (failed(TransposeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("result #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!permutation().isPermutation())
      return emitOpError("expected a permutation map");
    if (permutation().getNumDims() != getShapedType().getRank())
      return emitOpError("expected a permutation map of same rank as the view");
    return success();
}



void TransposeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// linalg::YieldOp definitions
//===----------------------------------------------------------------------===//

YieldOpAdaptor::YieldOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

YieldOpAdaptor::YieldOpAdaptor(YieldOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> YieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange YieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange YieldOpAdaptor::values() {
  return getODSOperands(0);
}

LogicalResult YieldOpAdaptor::verify(Location loc) {
  return success();
}

StringRef YieldOp::getOperationName() {
  return "linalg.yield";
}

std::pair<unsigned, unsigned> YieldOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range YieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range YieldOp::values() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::valuesMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> YieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range YieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void YieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange values) {
  odsState.addOperands(values);
}

void YieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange values) {
  odsState.addOperands(values);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void YieldOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult YieldOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseYieldOp(parser, result);
}

void YieldOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult YieldOp::verify() {
  if (failed(YieldOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}

void YieldOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

