/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

linalg::BatchMatmulOp,
linalg::ConvOp,
linalg::CopyOp,
linalg::DotOp,
linalg::FillOp,
linalg::GenericOp,
linalg::IndexedGenericOp,
linalg::MatmulOp,
linalg::MatvecOp,
linalg::PoolingMaxOp,
linalg::PoolingMinOp,
linalg::PoolingSumOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// linalg::BatchMatmulOp definitions
//===----------------------------------------------------------------------===//

BatchMatmulOpAdaptor::BatchMatmulOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BatchMatmulOpAdaptor::BatchMatmulOpAdaptor(BatchMatmulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BatchMatmulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange BatchMatmulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange BatchMatmulOpAdaptor::views() {
  return getODSOperands(0);
}

LogicalResult BatchMatmulOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BatchMatmulOp::getOperationName() {
  return "linalg.batch_matmul";
}

std::pair<unsigned, unsigned> BatchMatmulOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range BatchMatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range BatchMatmulOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange BatchMatmulOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BatchMatmulOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::result_range BatchMatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range BatchMatmulOp::output_tensors() {
  return getODSResults(0);
}

Region &BatchMatmulOp::region() {
  return this->getOperation()->getRegion(0);
}

void BatchMatmulOp::build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views) {
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<BatchMatmulOp>(
            b, result, TypeRange(views), outputTypes);
        
}

void BatchMatmulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views) {
  odsState.addOperands(views);
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void BatchMatmulOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

ParseResult BatchMatmulOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseNamedStructuredOp<BatchMatmulOp>(parser, result);
}

void BatchMatmulOp::print(OpAsmPrinter &p) {
  return ::printNamedStructuredOp(p, *this);
}

LogicalResult BatchMatmulOp::verify() {
  if (failed(BatchMatmulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_324, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((region.getBlocks().size() == 1))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::verifyNamedStructuredOp(*this);
}




//===----------------------------------------------------------------------===//
// linalg::ConvOp definitions
//===----------------------------------------------------------------------===//

ConvOpAdaptor::ConvOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConvOpAdaptor::ConvOpAdaptor(ConvOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConvOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConvOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ConvOpAdaptor::filter() {
  return *getODSOperands(0).begin();
}

Value ConvOpAdaptor::input() {
  return *getODSOperands(1).begin();
}

Value ConvOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

ArrayAttr ConvOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

ArrayAttr ConvOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

DenseIntElementsAttr ConvOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<DenseIntElementsAttr>();
  return attr;
}

LogicalResult ConvOpAdaptor::verify(Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.conv' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<ArrayAttr>())) && (llvm::all_of(tblgen_dilations.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.conv' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<DenseIntElementsAttr>())) && ((tblgen_padding.cast<DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.conv' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

StringRef ConvOp::getOperationName() {
  return "linalg.conv";
}

std::pair<unsigned, unsigned> ConvOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConvOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ConvOp::filter() {
  return *getODSOperands(0).begin();
}

Value ConvOp::input() {
  return *getODSOperands(1).begin();
}

Value ConvOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ConvOp::filterMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConvOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConvOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConvOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConvOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr ConvOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > ConvOp::strides() {
  auto attr = stridesAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

ArrayAttr ConvOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > ConvOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

DenseIntElementsAttr ConvOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<DenseIntElementsAttr>();
}

Optional< DenseIntElementsAttr > ConvOp::padding() {
  auto attr = paddingAttr();
  return attr ? Optional< DenseIntElementsAttr >(attr) : (llvm::None);
}

void ConvOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void ConvOp::dilationsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void ConvOp::paddingAttr(DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void ConvOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(filter);
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void ConvOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value filter, Value input, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(filter);
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConvOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ConvOp::verify() {
  if (failed(ConvOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



ParseResult ConvOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void ConvOp::print(OpAsmPrinter &p) {
  p << "linalg.conv";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::CopyOp definitions
//===----------------------------------------------------------------------===//

CopyOpAdaptor::CopyOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CopyOpAdaptor::CopyOpAdaptor(CopyOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CopyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CopyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CopyOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

Value CopyOpAdaptor::output() {
  return *getODSOperands(1).begin();
}

AffineMapAttr CopyOpAdaptor::inputPermutation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("inputPermutation").dyn_cast_or_null<AffineMapAttr>();
  return attr;
}

AffineMapAttr CopyOpAdaptor::outputPermutation() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("outputPermutation").dyn_cast_or_null<AffineMapAttr>();
  return attr;
}

LogicalResult CopyOpAdaptor::verify(Location loc) {
  {
  auto tblgen_inputPermutation = odsAttrs.get("inputPermutation");
  if (tblgen_inputPermutation) {
    if (!((tblgen_inputPermutation.isa<AffineMapAttr>()))) return emitError(loc, "'linalg.copy' op ""attribute 'inputPermutation' failed to satisfy constraint: AffineMap attribute");
  }
  }
  {
  auto tblgen_outputPermutation = odsAttrs.get("outputPermutation");
  if (tblgen_outputPermutation) {
    if (!((tblgen_outputPermutation.isa<AffineMapAttr>()))) return emitError(loc, "'linalg.copy' op ""attribute 'outputPermutation' failed to satisfy constraint: AffineMap attribute");
  }
  }
  return success();
}

StringRef CopyOp::getOperationName() {
  return "linalg.copy";
}

std::pair<unsigned, unsigned> CopyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CopyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CopyOp::input() {
  return *getODSOperands(0).begin();
}

Value CopyOp::output() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CopyOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CopyOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CopyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CopyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr CopyOp::inputPermutationAttr() {
  return this->getAttr("inputPermutation").dyn_cast_or_null<AffineMapAttr>();
}

Optional< AffineMap > CopyOp::inputPermutation() {
  auto attr = inputPermutationAttr();
  return attr ? Optional< AffineMap >(attr.getValue()) : (llvm::None);
}

AffineMapAttr CopyOp::outputPermutationAttr() {
  return this->getAttr("outputPermutation").dyn_cast_or_null<AffineMapAttr>();
}

Optional< AffineMap > CopyOp::outputPermutation() {
  auto attr = outputPermutationAttr();
  return attr ? Optional< AffineMap >(attr.getValue()) : (llvm::None);
}

void CopyOp::inputPermutationAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("inputPermutation", attr);
}

void CopyOp::outputPermutationAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("outputPermutation", attr);
}

void CopyOp::build(OpBuilder &builder, OperationState &result, Value input, Value output) {
    return build(
      builder, result, input, output, AffineMapAttr(), AffineMapAttr());
  
}

void CopyOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (inputPermutation) {
  odsState.addAttribute("inputPermutation", inputPermutation);
  }
  if (outputPermutation) {
  odsState.addAttribute("outputPermutation", outputPermutation);
  }
}

void CopyOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value output, /*optional*/AffineMapAttr inputPermutation, /*optional*/AffineMapAttr outputPermutation) {
  odsState.addOperands(input);
  odsState.addOperands(output);
  if (inputPermutation) {
  odsState.addAttribute("inputPermutation", inputPermutation);
  }
  if (outputPermutation) {
  odsState.addAttribute("outputPermutation", outputPermutation);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopyOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CopyOp::verify() {
  if (failed(CopyOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



ParseResult CopyOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void CopyOp::print(OpAsmPrinter &p) {
  p << "linalg.copy";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::DotOp definitions
//===----------------------------------------------------------------------===//

DotOpAdaptor::DotOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DotOpAdaptor::DotOpAdaptor(DotOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DotOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange DotOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult DotOpAdaptor::verify(Location loc) {
  return success();
}

StringRef DotOp::getOperationName() {
  return "linalg.dot";
}

std::pair<unsigned, unsigned> DotOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range DotOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> DotOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range DotOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DotOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value odsArg_0, Value odsArg_1, Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
}

void DotOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addOperands(odsArg_2);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DotOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult DotOp::verify() {
  if (failed(DotOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 1, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!(((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))) && ((((v.getType().isa<MemRefType>())) && ((true))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 0)))))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values of rank 0, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}



ParseResult DotOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void DotOp::print(OpAsmPrinter &p) {
  p << "linalg.dot";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::FillOp definitions
//===----------------------------------------------------------------------===//

FillOpAdaptor::FillOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FillOpAdaptor::FillOpAdaptor(FillOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FillOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FillOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FillOpAdaptor::output() {
  return *getODSOperands(0).begin();
}

Value FillOpAdaptor::value() {
  return *getODSOperands(1).begin();
}

LogicalResult FillOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FillOp::getOperationName() {
  return "linalg.fill";
}

std::pair<unsigned, unsigned> FillOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FillOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FillOp::output() {
  return *getODSOperands(0).begin();
}

Value FillOp::value() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FillOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FillOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FillOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FillOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FillOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value output, Value value) {
  odsState.addOperands(output);
  odsState.addOperands(value);
}

void FillOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value output, Value value) {
  odsState.addOperands(output);
  odsState.addOperands(value);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FillOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult FillOp::verify() {
  if (failed(FillOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!(((v.getType().isa<FloatType>())) || ((v.getType().isSignlessInteger())) || (((v.getType().isa<VectorType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be floating-point or signless integer or vector of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



ParseResult FillOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void FillOp::print(OpAsmPrinter &p) {
  p << "linalg.fill";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::GenericOp definitions
//===----------------------------------------------------------------------===//

GenericOpAdaptor::GenericOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GenericOpAdaptor::GenericOpAdaptor(GenericOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GenericOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange GenericOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange GenericOpAdaptor::views() {
  return getODSOperands(0);
}

IntegerAttr GenericOpAdaptor::args_in() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("args_in").cast<IntegerAttr>();
  return attr;
}

IntegerAttr GenericOpAdaptor::args_out() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("args_out").cast<IntegerAttr>();
  return attr;
}

ArrayAttr GenericOpAdaptor::indexing_maps() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("indexing_maps").cast<ArrayAttr>();
  return attr;
}

ArrayAttr GenericOpAdaptor::iterator_types() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("iterator_types").cast<ArrayAttr>();
  return attr;
}

StringAttr GenericOpAdaptor::doc() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("doc").dyn_cast_or_null<StringAttr>();
  return attr;
}

StringAttr GenericOpAdaptor::library_call() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("library_call").dyn_cast_or_null<StringAttr>();
  return attr;
}

LogicalResult GenericOpAdaptor::verify(Location loc) {
  {
  auto tblgen_args_in = odsAttrs.get("args_in");
  if (!tblgen_args_in) return emitError(loc, "'linalg.generic' op ""requires attribute 'args_in'");
    if (!(((tblgen_args_in.isa<IntegerAttr>())) && ((tblgen_args_in.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.generic' op ""attribute 'args_in' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_args_out = odsAttrs.get("args_out");
  if (!tblgen_args_out) return emitError(loc, "'linalg.generic' op ""requires attribute 'args_out'");
    if (!(((tblgen_args_out.isa<IntegerAttr>())) && ((tblgen_args_out.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.generic' op ""attribute 'args_out' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_indexing_maps = odsAttrs.get("indexing_maps");
  if (!tblgen_indexing_maps) return emitError(loc, "'linalg.generic' op ""requires attribute 'indexing_maps'");
    if (!(((tblgen_indexing_maps.isa<ArrayAttr>())) && (llvm::all_of(tblgen_indexing_maps.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'linalg.generic' op ""attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  {
  auto tblgen_iterator_types = odsAttrs.get("iterator_types");
  if (!tblgen_iterator_types) return emitError(loc, "'linalg.generic' op ""requires attribute 'iterator_types'");
    if (!((tblgen_iterator_types.isa<ArrayAttr>()))) return emitError(loc, "'linalg.generic' op ""attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  {
  auto tblgen_doc = odsAttrs.get("doc");
  if (tblgen_doc) {
    if (!((tblgen_doc.isa<StringAttr>()))) return emitError(loc, "'linalg.generic' op ""attribute 'doc' failed to satisfy constraint: string attribute");
  }
  }
  {
  auto tblgen_library_call = odsAttrs.get("library_call");
  if (tblgen_library_call) {
    if (!((tblgen_library_call.isa<StringAttr>()))) return emitError(loc, "'linalg.generic' op ""attribute 'library_call' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

StringRef GenericOp::getOperationName() {
  return "linalg.generic";
}

std::pair<unsigned, unsigned> GenericOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range GenericOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range GenericOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange GenericOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> GenericOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::result_range GenericOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range GenericOp::output_tensors() {
  return getODSResults(0);
}

Region &GenericOp::region() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr GenericOp::args_inAttr() {
  return this->getAttr("args_in").cast<IntegerAttr>();
}

APInt GenericOp::args_in() {
  auto attr = args_inAttr();
  return attr.getValue();
}

IntegerAttr GenericOp::args_outAttr() {
  return this->getAttr("args_out").cast<IntegerAttr>();
}

APInt GenericOp::args_out() {
  auto attr = args_outAttr();
  return attr.getValue();
}

ArrayAttr GenericOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<ArrayAttr>();
}

ArrayAttr GenericOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

ArrayAttr GenericOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<ArrayAttr>();
}

ArrayAttr GenericOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

StringAttr GenericOp::docAttr() {
  return this->getAttr("doc").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > GenericOp::doc() {
  auto attr = docAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

StringAttr GenericOp::library_callAttr() {
  return this->getAttr("library_call").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > GenericOp::library_call() {
  auto attr = library_callAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void GenericOp::args_inAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("args_in", attr);
}

void GenericOp::args_outAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("args_out", attr);
}

void GenericOp::indexing_mapsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("indexing_maps", attr);
}

void GenericOp::iterator_typesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("iterator_types", attr);
}

void GenericOp::docAttr(StringAttr attr) {
  this->getOperation()->setAttr("doc", attr);
}

void GenericOp::library_callAttr(StringAttr attr) {
  this->getOperation()->setAttr("library_call", attr);
}



void GenericOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", args_in);
  odsState.addAttribute("args_out", args_out);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void GenericOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_in));
  odsState.addAttribute("args_out", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_out));
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void GenericOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

ParseResult GenericOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGenericOp(parser, result);
}

void GenericOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult GenericOp::verify() {
  if (failed(GenericOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_324, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((true))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// linalg::IndexedGenericOp definitions
//===----------------------------------------------------------------------===//

IndexedGenericOpAdaptor::IndexedGenericOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

IndexedGenericOpAdaptor::IndexedGenericOpAdaptor(IndexedGenericOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> IndexedGenericOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange IndexedGenericOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange IndexedGenericOpAdaptor::views() {
  return getODSOperands(0);
}

IntegerAttr IndexedGenericOpAdaptor::args_in() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("args_in").cast<IntegerAttr>();
  return attr;
}

IntegerAttr IndexedGenericOpAdaptor::args_out() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("args_out").cast<IntegerAttr>();
  return attr;
}

ArrayAttr IndexedGenericOpAdaptor::indexing_maps() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("indexing_maps").cast<ArrayAttr>();
  return attr;
}

ArrayAttr IndexedGenericOpAdaptor::iterator_types() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("iterator_types").cast<ArrayAttr>();
  return attr;
}

StringAttr IndexedGenericOpAdaptor::doc() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("doc").dyn_cast_or_null<StringAttr>();
  return attr;
}

StringAttr IndexedGenericOpAdaptor::library_call() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("library_call").dyn_cast_or_null<StringAttr>();
  return attr;
}

LogicalResult IndexedGenericOpAdaptor::verify(Location loc) {
  {
  auto tblgen_args_in = odsAttrs.get("args_in");
  if (!tblgen_args_in) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'args_in'");
    if (!(((tblgen_args_in.isa<IntegerAttr>())) && ((tblgen_args_in.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'args_in' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_args_out = odsAttrs.get("args_out");
  if (!tblgen_args_out) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'args_out'");
    if (!(((tblgen_args_out.isa<IntegerAttr>())) && ((tblgen_args_out.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'args_out' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_indexing_maps = odsAttrs.get("indexing_maps");
  if (!tblgen_indexing_maps) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'indexing_maps'");
    if (!(((tblgen_indexing_maps.isa<ArrayAttr>())) && (llvm::all_of(tblgen_indexing_maps.cast<ArrayAttr>(), [](Attribute attr) { return (attr.isa<AffineMapAttr>()); })))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'indexing_maps' failed to satisfy constraint: AffineMap array attribute");
  }
  {
  auto tblgen_iterator_types = odsAttrs.get("iterator_types");
  if (!tblgen_iterator_types) return emitError(loc, "'linalg.indexed_generic' op ""requires attribute 'iterator_types'");
    if (!((tblgen_iterator_types.isa<ArrayAttr>()))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'iterator_types' failed to satisfy constraint: array attribute");
  }
  {
  auto tblgen_doc = odsAttrs.get("doc");
  if (tblgen_doc) {
    if (!((tblgen_doc.isa<StringAttr>()))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'doc' failed to satisfy constraint: string attribute");
  }
  }
  {
  auto tblgen_library_call = odsAttrs.get("library_call");
  if (tblgen_library_call) {
    if (!((tblgen_library_call.isa<StringAttr>()))) return emitError(loc, "'linalg.indexed_generic' op ""attribute 'library_call' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

StringRef IndexedGenericOp::getOperationName() {
  return "linalg.indexed_generic";
}

std::pair<unsigned, unsigned> IndexedGenericOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range IndexedGenericOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range IndexedGenericOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange IndexedGenericOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IndexedGenericOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::result_range IndexedGenericOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range IndexedGenericOp::output_tensors() {
  return getODSResults(0);
}

Region &IndexedGenericOp::region() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr IndexedGenericOp::args_inAttr() {
  return this->getAttr("args_in").cast<IntegerAttr>();
}

APInt IndexedGenericOp::args_in() {
  auto attr = args_inAttr();
  return attr.getValue();
}

IntegerAttr IndexedGenericOp::args_outAttr() {
  return this->getAttr("args_out").cast<IntegerAttr>();
}

APInt IndexedGenericOp::args_out() {
  auto attr = args_outAttr();
  return attr.getValue();
}

ArrayAttr IndexedGenericOp::indexing_mapsAttr() {
  return this->getAttr("indexing_maps").cast<ArrayAttr>();
}

ArrayAttr IndexedGenericOp::indexing_maps() {
  auto attr = indexing_mapsAttr();
  return attr;
}

ArrayAttr IndexedGenericOp::iterator_typesAttr() {
  return this->getAttr("iterator_types").cast<ArrayAttr>();
}

ArrayAttr IndexedGenericOp::iterator_types() {
  auto attr = iterator_typesAttr();
  return attr;
}

StringAttr IndexedGenericOp::docAttr() {
  return this->getAttr("doc").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > IndexedGenericOp::doc() {
  auto attr = docAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

StringAttr IndexedGenericOp::library_callAttr() {
  return this->getAttr("library_call").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > IndexedGenericOp::library_call() {
  auto attr = library_callAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void IndexedGenericOp::args_inAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("args_in", attr);
}

void IndexedGenericOp::args_outAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("args_out", attr);
}

void IndexedGenericOp::indexing_mapsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("indexing_maps", attr);
}

void IndexedGenericOp::iterator_typesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("iterator_types", attr);
}

void IndexedGenericOp::docAttr(StringAttr attr) {
  this->getOperation()->setAttr("doc", attr);
}

void IndexedGenericOp::library_callAttr(StringAttr attr) {
  this->getOperation()->setAttr("library_call", attr);
}



void IndexedGenericOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, IntegerAttr args_in, IntegerAttr args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", args_in);
  odsState.addAttribute("args_out", args_out);
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void IndexedGenericOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views, APInt args_in, APInt args_out, ArrayAttr indexing_maps, ArrayAttr iterator_types, /*optional*/StringAttr doc, /*optional*/StringAttr library_call) {
  odsState.addOperands(views);
  odsState.addAttribute("args_in", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_in));
  odsState.addAttribute("args_out", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), args_out));
  odsState.addAttribute("indexing_maps", indexing_maps);
  odsState.addAttribute("iterator_types", iterator_types);
  if (doc) {
  odsState.addAttribute("doc", doc);
  }
  if (library_call) {
  odsState.addAttribute("library_call", library_call);
  }
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void IndexedGenericOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

ParseResult IndexedGenericOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGenericOp(parser, result);
}

void IndexedGenericOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult IndexedGenericOp::verify() {
  if (failed(IndexedGenericOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_324, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((true))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// linalg::MatmulOp definitions
//===----------------------------------------------------------------------===//

MatmulOpAdaptor::MatmulOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatmulOpAdaptor::MatmulOpAdaptor(MatmulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatmulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange MatmulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange MatmulOpAdaptor::views() {
  return getODSOperands(0);
}

LogicalResult MatmulOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MatmulOp::getOperationName() {
  return "linalg.matmul";
}

std::pair<unsigned, unsigned> MatmulOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range MatmulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range MatmulOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MatmulOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatmulOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::result_range MatmulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range MatmulOp::output_tensors() {
  return getODSResults(0);
}

Region &MatmulOp::region() {
  return this->getOperation()->getRegion(0);
}

void MatmulOp::build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views) {
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<MatmulOp>(
            b, result, TypeRange(views), outputTypes);
        
}

void MatmulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views) {
  odsState.addOperands(views);
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void MatmulOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

ParseResult MatmulOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseNamedStructuredOp<MatmulOp>(parser, result);
}

void MatmulOp::print(OpAsmPrinter &p) {
  return ::printNamedStructuredOp(p, *this);
}

LogicalResult MatmulOp::verify() {
  if (failed(MatmulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_324, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((region.getBlocks().size() == 1))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::verifyNamedStructuredOp(*this);
}




//===----------------------------------------------------------------------===//
// linalg::MatvecOp definitions
//===----------------------------------------------------------------------===//

MatvecOpAdaptor::MatvecOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatvecOpAdaptor::MatvecOpAdaptor(MatvecOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatvecOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange MatvecOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange MatvecOpAdaptor::views() {
  return getODSOperands(0);
}

LogicalResult MatvecOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MatvecOp::getOperationName() {
  return "linalg.matvec";
}

std::pair<unsigned, unsigned> MatvecOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range MatvecOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range MatvecOp::views() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange MatvecOp::viewsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatvecOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::result_range MatvecOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range MatvecOp::output_tensors() {
  return getODSResults(0);
}

Region &MatvecOp::region() {
  return this->getOperation()->getRegion(0);
}

void MatvecOp::build(OpBuilder &b, OperationState &result, TypeRange outputTypes, ValueRange views) {
          result.addOperands(views);
          result.addTypes(outputTypes);
          buildNamedStructuredOpRegionAndAttributes<MatvecOp>(
            b, result, TypeRange(views), outputTypes);
        
}

void MatvecOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> output_tensors, ValueRange views) {
  odsState.addOperands(views);
  (void)odsState.addRegion();
  odsState.addTypes(output_tensors);
}

void MatvecOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

ParseResult MatvecOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseNamedStructuredOp<MatvecOp>(parser, result);
}

void MatvecOp::print(OpAsmPrinter &p) {
  return ::printNamedStructuredOp(p, *this);
}

LogicalResult MatvecOp::verify() {
  if (failed(MatvecOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true))) || ((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) ))))) {
        return emitOpError("operand #") << index << " must be anonymous_324, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().hasRank()))) && ((true)))) {
        return emitOpError("result #") << index << " must be ranked tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((region.getBlocks().size() == 1))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return ::verifyNamedStructuredOp(*this);
}




//===----------------------------------------------------------------------===//
// linalg::PoolingMaxOp definitions
//===----------------------------------------------------------------------===//

PoolingMaxOpAdaptor::PoolingMaxOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PoolingMaxOpAdaptor::PoolingMaxOpAdaptor(PoolingMaxOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PoolingMaxOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange PoolingMaxOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PoolingMaxOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

Value PoolingMaxOpAdaptor::windowDims() {
  return *getODSOperands(1).begin();
}

Value PoolingMaxOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

ArrayAttr PoolingMaxOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

ArrayAttr PoolingMaxOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

DenseIntElementsAttr PoolingMaxOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<DenseIntElementsAttr>();
  return attr;
}

LogicalResult PoolingMaxOpAdaptor::verify(Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_max' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<ArrayAttr>())) && (llvm::all_of(tblgen_dilations.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_max' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<DenseIntElementsAttr>())) && ((tblgen_padding.cast<DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.pooling_max' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

StringRef PoolingMaxOp::getOperationName() {
  return "linalg.pooling_max";
}

std::pair<unsigned, unsigned> PoolingMaxOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range PoolingMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value PoolingMaxOp::input() {
  return *getODSOperands(0).begin();
}

Value PoolingMaxOp::windowDims() {
  return *getODSOperands(1).begin();
}

Value PoolingMaxOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PoolingMaxOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMaxOp::windowDimsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMaxOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PoolingMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range PoolingMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr PoolingMaxOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > PoolingMaxOp::strides() {
  auto attr = stridesAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

ArrayAttr PoolingMaxOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > PoolingMaxOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

DenseIntElementsAttr PoolingMaxOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<DenseIntElementsAttr>();
}

Optional< DenseIntElementsAttr > PoolingMaxOp::padding() {
  auto attr = paddingAttr();
  return attr ? Optional< DenseIntElementsAttr >(attr) : (llvm::None);
}

void PoolingMaxOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void PoolingMaxOp::dilationsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void PoolingMaxOp::paddingAttr(DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void PoolingMaxOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void PoolingMaxOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoolingMaxOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult PoolingMaxOp::verify() {
  if (failed(PoolingMaxOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



ParseResult PoolingMaxOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void PoolingMaxOp::print(OpAsmPrinter &p) {
  p << "linalg.pooling_max";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::PoolingMinOp definitions
//===----------------------------------------------------------------------===//

PoolingMinOpAdaptor::PoolingMinOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PoolingMinOpAdaptor::PoolingMinOpAdaptor(PoolingMinOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PoolingMinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange PoolingMinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PoolingMinOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

Value PoolingMinOpAdaptor::windowDims() {
  return *getODSOperands(1).begin();
}

Value PoolingMinOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

ArrayAttr PoolingMinOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

ArrayAttr PoolingMinOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

DenseIntElementsAttr PoolingMinOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<DenseIntElementsAttr>();
  return attr;
}

LogicalResult PoolingMinOpAdaptor::verify(Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_min' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<ArrayAttr>())) && (llvm::all_of(tblgen_dilations.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_min' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<DenseIntElementsAttr>())) && ((tblgen_padding.cast<DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.pooling_min' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

StringRef PoolingMinOp::getOperationName() {
  return "linalg.pooling_min";
}

std::pair<unsigned, unsigned> PoolingMinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range PoolingMinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value PoolingMinOp::input() {
  return *getODSOperands(0).begin();
}

Value PoolingMinOp::windowDims() {
  return *getODSOperands(1).begin();
}

Value PoolingMinOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PoolingMinOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMinOp::windowDimsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingMinOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PoolingMinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range PoolingMinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr PoolingMinOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > PoolingMinOp::strides() {
  auto attr = stridesAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

ArrayAttr PoolingMinOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > PoolingMinOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

DenseIntElementsAttr PoolingMinOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<DenseIntElementsAttr>();
}

Optional< DenseIntElementsAttr > PoolingMinOp::padding() {
  auto attr = paddingAttr();
  return attr ? Optional< DenseIntElementsAttr >(attr) : (llvm::None);
}

void PoolingMinOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void PoolingMinOp::dilationsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void PoolingMinOp::paddingAttr(DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void PoolingMinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void PoolingMinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoolingMinOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult PoolingMinOp::verify() {
  if (failed(PoolingMinOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



ParseResult PoolingMinOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void PoolingMinOp::print(OpAsmPrinter &p) {
  p << "linalg.pooling_min";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


//===----------------------------------------------------------------------===//
// linalg::PoolingSumOp definitions
//===----------------------------------------------------------------------===//

PoolingSumOpAdaptor::PoolingSumOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PoolingSumOpAdaptor::PoolingSumOpAdaptor(PoolingSumOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PoolingSumOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange PoolingSumOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PoolingSumOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

Value PoolingSumOpAdaptor::windowDims() {
  return *getODSOperands(1).begin();
}

Value PoolingSumOpAdaptor::output() {
  return *getODSOperands(2).begin();
}

ArrayAttr PoolingSumOpAdaptor::strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("strides").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

ArrayAttr PoolingSumOpAdaptor::dilations() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("dilations").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

DenseIntElementsAttr PoolingSumOpAdaptor::padding() {
  assert(odsAttrs && "no attributes when constructing adapter");
  DenseIntElementsAttr attr = odsAttrs.get("padding").dyn_cast_or_null<DenseIntElementsAttr>();
  return attr;
}

LogicalResult PoolingSumOpAdaptor::verify(Location loc) {
  {
  auto tblgen_strides = odsAttrs.get("strides");
  if (tblgen_strides) {
    if (!(((tblgen_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_sum' op ""attribute 'strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_dilations = odsAttrs.get("dilations");
  if (tblgen_dilations) {
    if (!(((tblgen_dilations.isa<ArrayAttr>())) && (llvm::all_of(tblgen_dilations.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'linalg.pooling_sum' op ""attribute 'dilations' failed to satisfy constraint: 64-bit integer array attribute");
  }
  }
  {
  auto tblgen_padding = odsAttrs.get("padding");
  if (tblgen_padding) {
    if (!(((tblgen_padding.isa<DenseIntElementsAttr>())) && ((tblgen_padding.cast<DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(64))))) return emitError(loc, "'linalg.pooling_sum' op ""attribute 'padding' failed to satisfy constraint: 64-bit signless integer elements attribute");
  }
  }
  return success();
}

StringRef PoolingSumOp::getOperationName() {
  return "linalg.pooling_sum";
}

std::pair<unsigned, unsigned> PoolingSumOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range PoolingSumOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value PoolingSumOp::input() {
  return *getODSOperands(0).begin();
}

Value PoolingSumOp::windowDims() {
  return *getODSOperands(1).begin();
}

Value PoolingSumOp::output() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange PoolingSumOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingSumOp::windowDimsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PoolingSumOp::outputMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PoolingSumOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range PoolingSumOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ArrayAttr PoolingSumOp::stridesAttr() {
  return this->getAttr("strides").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > PoolingSumOp::strides() {
  auto attr = stridesAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

ArrayAttr PoolingSumOp::dilationsAttr() {
  return this->getAttr("dilations").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > PoolingSumOp::dilations() {
  auto attr = dilationsAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

DenseIntElementsAttr PoolingSumOp::paddingAttr() {
  return this->getAttr("padding").dyn_cast_or_null<DenseIntElementsAttr>();
}

Optional< DenseIntElementsAttr > PoolingSumOp::padding() {
  auto attr = paddingAttr();
  return attr ? Optional< DenseIntElementsAttr >(attr) : (llvm::None);
}

void PoolingSumOp::stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("strides", attr);
}

void PoolingSumOp::dilationsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("dilations", attr);
}

void PoolingSumOp::paddingAttr(DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("padding", attr);
}

void PoolingSumOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
}

void PoolingSumOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, Value windowDims, Value output, /*optional*/ArrayAttr strides, /*optional*/ArrayAttr dilations, /*optional*/DenseIntElementsAttr padding) {
  odsState.addOperands(input);
  odsState.addOperands(windowDims);
  odsState.addOperands(output);
  if (strides) {
  odsState.addAttribute("strides", strides);
  }
  if (dilations) {
  odsState.addAttribute("dilations", dilations);
  }
  if (padding) {
  odsState.addAttribute("padding", padding);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PoolingSumOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult PoolingSumOp::verify() {
  if (failed(PoolingSumOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) && (( isStrided(v.getType().cast<MemRefType>()) )))) {
        return emitOpError("operand #") << index << " must be strided memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}



ParseResult PoolingSumOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  if (parser.parseLParen())
    return failure();
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void PoolingSumOp::print(OpAsmPrinter &p) {
  p << "linalg.pooling_sum";
  p << "(";
  p << getOperation()->getOperands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}


#endif  // GET_OP_CLASSES

