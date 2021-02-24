/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

shape::AddOp,
shape::AnyOp,
shape::AssumingAllOp,
shape::AssumingOp,
shape::AssumingYieldOp,
shape::BroadcastOp,
shape::ConcatOp,
shape::ConstShapeOp,
shape::ConstSizeOp,
shape::ConstWitnessOp,
shape::CstrBroadcastableOp,
shape::CstrEqOp,
shape::DebugPrintOp,
shape::FromExtentTensorOp,
shape::FromExtentsOp,
shape::GetExtentOp,
shape::IndexToSizeOp,
shape::JoinOp,
shape::MulOp,
shape::NumElementsOp,
shape::ReduceOp,
shape::ShapeOfOp,
shape::SizeToIndexOp,
shape::SplitAtOp,
shape::ToExtentTensorOp,
shape::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// shape::AddOp definitions
//===----------------------------------------------------------------------===//

AddOpAdaptor::AddOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AddOpAdaptor::AddOpAdaptor(AddOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AddOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AddOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AddOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value AddOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult AddOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AddOp::getOperationName() {
  return "shape.add";
}

std::pair<unsigned, unsigned> AddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AddOp::lhs() {
  return *getODSOperands(0).begin();
}

Value AddOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AddOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AddOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AddOp::result() {
  return *getODSResults(0).begin();
}

void AddOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void AddOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void AddOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult AddOp::verify() {
  if (failed(AddOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult AddOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType lhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  OpAsmParser::OperandType rhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void AddOp::print(OpAsmPrinter &p) {
  p << "shape.add";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// shape::AnyOp definitions
//===----------------------------------------------------------------------===//

AnyOpAdaptor::AnyOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AnyOpAdaptor::AnyOpAdaptor(AnyOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AnyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AnyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AnyOpAdaptor::inputs() {
  return getODSOperands(0);
}

LogicalResult AnyOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AnyOp::getOperationName() {
  return "shape.any";
}

std::pair<unsigned, unsigned> AnyOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AnyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AnyOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AnyOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AnyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AnyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AnyOp::result() {
  return *getODSResults(0).begin();
}

void AnyOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.addTypes(result);
}

void AnyOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs) {
  odsState.addOperands(inputs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AnyOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AnyOp::verify() {
  if (failed(AnyOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult AnyOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> inputsOperands;
  llvm::SMLoc inputsOperandsLoc = parser.getCurrentLocation();
  (void)inputsOperandsLoc;

  if (parser.parseOperandList(inputsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void AnyOp::print(OpAsmPrinter &p) {
  p << "shape.any";
  p << " ";
  p << inputs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void AnyOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::AssumingAllOp definitions
//===----------------------------------------------------------------------===//

AssumingAllOpAdaptor::AssumingAllOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumingAllOpAdaptor::AssumingAllOpAdaptor(AssumingAllOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumingAllOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AssumingAllOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AssumingAllOpAdaptor::inputs() {
  return getODSOperands(0);
}

LogicalResult AssumingAllOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AssumingAllOp::getOperationName() {
  return "shape.assuming_all";
}

std::pair<unsigned, unsigned> AssumingAllOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AssumingAllOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AssumingAllOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AssumingAllOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumingAllOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AssumingAllOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AssumingAllOp::result() {
  return *getODSResults(0).begin();
}

void AssumingAllOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.addTypes(result);
}

void AssumingAllOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs) {
  odsState.addOperands(inputs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssumingAllOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AssumingAllOp::verify() {
  if (failed(AssumingAllOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("operand #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



ParseResult AssumingAllOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> inputsOperands;
  llvm::SMLoc inputsOperandsLoc = parser.getCurrentLocation();
  (void)inputsOperandsLoc;

  if (parser.parseOperandList(inputsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void AssumingAllOp::print(OpAsmPrinter &p) {
  p << "shape.assuming_all";
  p << " ";
  p << inputs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void AssumingAllOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::AssumingOp definitions
//===----------------------------------------------------------------------===//

AssumingOpAdaptor::AssumingOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumingOpAdaptor::AssumingOpAdaptor(AssumingOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumingOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AssumingOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AssumingOpAdaptor::witness() {
  return *getODSOperands(0).begin();
}

LogicalResult AssumingOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AssumingOp::getOperationName() {
  return "shape.assuming";
}

std::pair<unsigned, unsigned> AssumingOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AssumingOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AssumingOp::witness() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AssumingOp::witnessMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumingOp::getODSResultIndexAndLength(unsigned index) {
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

Operation::result_range AssumingOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range AssumingOp::results() {
  return getODSResults(0);
}

Region &AssumingOp::doRegion() {
  return this->getOperation()->getRegion(0);
}

void AssumingOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, Value witness) {
  odsState.addOperands(witness);
  (void)odsState.addRegion();
  odsState.addTypes(results);
}

void AssumingOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

ParseResult AssumingOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAssumingOp(parser, result);
}

void AssumingOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AssumingOp::verify() {
  if (failed(AssumingOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("operand #") << index << " must be witness, but got " << v.getType();
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
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((region.getBlocks().size() == 1))) {
        return emitOpError("region #") << index << " ('doRegion') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return mlir::success();
}




//===----------------------------------------------------------------------===//
// shape::AssumingYieldOp definitions
//===----------------------------------------------------------------------===//

AssumingYieldOpAdaptor::AssumingYieldOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumingYieldOpAdaptor::AssumingYieldOpAdaptor(AssumingYieldOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumingYieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AssumingYieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AssumingYieldOpAdaptor::operands() {
  return getODSOperands(0);
}

LogicalResult AssumingYieldOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AssumingYieldOp::getOperationName() {
  return "shape.assuming_yield";
}

std::pair<unsigned, unsigned> AssumingYieldOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AssumingYieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AssumingYieldOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AssumingYieldOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumingYieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AssumingYieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AssumingYieldOp::build(OpBuilder &builder, OperationState &result) {
 /* nothing to do */ 
}

void AssumingYieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands) {
  odsState.addOperands(operands);
}

void AssumingYieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands) {
  odsState.addOperands(operands);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssumingYieldOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AssumingYieldOp::verify() {
  if (failed(AssumingYieldOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult AssumingYieldOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> operandsOperands;
  llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  SmallVector<Type, 1> operandsTypes;
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(operandsTypes))
    return failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return failure();
  return success();
}

void AssumingYieldOp::print(OpAsmPrinter &p) {
  p << "shape.assuming_yield";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  if (!operands().empty()) {
  p << " ";
  p << operands();
  p << " " << ":";
  p << " ";
  p << operands().getTypes();
  }
}

void AssumingYieldOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::BroadcastOp definitions
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

Value BroadcastOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value BroadcastOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

StringAttr BroadcastOpAdaptor::error() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("error").dyn_cast_or_null<StringAttr>();
  return attr;
}

LogicalResult BroadcastOpAdaptor::verify(Location loc) {
  {
  auto tblgen_error = odsAttrs.get("error");
  if (tblgen_error) {
    if (!((tblgen_error.isa<StringAttr>()))) return emitError(loc, "'shape.broadcast' op ""attribute 'error' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

StringRef BroadcastOp::getOperationName() {
  return "shape.broadcast";
}

std::pair<unsigned, unsigned> BroadcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value BroadcastOp::lhs() {
  return *getODSOperands(0).begin();
}

Value BroadcastOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange BroadcastOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange BroadcastOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
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

Value BroadcastOp::result() {
  return *getODSResults(0).begin();
}

StringAttr BroadcastOp::errorAttr() {
  return this->getAttr("error").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > BroadcastOp::error() {
  auto attr = errorAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void BroadcastOp::errorAttr(StringAttr attr) {
  this->getOperation()->setAttr("error", attr);
}

void BroadcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs, /*optional*/StringAttr error) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (error) {
  odsState.addAttribute("error", error);
  }
  odsState.addTypes(result);
}

void BroadcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs, /*optional*/StringAttr error) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (error) {
  odsState.addAttribute("error", error);
  }

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(BroadcastOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void BroadcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, /*optional*/StringAttr error) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  if (error) {
  odsState.addAttribute("error", error);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(BroadcastOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult BroadcastOp::verify() {
  if (failed(BroadcastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



LogicalResult BroadcastOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConcatOp definitions
//===----------------------------------------------------------------------===//

ConcatOpAdaptor::ConcatOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConcatOpAdaptor::ConcatOpAdaptor(ConcatOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConcatOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConcatOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ConcatOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value ConcatOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult ConcatOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ConcatOp::getOperationName() {
  return "shape.concat";
}

std::pair<unsigned, unsigned> ConcatOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConcatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ConcatOp::lhs() {
  return *getODSOperands(0).begin();
}

Value ConcatOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ConcatOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ConcatOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConcatOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConcatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ConcatOp::result() {
  return *getODSResults(0).begin();
}

void ConcatOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void ConcatOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(ConcatOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConcatOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConcatOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(ConcatOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult ConcatOp::verify() {
  if (failed(ConcatOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



LogicalResult ConcatOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConstShapeOp definitions
//===----------------------------------------------------------------------===//

ConstShapeOpAdaptor::ConstShapeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstShapeOpAdaptor::ConstShapeOpAdaptor(ConstShapeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstShapeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConstShapeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

DenseIntElementsAttr ConstShapeOpAdaptor::shape() {
  assert(odsAttrs && "no attributes when constructing adapter");
  DenseIntElementsAttr attr = odsAttrs.get("shape").cast<DenseIntElementsAttr>();
  return attr;
}

LogicalResult ConstShapeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_shape = odsAttrs.get("shape");
  if (!tblgen_shape) return emitError(loc, "'shape.const_shape' op ""requires attribute 'shape'");
    if (!(((tblgen_shape.isa<DenseIntElementsAttr>())) && ((tblgen_shape.cast<DenseIntElementsAttr>()
                                      .getType()
                                      .getElementType()
                                      .isIndex())))) return emitError(loc, "'shape.const_shape' op ""attribute 'shape' failed to satisfy constraint: index elements attribute");
  }
  return success();
}

StringRef ConstShapeOp::getOperationName() {
  return "shape.const_shape";
}

std::pair<unsigned, unsigned> ConstShapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConstShapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstShapeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConstShapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ConstShapeOp::result() {
  return *getODSResults(0).begin();
}

DenseIntElementsAttr ConstShapeOp::shapeAttr() {
  return this->getAttr("shape").cast<DenseIntElementsAttr>();
}

DenseIntElementsAttr ConstShapeOp::shape() {
  auto attr = shapeAttr();
  return attr;
}

void ConstShapeOp::shapeAttr(DenseIntElementsAttr attr) {
  this->getOperation()->setAttr("shape", attr);
}

void ConstShapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, DenseIntElementsAttr shape) {
  odsState.addAttribute("shape", shape);
  odsState.addTypes(result);
}

void ConstShapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, DenseIntElementsAttr shape) {
  odsState.addAttribute("shape", shape);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(ConstShapeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstShapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, DenseIntElementsAttr shape) {
  odsState.addAttribute("shape", shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstShapeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstShapeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(ConstShapeOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

ParseResult ConstShapeOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseConstShapeOp(parser, result);
}

void ConstShapeOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ConstShapeOp::verify() {
  if (failed(ConstShapeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



void ConstShapeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult ConstShapeOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConstSizeOp definitions
//===----------------------------------------------------------------------===//

ConstSizeOpAdaptor::ConstSizeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstSizeOpAdaptor::ConstSizeOpAdaptor(ConstSizeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstSizeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConstSizeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

IntegerAttr ConstSizeOpAdaptor::value() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("value").cast<IntegerAttr>();
  return attr;
}

LogicalResult ConstSizeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_value = odsAttrs.get("value");
  if (!tblgen_value) return emitError(loc, "'shape.const_size' op ""requires attribute 'value'");
    if (!(((tblgen_value.isa<IntegerAttr>())) && ((tblgen_value.cast<IntegerAttr>().getType().isa<IndexType>())))) return emitError(loc, "'shape.const_size' op ""attribute 'value' failed to satisfy constraint: index attribute");
  }
  return success();
}

StringRef ConstSizeOp::getOperationName() {
  return "shape.const_size";
}

std::pair<unsigned, unsigned> ConstSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConstSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConstSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ConstSizeOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr ConstSizeOp::valueAttr() {
  return this->getAttr("value").cast<IntegerAttr>();
}

APInt ConstSizeOp::value() {
  auto attr = valueAttr();
  return attr.getValue();
}

void ConstSizeOp::valueAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("value", attr);
}

void ConstSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr value) {
  odsState.addAttribute("value", value);
  odsState.addTypes(result);
}

void ConstSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr value) {
  odsState.addAttribute("value", value);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(ConstSizeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr value) {
  odsState.addAttribute("value", value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, APInt value) {
  odsState.addAttribute("value", odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), value));
  odsState.addTypes(result);
}

void ConstSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, APInt value) {
  odsState.addAttribute("value", odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), value));

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(ConstSizeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, APInt value) {
  odsState.addAttribute("value", odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), value));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstSizeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(ConstSizeOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult ConstSizeOp::verify() {
  if (failed(ConstSizeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}





ParseResult ConstSizeOp::parse(OpAsmParser &parser, OperationState &result) {
  IntegerAttr valueAttr;
  if (parser.parseAttribute(valueAttr, parser.getBuilder().getIndexType(), "value", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  return success();
}

void ConstSizeOp::print(OpAsmPrinter &p) {
  p << "shape.const_size";
  p << " ";
  p.printAttributeWithoutType(valueAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"value"});
}

void ConstSizeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult ConstSizeOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ConstWitnessOp definitions
//===----------------------------------------------------------------------===//

ConstWitnessOpAdaptor::ConstWitnessOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstWitnessOpAdaptor::ConstWitnessOpAdaptor(ConstWitnessOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstWitnessOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConstWitnessOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

BoolAttr ConstWitnessOpAdaptor::passing() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("passing").cast<BoolAttr>();
  return attr;
}

LogicalResult ConstWitnessOpAdaptor::verify(Location loc) {
  {
  auto tblgen_passing = odsAttrs.get("passing");
  if (!tblgen_passing) return emitError(loc, "'shape.const_witness' op ""requires attribute 'passing'");
    if (!((tblgen_passing.isa<BoolAttr>()))) return emitError(loc, "'shape.const_witness' op ""attribute 'passing' failed to satisfy constraint: bool attribute");
  }
  return success();
}

StringRef ConstWitnessOp::getOperationName() {
  return "shape.const_witness";
}

std::pair<unsigned, unsigned> ConstWitnessOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConstWitnessOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstWitnessOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConstWitnessOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ConstWitnessOp::result() {
  return *getODSResults(0).begin();
}

BoolAttr ConstWitnessOp::passingAttr() {
  return this->getAttr("passing").cast<BoolAttr>();
}

bool ConstWitnessOp::passing() {
  auto attr = passingAttr();
  return attr.getValue();
}

void ConstWitnessOp::passingAttr(BoolAttr attr) {
  this->getOperation()->setAttr("passing", attr);
}

void ConstWitnessOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, BoolAttr passing) {
  odsState.addAttribute("passing", passing);
  odsState.addTypes(result);
}

void ConstWitnessOp::build(OpBuilder &odsBuilder, OperationState &odsState, BoolAttr passing) {
  odsState.addAttribute("passing", passing);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(ConstWitnessOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstWitnessOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, BoolAttr passing) {
  odsState.addAttribute("passing", passing);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstWitnessOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, bool passing) {
  odsState.addAttribute("passing", odsBuilder.getBoolAttr(passing));
  odsState.addTypes(result);
}

void ConstWitnessOp::build(OpBuilder &odsBuilder, OperationState &odsState, bool passing) {
  odsState.addAttribute("passing", odsBuilder.getBoolAttr(passing));

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(ConstWitnessOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void ConstWitnessOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, bool passing) {
  odsState.addAttribute("passing", odsBuilder.getBoolAttr(passing));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstWitnessOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstWitnessOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(ConstWitnessOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult ConstWitnessOp::verify() {
  if (failed(ConstWitnessOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult ConstWitnessOp::parse(OpAsmParser &parser, OperationState &result) {
  BoolAttr passingAttr;
  if (parser.parseAttribute(passingAttr, parser.getBuilder().getIntegerType(1), "passing", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  result.addTypes(odsBuildableType0);
  return success();
}

void ConstWitnessOp::print(OpAsmPrinter &p) {
  p << "shape.const_witness";
  p << " ";
  p.printAttributeWithoutType(passingAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"passing"});
}

void ConstWitnessOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult ConstWitnessOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::WitnessType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::CstrBroadcastableOp definitions
//===----------------------------------------------------------------------===//

CstrBroadcastableOpAdaptor::CstrBroadcastableOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CstrBroadcastableOpAdaptor::CstrBroadcastableOpAdaptor(CstrBroadcastableOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CstrBroadcastableOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CstrBroadcastableOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CstrBroadcastableOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value CstrBroadcastableOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult CstrBroadcastableOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CstrBroadcastableOp::getOperationName() {
  return "shape.cstr_broadcastable";
}

std::pair<unsigned, unsigned> CstrBroadcastableOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CstrBroadcastableOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CstrBroadcastableOp::lhs() {
  return *getODSOperands(0).begin();
}

Value CstrBroadcastableOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CstrBroadcastableOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CstrBroadcastableOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CstrBroadcastableOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CstrBroadcastableOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value CstrBroadcastableOp::result() {
  return *getODSResults(0).begin();
}

void CstrBroadcastableOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void CstrBroadcastableOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(CstrBroadcastableOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void CstrBroadcastableOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CstrBroadcastableOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CstrBroadcastableOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(CstrBroadcastableOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult CstrBroadcastableOp::verify() {
  if (failed(CstrBroadcastableOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}





ParseResult CstrBroadcastableOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType lhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  OpAsmParser::OperandType rhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, odsBuildableType1, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void CstrBroadcastableOp::print(OpAsmPrinter &p) {
  p << "shape.cstr_broadcastable";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

LogicalResult CstrBroadcastableOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::WitnessType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::CstrEqOp definitions
//===----------------------------------------------------------------------===//

CstrEqOpAdaptor::CstrEqOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CstrEqOpAdaptor::CstrEqOpAdaptor(CstrEqOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CstrEqOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange CstrEqOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange CstrEqOpAdaptor::inputs() {
  return getODSOperands(0);
}

LogicalResult CstrEqOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CstrEqOp::getOperationName() {
  return "shape.cstr_eq";
}

std::pair<unsigned, unsigned> CstrEqOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range CstrEqOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range CstrEqOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CstrEqOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CstrEqOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CstrEqOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value CstrEqOp::result() {
  return *getODSResults(0).begin();
}

void CstrEqOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ValueRange inputs) {
  odsState.addOperands(inputs);
  odsState.addTypes(result);
}

void CstrEqOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs) {
  odsState.addOperands(inputs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CstrEqOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CstrEqOp::verify() {
  if (failed(CstrEqOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::WitnessType>()))) {
        return emitOpError("result #") << index << " must be witness, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}





ParseResult CstrEqOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> inputsOperands;
  llvm::SMLoc inputsOperandsLoc = parser.getCurrentLocation();
  (void)inputsOperandsLoc;

  if (parser.parseOperandList(inputsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::WitnessType>();
  Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputsOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void CstrEqOp::print(OpAsmPrinter &p) {
  p << "shape.cstr_eq";
  p << " ";
  p << inputs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// shape::DebugPrintOp definitions
//===----------------------------------------------------------------------===//

DebugPrintOpAdaptor::DebugPrintOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DebugPrintOpAdaptor::DebugPrintOpAdaptor(DebugPrintOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DebugPrintOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange DebugPrintOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value DebugPrintOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

LogicalResult DebugPrintOpAdaptor::verify(Location loc) {
  return success();
}

StringRef DebugPrintOp::getOperationName() {
  return "shape.debug_print";
}

std::pair<unsigned, unsigned> DebugPrintOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range DebugPrintOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value DebugPrintOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange DebugPrintOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DebugPrintOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range DebugPrintOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value DebugPrintOp::output() {
  return *getODSResults(0).begin();
}

void DebugPrintOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Value input) {
  odsState.addOperands(input);
  odsState.addTypes(output);
}

void DebugPrintOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DebugPrintOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult DebugPrintOp::verify() {
  if (failed(DebugPrintOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("operand #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("result #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// shape::FromExtentTensorOp definitions
//===----------------------------------------------------------------------===//

FromExtentTensorOpAdaptor::FromExtentTensorOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FromExtentTensorOpAdaptor::FromExtentTensorOpAdaptor(FromExtentTensorOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FromExtentTensorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FromExtentTensorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FromExtentTensorOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

LogicalResult FromExtentTensorOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FromExtentTensorOp::getOperationName() {
  return "shape.from_extent_tensor";
}

std::pair<unsigned, unsigned> FromExtentTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FromExtentTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FromExtentTensorOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FromExtentTensorOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FromExtentTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FromExtentTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FromExtentTensorOp::result() {
  return *getODSResults(0).begin();
}

void FromExtentTensorOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value input) {
  odsState.addOperands(input);
  odsState.addTypes(result);
}

void FromExtentTensorOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value input) {
  odsState.addOperands(input);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(FromExtentTensorOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void FromExtentTensorOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FromExtentTensorOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FromExtentTensorOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(FromExtentTensorOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult FromExtentTensorOp::verify() {
  if (failed(FromExtentTensorOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IndexType>())))) {
        return emitOpError("operand #") << index << " must be tensor of index values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult FromExtentTensorOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType inputRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> inputOperands(inputRawOperands);  llvm::SMLoc inputOperandsLoc = parser.getCurrentLocation();
  (void)inputOperandsLoc;
  Type inputRawTypes[1];
  ArrayRef<Type> inputTypes(inputRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperand(inputRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(inputRawTypes[0]))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return failure();
  return success();
}

void FromExtentTensorOp::print(OpAsmPrinter &p) {
  p << "shape.from_extent_tensor";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " ";
  p << input();
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(input().getType());
}

void FromExtentTensorOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult FromExtentTensorOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::FromExtentsOp definitions
//===----------------------------------------------------------------------===//

FromExtentsOpAdaptor::FromExtentsOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FromExtentsOpAdaptor::FromExtentsOpAdaptor(FromExtentsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FromExtentsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange FromExtentsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange FromExtentsOpAdaptor::extents() {
  return getODSOperands(0);
}

LogicalResult FromExtentsOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FromExtentsOp::getOperationName() {
  return "shape.from_extents";
}

std::pair<unsigned, unsigned> FromExtentsOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range FromExtentsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range FromExtentsOp::extents() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange FromExtentsOp::extentsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FromExtentsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FromExtentsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FromExtentsOp::shape() {
  return *getODSResults(0).begin();
}

void FromExtentsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type shape, ValueRange extents) {
  odsState.addOperands(extents);
  odsState.addTypes(shape);
}

void FromExtentsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange extents) {
  odsState.addOperands(extents);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FromExtentsOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult FromExtentsOp::verify() {
  if (failed(FromExtentsOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult FromExtentsOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> extentsOperands;
  llvm::SMLoc extentsOperandsLoc = parser.getCurrentLocation();
  (void)extentsOperandsLoc;

  if (parser.parseOperandList(extentsOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  Type odsBuildableType1 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(extentsOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void FromExtentsOp::print(OpAsmPrinter &p) {
  p << "shape.from_extents";
  p << " ";
  p << extents();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void FromExtentsOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::GetExtentOp definitions
//===----------------------------------------------------------------------===//

GetExtentOpAdaptor::GetExtentOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GetExtentOpAdaptor::GetExtentOpAdaptor(GetExtentOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GetExtentOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GetExtentOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value GetExtentOpAdaptor::shape() {
  return *getODSOperands(0).begin();
}

Value GetExtentOpAdaptor::dim() {
  return *getODSOperands(1).begin();
}

LogicalResult GetExtentOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GetExtentOp::getOperationName() {
  return "shape.get_extent";
}

std::pair<unsigned, unsigned> GetExtentOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GetExtentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value GetExtentOp::shape() {
  return *getODSOperands(0).begin();
}

Value GetExtentOp::dim() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange GetExtentOp::shapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange GetExtentOp::dimMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> GetExtentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GetExtentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value GetExtentOp::extent() {
  return *getODSResults(0).begin();
}



void GetExtentOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type extent, Value shape, Value dim) {
  odsState.addOperands(shape);
  odsState.addOperands(dim);
  odsState.addTypes(extent);
}

void GetExtentOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value shape, Value dim) {
  odsState.addOperands(shape);
  odsState.addOperands(dim);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(GetExtentOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void GetExtentOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape, Value dim) {
  odsState.addOperands(shape);
  odsState.addOperands(dim);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GetExtentOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GetExtentOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(GetExtentOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult GetExtentOp::verify() {
  if (failed(GetExtentOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult GetExtentOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType shapeRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> shapeOperands(shapeRawOperands);  llvm::SMLoc shapeOperandsLoc = parser.getCurrentLocation();
  (void)shapeOperandsLoc;
  OpAsmParser::OperandType dimRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> dimOperands(dimRawOperands);  llvm::SMLoc dimOperandsLoc = parser.getCurrentLocation();
  (void)dimOperandsLoc;

  if (parser.parseOperand(shapeRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(dimRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(shapeOperands, odsBuildableType1, result.operands))
    return failure();
  if (parser.resolveOperands(dimOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void GetExtentOp::print(OpAsmPrinter &p) {
  p << "shape.get_extent";
  p << " ";
  p << shape();
  p << ",";
  p << " ";
  p << dim();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void GetExtentOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult GetExtentOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::IndexToSizeOp definitions
//===----------------------------------------------------------------------===//

IndexToSizeOpAdaptor::IndexToSizeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

IndexToSizeOpAdaptor::IndexToSizeOpAdaptor(IndexToSizeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> IndexToSizeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange IndexToSizeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value IndexToSizeOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult IndexToSizeOpAdaptor::verify(Location loc) {
  return success();
}

StringRef IndexToSizeOp::getOperationName() {
  return "shape.index_to_size";
}

std::pair<unsigned, unsigned> IndexToSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range IndexToSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value IndexToSizeOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IndexToSizeOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IndexToSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range IndexToSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value IndexToSizeOp::result() {
  return *getODSResults(0).begin();
}

void IndexToSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(result);
}

void IndexToSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value arg) {
  odsState.addOperands(arg);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(IndexToSizeOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void IndexToSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IndexToSizeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void IndexToSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(IndexToSizeOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult IndexToSizeOp::verify() {
  if (failed(IndexToSizeOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult IndexToSizeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType argRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> argOperands(argRawOperands);  llvm::SMLoc argOperandsLoc = parser.getCurrentLocation();
  (void)argOperandsLoc;

  if (parser.parseOperand(argRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  Type odsBuildableType1 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(argOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void IndexToSizeOp::print(OpAsmPrinter &p) {
  p << "shape.index_to_size";
  p << " ";
  p << arg();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void IndexToSizeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult IndexToSizeOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::JoinOp definitions
//===----------------------------------------------------------------------===//

JoinOpAdaptor::JoinOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

JoinOpAdaptor::JoinOpAdaptor(JoinOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> JoinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange JoinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value JoinOpAdaptor::arg0() {
  return *getODSOperands(0).begin();
}

Value JoinOpAdaptor::arg1() {
  return *getODSOperands(1).begin();
}

StringAttr JoinOpAdaptor::error() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("error").dyn_cast_or_null<StringAttr>();
  return attr;
}

LogicalResult JoinOpAdaptor::verify(Location loc) {
  {
  auto tblgen_error = odsAttrs.get("error");
  if (tblgen_error) {
    if (!((tblgen_error.isa<StringAttr>()))) return emitError(loc, "'shape.join' op ""attribute 'error' failed to satisfy constraint: string attribute");
  }
  }
  return success();
}

StringRef JoinOp::getOperationName() {
  return "shape.join";
}

std::pair<unsigned, unsigned> JoinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range JoinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value JoinOp::arg0() {
  return *getODSOperands(0).begin();
}

Value JoinOp::arg1() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange JoinOp::arg0Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange JoinOp::arg1Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> JoinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range JoinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value JoinOp::result() {
  return *getODSResults(0).begin();
}

StringAttr JoinOp::errorAttr() {
  return this->getAttr("error").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > JoinOp::error() {
  auto attr = errorAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void JoinOp::errorAttr(StringAttr attr) {
  this->getOperation()->setAttr("error", attr);
}

void JoinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg0, Value arg1, /*optional*/StringAttr error) {
  odsState.addOperands(arg0);
  odsState.addOperands(arg1);
  if (error) {
  odsState.addAttribute("error", error);
  }
  odsState.addTypes(result);
}

void JoinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg0, Value arg1, /*optional*/StringAttr error) {
  odsState.addOperands(arg0);
  odsState.addOperands(arg1);
  if (error) {
  odsState.addAttribute("error", error);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void JoinOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult JoinOp::verify() {
  if (failed(JoinOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("operand #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("operand #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::shape::SizeType>())) || ((v.getType().isa<::mlir::shape::ShapeType>())))) {
        return emitOpError("result #") << index << " must be shape or size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// shape::MulOp definitions
//===----------------------------------------------------------------------===//

MulOpAdaptor::MulOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MulOpAdaptor::MulOpAdaptor(MulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MulOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value MulOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult MulOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MulOp::getOperationName() {
  return "shape.mul";
}

std::pair<unsigned, unsigned> MulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MulOp::lhs() {
  return *getODSOperands(0).begin();
}

Value MulOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MulOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MulOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MulOp::result() {
  return *getODSResults(0).begin();
}

void MulOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(result);
}

void MulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void MulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult MulOp::verify() {
  if (failed(MulOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult MulOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType lhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  OpAsmParser::OperandType rhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;

  if (parser.parseOperand(lhsRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(rhsRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lhsOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void MulOp::print(OpAsmPrinter &p) {
  p << "shape.mul";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// shape::NumElementsOp definitions
//===----------------------------------------------------------------------===//

NumElementsOpAdaptor::NumElementsOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

NumElementsOpAdaptor::NumElementsOpAdaptor(NumElementsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> NumElementsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange NumElementsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value NumElementsOpAdaptor::shape() {
  return *getODSOperands(0).begin();
}

LogicalResult NumElementsOpAdaptor::verify(Location loc) {
  return success();
}

StringRef NumElementsOp::getOperationName() {
  return "shape.num_elements";
}

std::pair<unsigned, unsigned> NumElementsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range NumElementsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value NumElementsOp::shape() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange NumElementsOp::shapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> NumElementsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range NumElementsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value NumElementsOp::result() {
  return *getODSResults(0).begin();
}

void NumElementsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value shape) {
  odsState.addOperands(shape);
  odsState.addTypes(result);
}

void NumElementsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value shape) {
  odsState.addOperands(shape);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(NumElementsOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void NumElementsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value shape) {
  odsState.addOperands(shape);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NumElementsOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NumElementsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(NumElementsOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult NumElementsOp::verify() {
  if (failed(NumElementsOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("result #") << index << " must be size, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult NumElementsOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType shapeRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> shapeOperands(shapeRawOperands);  llvm::SMLoc shapeOperandsLoc = parser.getCurrentLocation();
  (void)shapeOperandsLoc;

  if (parser.parseOperand(shapeRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(shapeOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void NumElementsOp::print(OpAsmPrinter &p) {
  p << "shape.num_elements";
  p << " ";
  p << shape();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void NumElementsOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult NumElementsOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::SizeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ReduceOp definitions
//===----------------------------------------------------------------------===//

ReduceOpAdaptor::ReduceOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ReduceOpAdaptor::ReduceOpAdaptor(ReduceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReduceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange ReduceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ReduceOpAdaptor::shape() {
  return *getODSOperands(0).begin();
}

ValueRange ReduceOpAdaptor::initVals() {
  return getODSOperands(1);
}

LogicalResult ReduceOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ReduceOp::getOperationName() {
  return "shape.reduce";
}

std::pair<unsigned, unsigned> ReduceOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range ReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ReduceOp::shape() {
  return *getODSOperands(0).begin();
}

Operation::operand_range ReduceOp::initVals() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ReduceOp::shapeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ReduceOp::initValsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReduceOp::getODSResultIndexAndLength(unsigned index) {
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

Operation::result_range ReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range ReduceOp::result() {
  return getODSResults(0);
}

Region &ReduceOp::region() {
  return this->getOperation()->getRegion(0);
}



void ReduceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> result, Value shape, ValueRange initVals) {
  odsState.addOperands(shape);
  odsState.addOperands(initVals);
  (void)odsState.addRegion();
  odsState.addTypes(result);
}

void ReduceOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

ParseResult ReduceOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseReduceOp(parser, result);
}

void ReduceOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ReduceOp::verify() {
  if (failed(ReduceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
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
// shape::ShapeOfOp definitions
//===----------------------------------------------------------------------===//

ShapeOfOpAdaptor::ShapeOfOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShapeOfOpAdaptor::ShapeOfOpAdaptor(ShapeOfOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShapeOfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ShapeOfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ShapeOfOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult ShapeOfOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ShapeOfOp::getOperationName() {
  return "shape.shape_of";
}

std::pair<unsigned, unsigned> ShapeOfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShapeOfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShapeOfOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ShapeOfOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShapeOfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ShapeOfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ShapeOfOp::result() {
  return *getODSResults(0).begin();
}

void ShapeOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(result);
}

void ShapeOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value arg) {
  odsState.addOperands(arg);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(ShapeOfOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShapeOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShapeOfOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShapeOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(ShapeOfOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult ShapeOfOp::verify() {
  if (failed(ShapeOfOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<ShapedType>())) && ((true))) || ((v.getType().isa<::mlir::shape::ValueShapeType>())))) {
        return emitOpError("operand #") << index << " must be shaped of any type values or value shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult ShapeOfOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType argRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> argOperands(argRawOperands);  llvm::SMLoc argOperandsLoc = parser.getCurrentLocation();
  (void)argOperandsLoc;
  Type argRawTypes[1];
  ArrayRef<Type> argTypes(argRawTypes);

  if (parser.parseOperand(argRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(argRawTypes[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(argOperands, argTypes, argOperandsLoc, result.operands))
    return failure();
  return success();
}

void ShapeOfOp::print(OpAsmPrinter &p) {
  p << "shape.shape_of";
  p << " ";
  p << arg();
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(arg().getType());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void ShapeOfOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult ShapeOfOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::SizeToIndexOp definitions
//===----------------------------------------------------------------------===//

SizeToIndexOpAdaptor::SizeToIndexOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SizeToIndexOpAdaptor::SizeToIndexOpAdaptor(SizeToIndexOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SizeToIndexOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SizeToIndexOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SizeToIndexOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult SizeToIndexOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SizeToIndexOp::getOperationName() {
  return "shape.size_to_index";
}

std::pair<unsigned, unsigned> SizeToIndexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SizeToIndexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SizeToIndexOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SizeToIndexOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SizeToIndexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SizeToIndexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SizeToIndexOp::result() {
  return *getODSResults(0).begin();
}

void SizeToIndexOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(result);
}

void SizeToIndexOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value arg) {
  odsState.addOperands(arg);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(SizeToIndexOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void SizeToIndexOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SizeToIndexOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SizeToIndexOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(SizeToIndexOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult SizeToIndexOp::verify() {
  if (failed(SizeToIndexOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::SizeType>()))) {
        return emitOpError("operand #") << index << " must be size, but got " << v.getType();
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
  return mlir::success();
}



ParseResult SizeToIndexOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType argRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> argOperands(argRawOperands);  llvm::SMLoc argOperandsLoc = parser.getCurrentLocation();
  (void)argOperandsLoc;

  if (parser.parseOperand(argRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  Type odsBuildableType1 = parser.getBuilder().getType<::mlir::shape::SizeType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(argOperands, odsBuildableType1, result.operands))
    return failure();
  return success();
}

void SizeToIndexOp::print(OpAsmPrinter &p) {
  p << "shape.size_to_index";
  p << " ";
  p << arg();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void SizeToIndexOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}

LogicalResult SizeToIndexOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getIndexType();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::SplitAtOp definitions
//===----------------------------------------------------------------------===//

SplitAtOpAdaptor::SplitAtOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SplitAtOpAdaptor::SplitAtOpAdaptor(SplitAtOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SplitAtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SplitAtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SplitAtOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

Value SplitAtOpAdaptor::index() {
  return *getODSOperands(1).begin();
}

LogicalResult SplitAtOpAdaptor::verify(Location loc) {
  return success();
}

void SplitAtOp::getAsmResultNames(OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!llvm::empty(resultGroup0))
    setNameFn(*resultGroup0.begin(), "head");
  auto resultGroup1 = getODSResults(1);
  if (!llvm::empty(resultGroup1))
    setNameFn(*resultGroup1.begin(), "tail");
}

StringRef SplitAtOp::getOperationName() {
  return "shape.split_at";
}

std::pair<unsigned, unsigned> SplitAtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SplitAtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SplitAtOp::operand() {
  return *getODSOperands(0).begin();
}

Value SplitAtOp::index() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SplitAtOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SplitAtOp::indexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SplitAtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SplitAtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SplitAtOp::head() {
  return *getODSResults(0).begin();
}

Value SplitAtOp::tail() {
  return *getODSResults(1).begin();
}

void SplitAtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type head, Type tail, Value operand, Value index) {
  odsState.addOperands(operand);
  odsState.addOperands(index);
  odsState.addTypes(head);
  odsState.addTypes(tail);
}

void SplitAtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand, Value index) {
  odsState.addOperands(operand);
  odsState.addOperands(index);

        SmallVector<Type, 2> inferredReturnTypes;
        if (succeeded(SplitAtOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      /*regions=*/{}, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          llvm::report_fatal_error("Failed to infer result type(s).");
}

void SplitAtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand, Value index) {
  odsState.addOperands(operand);
  odsState.addOperands(index);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplitAtOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SplitAtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

    SmallVector<Type, 2> inferredReturnTypes;
    if (succeeded(SplitAtOp::inferReturnTypes(odsBuilder.getContext(),
                  odsState.location, operands,
                  odsState.attributes.getDictionary(odsState.getContext()),
                  /*regions=*/{}, inferredReturnTypes))) {  assert(inferredReturnTypes.size() == 2u && "mismatched number of return types");
      odsState.addTypes(inferredReturnTypes);
    } else
      llvm::report_fatal_error("Failed to infer result type(s).");
}

LogicalResult SplitAtOp::verify() {
  if (failed(SplitAtOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
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
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSResults(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("result #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



LogicalResult SplitAtOp::inferReturnTypes(MLIRContext* context, Optional<Location> location, ValueRange operands, DictionaryAttr attributes, RegionRange regions, SmallVectorImpl<Type>& inferredReturnTypes) {
  inferredReturnTypes.resize(2);
  Builder odsBuilder(context);
  inferredReturnTypes[0] = odsBuilder.getType<::mlir::shape::ShapeType>();
  inferredReturnTypes[1] = odsBuilder.getType<::mlir::shape::ShapeType>();
  return success();
}


//===----------------------------------------------------------------------===//
// shape::ToExtentTensorOp definitions
//===----------------------------------------------------------------------===//

ToExtentTensorOpAdaptor::ToExtentTensorOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ToExtentTensorOpAdaptor::ToExtentTensorOpAdaptor(ToExtentTensorOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ToExtentTensorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ToExtentTensorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ToExtentTensorOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

LogicalResult ToExtentTensorOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ToExtentTensorOp::getOperationName() {
  return "shape.to_extent_tensor";
}

std::pair<unsigned, unsigned> ToExtentTensorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ToExtentTensorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ToExtentTensorOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ToExtentTensorOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ToExtentTensorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ToExtentTensorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ToExtentTensorOp::result() {
  return *getODSResults(0).begin();
}

void ToExtentTensorOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value input) {
  odsState.addOperands(input);
  odsState.addTypes(result);
}

void ToExtentTensorOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ToExtentTensorOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ToExtentTensorOp::verify() {
  if (failed(ToExtentTensorOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<::mlir::shape::ShapeType>()))) {
        return emitOpError("operand #") << index << " must be shape, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<IndexType>())))) {
        return emitOpError("result #") << index << " must be tensor of index values, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult ToExtentTensorOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType inputRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> inputOperands(inputRawOperands);  llvm::SMLoc inputOperandsLoc = parser.getCurrentLocation();
  (void)inputOperandsLoc;
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperand(inputRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getType<::mlir::shape::ShapeType>();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void ToExtentTensorOp::print(OpAsmPrinter &p) {
  p << "shape.to_extent_tensor";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " ";
  p << input();
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void ToExtentTensorOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// shape::YieldOp definitions
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

ValueRange YieldOpAdaptor::operands() {
  return getODSOperands(0);
}

LogicalResult YieldOpAdaptor::verify(Location loc) {
  return success();
}

StringRef YieldOp::getOperationName() {
  return "shape.yield";
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

Operation::operand_range YieldOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::operandsMutable() {
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

void YieldOp::build(OpBuilder &b, OperationState &result) {
 build(b, result, llvm::None); 
}

void YieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands) {
  odsState.addOperands(operands);
}

void YieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands) {
  odsState.addOperands(operands);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void YieldOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
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

ParseResult YieldOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> operandsOperands;
  llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  SmallVector<Type, 1> operandsTypes;
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(operandsTypes))
    return failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return failure();
  return success();
}

void YieldOp::print(OpAsmPrinter &p) {
  p << "shape.yield";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  if (!operands().empty()) {
  p << " ";
  p << operands();
  p << " " << ":";
  p << " ";
  p << operands().getTypes();
  }
}

void YieldOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

