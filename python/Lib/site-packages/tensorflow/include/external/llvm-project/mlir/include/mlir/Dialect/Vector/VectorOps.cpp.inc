/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

vector::BroadcastOp,
vector::ConstantMaskOp,
vector::ContractionOp,
vector::CreateMaskOp,
vector::ExtractElementOp,
vector::ExtractOp,
vector::ExtractSlicesOp,
vector::ExtractStridedSliceOp,
vector::FMAOp,
vector::FlatTransposeOp,
vector::InsertElementOp,
vector::InsertOp,
vector::InsertSlicesOp,
vector::InsertStridedSliceOp,
vector::MatmulOp,
vector::OuterProductOp,
vector::PrintOp,
vector::ReductionOp,
vector::ReshapeOp,
vector::ShapeCastOp,
vector::ShuffleOp,
vector::TransferReadOp,
vector::TransferWriteOp,
vector::TransposeOp,
vector::TupleGetOp,
vector::TupleOp,
vector::TypeCastOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// vector::BroadcastOp definitions
//===----------------------------------------------------------------------===//

BroadcastOpAdaptor::BroadcastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BroadcastOpAdaptor::BroadcastOpAdaptor(BroadcastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BroadcastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BroadcastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value BroadcastOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

LogicalResult BroadcastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BroadcastOp::getOperationName() {
  return "vector.broadcast";
}

std::pair<unsigned, unsigned> BroadcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value BroadcastOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange BroadcastOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BroadcastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BroadcastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BroadcastOp::vector() {
  return *getODSResults(0).begin();
}

void BroadcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value source) {
  odsState.addOperands(source);
  odsState.addTypes(vector);
}

void BroadcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BroadcastOp::verify() {
  if (failed(BroadcastOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::verify(*this);
}

ParseResult BroadcastOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType sourceRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  Type sourceRawTypes[1];
  ArrayRef<Type> sourceTypes(sourceRawTypes);
  Type vectorRawTypes[1];
  ArrayRef<Type> vectorTypes(vectorRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  result.addTypes(vectorTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  return success();
}

void BroadcastOp::print(OpAsmPrinter &p) {
  p << "vector.broadcast";
  p << " ";
  p << source();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(source().getType());
  p << " " << "to";
  p << " ";
  p << ArrayRef<Type>(vector().getType());
}

void BroadcastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ConstantMaskOp definitions
//===----------------------------------------------------------------------===//

ConstantMaskOpAdaptor::ConstantMaskOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstantMaskOpAdaptor::ConstantMaskOpAdaptor(ConstantMaskOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstantMaskOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConstantMaskOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ArrayAttr ConstantMaskOpAdaptor::mask_dim_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("mask_dim_sizes").cast<ArrayAttr>();
  return attr;
}

LogicalResult ConstantMaskOpAdaptor::verify(Location loc) {
  {
  auto tblgen_mask_dim_sizes = odsAttrs.get("mask_dim_sizes");
  if (!tblgen_mask_dim_sizes) return emitError(loc, "'vector.constant_mask' op ""requires attribute 'mask_dim_sizes'");
    if (!(((tblgen_mask_dim_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_mask_dim_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.constant_mask' op ""attribute 'mask_dim_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef ConstantMaskOp::getOperationName() {
  return "vector.constant_mask";
}

std::pair<unsigned, unsigned> ConstantMaskOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConstantMaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstantMaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConstantMaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr ConstantMaskOp::mask_dim_sizesAttr() {
  return this->getAttr("mask_dim_sizes").cast<ArrayAttr>();
}

ArrayAttr ConstantMaskOp::mask_dim_sizes() {
  auto attr = mask_dim_sizesAttr();
  return attr;
}

void ConstantMaskOp::mask_dim_sizesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("mask_dim_sizes", attr);
}

void ConstantMaskOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ArrayAttr mask_dim_sizes) {
  odsState.addAttribute("mask_dim_sizes", mask_dim_sizes);
  odsState.addTypes(resultType0);
}

void ConstantMaskOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ArrayAttr mask_dim_sizes) {
  odsState.addAttribute("mask_dim_sizes", mask_dim_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantMaskOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ConstantMaskOp::verify() {
  if (failed(ConstantMaskOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1))))) {
        return emitOpError("result #") << index << " must be vector of 1-bit signless integer values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

ParseResult ConstantMaskOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allResultTypes;

  ArrayAttr mask_dim_sizesAttr;
  if (parser.parseAttribute(mask_dim_sizesAttr, parser.getBuilder().getType<NoneType>(), "mask_dim_sizes", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  return success();
}

void ConstantMaskOp::print(OpAsmPrinter &p) {
  p << "vector.constant_mask";
  p << " ";
  p.printAttributeWithoutType(mask_dim_sizesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"mask_dim_sizes"});
  p << " " << ":";
  p << " ";
  p << getOperation()->getResultTypes();
}

void ConstantMaskOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ContractionOp definitions
//===----------------------------------------------------------------------===//

ContractionOpAdaptor::ContractionOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ContractionOpAdaptor::ContractionOpAdaptor(ContractionOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ContractionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange ContractionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ContractionOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value ContractionOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

Value ContractionOpAdaptor::acc() {
  return *getODSOperands(2).begin();
}

ValueRange ContractionOpAdaptor::masks() {
  return getODSOperands(3);
}

ArrayAttr ContractionOpAdaptor::indexing_maps() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("indexing_maps").cast<ArrayAttr>();
  return attr;
}

ArrayAttr ContractionOpAdaptor::iterator_types() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("iterator_types").cast<ArrayAttr>();
  return attr;
}

LogicalResult ContractionOpAdaptor::verify(Location loc) {
  {
  auto tblgen_indexing_maps = odsAttrs.get("indexing_maps");
  if (!tblgen_indexing_maps) return emitError(loc, "'vector.contract' op ""requires attribute 'indexing_maps'");
    if (!(((tblgen_indexing_maps.isa<ArrayAttr>())) && (llvm::all_of(tblgen_indexing_maps.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'vector.contract' op ""attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  {
  auto tblgen_iterator_types = odsAttrs.get("iterator_types");
  if (!tblgen_iterator_types) return emitError(loc, "'vector.contract' op ""requires attribute 'iterator_types'");
    if (!((tblgen_iterator_types.isa<ArrayAttr>()))) return emitError(loc, "'vector.contract' op ""attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  return success();
}

StringRef ContractionOp::getOperationName() {
  return "vector.contract";
}

std::pair<unsigned, unsigned> ContractionOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 3) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range ContractionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ContractionOp::lhs() {
  return *getODSOperands(0).begin();
}

Value ContractionOp::rhs() {
  return *getODSOperands(1).begin();
}

Value ContractionOp::acc() {
  return *getODSOperands(2).begin();
}

Operation::operand_range ContractionOp::masks() {
  return getODSOperands(3);
}

::mlir::MutableOperandRange ContractionOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ContractionOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ContractionOp::accMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ContractionOp::masksMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ContractionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ContractionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr ContractionOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<ArrayAttr>();
}

ArrayAttr ContractionOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

ArrayAttr ContractionOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<ArrayAttr>();
}

ArrayAttr ContractionOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

void ContractionOp::indexing_mapsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("indexing_maps", attr);
}

void ContractionOp::iterator_typesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("iterator_types", attr);
}





void ContractionOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addOperands(masks);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  odsState.addTypes(resultType0);
}

void ContractionOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value acc, ValueRange masks, ArrayAttr indexing_maps, ArrayAttr iterator_types) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addOperands(masks);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ContractionOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ContractionOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseContractionOp(parser, result);
}

void ContractionOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ContractionOp::verify() {
  if (failed(ContractionOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1))))) {
        return emitOpError("operand #") << index << " must be vector of 1-bit signless integer values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that first operand lhs and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that second operand rhs and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that third operand acc and result have same element type");
  return ::verify(*this);
}

void ContractionOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::CreateMaskOp definitions
//===----------------------------------------------------------------------===//

CreateMaskOpAdaptor::CreateMaskOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CreateMaskOpAdaptor::CreateMaskOpAdaptor(CreateMaskOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CreateMaskOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange CreateMaskOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange CreateMaskOpAdaptor::operands() {
  return getODSOperands(0);
}

LogicalResult CreateMaskOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CreateMaskOp::getOperationName() {
  return "vector.create_mask";
}

std::pair<unsigned, unsigned> CreateMaskOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range CreateMaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range CreateMaskOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CreateMaskOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CreateMaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CreateMaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CreateMaskOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addTypes(resultType0);
}

void CreateMaskOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands) {
  odsState.addOperands(operands);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateMaskOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CreateMaskOp::verify() {
  if (failed(CreateMaskOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1))))) {
        return emitOpError("result #") << index << " must be vector of 1-bit signless integer values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



ParseResult CreateMaskOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> operandsOperands;
  llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  SmallVector<Type, 1> allResultTypes;

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(operandsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void CreateMaskOp::print(OpAsmPrinter &p) {
  p << "vector.create_mask";
  p << " ";
  p << operands();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getResultTypes();
}

void CreateMaskOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractElementOp definitions
//===----------------------------------------------------------------------===//

ExtractElementOpAdaptor::ExtractElementOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractElementOpAdaptor::ExtractElementOpAdaptor(ExtractElementOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractElementOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ExtractElementOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ExtractElementOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

Value ExtractElementOpAdaptor::position() {
  return *getODSOperands(1).begin();
}

LogicalResult ExtractElementOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ExtractElementOp::getOperationName() {
  return "vector.extractelement";
}

std::pair<unsigned, unsigned> ExtractElementOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ExtractElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExtractElementOp::vector() {
  return *getODSOperands(0).begin();
}

Value ExtractElementOp::position() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ExtractElementOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ExtractElementOp::positionMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractElementOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ExtractElementOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ExtractElementOp::result() {
  return *getODSResults(0).begin();
}

void ExtractElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value vector, Value position) {
  odsState.addOperands(vector);
  odsState.addOperands(position);
  odsState.addTypes(result);
}

void ExtractElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value position) {
  odsState.addOperands(vector);
  odsState.addOperands(position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractElementOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ExtractElementOp::verify() {
  if (failed(ExtractElementOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isSignlessInteger()))) {
        return emitOpError("operand #") << index << " must be signless integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!(((*this->getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType() == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type matches element type of vector operand");
  return ::verify(*this);
}

ParseResult ExtractElementOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType vectorRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  OpAsmParser::OperandType positionRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> positionOperands(positionRawOperands);  llvm::SMLoc positionOperandsLoc = parser.getCurrentLocation();
  (void)positionOperandsLoc;
  Type positionRawTypes[1];
  ArrayRef<Type> positionTypes(positionRawTypes);
  Type vectorRawTypes[1];
  ArrayRef<Type> vectorTypes(vectorRawTypes);

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperand(positionRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(positionRawTypes[0]))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  for (Type type : vectorTypes) {
    (void)type;
    if (!(((type.isa<VectorType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'vector' must be vector of any type values, but got " << type;
    }
  }
  result.addTypes(vectorTypes[0].cast<ShapedType>().getElementType());
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(positionOperands, positionTypes, positionOperandsLoc, result.operands))
    return failure();
  return success();
}

void ExtractElementOp::print(OpAsmPrinter &p) {
  p << "vector.extractelement";
  p << " ";
  p << vector();
  p << "[";
  p << position();
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(position().getType());
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(vector().getType());
}

void ExtractElementOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractOp definitions
//===----------------------------------------------------------------------===//

ExtractOpAdaptor::ExtractOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractOpAdaptor::ExtractOpAdaptor(ExtractOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ExtractOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ExtractOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

ArrayAttr ExtractOpAdaptor::position() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("position").cast<ArrayAttr>();
  return attr;
}

LogicalResult ExtractOpAdaptor::verify(Location loc) {
  {
  auto tblgen_position = odsAttrs.get("position");
  if (!tblgen_position) return emitError(loc, "'vector.extract' op ""requires attribute 'position'");
    if (!(((tblgen_position.isa<ArrayAttr>())) && (llvm::all_of(tblgen_position.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract' op ""attribute 'position' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef ExtractOp::getOperationName() {
  return "vector.extract";
}

std::pair<unsigned, unsigned> ExtractOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ExtractOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExtractOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExtractOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ExtractOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr ExtractOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr ExtractOp::position() {
  auto attr = positionAttr();
  return attr;
}

void ExtractOp::positionAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("position", attr);
}





void ExtractOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vector, ArrayAttr position) {
  odsState.addOperands(vector);
  odsState.addAttribute("position", position);
  odsState.addTypes(resultType0);
}

void ExtractOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr position) {
  odsState.addOperands(vector);
  odsState.addAttribute("position", position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ExtractOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseExtractOp(parser, result);
}

void ExtractOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ExtractOp::verify() {
  if (failed(ExtractOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::verify(*this);
}

void ExtractOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractSlicesOp definitions
//===----------------------------------------------------------------------===//

ExtractSlicesOpAdaptor::ExtractSlicesOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractSlicesOpAdaptor::ExtractSlicesOpAdaptor(ExtractSlicesOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractSlicesOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ExtractSlicesOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ExtractSlicesOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

ArrayAttr ExtractSlicesOpAdaptor::sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("sizes").cast<ArrayAttr>();
  return attr;
}

ArrayAttr ExtractSlicesOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").cast<ArrayAttr>();
  return attr;
}

LogicalResult ExtractSlicesOpAdaptor::verify(Location loc) {
  {
  auto tblgen_sizes = odsAttrs.get("sizes");
  if (!tblgen_sizes) return emitError(loc, "'vector.extract_slices' op ""requires attribute 'sizes'");
    if (!(((tblgen_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_slices' op ""attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.extract_slices' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_slices' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef ExtractSlicesOp::getOperationName() {
  return "vector.extract_slices";
}

std::pair<unsigned, unsigned> ExtractSlicesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ExtractSlicesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExtractSlicesOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExtractSlicesOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractSlicesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ExtractSlicesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr ExtractSlicesOp::sizesAttr() {
  return this->getAttr("sizes").cast<ArrayAttr>();
}

ArrayAttr ExtractSlicesOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

ArrayAttr ExtractSlicesOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr ExtractSlicesOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void ExtractSlicesOp::sizesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("sizes", attr);
}

void ExtractSlicesOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}



void ExtractSlicesOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vector, ArrayAttr sizes, ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(resultType0);
}

void ExtractSlicesOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr sizes, ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractSlicesOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ExtractSlicesOp::verify() {
  if (failed(ExtractSlicesOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("result #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

ParseResult ExtractSlicesOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType vectorRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  Type vectorRawTypes[1];
  ArrayRef<Type> vectorTypes(vectorRawTypes);
  SmallVector<Type, 1> allResultTypes;

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  ArrayAttr sizesAttr;
  if (parser.parseAttribute(sizesAttr, parser.getBuilder().getType<NoneType>(), "sizes", result.attributes))
    return failure();
  if (parser.parseComma())
    return failure();

  ArrayAttr stridesAttr;
  if (parser.parseAttribute(stridesAttr, parser.getBuilder().getType<NoneType>(), "strides", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  return success();
}

void ExtractSlicesOp::print(OpAsmPrinter &p) {
  p << "vector.extract_slices";
  p << " ";
  p << vector();
  p << ",";
  p << " ";
  p.printAttributeWithoutType(sizesAttr());
  p << ",";
  p << " ";
  p.printAttributeWithoutType(stridesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"sizes", "strides"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(vector().getType());
  p << " " << "into";
  p << " ";
  p << getOperation()->getResultTypes();
}

void ExtractSlicesOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ExtractStridedSliceOp definitions
//===----------------------------------------------------------------------===//

ExtractStridedSliceOpAdaptor::ExtractStridedSliceOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractStridedSliceOpAdaptor::ExtractStridedSliceOpAdaptor(ExtractStridedSliceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractStridedSliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ExtractStridedSliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ExtractStridedSliceOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

ArrayAttr ExtractStridedSliceOpAdaptor::offsets() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("offsets").cast<ArrayAttr>();
  return attr;
}

ArrayAttr ExtractStridedSliceOpAdaptor::sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("sizes").cast<ArrayAttr>();
  return attr;
}

ArrayAttr ExtractStridedSliceOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").cast<ArrayAttr>();
  return attr;
}

LogicalResult ExtractStridedSliceOpAdaptor::verify(Location loc) {
  {
  auto tblgen_offsets = odsAttrs.get("offsets");
  if (!tblgen_offsets) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'offsets'");
    if (!(((tblgen_offsets.isa<ArrayAttr>())) && (llvm::all_of(tblgen_offsets.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_sizes = odsAttrs.get("sizes");
  if (!tblgen_sizes) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'sizes'");
    if (!(((tblgen_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.extract_strided_slice' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.extract_strided_slice' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef ExtractStridedSliceOp::getOperationName() {
  return "vector.extract_strided_slice";
}

std::pair<unsigned, unsigned> ExtractStridedSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ExtractStridedSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExtractStridedSliceOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExtractStridedSliceOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractStridedSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ExtractStridedSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr ExtractStridedSliceOp::offsetsAttr() {
  return this->getAttr("offsets").cast<ArrayAttr>();
}

ArrayAttr ExtractStridedSliceOp::offsets() {
  auto attr = offsetsAttr();
  return attr;
}

ArrayAttr ExtractStridedSliceOp::sizesAttr() {
  return this->getAttr("sizes").cast<ArrayAttr>();
}

ArrayAttr ExtractStridedSliceOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

ArrayAttr ExtractStridedSliceOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr ExtractStridedSliceOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void ExtractStridedSliceOp::offsetsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("offsets", attr);
}

void ExtractStridedSliceOp::sizesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("sizes", attr);
}

void ExtractStridedSliceOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}



void ExtractStridedSliceOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(resultType0);
}

void ExtractStridedSliceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr offsets, ArrayAttr sizes, ArrayAttr strides) {
  odsState.addOperands(vector);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractStridedSliceOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ExtractStridedSliceOp::verify() {
  if (failed(ExtractStridedSliceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::verify(*this);
}



ParseResult ExtractStridedSliceOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType vectorRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  Type vectorRawTypes[1];
  ArrayRef<Type> vectorTypes(vectorRawTypes);
  SmallVector<Type, 1> allResultTypes;

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  return success();
}

void ExtractStridedSliceOp::print(OpAsmPrinter &p) {
  p << "vector.extract_strided_slice";
  p << " ";
  p << vector();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(vector().getType());
  p << " " << "to";
  p << " ";
  p << getOperation()->getResultTypes();
}

void ExtractStridedSliceOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::FMAOp definitions
//===----------------------------------------------------------------------===//

FMAOpAdaptor::FMAOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FMAOpAdaptor::FMAOpAdaptor(FMAOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FMAOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FMAOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FMAOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value FMAOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

Value FMAOpAdaptor::acc() {
  return *getODSOperands(2).begin();
}

LogicalResult FMAOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FMAOp::getOperationName() {
  return "vector.fma";
}

std::pair<unsigned, unsigned> FMAOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FMAOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FMAOp::lhs() {
  return *getODSOperands(0).begin();
}

Value FMAOp::rhs() {
  return *getODSOperands(1).begin();
}

Value FMAOp::acc() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange FMAOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMAOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMAOp::accMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FMAOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FMAOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FMAOp::result() {
  return *getODSResults(0).begin();
}

void FMAOp::build(OpBuilder &b, OperationState &result, Value lhs, Value rhs, Value acc) {
build(b, result, lhs.getType(), lhs, rhs, acc);
}

void FMAOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs, Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addTypes(result);
}

void FMAOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, Value acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FMAOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult FMAOp::verify() {
  if (failed(FMAOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(0).begin()).getType(), (*this->getODSOperands(1).begin()).getType(), (*this->getODSOperands(2).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {lhs, rhs, acc, result} have same type");
  return mlir::success();
}

ParseResult FMAOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType lhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  OpAsmParser::OperandType rhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;
  OpAsmParser::OperandType accRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> accOperands(accRawOperands);  llvm::SMLoc accOperandsLoc = parser.getCurrentLocation();
  (void)accOperandsLoc;
  Type lhsRawTypes[1];
  ArrayRef<Type> lhsTypes(lhsRawTypes);

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(accRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(lhsRawTypes[0]))
    return failure();
  result.addTypes(lhsTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes, rhsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(accOperands, lhsTypes, accOperandsLoc, result.operands))
    return failure();
  return success();
}

void FMAOp::print(OpAsmPrinter &p) {
  p << "vector.fma";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p << ",";
  p << " ";
  p << acc();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(lhs().getType());
}

void FMAOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::FlatTransposeOp definitions
//===----------------------------------------------------------------------===//

FlatTransposeOpAdaptor::FlatTransposeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FlatTransposeOpAdaptor::FlatTransposeOpAdaptor(FlatTransposeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FlatTransposeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FlatTransposeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FlatTransposeOpAdaptor::matrix() {
  return *getODSOperands(0).begin();
}

IntegerAttr FlatTransposeOpAdaptor::rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("rows").cast<IntegerAttr>();
  return attr;
}

IntegerAttr FlatTransposeOpAdaptor::columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("columns").cast<IntegerAttr>();
  return attr;
}

LogicalResult FlatTransposeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_rows = odsAttrs.get("rows");
  if (!tblgen_rows) return emitError(loc, "'vector.flat_transpose' op ""requires attribute 'rows'");
    if (!(((tblgen_rows.isa<IntegerAttr>())) && ((tblgen_rows.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.flat_transpose' op ""attribute 'rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_columns = odsAttrs.get("columns");
  if (!tblgen_columns) return emitError(loc, "'vector.flat_transpose' op ""requires attribute 'columns'");
    if (!(((tblgen_columns.isa<IntegerAttr>())) && ((tblgen_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.flat_transpose' op ""attribute 'columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef FlatTransposeOp::getOperationName() {
  return "vector.flat_transpose";
}

std::pair<unsigned, unsigned> FlatTransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FlatTransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FlatTransposeOp::matrix() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FlatTransposeOp::matrixMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FlatTransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FlatTransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FlatTransposeOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr FlatTransposeOp::rowsAttr() {
  return this->getAttr("rows").cast<IntegerAttr>();
}

APInt FlatTransposeOp::rows() {
  auto attr = rowsAttr();
  return attr.getValue();
}

IntegerAttr FlatTransposeOp::columnsAttr() {
  return this->getAttr("columns").cast<IntegerAttr>();
}

APInt FlatTransposeOp::columns() {
  auto attr = columnsAttr();
  return attr.getValue();
}

void FlatTransposeOp::rowsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("rows", attr);
}

void FlatTransposeOp::columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("columns", attr);
}

void FlatTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  odsState.addTypes(res);
}

void FlatTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlatTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, APInt rows, APInt columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  odsState.addTypes(res);
}

void FlatTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, APInt rows, APInt columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlatTransposeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult FlatTransposeOp::verify() {
  if (failed(FlatTransposeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())))) && (((v.getType().isa<VectorType>())) && ((v.getType().cast<VectorType>().getRank()
                           == 1))))) {
        return emitOpError("operand #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())))) && (((v.getType().isa<VectorType>())) && ((v.getType().cast<VectorType>().getRank()
                           == 1))))) {
        return emitOpError("result #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return mlir::success();
}

ParseResult FlatTransposeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType matrixRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> matrixOperands(matrixRawOperands);  llvm::SMLoc matrixOperandsLoc = parser.getCurrentLocation();
  (void)matrixOperandsLoc;
  Type matrixRawTypes[1];
  ArrayRef<Type> matrixTypes(matrixRawTypes);
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);

  if (parser.parseOperand(matrixRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(matrixRawTypes[0]))
    return failure();
  if (parser.parseArrow())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(matrixOperands, matrixTypes, matrixOperandsLoc, result.operands))
    return failure();
  return success();
}

void FlatTransposeOp::print(OpAsmPrinter &p) {
  p << "vector.flat_transpose";
  p << " ";
  p << matrix();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(matrix().getType());
  p << " " << "->";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void FlatTransposeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertElementOp definitions
//===----------------------------------------------------------------------===//

InsertElementOpAdaptor::InsertElementOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertElementOpAdaptor::InsertElementOpAdaptor(InsertElementOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertElementOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange InsertElementOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value InsertElementOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

Value InsertElementOpAdaptor::dest() {
  return *getODSOperands(1).begin();
}

Value InsertElementOpAdaptor::position() {
  return *getODSOperands(2).begin();
}

LogicalResult InsertElementOpAdaptor::verify(Location loc) {
  return success();
}

StringRef InsertElementOp::getOperationName() {
  return "vector.insertelement";
}

std::pair<unsigned, unsigned> InsertElementOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range InsertElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value InsertElementOp::source() {
  return *getODSOperands(0).begin();
}

Value InsertElementOp::dest() {
  return *getODSOperands(1).begin();
}

Value InsertElementOp::position() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange InsertElementOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertElementOp::destMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertElementOp::positionMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertElementOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range InsertElementOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value InsertElementOp::result() {
  return *getODSResults(0).begin();
}

void InsertElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value source, Value dest, Value position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(position);
  odsState.addTypes(result);
}

void InsertElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value dest, Value position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addOperands(position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertElementOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult InsertElementOp::verify() {
  if (failed(InsertElementOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((v.getType().isSignlessInteger()))) {
        return emitOpError("operand #") << index << " must be signless integer, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!(((*this->getODSResults(0).begin()).getType().cast<ShapedType>().getElementType() == (*this->getODSOperands(0).begin()).getType())))
    return emitOpError("failed to verify that source operand type matches element type of result");
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {dest, result} have same type");
  return ::verify(*this);
}

ParseResult InsertElementOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType sourceRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  OpAsmParser::OperandType destRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> destOperands(destRawOperands);  llvm::SMLoc destOperandsLoc = parser.getCurrentLocation();
  (void)destOperandsLoc;
  OpAsmParser::OperandType positionRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> positionOperands(positionRawOperands);  llvm::SMLoc positionOperandsLoc = parser.getCurrentLocation();
  (void)positionOperandsLoc;
  Type positionRawTypes[1];
  ArrayRef<Type> positionTypes(positionRawTypes);
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(destRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperand(positionRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(positionRawTypes[0]))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  for (Type type : resultTypes) {
    (void)type;
    if (!(((type.isa<VectorType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'result' must be vector of any type values, but got " << type;
    }
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, resultTypes[0].cast<ShapedType>().getElementType(), sourceOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(destOperands, resultTypes, destOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(positionOperands, positionTypes, positionOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertElementOp::print(OpAsmPrinter &p) {
  p << "vector.insertelement";
  p << " ";
  p << source();
  p << ",";
  p << " ";
  p << dest();
  p << "[";
  p << position();
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(position().getType());
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void InsertElementOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertOp definitions
//===----------------------------------------------------------------------===//

InsertOpAdaptor::InsertOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertOpAdaptor::InsertOpAdaptor(InsertOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange InsertOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value InsertOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

Value InsertOpAdaptor::dest() {
  return *getODSOperands(1).begin();
}

ArrayAttr InsertOpAdaptor::position() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("position").cast<ArrayAttr>();
  return attr;
}

LogicalResult InsertOpAdaptor::verify(Location loc) {
  {
  auto tblgen_position = odsAttrs.get("position");
  if (!tblgen_position) return emitError(loc, "'vector.insert' op ""requires attribute 'position'");
    if (!(((tblgen_position.isa<ArrayAttr>())) && (llvm::all_of(tblgen_position.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert' op ""attribute 'position' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef InsertOp::getOperationName() {
  return "vector.insert";
}

std::pair<unsigned, unsigned> InsertOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range InsertOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value InsertOp::source() {
  return *getODSOperands(0).begin();
}

Value InsertOp::dest() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange InsertOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertOp::destMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range InsertOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value InsertOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr InsertOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr InsertOp::position() {
  auto attr = positionAttr();
  return attr;
}

void InsertOp::positionAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("position", attr);
}





void InsertOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value source, Value dest, ArrayAttr position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("position", position);
  odsState.addTypes(res);
}

void InsertOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr position) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("position", position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult InsertOp::verify() {
  if (failed(InsertOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {dest, res} have same type");
  return ::verify(*this);
}

ParseResult InsertOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType sourceRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  OpAsmParser::OperandType destRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> destOperands(destRawOperands);  llvm::SMLoc destOperandsLoc = parser.getCurrentLocation();
  (void)destOperandsLoc;
  Type sourceRawTypes[1];
  ArrayRef<Type> sourceTypes(sourceRawTypes);
  Type destRawTypes[1];
  ArrayRef<Type> destTypes(destRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(destRawOperands[0]))
    return failure();

  ArrayAttr positionAttr;
  if (parser.parseAttribute(positionAttr, parser.getBuilder().getType<NoneType>(), "position", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseType(destRawTypes[0]))
    return failure();
  result.addTypes(destTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertOp::print(OpAsmPrinter &p) {
  p << "vector.insert";
  p << " ";
  p << source();
  p << ",";
  p << " ";
  p << dest();
  p << " ";
  p.printAttributeWithoutType(positionAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"position"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(source().getType());
  p << " " << "into";
  p << " ";
  p << ArrayRef<Type>(dest().getType());
}

void InsertOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertSlicesOp definitions
//===----------------------------------------------------------------------===//

InsertSlicesOpAdaptor::InsertSlicesOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertSlicesOpAdaptor::InsertSlicesOpAdaptor(InsertSlicesOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertSlicesOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange InsertSlicesOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value InsertSlicesOpAdaptor::vectors() {
  return *getODSOperands(0).begin();
}

ArrayAttr InsertSlicesOpAdaptor::sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("sizes").cast<ArrayAttr>();
  return attr;
}

ArrayAttr InsertSlicesOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").cast<ArrayAttr>();
  return attr;
}

LogicalResult InsertSlicesOpAdaptor::verify(Location loc) {
  {
  auto tblgen_sizes = odsAttrs.get("sizes");
  if (!tblgen_sizes) return emitError(loc, "'vector.insert_slices' op ""requires attribute 'sizes'");
    if (!(((tblgen_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_slices' op ""attribute 'sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.insert_slices' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_slices' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef InsertSlicesOp::getOperationName() {
  return "vector.insert_slices";
}

std::pair<unsigned, unsigned> InsertSlicesOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range InsertSlicesOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value InsertSlicesOp::vectors() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange InsertSlicesOp::vectorsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertSlicesOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range InsertSlicesOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr InsertSlicesOp::sizesAttr() {
  return this->getAttr("sizes").cast<ArrayAttr>();
}

ArrayAttr InsertSlicesOp::sizes() {
  auto attr = sizesAttr();
  return attr;
}

ArrayAttr InsertSlicesOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr InsertSlicesOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void InsertSlicesOp::sizesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("sizes", attr);
}

void InsertSlicesOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void InsertSlicesOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vectors, ArrayAttr sizes, ArrayAttr strides) {
  odsState.addOperands(vectors);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(resultType0);
}

void InsertSlicesOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vectors, ArrayAttr sizes, ArrayAttr strides) {
  odsState.addOperands(vectors);
  odsState.addAttribute("sizes", sizes);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertSlicesOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult InsertSlicesOp::verify() {
  if (failed(InsertSlicesOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("operand #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

ParseResult InsertSlicesOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType vectorsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> vectorsOperands(vectorsRawOperands);  llvm::SMLoc vectorsOperandsLoc = parser.getCurrentLocation();
  (void)vectorsOperandsLoc;
  Type vectorsRawTypes[1];
  ArrayRef<Type> vectorsTypes(vectorsRawTypes);
  SmallVector<Type, 1> allResultTypes;

  if (parser.parseOperand(vectorsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  ArrayAttr sizesAttr;
  if (parser.parseAttribute(sizesAttr, parser.getBuilder().getType<NoneType>(), "sizes", result.attributes))
    return failure();
  if (parser.parseComma())
    return failure();

  ArrayAttr stridesAttr;
  if (parser.parseAttribute(stridesAttr, parser.getBuilder().getType<NoneType>(), "strides", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorsRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseTypeList(allResultTypes))
    return failure();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(vectorsOperands, vectorsTypes, vectorsOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertSlicesOp::print(OpAsmPrinter &p) {
  p << "vector.insert_slices";
  p << " ";
  p << vectors();
  p << ",";
  p << " ";
  p.printAttributeWithoutType(sizesAttr());
  p << ",";
  p << " ";
  p.printAttributeWithoutType(stridesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"sizes", "strides"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(vectors().getType());
  p << " " << "into";
  p << " ";
  p << getOperation()->getResultTypes();
}

void InsertSlicesOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::InsertStridedSliceOp definitions
//===----------------------------------------------------------------------===//

InsertStridedSliceOpAdaptor::InsertStridedSliceOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertStridedSliceOpAdaptor::InsertStridedSliceOpAdaptor(InsertStridedSliceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertStridedSliceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange InsertStridedSliceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value InsertStridedSliceOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

Value InsertStridedSliceOpAdaptor::dest() {
  return *getODSOperands(1).begin();
}

ArrayAttr InsertStridedSliceOpAdaptor::offsets() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("offsets").cast<ArrayAttr>();
  return attr;
}

ArrayAttr InsertStridedSliceOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").cast<ArrayAttr>();
  return attr;
}

LogicalResult InsertStridedSliceOpAdaptor::verify(Location loc) {
  {
  auto tblgen_offsets = odsAttrs.get("offsets");
  if (!tblgen_offsets) return emitError(loc, "'vector.insert_strided_slice' op ""requires attribute 'offsets'");
    if (!(((tblgen_offsets.isa<ArrayAttr>())) && (llvm::all_of(tblgen_offsets.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_strided_slice' op ""attribute 'offsets' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (!tblgen_strides) return emitError(loc, "'vector.insert_strided_slice' op ""requires attribute 'strides'");
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.insert_strided_slice' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef InsertStridedSliceOp::getOperationName() {
  return "vector.insert_strided_slice";
}

std::pair<unsigned, unsigned> InsertStridedSliceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range InsertStridedSliceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value InsertStridedSliceOp::source() {
  return *getODSOperands(0).begin();
}

Value InsertStridedSliceOp::dest() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange InsertStridedSliceOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertStridedSliceOp::destMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertStridedSliceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range InsertStridedSliceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value InsertStridedSliceOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr InsertStridedSliceOp::offsetsAttr() {
  return this->getAttr("offsets").cast<ArrayAttr>();
}

ArrayAttr InsertStridedSliceOp::offsets() {
  auto attr = offsetsAttr();
  return attr;
}

ArrayAttr InsertStridedSliceOp::stridesAttr() {
  return this->getAttr("strides").cast<ArrayAttr>();
}

ArrayAttr InsertStridedSliceOp::strides() {
  auto attr = stridesAttr();
  return attr;
}

void InsertStridedSliceOp::offsetsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("offsets", attr);
}

void InsertStridedSliceOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}



void InsertStridedSliceOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("strides", strides);
  odsState.addTypes(res);
}

void InsertStridedSliceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value dest, ArrayAttr offsets, ArrayAttr strides) {
  odsState.addOperands(source);
  odsState.addOperands(dest);
  odsState.addAttribute("offsets", offsets);
  odsState.addAttribute("strides", strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertStridedSliceOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult InsertStridedSliceOp::verify() {
  if (failed(InsertStridedSliceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand #0 and result have same element type");
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {dest, res} have same type");
  return ::verify(*this);
}

ParseResult InsertStridedSliceOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType sourceRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  OpAsmParser::OperandType destRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> destOperands(destRawOperands);  llvm::SMLoc destOperandsLoc = parser.getCurrentLocation();
  (void)destOperandsLoc;
  Type sourceRawTypes[1];
  ArrayRef<Type> sourceTypes(sourceRawTypes);
  Type destRawTypes[1];
  ArrayRef<Type> destTypes(destRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(destRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseType(destRawTypes[0]))
    return failure();
  result.addTypes(destTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(destOperands, destTypes, destOperandsLoc, result.operands))
    return failure();
  return success();
}

void InsertStridedSliceOp::print(OpAsmPrinter &p) {
  p << "vector.insert_strided_slice";
  p << " ";
  p << source();
  p << ",";
  p << " ";
  p << dest();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(source().getType());
  p << " " << "into";
  p << " ";
  p << ArrayRef<Type>(dest().getType());
}

void InsertStridedSliceOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::MatmulOp definitions
//===----------------------------------------------------------------------===//

MatmulOpAdaptor::MatmulOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatmulOpAdaptor::MatmulOpAdaptor(MatmulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatmulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MatmulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MatmulOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value MatmulOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

IntegerAttr MatmulOpAdaptor::lhs_rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("lhs_rows").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatmulOpAdaptor::lhs_columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("lhs_columns").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatmulOpAdaptor::rhs_columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("rhs_columns").cast<IntegerAttr>();
  return attr;
}

LogicalResult MatmulOpAdaptor::verify(Location loc) {
  {
  auto tblgen_lhs_rows = odsAttrs.get("lhs_rows");
  if (!tblgen_lhs_rows) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'lhs_rows'");
    if (!(((tblgen_lhs_rows.isa<IntegerAttr>())) && ((tblgen_lhs_rows.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.matrix_multiply' op ""attribute 'lhs_rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_lhs_columns = odsAttrs.get("lhs_columns");
  if (!tblgen_lhs_columns) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'lhs_columns'");
    if (!(((tblgen_lhs_columns.isa<IntegerAttr>())) && ((tblgen_lhs_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.matrix_multiply' op ""attribute 'lhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_rhs_columns = odsAttrs.get("rhs_columns");
  if (!tblgen_rhs_columns) return emitError(loc, "'vector.matrix_multiply' op ""requires attribute 'rhs_columns'");
    if (!(((tblgen_rhs_columns.isa<IntegerAttr>())) && ((tblgen_rhs_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'vector.matrix_multiply' op ""attribute 'rhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef MatmulOp::getOperationName() {
  return "vector.matrix_multiply";
}

std::pair<unsigned, unsigned> MatmulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MatmulOp::lhs() {
  return *getODSOperands(0).begin();
}

Value MatmulOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MatmulOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MatmulOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatmulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MatmulOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr MatmulOp::lhs_rowsAttr() {
  return this->getAttr("lhs_rows").cast<IntegerAttr>();
}

APInt MatmulOp::lhs_rows() {
  auto attr = lhs_rowsAttr();
  return attr.getValue();
}

IntegerAttr MatmulOp::lhs_columnsAttr() {
  return this->getAttr("lhs_columns").cast<IntegerAttr>();
}

APInt MatmulOp::lhs_columns() {
  auto attr = lhs_columnsAttr();
  return attr.getValue();
}

IntegerAttr MatmulOp::rhs_columnsAttr() {
  return this->getAttr("rhs_columns").cast<IntegerAttr>();
}

APInt MatmulOp::rhs_columns() {
  auto attr = rhs_columnsAttr();
  return attr.getValue();
}

void MatmulOp::lhs_rowsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("lhs_rows", attr);
}

void MatmulOp::lhs_columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("lhs_columns", attr);
}

void MatmulOp::rhs_columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("rhs_columns", attr);
}

void MatmulOp::build(OpBuilder &builder, OperationState &result, Value lhs, Value rhs, unsigned lhsRows, unsigned lhsColumns, unsigned rhsColumns) {
     result.addOperands({lhs, rhs});
     result.addAttribute("lhs_rows", builder.getI32IntegerAttr(lhsRows));
     result.addAttribute("lhs_columns", builder.getI32IntegerAttr(lhsColumns));
     result.addAttribute("rhs_columns", builder.getI32IntegerAttr(rhsColumns));
     result.addTypes(VectorType::get(lhsRows * rhsColumns,
       lhs.getType().cast<VectorType>().getElementType()));
   
}

void MatmulOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", lhs_rows);
  odsState.addAttribute("lhs_columns", lhs_columns);
  odsState.addAttribute("rhs_columns", rhs_columns);
  odsState.addTypes(res);
}

void MatmulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", lhs_rows);
  odsState.addAttribute("lhs_columns", lhs_columns);
  odsState.addAttribute("rhs_columns", rhs_columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows));
  odsState.addAttribute("lhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns));
  odsState.addAttribute("rhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns));
  odsState.addTypes(res);
}

void MatmulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows));
  odsState.addAttribute("lhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns));
  odsState.addAttribute("rhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatmulOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MatmulOp::verify() {
  if (failed(MatmulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())))) && (((v.getType().isa<VectorType>())) && ((v.getType().cast<VectorType>().getRank()
                           == 1))))) {
        return emitOpError("operand #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())))) && (((v.getType().isa<VectorType>())) && ((v.getType().cast<VectorType>().getRank()
                           == 1))))) {
        return emitOpError("operand #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isSignedInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())))) && (((v.getType().isa<VectorType>())) && ((v.getType().cast<VectorType>().getRank()
                           == 1))))) {
        return emitOpError("result #") << index << " must be vector of signless integer or signed integer or floating-point values of ranks 1, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that lhs operand and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that rhs operand and result have same element type");
  return mlir::success();
}

ParseResult MatmulOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType lhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  OpAsmParser::OperandType rhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;
  Type lhsRawTypes[1];
  ArrayRef<Type> lhsTypes(lhsRawTypes);
  Type rhsRawTypes[1];
  ArrayRef<Type> rhsTypes(rhsRawTypes);
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();
  if (parser.parseLParen())
    return failure();

  if (parser.parseType(lhsRawTypes[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseType(rhsRawTypes[0]))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseArrow())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, rhsTypes, rhsOperandsLoc, result.operands))
    return failure();
  return success();
}

void MatmulOp::print(OpAsmPrinter &p) {
  p << "vector.matrix_multiply";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " " << "(";
  p << ArrayRef<Type>(lhs().getType());
  p << ",";
  p << " ";
  p << ArrayRef<Type>(rhs().getType());
  p << ")";
  p << " " << "->";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void MatmulOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::OuterProductOp definitions
//===----------------------------------------------------------------------===//

OuterProductOpAdaptor::OuterProductOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

OuterProductOpAdaptor::OuterProductOpAdaptor(OuterProductOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> OuterProductOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange OuterProductOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value OuterProductOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value OuterProductOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

ValueRange OuterProductOpAdaptor::acc() {
  return getODSOperands(2);
}

LogicalResult OuterProductOpAdaptor::verify(Location loc) {
  return success();
}

StringRef OuterProductOp::getOperationName() {
  return "vector.outerproduct";
}

std::pair<unsigned, unsigned> OuterProductOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range OuterProductOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value OuterProductOp::lhs() {
  return *getODSOperands(0).begin();
}

Value OuterProductOp::rhs() {
  return *getODSOperands(1).begin();
}

Operation::operand_range OuterProductOp::acc() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange OuterProductOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange OuterProductOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange OuterProductOp::accMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> OuterProductOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range OuterProductOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}



void OuterProductOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs, ValueRange acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  odsState.addTypes(resultType0);
}

void OuterProductOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, ValueRange acc) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addOperands(acc);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OuterProductOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult OuterProductOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseOuterProductOp(parser, result);
}

void OuterProductOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult OuterProductOp::verify() {
  if (failed(OuterProductOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

void OuterProductOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::PrintOp definitions
//===----------------------------------------------------------------------===//

PrintOpAdaptor::PrintOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PrintOpAdaptor::PrintOpAdaptor(PrintOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PrintOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange PrintOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PrintOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

LogicalResult PrintOpAdaptor::verify(Location loc) {
  return success();
}

StringRef PrintOp::getOperationName() {
  return "vector.print";
}

std::pair<unsigned, unsigned> PrintOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range PrintOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value PrintOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange PrintOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PrintOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range PrintOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void PrintOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value source) {
  odsState.addOperands(source);
}

void PrintOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrintOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult PrintOp::verify() {
  if (failed(PrintOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return mlir::success();
}

ParseResult PrintOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType sourceRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  Type sourceRawTypes[1];
  ArrayRef<Type> sourceTypes(sourceRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  return success();
}

void PrintOp::print(OpAsmPrinter &p) {
  p << "vector.print";
  p << " ";
  p << source();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(source().getType());
}


//===----------------------------------------------------------------------===//
// vector::ReductionOp definitions
//===----------------------------------------------------------------------===//

ReductionOpAdaptor::ReductionOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ReductionOpAdaptor::ReductionOpAdaptor(ReductionOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReductionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange ReductionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ReductionOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

ValueRange ReductionOpAdaptor::acc() {
  return getODSOperands(1);
}

StringAttr ReductionOpAdaptor::kind() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("kind").cast<StringAttr>();
  return attr;
}

LogicalResult ReductionOpAdaptor::verify(Location loc) {
  {
  auto tblgen_kind = odsAttrs.get("kind");
  if (!tblgen_kind) return emitError(loc, "'vector.reduction' op ""requires attribute 'kind'");
    if (!((tblgen_kind.isa<StringAttr>()))) return emitError(loc, "'vector.reduction' op ""attribute 'kind' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef ReductionOp::getOperationName() {
  return "vector.reduction";
}

std::pair<unsigned, unsigned> ReductionOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range ReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ReductionOp::vector() {
  return *getODSOperands(0).begin();
}

Operation::operand_range ReductionOp::acc() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ReductionOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReductionOp::accMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ReductionOp::dest() {
  return *getODSResults(0).begin();
}

StringAttr ReductionOp::kindAttr() {
  return this->getAttr("kind").cast<StringAttr>();
}

StringRef ReductionOp::kind() {
  auto attr = kindAttr();
  return attr.getValue();
}

void ReductionOp::kindAttr(StringAttr attr) {
  this->getOperation()->setAttr("kind", attr);
}

void ReductionOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type dest, StringAttr kind, Value vector, ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", kind);
  odsState.addTypes(dest);
}

void ReductionOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr kind, Value vector, ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", kind);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type dest, StringRef kind, Value vector, ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", odsBuilder.getStringAttr(kind));
  odsState.addTypes(dest);
}

void ReductionOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef kind, Value vector, ValueRange acc) {
  odsState.addOperands(vector);
  odsState.addOperands(acc);
  odsState.addAttribute("kind", odsBuilder.getStringAttr(kind));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ReductionOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReductionOp(parser, result);
}

void ReductionOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ReductionOp::verify() {
  if (failed(ReductionOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that source operand and result have same element type");
  return ::verify(*this);
}

void ReductionOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ReshapeOp definitions
//===----------------------------------------------------------------------===//

ReshapeOpAdaptor::ReshapeOpAdaptor(ValueRange values, DictionaryAttr attrs)  : odsOperands(values), odsAttrs(attrs) {

}

ReshapeOpAdaptor::ReshapeOpAdaptor(ReshapeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReshapeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

ValueRange ReshapeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ReshapeOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

ValueRange ReshapeOpAdaptor::input_shape() {
  return getODSOperands(1);
}

ValueRange ReshapeOpAdaptor::output_shape() {
  return getODSOperands(2);
}

ArrayAttr ReshapeOpAdaptor::fixed_vector_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("fixed_vector_sizes").cast<ArrayAttr>();
  return attr;
}

LogicalResult ReshapeOpAdaptor::verify(Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
    if (numElements != 3)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 3 elements");
  }
    {
  auto tblgen_fixed_vector_sizes = odsAttrs.get("fixed_vector_sizes");
  if (!tblgen_fixed_vector_sizes) return emitError(loc, "'vector.reshape' op ""requires attribute 'fixed_vector_sizes'");
    if (!(((tblgen_fixed_vector_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_fixed_vector_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.reshape' op ""attribute 'fixed_vector_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef ReshapeOp::getOperationName() {
  return "vector.reshape";
}

std::pair<unsigned, unsigned> ReshapeOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

Operation::operand_range ReshapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ReshapeOp::vector() {
  return *getODSOperands(0).begin();
}

Operation::operand_range ReshapeOp::input_shape() {
  return getODSOperands(1);
}

Operation::operand_range ReshapeOp::output_shape() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ReshapeOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ReshapeOp::input_shapeMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ReshapeOp::output_shapeMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
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

ArrayAttr ReshapeOp::fixed_vector_sizesAttr() {
  return this->getAttr("fixed_vector_sizes").cast<ArrayAttr>();
}

ArrayAttr ReshapeOp::fixed_vector_sizes() {
  auto attr = fixed_vector_sizesAttr();
  return attr;
}

void ReshapeOp::fixed_vector_sizesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("fixed_vector_sizes", attr);
}

void ReshapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes) {
  odsState.addOperands(vector);
  odsState.addOperands(input_shape);
  odsState.addOperands(output_shape);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(input_shape.size()), static_cast<int32_t>(output_shape.size())}));
  odsState.addAttribute("fixed_vector_sizes", fixed_vector_sizes);
  odsState.addTypes(result);
}

void ReshapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ValueRange input_shape, ValueRange output_shape, ArrayAttr fixed_vector_sizes) {
  odsState.addOperands(vector);
  odsState.addOperands(input_shape);
  odsState.addOperands(output_shape);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(input_shape.size()), static_cast<int32_t>(output_shape.size())}));
  odsState.addAttribute("fixed_vector_sizes", fixed_vector_sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReshapeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
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
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
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
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

ParseResult ReshapeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType vectorRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> input_shapeOperands;
  llvm::SMLoc input_shapeOperandsLoc = parser.getCurrentLocation();
  (void)input_shapeOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> output_shapeOperands;
  llvm::SMLoc output_shapeOperandsLoc = parser.getCurrentLocation();
  (void)output_shapeOperandsLoc;
  Type vectorRawTypes[1];
  ArrayRef<Type> vectorTypes(vectorRawTypes);
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(input_shapeOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseComma())
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(output_shapeOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseComma())
    return failure();

  ArrayAttr fixed_vector_sizesAttr;
  if (parser.parseAttribute(fixed_vector_sizesAttr, parser.getBuilder().getType<NoneType>(), "fixed_vector_sizes", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(input_shapeOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(output_shapeOperands, odsBuildableType0, result.operands))
    return failure();
  result.addAttribute("operand_segment_sizes", parser.getBuilder().getI32VectorAttr({1, static_cast<int32_t>(input_shapeOperands.size()), static_cast<int32_t>(output_shapeOperands.size())}));
  return success();
}

void ReshapeOp::print(OpAsmPrinter &p) {
  p << "vector.reshape";
  p << " ";
  p << vector();
  p << ",";
  p << " " << "[";
  p << input_shape();
  p << "]";
  p << ",";
  p << " " << "[";
  p << output_shape();
  p << "]";
  p << ",";
  p << " ";
  p.printAttributeWithoutType(fixed_vector_sizesAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"operand_segment_sizes", "fixed_vector_sizes"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(vector().getType());
  p << " " << "to";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void ReshapeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ShapeCastOp definitions
//===----------------------------------------------------------------------===//

ShapeCastOpAdaptor::ShapeCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShapeCastOpAdaptor::ShapeCastOpAdaptor(ShapeCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShapeCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ShapeCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ShapeCastOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

LogicalResult ShapeCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ShapeCastOp::getOperationName() {
  return "vector.shape_cast";
}

std::pair<unsigned, unsigned> ShapeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShapeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShapeCastOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ShapeCastOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShapeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ShapeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ShapeCastOp::result() {
  return *getODSResults(0).begin();
}

void ShapeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value source) {
  odsState.addOperands(source);
  odsState.addTypes(result);
}

void ShapeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShapeCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ShapeCastOp::verify() {
  if (failed(ShapeCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && ((true))) || (((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); }))))) {
        return emitOpError("operand #") << index << " must be vector of any type values or tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && ((true))) || (((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); }))))) {
        return emitOpError("result #") << index << " must be vector of any type values or tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



ParseResult ShapeCastOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType sourceRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> sourceOperands(sourceRawOperands);  llvm::SMLoc sourceOperandsLoc = parser.getCurrentLocation();
  (void)sourceOperandsLoc;
  Type sourceRawTypes[1];
  ArrayRef<Type> sourceTypes(sourceRawTypes);
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(sourceRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(sourceRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(sourceOperands, sourceTypes, sourceOperandsLoc, result.operands))
    return failure();
  return success();
}

void ShapeCastOp::print(OpAsmPrinter &p) {
  p << "vector.shape_cast";
  p << " ";
  p << source();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(source().getType());
  p << " " << "to";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void ShapeCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::ShuffleOp definitions
//===----------------------------------------------------------------------===//

ShuffleOpAdaptor::ShuffleOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShuffleOpAdaptor::ShuffleOpAdaptor(ShuffleOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShuffleOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ShuffleOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ShuffleOpAdaptor::v1() {
  return *getODSOperands(0).begin();
}

Value ShuffleOpAdaptor::v2() {
  return *getODSOperands(1).begin();
}

ArrayAttr ShuffleOpAdaptor::mask() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("mask").cast<ArrayAttr>();
  return attr;
}

LogicalResult ShuffleOpAdaptor::verify(Location loc) {
  {
  auto tblgen_mask = odsAttrs.get("mask");
  if (!tblgen_mask) return emitError(loc, "'vector.shuffle' op ""requires attribute 'mask'");
    if (!(((tblgen_mask.isa<ArrayAttr>())) && (llvm::all_of(tblgen_mask.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.shuffle' op ""attribute 'mask' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef ShuffleOp::getOperationName() {
  return "vector.shuffle";
}

std::pair<unsigned, unsigned> ShuffleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShuffleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShuffleOp::v1() {
  return *getODSOperands(0).begin();
}

Value ShuffleOp::v2() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ShuffleOp::v1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShuffleOp::v2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShuffleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ShuffleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ShuffleOp::vector() {
  return *getODSResults(0).begin();
}

ArrayAttr ShuffleOp::maskAttr() {
  return this->getAttr("mask").cast<ArrayAttr>();
}

ArrayAttr ShuffleOp::mask() {
  auto attr = maskAttr();
  return attr;
}

void ShuffleOp::maskAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("mask", attr);
}



void ShuffleOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value v1, Value v2, ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.addAttribute("mask", mask);
  odsState.addTypes(vector);
}

void ShuffleOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.addAttribute("mask", mask);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ShuffleOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseShuffleOp(parser, result);
}

void ShuffleOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ShuffleOp::verify() {
  if (failed(ShuffleOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that first operand v1 and result have same element type");
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(1)))))
    return emitOpError("failed to verify that second operand v2 and result have same element type");
  return ::verify(*this);
}

void ShuffleOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TransferReadOp definitions
//===----------------------------------------------------------------------===//

TransferReadOpAdaptor::TransferReadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TransferReadOpAdaptor::TransferReadOpAdaptor(TransferReadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TransferReadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange TransferReadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TransferReadOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ValueRange TransferReadOpAdaptor::indices() {
  return getODSOperands(1);
}

Value TransferReadOpAdaptor::padding() {
  return *getODSOperands(2).begin();
}

AffineMapAttr TransferReadOpAdaptor::permutation_map() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("permutation_map").cast<AffineMapAttr>();
  return attr;
}

ArrayAttr TransferReadOpAdaptor::masked() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("masked").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

LogicalResult TransferReadOpAdaptor::verify(Location loc) {
  {
  auto tblgen_permutation_map = odsAttrs.get("permutation_map");
  if (!tblgen_permutation_map) return emitError(loc, "'vector.transfer_read' op ""requires attribute 'permutation_map'");
    if (!((tblgen_permutation_map.isa<AffineMapAttr>()))) return emitError(loc, "'vector.transfer_read' op ""attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");
  }
  {
  auto tblgen_masked = odsAttrs.get("masked");
  if (tblgen_masked) {
    if (!(((tblgen_masked.isa<ArrayAttr>())) && (llvm::all_of(tblgen_masked.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<BoolAttr>()); })))) return emitError(loc, "'vector.transfer_read' op ""attribute 'masked' failed to satisfy constraint: 1-bit boolean array attribute");
  }
  }
  return success();
}

StringRef TransferReadOp::getOperationName() {
  return "vector.transfer_read";
}

std::pair<unsigned, unsigned> TransferReadOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true, false};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range TransferReadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TransferReadOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range TransferReadOp::indices() {
  return getODSOperands(1);
}

Value TransferReadOp::padding() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange TransferReadOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferReadOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferReadOp::paddingMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TransferReadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TransferReadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value TransferReadOp::vector() {
  return *getODSResults(0).begin();
}

AffineMapAttr TransferReadOp::permutation_mapAttr() {
  return this->getAttr("permutation_map").cast<AffineMapAttr>();
}

AffineMap TransferReadOp::permutation_map() {
  auto attr = permutation_mapAttr();
  return attr.getValue();
}

ArrayAttr TransferReadOp::maskedAttr() {
  return this->getAttr("masked").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > TransferReadOp::masked() {
  auto attr = maskedAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

void TransferReadOp::permutation_mapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("permutation_map", attr);
}

void TransferReadOp::maskedAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("masked", attr);
}





void TransferReadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding, /*optional*/ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  odsState.addTypes(vector);
}

void TransferReadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMapAttr permutation_map, Value padding, /*optional*/ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferReadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type vector, Value memref, ValueRange indices, AffineMap permutation_map, Value padding, /*optional*/ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  odsState.addTypes(vector);
}

void TransferReadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, AffineMap permutation_map, Value padding, /*optional*/ArrayAttr masked) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addOperands(padding);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferReadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TransferReadOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTransferReadOp(parser, result);
}

void TransferReadOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TransferReadOp::verify() {
  if (failed(TransferReadOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// vector::TransferWriteOp definitions
//===----------------------------------------------------------------------===//

TransferWriteOpAdaptor::TransferWriteOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TransferWriteOpAdaptor::TransferWriteOpAdaptor(TransferWriteOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TransferWriteOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange TransferWriteOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TransferWriteOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

Value TransferWriteOpAdaptor::memref() {
  return *getODSOperands(1).begin();
}

ValueRange TransferWriteOpAdaptor::indices() {
  return getODSOperands(2);
}

AffineMapAttr TransferWriteOpAdaptor::permutation_map() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("permutation_map").cast<AffineMapAttr>();
  return attr;
}

ArrayAttr TransferWriteOpAdaptor::masked() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("masked").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

LogicalResult TransferWriteOpAdaptor::verify(Location loc) {
  {
  auto tblgen_permutation_map = odsAttrs.get("permutation_map");
  if (!tblgen_permutation_map) return emitError(loc, "'vector.transfer_write' op ""requires attribute 'permutation_map'");
    if (!((tblgen_permutation_map.isa<AffineMapAttr>()))) return emitError(loc, "'vector.transfer_write' op ""attribute 'permutation_map' failed to satisfy constraint: AffineMap attribute");
  }
  {
  auto tblgen_masked = odsAttrs.get("masked");
  if (tblgen_masked) {
    if (!(((tblgen_masked.isa<ArrayAttr>())) && (llvm::all_of(tblgen_masked.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<BoolAttr>()); })))) return emitError(loc, "'vector.transfer_write' op ""attribute 'masked' failed to satisfy constraint: 1-bit boolean array attribute");
  }
  }
  return success();
}

StringRef TransferWriteOp::getOperationName() {
  return "vector.transfer_write";
}

std::pair<unsigned, unsigned> TransferWriteOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 2) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range TransferWriteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TransferWriteOp::vector() {
  return *getODSOperands(0).begin();
}

Value TransferWriteOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::operand_range TransferWriteOp::indices() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange TransferWriteOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferWriteOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TransferWriteOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TransferWriteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TransferWriteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr TransferWriteOp::permutation_mapAttr() {
  return this->getAttr("permutation_map").cast<AffineMapAttr>();
}

AffineMap TransferWriteOp::permutation_map() {
  auto attr = permutation_mapAttr();
  return attr.getValue();
}

ArrayAttr TransferWriteOp::maskedAttr() {
  return this->getAttr("masked").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > TransferWriteOp::masked() {
  auto attr = maskedAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

void TransferWriteOp::permutation_mapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("permutation_map", attr);
}

void TransferWriteOp::maskedAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("masked", attr);
}





void TransferWriteOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, /*optional*/ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
}

void TransferWriteOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMapAttr permutation_map, /*optional*/ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", permutation_map);
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferWriteOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value vector, Value memref, ValueRange indices, AffineMap permutation_map, /*optional*/ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
}

void TransferWriteOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value memref, ValueRange indices, AffineMap permutation_map, /*optional*/ArrayAttr masked) {
  odsState.addOperands(vector);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("permutation_map", AffineMapAttr::get(permutation_map));
  if (masked) {
  odsState.addAttribute("masked", masked);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TransferWriteOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TransferWriteOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTransferWriteOp(parser, result);
}

void TransferWriteOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TransferWriteOp::verify() {
  if (failed(TransferWriteOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
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
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// vector::TransposeOp definitions
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

Value TransposeOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

ArrayAttr TransposeOpAdaptor::transp() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("transp").cast<ArrayAttr>();
  return attr;
}

LogicalResult TransposeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_transp = odsAttrs.get("transp");
  if (!tblgen_transp) return emitError(loc, "'vector.transpose' op ""requires attribute 'transp'");
    if (!(((tblgen_transp.isa<ArrayAttr>())) && (llvm::all_of(tblgen_transp.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'vector.transpose' op ""attribute 'transp' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef TransposeOp::getOperationName() {
  return "vector.transpose";
}

std::pair<unsigned, unsigned> TransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TransposeOp::vector() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TransposeOp::vectorMutable() {
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

Value TransposeOp::result() {
  return *getODSResults(0).begin();
}

ArrayAttr TransposeOp::transpAttr() {
  return this->getAttr("transp").cast<ArrayAttr>();
}

ArrayAttr TransposeOp::transp() {
  auto attr = transpAttr();
  return attr;
}

void TransposeOp::transpAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("transp", attr);
}



void TransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value vector, ArrayAttr transp) {
  odsState.addOperands(vector);
  odsState.addAttribute("transp", transp);
  odsState.addTypes(result);
}

void TransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, ArrayAttr transp) {
  odsState.addOperands(vector);
  odsState.addAttribute("transp", transp);
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

LogicalResult TransposeOp::verify() {
  if (failed(TransposeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getElementTypeOrSelf((*this->getOperation()).getResult(0)) == getElementTypeOrSelf((*this->getOperation()).getOperand(0)))))
    return emitOpError("failed to verify that operand and result have same element type");
  return ::verify(*this);
}





ParseResult TransposeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType vectorRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> vectorOperands(vectorRawOperands);  llvm::SMLoc vectorOperandsLoc = parser.getCurrentLocation();
  (void)vectorOperandsLoc;
  Type vectorRawTypes[1];
  ArrayRef<Type> vectorTypes(vectorRawTypes);
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(vectorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  ArrayAttr transpAttr;
  if (parser.parseAttribute(transpAttr, parser.getBuilder().getType<NoneType>(), "transp", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(vectorRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(vectorOperands, vectorTypes, vectorOperandsLoc, result.operands))
    return failure();
  return success();
}

void TransposeOp::print(OpAsmPrinter &p) {
  p << "vector.transpose";
  p << " ";
  p << vector();
  p << ",";
  p << " ";
  p.printAttributeWithoutType(transpAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"transp"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(vector().getType());
  p << " " << "to";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void TransposeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TupleGetOp definitions
//===----------------------------------------------------------------------===//

TupleGetOpAdaptor::TupleGetOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TupleGetOpAdaptor::TupleGetOpAdaptor(TupleGetOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TupleGetOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TupleGetOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TupleGetOpAdaptor::vectors() {
  return *getODSOperands(0).begin();
}

IntegerAttr TupleGetOpAdaptor::index() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("index").cast<IntegerAttr>();
  return attr;
}

LogicalResult TupleGetOpAdaptor::verify(Location loc) {
  {
  auto tblgen_index = odsAttrs.get("index");
  if (!tblgen_index) return emitError(loc, "'vector.tuple_get' op ""requires attribute 'index'");
    if (!((tblgen_index.isa<IntegerAttr>()))) return emitError(loc, "'vector.tuple_get' op ""attribute 'index' failed to satisfy constraint: arbitrary integer attribute");
  }
  return success();
}

StringRef TupleGetOp::getOperationName() {
  return "vector.tuple_get";
}

std::pair<unsigned, unsigned> TupleGetOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TupleGetOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TupleGetOp::vectors() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TupleGetOp::vectorsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TupleGetOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TupleGetOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

IntegerAttr TupleGetOp::indexAttr() {
  return this->getAttr("index").cast<IntegerAttr>();
}

APInt TupleGetOp::index() {
  auto attr = indexAttr();
  return attr.getValue();
}

void TupleGetOp::indexAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("index", attr);
}

void TupleGetOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value vectors, IntegerAttr index) {
  odsState.addOperands(vectors);
  odsState.addAttribute("index", index);
  odsState.addTypes(resultType0);
}

void TupleGetOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vectors, IntegerAttr index) {
  odsState.addOperands(vectors);
  odsState.addAttribute("index", index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TupleGetOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TupleGetOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTupleGetOp(parser, result);
}

void TupleGetOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TupleGetOp::verify() {
  if (failed(TupleGetOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("operand #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



void TupleGetOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TupleOp definitions
//===----------------------------------------------------------------------===//

TupleOpAdaptor::TupleOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TupleOpAdaptor::TupleOpAdaptor(TupleOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TupleOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange TupleOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange TupleOpAdaptor::vectors() {
  return getODSOperands(0);
}

LogicalResult TupleOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TupleOp::getOperationName() {
  return "vector.tuple";
}

std::pair<unsigned, unsigned> TupleOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range TupleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range TupleOp::vectors() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange TupleOp::vectorsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TupleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TupleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TupleOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange vectors) {
  odsState.addOperands(vectors);
  odsState.addTypes(resultType0);
}

void TupleOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange vectors) {
  odsState.addOperands(vectors);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TupleOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TupleOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTupleOp(parser, result);
}

void TupleOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TupleOp::verify() {
  if (failed(TupleOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<VectorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TupleType>())) && (llvm::all_of(v.getType().cast<TupleType>().getTypes(), [](Type t) { return ((t.isa<VectorType>())) && ((true)); })))) {
        return emitOpError("result #") << index << " must be tuple with any combination of vector of any type values values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

void TupleOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// vector::TypeCastOp definitions
//===----------------------------------------------------------------------===//

TypeCastOpAdaptor::TypeCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TypeCastOpAdaptor::TypeCastOpAdaptor(TypeCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TypeCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TypeCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TypeCastOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

LogicalResult TypeCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TypeCastOp::getOperationName() {
  return "vector.type_cast";
}

std::pair<unsigned, unsigned> TypeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TypeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TypeCastOp::memref() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TypeCastOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TypeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TypeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value TypeCastOp::result() {
  return *getODSResults(0).begin();
}



void TypeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref) {
  odsState.addOperands(memref);
  odsState.addTypes(result);
}

void TypeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref) {
  odsState.addOperands(memref);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TypeCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult TypeCastOp::verify() {
  if (failed(TypeCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && ((v.getType().cast<ShapedType>().hasStaticShape())))) {
        return emitOpError("operand #") << index << " must be statically shaped memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

ParseResult TypeCastOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  return success();
}

void TypeCastOp::print(OpAsmPrinter &p) {
  p << "vector.type_cast";
  p << " ";
  p << memref();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
  p << " " << "to";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void TypeCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

