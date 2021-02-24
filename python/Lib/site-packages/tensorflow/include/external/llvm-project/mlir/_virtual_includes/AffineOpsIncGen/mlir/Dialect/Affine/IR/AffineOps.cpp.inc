/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

AffineApplyOp,
AffineForOp,
AffineIfOp,
AffineLoadOp,
AffineMaxOp,
AffineMinOp,
AffineParallelOp,
AffinePrefetchOp,
AffineStoreOp,
AffineTerminatorOp,
AffineVectorLoadOp,
AffineVectorStoreOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// AffineApplyOp definitions
//===----------------------------------------------------------------------===//

AffineApplyOpAdaptor::AffineApplyOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineApplyOpAdaptor::AffineApplyOpAdaptor(AffineApplyOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineApplyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineApplyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AffineApplyOpAdaptor::mapOperands() {
  return getODSOperands(0);
}

AffineMapAttr AffineApplyOpAdaptor::map() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("map").cast<AffineMapAttr>();
  return attr;
}

LogicalResult AffineApplyOpAdaptor::verify(Location loc) {
  {
  auto tblgen_map = odsAttrs.get("map");
  if (!tblgen_map) return emitError(loc, "'affine.apply' op ""requires attribute 'map'");
    if (!((tblgen_map.isa<AffineMapAttr>()))) return emitError(loc, "'affine.apply' op ""attribute 'map' failed to satisfy constraint: AffineMap attribute");
  }
  return success();
}

StringRef AffineApplyOp::getOperationName() {
  return "affine.apply";
}

std::pair<unsigned, unsigned> AffineApplyOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineApplyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AffineApplyOp::mapOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AffineApplyOp::mapOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineApplyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineApplyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr AffineApplyOp::mapAttr() {
  return this->getAttr("map").cast<AffineMapAttr>();
}

AffineMap AffineApplyOp::map() {
  auto attr = mapAttr();
  return attr.getValue();
}

void AffineApplyOp::mapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("map", attr);
}

void AffineApplyOp::build(OpBuilder &builder, OperationState &result, AffineMap map, ValueRange mapOperands) {
      build(builder, result, builder.getIndexType(), map, mapOperands);
    
}

void AffineApplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMapAttr map, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("map", map);
  odsState.addTypes(resultType0);
}

void AffineApplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("map", map);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineApplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMap map, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("map", AffineMapAttr::get(map));
  odsState.addTypes(resultType0);
}

void AffineApplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap map, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("map", AffineMapAttr::get(map));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineApplyOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffineApplyOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineApplyOp(parser, result);
}

void AffineApplyOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineApplyOp::verify() {
  if (failed(AffineApplyOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}





void AffineApplyOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AffineForOp definitions
//===----------------------------------------------------------------------===//

AffineForOpAdaptor::AffineForOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineForOpAdaptor::AffineForOpAdaptor(AffineForOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineForOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineForOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult AffineForOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AffineForOp::getOperationName() {
  return "affine.for";
}

std::pair<unsigned, unsigned> AffineForOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineForOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AffineForOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineForOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &AffineForOp::region() {
  return this->getOperation()->getRegion(0);
}





ParseResult AffineForOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineForOp(parser, result);
}

void AffineForOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineForOp::verify() {
  if (failed(AffineForOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verify(*this);
}












//===----------------------------------------------------------------------===//
// AffineIfOp definitions
//===----------------------------------------------------------------------===//

AffineIfOpAdaptor::AffineIfOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineIfOpAdaptor::AffineIfOpAdaptor(AffineIfOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineIfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineIfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult AffineIfOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AffineIfOp::getOperationName() {
  return "affine.if";
}

std::pair<unsigned, unsigned> AffineIfOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineIfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AffineIfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineIfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &AffineIfOp::thenRegion() {
  return this->getOperation()->getRegion(0);
}

Region &AffineIfOp::elseRegion() {
  return this->getOperation()->getRegion(1);
}



ParseResult AffineIfOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineIfOp(parser, result);
}

void AffineIfOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineIfOp::verify() {
  if (failed(AffineIfOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((region.getBlocks().size() == 1))) {
        return emitOpError("region #") << index << " ('thenRegion') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(1))) {
      (void)region;
      if (!((true))) {
        return emitOpError("region #") << index << " ('elseRegion') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}






//===----------------------------------------------------------------------===//
// AffineLoadOp definitions
//===----------------------------------------------------------------------===//

AffineLoadOpAdaptor::AffineLoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineLoadOpAdaptor::AffineLoadOpAdaptor(AffineLoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineLoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineLoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AffineLoadOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ValueRange AffineLoadOpAdaptor::indices() {
  return getODSOperands(1);
}

LogicalResult AffineLoadOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AffineLoadOp::getOperationName() {
  return "affine.load";
}

std::pair<unsigned, unsigned> AffineLoadOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AffineLoadOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range AffineLoadOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange AffineLoadOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AffineLoadOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AffineLoadOp::result() {
  return *getODSResults(0).begin();
}







void AffineLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref, ValueRange indices) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addTypes(result);
}

void AffineLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineLoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffineLoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineLoadOp(parser, result);
}

void AffineLoadOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineLoadOp::verify() {
  if (failed(AffineLoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verify(*this);
}





void AffineLoadOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// AffineMaxOp definitions
//===----------------------------------------------------------------------===//

AffineMaxOpAdaptor::AffineMaxOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineMaxOpAdaptor::AffineMaxOpAdaptor(AffineMaxOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineMaxOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineMaxOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AffineMaxOpAdaptor::operands() {
  return getODSOperands(0);
}

AffineMapAttr AffineMaxOpAdaptor::map() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("map").cast<AffineMapAttr>();
  return attr;
}

LogicalResult AffineMaxOpAdaptor::verify(Location loc) {
  {
  auto tblgen_map = odsAttrs.get("map");
  if (!tblgen_map) return emitError(loc, "'affine.max' op ""requires attribute 'map'");
    if (!((tblgen_map.isa<AffineMapAttr>()))) return emitError(loc, "'affine.max' op ""attribute 'map' failed to satisfy constraint: AffineMap attribute");
  }
  return success();
}

StringRef AffineMaxOp::getOperationName() {
  return "affine.max";
}

std::pair<unsigned, unsigned> AffineMaxOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineMaxOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AffineMaxOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AffineMaxOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineMaxOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineMaxOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr AffineMaxOp::mapAttr() {
  return this->getAttr("map").cast<AffineMapAttr>();
}

AffineMap AffineMaxOp::map() {
  auto attr = mapAttr();
  return attr.getValue();
}

void AffineMaxOp::mapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("map", attr);
}

void AffineMaxOp::build(OpBuilder &builder, OperationState &result, AffineMap affineMap, ValueRange mapOperands) {
      build(builder, result, builder.getIndexType(), affineMap, mapOperands);
    
}

void AffineMaxOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMapAttr map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", map);
  odsState.addTypes(resultType0);
}

void AffineMaxOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", map);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineMaxOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMap map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", AffineMapAttr::get(map));
  odsState.addTypes(resultType0);
}

void AffineMaxOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", AffineMapAttr::get(map));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineMaxOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffineMaxOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineMinMaxOp<AffineMaxOp>(parser, result);
}

void AffineMaxOp::print(OpAsmPrinter &p) {
  return ::printAffineMinMaxOp(p, *this);
}

LogicalResult AffineMaxOp::verify() {
  if (failed(AffineMaxOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyAffineMinMaxOp(*this);
}





void AffineMaxOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AffineMinOp definitions
//===----------------------------------------------------------------------===//

AffineMinOpAdaptor::AffineMinOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineMinOpAdaptor::AffineMinOpAdaptor(AffineMinOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineMinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineMinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AffineMinOpAdaptor::operands() {
  return getODSOperands(0);
}

AffineMapAttr AffineMinOpAdaptor::map() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("map").cast<AffineMapAttr>();
  return attr;
}

LogicalResult AffineMinOpAdaptor::verify(Location loc) {
  {
  auto tblgen_map = odsAttrs.get("map");
  if (!tblgen_map) return emitError(loc, "'affine.min' op ""requires attribute 'map'");
    if (!((tblgen_map.isa<AffineMapAttr>()))) return emitError(loc, "'affine.min' op ""attribute 'map' failed to satisfy constraint: AffineMap attribute");
  }
  return success();
}

StringRef AffineMinOp::getOperationName() {
  return "affine.min";
}

std::pair<unsigned, unsigned> AffineMinOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineMinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AffineMinOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AffineMinOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineMinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineMinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

AffineMapAttr AffineMinOp::mapAttr() {
  return this->getAttr("map").cast<AffineMapAttr>();
}

AffineMap AffineMinOp::map() {
  auto attr = mapAttr();
  return attr.getValue();
}

void AffineMinOp::mapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("map", attr);
}

void AffineMinOp::build(OpBuilder &builder, OperationState &result, AffineMap affineMap, ValueRange mapOperands) {
      build(builder, result, builder.getIndexType(), affineMap, mapOperands);
    
}

void AffineMinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMapAttr map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", map);
  odsState.addTypes(resultType0);
}

void AffineMinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", map);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineMinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMap map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", AffineMapAttr::get(map));
  odsState.addTypes(resultType0);
}

void AffineMinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap map, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("map", AffineMapAttr::get(map));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineMinOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffineMinOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineMinMaxOp<AffineMinOp>(parser, result);
}

void AffineMinOp::print(OpAsmPrinter &p) {
  return ::printAffineMinMaxOp(p, *this);
}

LogicalResult AffineMinOp::verify() {
  if (failed(AffineMinOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyAffineMinMaxOp(*this);
}





void AffineMinOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AffineParallelOp definitions
//===----------------------------------------------------------------------===//

AffineParallelOpAdaptor::AffineParallelOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineParallelOpAdaptor::AffineParallelOpAdaptor(AffineParallelOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineParallelOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineParallelOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AffineParallelOpAdaptor::mapOperands() {
  return getODSOperands(0);
}

AffineMapAttr AffineParallelOpAdaptor::lowerBoundsMap() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("lowerBoundsMap").cast<AffineMapAttr>();
  return attr;
}

AffineMapAttr AffineParallelOpAdaptor::upperBoundsMap() {
  assert(odsAttrs && "no attributes when constructing adapter");
  AffineMapAttr attr = odsAttrs.get("upperBoundsMap").cast<AffineMapAttr>();
  return attr;
}

ArrayAttr AffineParallelOpAdaptor::steps() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("steps").cast<ArrayAttr>();
  return attr;
}

LogicalResult AffineParallelOpAdaptor::verify(Location loc) {
  {
  auto tblgen_lowerBoundsMap = odsAttrs.get("lowerBoundsMap");
  if (!tblgen_lowerBoundsMap) return emitError(loc, "'affine.parallel' op ""requires attribute 'lowerBoundsMap'");
    if (!((tblgen_lowerBoundsMap.isa<AffineMapAttr>()))) return emitError(loc, "'affine.parallel' op ""attribute 'lowerBoundsMap' failed to satisfy constraint: AffineMap attribute");
  }
  {
  auto tblgen_upperBoundsMap = odsAttrs.get("upperBoundsMap");
  if (!tblgen_upperBoundsMap) return emitError(loc, "'affine.parallel' op ""requires attribute 'upperBoundsMap'");
    if (!((tblgen_upperBoundsMap.isa<AffineMapAttr>()))) return emitError(loc, "'affine.parallel' op ""attribute 'upperBoundsMap' failed to satisfy constraint: AffineMap attribute");
  }
  {
  auto tblgen_steps = odsAttrs.get("steps");
  if (!tblgen_steps) return emitError(loc, "'affine.parallel' op ""requires attribute 'steps'");
    if (!(((tblgen_steps.isa<ArrayAttr>())) && (llvm::all_of(tblgen_steps.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'affine.parallel' op ""attribute 'steps' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef AffineParallelOp::getOperationName() {
  return "affine.parallel";
}

std::pair<unsigned, unsigned> AffineParallelOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineParallelOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AffineParallelOp::mapOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AffineParallelOp::mapOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineParallelOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineParallelOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &AffineParallelOp::region() {
  return this->getOperation()->getRegion(0);
}

AffineMapAttr AffineParallelOp::lowerBoundsMapAttr() {
  return this->getAttr("lowerBoundsMap").cast<AffineMapAttr>();
}

AffineMap AffineParallelOp::lowerBoundsMap() {
  auto attr = lowerBoundsMapAttr();
  return attr.getValue();
}

AffineMapAttr AffineParallelOp::upperBoundsMapAttr() {
  return this->getAttr("upperBoundsMap").cast<AffineMapAttr>();
}

AffineMap AffineParallelOp::upperBoundsMap() {
  auto attr = upperBoundsMapAttr();
  return attr.getValue();
}

ArrayAttr AffineParallelOp::stepsAttr() {
  return this->getAttr("steps").cast<ArrayAttr>();
}

ArrayAttr AffineParallelOp::steps() {
  auto attr = stepsAttr();
  return attr;
}

void AffineParallelOp::lowerBoundsMapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("lowerBoundsMap", attr);
}

void AffineParallelOp::upperBoundsMapAttr(AffineMapAttr attr) {
  this->getOperation()->setAttr("upperBoundsMap", attr);
}

void AffineParallelOp::stepsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("steps", attr);
}







void AffineParallelOp::build(OpBuilder &odsBuilder, OperationState &odsState, AffineMapAttr lowerBoundsMap, AffineMapAttr upperBoundsMap, ArrayAttr steps, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("lowerBoundsMap", lowerBoundsMap);
  odsState.addAttribute("upperBoundsMap", upperBoundsMap);
  odsState.addAttribute("steps", steps);
  (void)odsState.addRegion();
}

void AffineParallelOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr lowerBoundsMap, AffineMapAttr upperBoundsMap, ArrayAttr steps, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("lowerBoundsMap", lowerBoundsMap);
  odsState.addAttribute("upperBoundsMap", upperBoundsMap);
  odsState.addAttribute("steps", steps);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineParallelOp::build(OpBuilder &odsBuilder, OperationState &odsState, AffineMap lowerBoundsMap, AffineMap upperBoundsMap, ArrayAttr steps, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("lowerBoundsMap", AffineMapAttr::get(lowerBoundsMap));
  odsState.addAttribute("upperBoundsMap", AffineMapAttr::get(upperBoundsMap));
  odsState.addAttribute("steps", steps);
  (void)odsState.addRegion();
}

void AffineParallelOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap lowerBoundsMap, AffineMap upperBoundsMap, ArrayAttr steps, ValueRange mapOperands) {
  odsState.addOperands(mapOperands);
  odsState.addAttribute("lowerBoundsMap", AffineMapAttr::get(lowerBoundsMap));
  odsState.addAttribute("upperBoundsMap", AffineMapAttr::get(upperBoundsMap));
  odsState.addAttribute("steps", steps);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineParallelOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffineParallelOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineParallelOp(parser, result);
}

void AffineParallelOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineParallelOp::verify() {
  if (failed(AffineParallelOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// AffinePrefetchOp definitions
//===----------------------------------------------------------------------===//

AffinePrefetchOpAdaptor::AffinePrefetchOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffinePrefetchOpAdaptor::AffinePrefetchOpAdaptor(AffinePrefetchOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffinePrefetchOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffinePrefetchOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AffinePrefetchOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ValueRange AffinePrefetchOpAdaptor::indices() {
  return getODSOperands(1);
}

BoolAttr AffinePrefetchOpAdaptor::isWrite() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("isWrite").cast<BoolAttr>();
  return attr;
}

IntegerAttr AffinePrefetchOpAdaptor::localityHint() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("localityHint").cast<IntegerAttr>();
  return attr;
}

BoolAttr AffinePrefetchOpAdaptor::isDataCache() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("isDataCache").cast<BoolAttr>();
  return attr;
}

LogicalResult AffinePrefetchOpAdaptor::verify(Location loc) {
  {
  auto tblgen_isWrite = odsAttrs.get("isWrite");
  if (!tblgen_isWrite) return emitError(loc, "'affine.prefetch' op ""requires attribute 'isWrite'");
    if (!((tblgen_isWrite.isa<BoolAttr>()))) return emitError(loc, "'affine.prefetch' op ""attribute 'isWrite' failed to satisfy constraint: bool attribute");
  }
  {
  auto tblgen_localityHint = odsAttrs.get("localityHint");
  if (!tblgen_localityHint) return emitError(loc, "'affine.prefetch' op ""requires attribute 'localityHint'");
    if (!((((tblgen_localityHint.isa<IntegerAttr>())) && ((tblgen_localityHint.cast<IntegerAttr>().getType().isSignlessInteger(32)))) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() >= 0)) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() <= 3)))) return emitError(loc, "'affine.prefetch' op ""attribute 'localityHint' failed to satisfy constraint: 32-bit signless integer attribute whose minimum value is 0 whose maximum value is 3");
  }
  {
  auto tblgen_isDataCache = odsAttrs.get("isDataCache");
  if (!tblgen_isDataCache) return emitError(loc, "'affine.prefetch' op ""requires attribute 'isDataCache'");
    if (!((tblgen_isDataCache.isa<BoolAttr>()))) return emitError(loc, "'affine.prefetch' op ""attribute 'isDataCache' failed to satisfy constraint: bool attribute");
  }
  return success();
}

StringRef AffinePrefetchOp::getOperationName() {
  return "affine.prefetch";
}

std::pair<unsigned, unsigned> AffinePrefetchOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffinePrefetchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AffinePrefetchOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range AffinePrefetchOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange AffinePrefetchOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AffinePrefetchOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffinePrefetchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffinePrefetchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

BoolAttr AffinePrefetchOp::isWriteAttr() {
  return this->getAttr("isWrite").cast<BoolAttr>();
}

bool AffinePrefetchOp::isWrite() {
  auto attr = isWriteAttr();
  return attr.getValue();
}

IntegerAttr AffinePrefetchOp::localityHintAttr() {
  return this->getAttr("localityHint").cast<IntegerAttr>();
}

APInt AffinePrefetchOp::localityHint() {
  auto attr = localityHintAttr();
  return attr.getValue();
}

BoolAttr AffinePrefetchOp::isDataCacheAttr() {
  return this->getAttr("isDataCache").cast<BoolAttr>();
}

bool AffinePrefetchOp::isDataCache() {
  auto attr = isDataCacheAttr();
  return attr.getValue();
}

void AffinePrefetchOp::isWriteAttr(BoolAttr attr) {
  this->getOperation()->setAttr("isWrite", attr);
}

void AffinePrefetchOp::localityHintAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("localityHint", attr);
}

void AffinePrefetchOp::isDataCacheAttr(BoolAttr attr) {
  this->getOperation()->setAttr("isDataCache", attr);
}

void AffinePrefetchOp::build(OpBuilder &builder, OperationState &result, Value memref,AffineMap map, ArrayRef<Value> mapOperands, bool isWrite,unsigned localityHint, bool isDataCache) {
      assert(map.getNumInputs() == mapOperands.size()
             && "inconsistent index info");
      auto localityHintAttr = builder.getI32IntegerAttr(localityHint);
      auto isWriteAttr = builder.getBoolAttr(isWrite);
      auto isDataCacheAttr = builder.getBoolAttr(isDataCache);
      result.addOperands(memref);
      result.addAttribute(getMapAttrName(), AffineMapAttr::get(map));
      result.addOperands(mapOperands);
      result.addAttribute(getLocalityHintAttrName(), localityHintAttr);
      result.addAttribute(getIsWriteAttrName(), isWriteAttr);
      result.addAttribute(getIsDataCacheAttrName(), isDataCacheAttr);
    
}

void AffinePrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", isWrite);
  odsState.addAttribute("localityHint", localityHint);
  odsState.addAttribute("isDataCache", isDataCache);
}

void AffinePrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", isWrite);
  odsState.addAttribute("localityHint", localityHint);
  odsState.addAttribute("isDataCache", isDataCache);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffinePrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", odsBuilder.getBoolAttr(isWrite));
  odsState.addAttribute("localityHint", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), localityHint));
  odsState.addAttribute("isDataCache", odsBuilder.getBoolAttr(isDataCache));
}

void AffinePrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", odsBuilder.getBoolAttr(isWrite));
  odsState.addAttribute("localityHint", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), localityHint));
  odsState.addAttribute("isDataCache", odsBuilder.getBoolAttr(isDataCache));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffinePrefetchOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffinePrefetchOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffinePrefetchOp(parser, result);
}

void AffinePrefetchOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffinePrefetchOp::verify() {
  if (failed(AffinePrefetchOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}






//===----------------------------------------------------------------------===//
// AffineStoreOp definitions
//===----------------------------------------------------------------------===//

AffineStoreOpAdaptor::AffineStoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineStoreOpAdaptor::AffineStoreOpAdaptor(AffineStoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineStoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineStoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AffineStoreOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value AffineStoreOpAdaptor::memref() {
  return *getODSOperands(1).begin();
}

ValueRange AffineStoreOpAdaptor::indices() {
  return getODSOperands(2);
}

LogicalResult AffineStoreOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AffineStoreOp::getOperationName() {
  return "affine.store";
}

std::pair<unsigned, unsigned> AffineStoreOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AffineStoreOp::value() {
  return *getODSOperands(0).begin();
}

Value AffineStoreOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::operand_range AffineStoreOp::indices() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange AffineStoreOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AffineStoreOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AffineStoreOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}





ParseResult AffineStoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineStoreOp(parser, result);
}

void AffineStoreOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineStoreOp::verify() {
  if (failed(AffineStoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
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





void AffineStoreOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// AffineTerminatorOp definitions
//===----------------------------------------------------------------------===//

AffineTerminatorOpAdaptor::AffineTerminatorOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineTerminatorOpAdaptor::AffineTerminatorOpAdaptor(AffineTerminatorOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineTerminatorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AffineTerminatorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult AffineTerminatorOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AffineTerminatorOp::getOperationName() {
  return "affine.terminator";
}

std::pair<unsigned, unsigned> AffineTerminatorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AffineTerminatorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AffineTerminatorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineTerminatorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AffineTerminatorOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void AffineTerminatorOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineTerminatorOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AffineTerminatorOp::verify() {
  if (failed(AffineTerminatorOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

void AffineTerminatorOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AffineVectorLoadOp definitions
//===----------------------------------------------------------------------===//

AffineVectorLoadOpAdaptor::AffineVectorLoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineVectorLoadOpAdaptor::AffineVectorLoadOpAdaptor(AffineVectorLoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineVectorLoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineVectorLoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AffineVectorLoadOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ValueRange AffineVectorLoadOpAdaptor::indices() {
  return getODSOperands(1);
}

LogicalResult AffineVectorLoadOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AffineVectorLoadOp::getOperationName() {
  return "affine.vector_load";
}

std::pair<unsigned, unsigned> AffineVectorLoadOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineVectorLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AffineVectorLoadOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range AffineVectorLoadOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange AffineVectorLoadOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AffineVectorLoadOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineVectorLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineVectorLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AffineVectorLoadOp::result() {
  return *getODSResults(0).begin();
}

void AffineVectorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref, ValueRange indices) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addTypes(result);
}

void AffineVectorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineVectorLoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffineVectorLoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineVectorLoadOp(parser, result);
}

void AffineVectorLoadOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineVectorLoadOp::verify() {
  if (failed(AffineVectorLoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void AffineVectorLoadOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// AffineVectorStoreOp definitions
//===----------------------------------------------------------------------===//

AffineVectorStoreOpAdaptor::AffineVectorStoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AffineVectorStoreOpAdaptor::AffineVectorStoreOpAdaptor(AffineVectorStoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AffineVectorStoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AffineVectorStoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AffineVectorStoreOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value AffineVectorStoreOpAdaptor::memref() {
  return *getODSOperands(1).begin();
}

ValueRange AffineVectorStoreOpAdaptor::indices() {
  return getODSOperands(2);
}

LogicalResult AffineVectorStoreOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AffineVectorStoreOp::getOperationName() {
  return "affine.vector_store";
}

std::pair<unsigned, unsigned> AffineVectorStoreOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AffineVectorStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AffineVectorStoreOp::value() {
  return *getODSOperands(0).begin();
}

Value AffineVectorStoreOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::operand_range AffineVectorStoreOp::indices() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange AffineVectorStoreOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AffineVectorStoreOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AffineVectorStoreOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AffineVectorStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AffineVectorStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AffineVectorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
}

void AffineVectorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AffineVectorStoreOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AffineVectorStoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAffineVectorStoreOp(parser, result);
}

void AffineVectorStoreOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AffineVectorStoreOp::verify() {
  if (failed(AffineVectorStoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void AffineVectorStoreOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


#endif  // GET_OP_CLASSES

