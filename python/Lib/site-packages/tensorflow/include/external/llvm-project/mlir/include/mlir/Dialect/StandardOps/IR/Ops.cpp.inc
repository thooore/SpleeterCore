/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

AbsFOp,
AddCFOp,
AddFOp,
AddIOp,
AllocOp,
AllocaOp,
AndOp,
AssumeAlignmentOp,
AtomicRMWOp,
AtomicYieldOp,
BranchOp,
CallIndirectOp,
CallOp,
CeilFOp,
CmpFOp,
CmpIOp,
CondBranchOp,
ConstantOp,
CopySignOp,
CosOp,
CreateComplexOp,
DeallocOp,
DimOp,
DivFOp,
Exp2Op,
ExpOp,
ExtractElementOp,
FPExtOp,
FPToSIOp,
FPTruncOp,
GenericAtomicRMWOp,
ImOp,
IndexCastOp,
LoadOp,
Log10Op,
Log2Op,
LogOp,
MemRefCastOp,
MulFOp,
MulIOp,
NegFOp,
OrOp,
PrefetchOp,
RankOp,
ReOp,
RemFOp,
ReturnOp,
RsqrtOp,
SIToFPOp,
SelectOp,
ShiftLeftOp,
SignExtendIOp,
SignedDivIOp,
SignedRemIOp,
SignedShiftRightOp,
SinOp,
SplatOp,
SqrtOp,
StoreOp,
SubCFOp,
SubFOp,
SubIOp,
SubViewOp,
TanhOp,
TensorCastOp,
TensorFromElementsOp,
TensorLoadOp,
TensorStoreOp,
TruncateIOp,
UnsignedDivIOp,
UnsignedRemIOp,
UnsignedShiftRightOp,
ViewOp,
XOrOp,
ZeroExtendIOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// AbsFOp definitions
//===----------------------------------------------------------------------===//

AbsFOpAdaptor::AbsFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AbsFOpAdaptor::AbsFOpAdaptor(AbsFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AbsFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AbsFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AbsFOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult AbsFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AbsFOp::getOperationName() {
  return "std.absf";
}

std::pair<unsigned, unsigned> AbsFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AbsFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AbsFOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AbsFOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AbsFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AbsFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AbsFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void AbsFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AbsFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AbsFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void AbsFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult AbsFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AbsFOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult AbsFOp::verify() {
  if (failed(AbsFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void AbsFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AddCFOp definitions
//===----------------------------------------------------------------------===//

AddCFOpAdaptor::AddCFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AddCFOpAdaptor::AddCFOpAdaptor(AddCFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AddCFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AddCFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AddCFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value AddCFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult AddCFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AddCFOp::getOperationName() {
  return "std.addcf";
}

std::pair<unsigned, unsigned> AddCFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AddCFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AddCFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value AddCFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AddCFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AddCFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AddCFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AddCFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AddCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void AddCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddCFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void AddCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult AddCFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AddCFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult AddCFOp::verify() {
  if (failed(AddCFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<ComplexType>())) && ((v.getType().cast<ComplexType>().getElementType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be complex type with floating-point elements, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<ComplexType>())) && ((v.getType().cast<ComplexType>().getElementType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be complex type with floating-point elements, but got " << v.getType();
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
  return mlir::success();
}

void AddCFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AddFOp definitions
//===----------------------------------------------------------------------===//

AddFOpAdaptor::AddFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AddFOpAdaptor::AddFOpAdaptor(AddFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AddFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AddFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AddFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value AddFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult AddFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AddFOp::getOperationName() {
  return "std.addf";
}

std::pair<unsigned, unsigned> AddFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AddFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AddFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value AddFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AddFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AddFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AddFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AddFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AddFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void AddFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void AddFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult AddFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AddFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult AddFOp::verify() {
  if (failed(AddFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}



void AddFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AddIOp definitions
//===----------------------------------------------------------------------===//

AddIOpAdaptor::AddIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AddIOpAdaptor::AddIOpAdaptor(AddIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AddIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AddIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AddIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value AddIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult AddIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AddIOp::getOperationName() {
  return "std.addi";
}

std::pair<unsigned, unsigned> AddIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AddIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AddIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value AddIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AddIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AddIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AddIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AddIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AddIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void AddIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AddIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void AddIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult AddIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AddIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult AddIOp::verify() {
  if (failed(AddIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void AddIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AllocOp definitions
//===----------------------------------------------------------------------===//

AllocOpAdaptor::AllocOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AllocOpAdaptor::AllocOpAdaptor(AllocOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AllocOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AllocOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AllocOpAdaptor::value() {
  return getODSOperands(0);
}

IntegerAttr AllocOpAdaptor::alignment() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("alignment").dyn_cast_or_null<IntegerAttr>();
  return attr;
}

LogicalResult AllocOpAdaptor::verify(Location loc) {
  {
  auto tblgen_alignment = odsAttrs.get("alignment");
  if (tblgen_alignment) {
    if (!((((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && ((tblgen_alignment.cast<IntegerAttr>().getInt() >= 0)))) return emitError(loc, "'std.alloc' op ""attribute 'alignment' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");
  }
  }
  return success();
}

StringRef AllocOp::getOperationName() {
  return "std.alloc";
}

std::pair<unsigned, unsigned> AllocOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AllocOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AllocOp::value() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AllocOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AllocOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AllocOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

IntegerAttr AllocOp::alignmentAttr() {
  return this->getAttr("alignment").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > AllocOp::alignment() {
  auto attr = alignmentAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}

void AllocOp::alignmentAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("alignment", attr);
}

void AllocOp::build(OpBuilder &builder, OperationState &result, MemRefType memrefType) {
       result.types.push_back(memrefType);
     
}

void AllocOp::build(OpBuilder &builder, OperationState &result, MemRefType memrefType, ValueRange operands, IntegerAttr alignment ) {
       result.addOperands(operands);
       result.types.push_back(memrefType);
       if (alignment)
         result.addAttribute(getAlignmentAttrName(), alignment);
     
}

void AllocOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange value, /*optional*/IntegerAttr alignment) {
  odsState.addOperands(value);
  if (alignment) {
  odsState.addAttribute("alignment", alignment);
  }
  odsState.addTypes(resultType0);
}

void AllocOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange value, /*optional*/IntegerAttr alignment) {
  odsState.addOperands(value);
  if (alignment) {
  odsState.addAttribute("alignment", alignment);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllocOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AllocOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAllocLikeOp(parser, result);
}

void AllocOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AllocOp::verify() {
  if (failed(AllocOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



void AllocOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Allocate::get(), ::mlir::SideEffects::DefaultResource::get());
  for (Value value : getODSResults(0))
    effects.emplace_back(MemoryEffects::Allocate::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// AllocaOp definitions
//===----------------------------------------------------------------------===//

AllocaOpAdaptor::AllocaOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AllocaOpAdaptor::AllocaOpAdaptor(AllocaOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AllocaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AllocaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange AllocaOpAdaptor::value() {
  return getODSOperands(0);
}

IntegerAttr AllocaOpAdaptor::alignment() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("alignment").dyn_cast_or_null<IntegerAttr>();
  return attr;
}

LogicalResult AllocaOpAdaptor::verify(Location loc) {
  {
  auto tblgen_alignment = odsAttrs.get("alignment");
  if (tblgen_alignment) {
    if (!((((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && ((tblgen_alignment.cast<IntegerAttr>().getInt() >= 0)))) return emitError(loc, "'std.alloca' op ""attribute 'alignment' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");
  }
  }
  return success();
}

StringRef AllocaOp::getOperationName() {
  return "std.alloca";
}

std::pair<unsigned, unsigned> AllocaOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AllocaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range AllocaOp::value() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange AllocaOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AllocaOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AllocaOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

IntegerAttr AllocaOp::alignmentAttr() {
  return this->getAttr("alignment").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > AllocaOp::alignment() {
  auto attr = alignmentAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}

void AllocaOp::alignmentAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("alignment", attr);
}

void AllocaOp::build(OpBuilder &builder, OperationState &result, MemRefType memrefType) {
       result.types.push_back(memrefType);
     
}

void AllocaOp::build(OpBuilder &builder, OperationState &result, MemRefType memrefType, ValueRange operands, IntegerAttr alignment ) {
       result.addOperands(operands);
       result.types.push_back(memrefType);
       if (alignment)
         result.addAttribute(getAlignmentAttrName(), alignment);
     
}

void AllocaOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange value, /*optional*/IntegerAttr alignment) {
  odsState.addOperands(value);
  if (alignment) {
  odsState.addAttribute("alignment", alignment);
  }
  odsState.addTypes(resultType0);
}

void AllocaOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange value, /*optional*/IntegerAttr alignment) {
  odsState.addOperands(value);
  if (alignment) {
  odsState.addAttribute("alignment", alignment);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllocaOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AllocaOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseAllocLikeOp(parser, result);
}

void AllocaOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult AllocaOp::verify() {
  if (failed(AllocaOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



void AllocaOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Allocate::get(), ::mlir::SideEffects::AutomaticAllocationScopeResource::get());
  for (Value value : getODSResults(0))
    effects.emplace_back(MemoryEffects::Allocate::get(), value, ::mlir::SideEffects::AutomaticAllocationScopeResource::get());
}


//===----------------------------------------------------------------------===//
// AndOp definitions
//===----------------------------------------------------------------------===//

AndOpAdaptor::AndOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AndOpAdaptor::AndOpAdaptor(AndOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AndOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AndOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AndOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value AndOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult AndOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AndOp::getOperationName() {
  return "std.and";
}

std::pair<unsigned, unsigned> AndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AndOp::lhs() {
  return *getODSOperands(0).begin();
}

Value AndOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AndOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AndOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AndOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void AndOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AndOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AndOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void AndOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult AndOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AndOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult AndOp::verify() {
  if (failed(AndOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void AndOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// AssumeAlignmentOp definitions
//===----------------------------------------------------------------------===//

AssumeAlignmentOpAdaptor::AssumeAlignmentOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumeAlignmentOpAdaptor::AssumeAlignmentOpAdaptor(AssumeAlignmentOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumeAlignmentOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AssumeAlignmentOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AssumeAlignmentOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

IntegerAttr AssumeAlignmentOpAdaptor::alignment() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("alignment").cast<IntegerAttr>();
  return attr;
}

LogicalResult AssumeAlignmentOpAdaptor::verify(Location loc) {
  {
  auto tblgen_alignment = odsAttrs.get("alignment");
  if (!tblgen_alignment) return emitError(loc, "'std.assume_alignment' op ""requires attribute 'alignment'");
    if (!((((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isSignlessInteger(32)))) && ((tblgen_alignment.cast<IntegerAttr>().getValue().isStrictlyPositive())))) return emitError(loc, "'std.assume_alignment' op ""attribute 'alignment' failed to satisfy constraint: 32-bit signless integer attribute whose value is positive");
  }
  return success();
}

StringRef AssumeAlignmentOp::getOperationName() {
  return "std.assume_alignment";
}

std::pair<unsigned, unsigned> AssumeAlignmentOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AssumeAlignmentOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AssumeAlignmentOp::memref() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AssumeAlignmentOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumeAlignmentOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AssumeAlignmentOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

IntegerAttr AssumeAlignmentOp::alignmentAttr() {
  return this->getAttr("alignment").cast<IntegerAttr>();
}

APInt AssumeAlignmentOp::alignment() {
  auto attr = alignmentAttr();
  return attr.getValue();
}

void AssumeAlignmentOp::alignmentAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("alignment", attr);
}

void AssumeAlignmentOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, IntegerAttr alignment) {
  odsState.addOperands(memref);
  odsState.addAttribute("alignment", alignment);
}

void AssumeAlignmentOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, IntegerAttr alignment) {
  odsState.addOperands(memref);
  odsState.addAttribute("alignment", alignment);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssumeAlignmentOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, APInt alignment) {
  odsState.addOperands(memref);
  odsState.addAttribute("alignment", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), alignment));
}

void AssumeAlignmentOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, APInt alignment) {
  odsState.addOperands(memref);
  odsState.addAttribute("alignment", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), alignment));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssumeAlignmentOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AssumeAlignmentOp::verify() {
  if (failed(AssumeAlignmentOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}

ParseResult AssumeAlignmentOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  IntegerAttr alignmentAttr;
  if (parser.parseAttribute(alignmentAttr, parser.getBuilder().getIntegerType(32), "alignment", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  return success();
}

void AssumeAlignmentOp::print(OpAsmPrinter &p) {
  p << "assume_alignment";
  p << " ";
  p << memref();
  p << ",";
  p << " ";
  p.printAttributeWithoutType(alignmentAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"alignment"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
}


//===----------------------------------------------------------------------===//
// AtomicRMWOp definitions
//===----------------------------------------------------------------------===//

AtomicRMWOpAdaptor::AtomicRMWOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AtomicRMWOpAdaptor::AtomicRMWOpAdaptor(AtomicRMWOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AtomicRMWOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange AtomicRMWOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AtomicRMWOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value AtomicRMWOpAdaptor::memref() {
  return *getODSOperands(1).begin();
}

ValueRange AtomicRMWOpAdaptor::indices() {
  return getODSOperands(2);
}

IntegerAttr AtomicRMWOpAdaptor::kind() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("kind").cast<IntegerAttr>();
  return attr;
}

LogicalResult AtomicRMWOpAdaptor::verify(Location loc) {
  {
  auto tblgen_kind = odsAttrs.get("kind");
  if (!tblgen_kind) return emitError(loc, "'std.atomic_rmw' op ""requires attribute 'kind'");
    if (!((((tblgen_kind.isa<IntegerAttr>())) && ((tblgen_kind.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_kind.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_kind.cast<IntegerAttr>().getInt() == 10))))) return emitError(loc, "'std.atomic_rmw' op ""attribute 'kind' failed to satisfy constraint: allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10");
  }
  return success();
}

StringRef AtomicRMWOp::getOperationName() {
  return "std.atomic_rmw";
}

std::pair<unsigned, unsigned> AtomicRMWOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range AtomicRMWOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AtomicRMWOp::value() {
  return *getODSOperands(0).begin();
}

Value AtomicRMWOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::operand_range AtomicRMWOp::indices() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange AtomicRMWOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AtomicRMWOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AtomicRMWOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AtomicRMWOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AtomicRMWOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AtomicRMWOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicRMWOp::kindAttr() {
  return this->getAttr("kind").cast<IntegerAttr>();
}

::mlir::AtomicRMWKind AtomicRMWOp::kind() {
  auto attr = kindAttr();
  return static_cast<::mlir::AtomicRMWKind>(attr.getInt());
}

void AtomicRMWOp::kindAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("kind", attr);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr kind, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("kind", kind);
  odsState.addTypes(result);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr kind, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("kind", kind);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::AtomicRMWKind kind, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("kind", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(kind)));
  odsState.addTypes(result);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::AtomicRMWKind kind, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("kind", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(kind)));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicRMWOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AtomicRMWOp::verify() {
  if (failed(AtomicRMWOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be signless integer or floating-point, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be memref of signless integer or floating-point values, but got " << v.getType();
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
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<FloatType>())))) {
        return emitOpError("result #") << index << " must be signless integer or floating-point, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(0).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {value, result} have same type");
  if (!(((*this->getODSOperands(1).begin()).getType().cast<MemRefType>().getElementType() == (*this->getODSOperands(0).begin()).getType())))
    return emitOpError("failed to verify that value type matches element type of memref");
  return ::verify(*this);
}

ParseResult AtomicRMWOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType valueRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> valueOperands(valueRawOperands);  llvm::SMLoc valueOperandsLoc = parser.getCurrentLocation();
  (void)valueOperandsLoc;
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> indicesOperands;
  llvm::SMLoc indicesOperandsLoc = parser.getCurrentLocation();
  (void)indicesOperandsLoc;
  Type valueRawTypes[1];
  ArrayRef<Type> valueTypes(valueRawTypes);
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);

  {
    StringAttr attrVal;
    NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseAttribute(attrVal, parser.getBuilder().getNoneType(),
                              "kind", attrStorage))
      return failure();

    auto attrOptional = ::mlir::symbolizeAtomicRMWKind(attrVal.getValue());
    if (!attrOptional)
      return parser.emitError(loc, "invalid ")
             << "kind attribute specification: " << attrVal;

    result.addAttribute("kind", parser.getBuilder().getI64IntegerAttr(static_cast<int64_t>(attrOptional.getValue())));
  }

  if (parser.parseOperand(valueRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(indicesOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();
  if (parser.parseLParen())
    return failure();

  if (parser.parseType(valueRawTypes[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseArrow())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(resultTypes);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void AtomicRMWOp::print(OpAsmPrinter &p) {
  p << "atomic_rmw";
  p << " ";
  p << "\"" << stringifyAtomicRMWKind(kind()) << "\"";
  p << " ";
  p << value();
  p << ",";
  p << " ";
  p << memref();
  p << "[";
  p << indices();
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"kind"});
  p << " " << ":";
  p << " " << "(";
  p << ArrayRef<Type>(value().getType());
  p << ",";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
  p << ")";
  p << " " << "->";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}


//===----------------------------------------------------------------------===//
// AtomicYieldOp definitions
//===----------------------------------------------------------------------===//

AtomicYieldOpAdaptor::AtomicYieldOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AtomicYieldOpAdaptor::AtomicYieldOpAdaptor(AtomicYieldOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AtomicYieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AtomicYieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AtomicYieldOpAdaptor::result() {
  return *getODSOperands(0).begin();
}

LogicalResult AtomicYieldOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AtomicYieldOp::getOperationName() {
  return "std.atomic_yield";
}

std::pair<unsigned, unsigned> AtomicYieldOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AtomicYieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AtomicYieldOp::result() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AtomicYieldOp::resultMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AtomicYieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AtomicYieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AtomicYieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value result) {
  odsState.addOperands(result);
}

void AtomicYieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value result) {
  odsState.addOperands(result);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicYieldOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AtomicYieldOp::verify() {
  if (failed(AtomicYieldOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult AtomicYieldOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType resultRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> resultOperands(resultRawOperands);  llvm::SMLoc resultOperandsLoc = parser.getCurrentLocation();
  (void)resultOperandsLoc;
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);

  if (parser.parseOperand(resultRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  if (parser.resolveOperands(resultOperands, resultTypes, resultOperandsLoc, result.operands))
    return failure();
  return success();
}

void AtomicYieldOp::print(OpAsmPrinter &p) {
  p << "atomic_yield";
  p << " ";
  p << result();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void AtomicYieldOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// BranchOp definitions
//===----------------------------------------------------------------------===//

BranchOpAdaptor::BranchOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BranchOpAdaptor::BranchOpAdaptor(BranchOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BranchOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange BranchOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange BranchOpAdaptor::destOperands() {
  return getODSOperands(0);
}

LogicalResult BranchOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BranchOp::getOperationName() {
  return "std.br";
}

std::pair<unsigned, unsigned> BranchOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range BranchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range BranchOp::destOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange BranchOp::destOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BranchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BranchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Block *BranchOp::dest() {
  return this->getOperation()->getSuccessor(0);
}

void BranchOp::build(OpBuilder &, OperationState &result, Block *dest, ValueRange destOperands ) {
    result.addSuccessors(dest);
    result.addOperands(destOperands);
  
}

void BranchOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange destOperands, Block *dest) {
  odsState.addOperands(destOperands);
  odsState.addSuccessors(dest);
}

void BranchOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange destOperands, Block *dest) {
  odsState.addOperands(destOperands);
  odsState.addSuccessors(dest);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BranchOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BranchOp::verify() {
  if (failed(BranchOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  return mlir::success();
}







ParseResult BranchOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> destOperandsOperands;
  llvm::SMLoc destOperandsOperandsLoc = parser.getCurrentLocation();
  (void)destOperandsOperandsLoc;
  SmallVector<Type, 1> destOperandsTypes;

  Block *destSuccessor = nullptr;
  if (parser.parseSuccessor(destSuccessor))
    return failure();
  if (succeeded(parser.parseOptionalLParen())) {

  if (parser.parseOperandList(destOperandsOperands))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(destOperandsTypes))
    return failure();
  if (parser.parseRParen())
    return failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.resolveOperands(destOperandsOperands, destOperandsTypes, destOperandsOperandsLoc, result.operands))
    return failure();
  result.addSuccessors(destSuccessor);
  return success();
}

void BranchOp::print(OpAsmPrinter &p) {
  p << "br";
  p << " ";
  p << dest();
  if (!destOperands().empty()) {
  p << "(";
  p << destOperands();
  p << " " << ":";
  p << " ";
  p << destOperands().getTypes();
  p << ")";
  }
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}

void BranchOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// CallIndirectOp definitions
//===----------------------------------------------------------------------===//

CallIndirectOpAdaptor::CallIndirectOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CallIndirectOpAdaptor::CallIndirectOpAdaptor(CallIndirectOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CallIndirectOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange CallIndirectOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CallIndirectOpAdaptor::callee() {
  return *getODSOperands(0).begin();
}

ValueRange CallIndirectOpAdaptor::operands() {
  return getODSOperands(1);
}

LogicalResult CallIndirectOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CallIndirectOp::getOperationName() {
  return "std.call_indirect";
}

std::pair<unsigned, unsigned> CallIndirectOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range CallIndirectOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CallIndirectOp::callee() {
  return *getODSOperands(0).begin();
}

Operation::operand_range CallIndirectOp::operands() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange CallIndirectOp::calleeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CallIndirectOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CallIndirectOp::getODSResultIndexAndLength(unsigned index) {
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

Operation::result_range CallIndirectOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range CallIndirectOp::results() {
  return getODSResults(0);
}

void CallIndirectOp::build(OpBuilder &, OperationState &result, Value callee,ValueRange operands ) {
      result.operands.push_back(callee);
      result.addOperands(operands);
      result.addTypes(callee.getType().cast<FunctionType>().getResults());
  
}

void CallIndirectOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, Value callee, ValueRange operands) {
  odsState.addOperands(callee);
  odsState.addOperands(operands);
  odsState.addTypes(results);
}

void CallIndirectOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

LogicalResult CallIndirectOp::verify() {
  if (failed(CallIndirectOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<FunctionType>()))) {
        return emitOpError("operand #") << index << " must be function type, but got " << v.getType();
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
  if (!(((*this->getODSOperands(0).begin()).getType().cast<FunctionType>().getInputs() == this->getODSOperands(1).getType())))
    return emitOpError("failed to verify that callee input types match argument types");
  if (!(((*this->getODSOperands(0).begin()).getType().cast<FunctionType>().getResults() == this->getODSResults(0).getType())))
    return emitOpError("failed to verify that callee result types match result types");
  return mlir::success();
}



ParseResult CallIndirectOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType calleeRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> calleeOperands(calleeRawOperands);  llvm::SMLoc calleeOperandsLoc = parser.getCurrentLocation();
  (void)calleeOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> operandsOperands;
  llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  Type calleeRawTypes[1];
  ArrayRef<Type> calleeTypes(calleeRawTypes);

  if (parser.parseOperand(calleeRawOperands[0]))
    return failure();
  if (parser.parseLParen())
    return failure();

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(calleeRawTypes[0]))
    return failure();
  for (Type type : calleeTypes) {
    (void)type;
    if (!((type.isa<FunctionType>()))) {
      return parser.emitError(parser.getNameLoc()) << "'callee' must be function type, but got " << type;
    }
  }
  result.addTypes(calleeTypes[0].cast<FunctionType>().getResults());
  if (parser.resolveOperands(calleeOperands, calleeTypes, calleeOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(operandsOperands, calleeTypes[0].cast<FunctionType>().getInputs(), operandsOperandsLoc, result.operands))
    return failure();
  return success();
}

void CallIndirectOp::print(OpAsmPrinter &p) {
  p << "call_indirect";
  p << " ";
  p << callee();
  p << "(";
  p << operands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(callee().getType());
}


//===----------------------------------------------------------------------===//
// CallOp definitions
//===----------------------------------------------------------------------===//

CallOpAdaptor::CallOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CallOpAdaptor::CallOpAdaptor(CallOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CallOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange CallOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange CallOpAdaptor::operands() {
  return getODSOperands(0);
}

FlatSymbolRefAttr CallOpAdaptor::callee() {
  assert(odsAttrs && "no attributes when constructing adapter");
  FlatSymbolRefAttr attr = odsAttrs.get("callee").cast<FlatSymbolRefAttr>();
  return attr;
}

LogicalResult CallOpAdaptor::verify(Location loc) {
  {
  auto tblgen_callee = odsAttrs.get("callee");
  if (!tblgen_callee) return emitError(loc, "'std.call' op ""requires attribute 'callee'");
    if (!((tblgen_callee.isa<FlatSymbolRefAttr>()))) return emitError(loc, "'std.call' op ""attribute 'callee' failed to satisfy constraint: flat symbol reference attribute");
  }
  return success();
}

StringRef CallOp::getOperationName() {
  return "std.call";
}

std::pair<unsigned, unsigned> CallOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range CallOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range CallOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange CallOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CallOp::getODSResultIndexAndLength(unsigned index) {
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

Operation::result_range CallOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

FlatSymbolRefAttr CallOp::calleeAttr() {
  return this->getAttr("callee").cast<FlatSymbolRefAttr>();
}

StringRef CallOp::callee() {
  auto attr = calleeAttr();
  return attr.getValue();
}

void CallOp::calleeAttr(FlatSymbolRefAttr attr) {
  this->getOperation()->setAttr("callee", attr);
}

void CallOp::build(OpBuilder &builder, OperationState &result, FuncOp callee,ValueRange operands ) {
      result.addOperands(operands);
      result.addAttribute("callee", builder.getSymbolRefAttr(callee));
      result.addTypes(callee.getType().getResults());
  
}

void CallOp::build(OpBuilder &builder, OperationState &result, SymbolRefAttr callee,ArrayRef<Type> results, ValueRange operands ) {
      result.addOperands(operands);
      result.addAttribute("callee", callee);
      result.addTypes(results);
  
}

void CallOp::build(OpBuilder &builder, OperationState &result, StringRef callee,ArrayRef<Type> results, ValueRange operands ) {
      build(builder, result, builder.getSymbolRefAttr(callee), results,
            operands);
  
}

void CallOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, FlatSymbolRefAttr callee, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("callee", callee);
  odsState.addTypes(resultType0);
}

void CallOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, StringRef callee, ValueRange operands) {
  odsState.addOperands(operands);
  odsState.addAttribute("callee", odsBuilder.getSymbolRefAttr(callee));
  odsState.addTypes(resultType0);
}

void CallOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

LogicalResult CallOp::verify() {
  if (failed(CallOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

ParseResult CallOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> operandsOperands;
  llvm::SMLoc operandsOperandsLoc = parser.getCurrentLocation();
  (void)operandsOperandsLoc;
  ArrayRef<Type> operandsTypes;
  ArrayRef<Type> allResultTypes;

  FlatSymbolRefAttr calleeAttr;
  if (parser.parseAttribute(calleeAttr, parser.getBuilder().getType<NoneType>(), "callee", result.attributes))
    return failure();
  if (parser.parseLParen())
    return failure();

  if (parser.parseOperandList(operandsOperands))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType operands__allResult_functionType;
  if (parser.parseType(operands__allResult_functionType))
    return failure();
  operandsTypes = operands__allResult_functionType.getInputs();
  allResultTypes = operands__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return failure();
  return success();
}

void CallOp::print(OpAsmPrinter &p) {
  p << "call";
  p << " ";
  p.printAttributeWithoutType(calleeAttr());
  p << "(";
  p << operands();
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"callee"});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(operands().getTypes(), getOperation()->getResultTypes());
}


//===----------------------------------------------------------------------===//
// CeilFOp definitions
//===----------------------------------------------------------------------===//

CeilFOpAdaptor::CeilFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CeilFOpAdaptor::CeilFOpAdaptor(CeilFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CeilFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CeilFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CeilFOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult CeilFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CeilFOp::getOperationName() {
  return "std.ceilf";
}

std::pair<unsigned, unsigned> CeilFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CeilFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CeilFOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange CeilFOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CeilFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CeilFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CeilFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void CeilFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CeilFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CeilFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void CeilFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult CeilFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void CeilFOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult CeilFOp::verify() {
  if (failed(CeilFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void CeilFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// CmpFOp definitions
//===----------------------------------------------------------------------===//

CmpFOpAdaptor::CmpFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CmpFOpAdaptor::CmpFOpAdaptor(CmpFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CmpFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CmpFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CmpFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value CmpFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

IntegerAttr CmpFOpAdaptor::predicate() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("predicate").cast<IntegerAttr>();
  return attr;
}

LogicalResult CmpFOpAdaptor::verify(Location loc) {
  {
  auto tblgen_predicate = odsAttrs.get("predicate");
  if (!tblgen_predicate) return emitError(loc, "'std.cmpf' op ""requires attribute 'predicate'");
    if (!((((tblgen_predicate.isa<IntegerAttr>())) && ((tblgen_predicate.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_predicate.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 10)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 11)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 12)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 13)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 14)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 15))))) return emitError(loc, "'std.cmpf' op ""attribute 'predicate' failed to satisfy constraint: allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15");
  }
  return success();
}

StringRef CmpFOp::getOperationName() {
  return "std.cmpf";
}

std::pair<unsigned, unsigned> CmpFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CmpFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CmpFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value CmpFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CmpFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CmpFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CmpFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CmpFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value CmpFOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr CmpFOp::predicateAttr() {
  return this->getAttr("predicate").cast<IntegerAttr>();
}

::mlir::CmpFPredicate CmpFOp::predicate() {
  auto attr = predicateAttr();
  return static_cast<::mlir::CmpFPredicate>(attr.getInt());
}

void CmpFOp::predicateAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("predicate", attr);
}

void CmpFOp::build(OpBuilder &builder, OperationState &result, CmpFPredicate predicate,Value lhs, Value rhs) {
      ::buildCmpFOp(builder, result, predicate, lhs, rhs);
  
}

void CmpFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  odsState.addTypes(result);
}

void CmpFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::CmpFPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  odsState.addTypes(result);
}

void CmpFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::CmpFPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CmpFOp::verify() {
  if (failed(CmpFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger(1))) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1)))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1)))))) {
        return emitOpError("result #") << index << " must be bool-like, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getI1SameShape((*this->getODSOperands(0).begin()).getType()) == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type has i1 element type and same shape as operands");
  return success();
}



ParseResult CmpFOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType lhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  OpAsmParser::OperandType rhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;
  Type lhsRawTypes[1];
  ArrayRef<Type> lhsTypes(lhsRawTypes);

  {
    StringAttr attrVal;
    NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseAttribute(attrVal, parser.getBuilder().getNoneType(),
                              "predicate", attrStorage))
      return failure();

    auto attrOptional = ::mlir::symbolizeCmpFPredicate(attrVal.getValue());
    if (!attrOptional)
      return parser.emitError(loc, "invalid ")
             << "predicate attribute specification: " << attrVal;

    result.addAttribute("predicate", parser.getBuilder().getI64IntegerAttr(static_cast<int64_t>(attrOptional.getValue())));
  }
  if (parser.parseComma())
    return failure();

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

  if (parser.parseType(lhsRawTypes[0]))
    return failure();
  for (Type type : lhsTypes) {
    (void)type;
    if (!(((type.isa<FloatType>())) || (((type.isa<VectorType>())) && ((type.cast<ShapedType>().getElementType().isa<FloatType>()))) || (((type.isa<TensorType>())) && ((type.cast<ShapedType>().getElementType().isa<FloatType>()))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be floating-point-like, but got " << type;
    }
  }
  result.addTypes(getI1SameShape(lhsTypes[0]));
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes, rhsOperandsLoc, result.operands))
    return failure();
  return success();
}

void CmpFOp::print(OpAsmPrinter &p) {
  p << "cmpf";
  p << " ";
  p << "\"" << stringifyCmpFPredicate(predicate()) << "\"";
  p << ",";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"predicate"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(lhs().getType());
}

void CmpFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// CmpIOp definitions
//===----------------------------------------------------------------------===//

CmpIOpAdaptor::CmpIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CmpIOpAdaptor::CmpIOpAdaptor(CmpIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CmpIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CmpIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CmpIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value CmpIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

IntegerAttr CmpIOpAdaptor::predicate() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("predicate").cast<IntegerAttr>();
  return attr;
}

LogicalResult CmpIOpAdaptor::verify(Location loc) {
  {
  auto tblgen_predicate = odsAttrs.get("predicate");
  if (!tblgen_predicate) return emitError(loc, "'std.cmpi' op ""requires attribute 'predicate'");
    if (!((((tblgen_predicate.isa<IntegerAttr>())) && ((tblgen_predicate.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_predicate.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 9))))) return emitError(loc, "'std.cmpi' op ""attribute 'predicate' failed to satisfy constraint: allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9");
  }
  return success();
}

StringRef CmpIOp::getOperationName() {
  return "std.cmpi";
}

std::pair<unsigned, unsigned> CmpIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CmpIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CmpIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value CmpIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CmpIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CmpIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CmpIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CmpIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value CmpIOp::result() {
  return *getODSResults(0).begin();
}

IntegerAttr CmpIOp::predicateAttr() {
  return this->getAttr("predicate").cast<IntegerAttr>();
}

::mlir::CmpIPredicate CmpIOp::predicate() {
  auto attr = predicateAttr();
  return static_cast<::mlir::CmpIPredicate>(attr.getInt());
}

void CmpIOp::predicateAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("predicate", attr);
}

void CmpIOp::build(OpBuilder &builder, OperationState &result, CmpIPredicate predicate,Value lhs, Value rhs) {
      ::buildCmpIOp(builder, result, predicate, lhs, rhs);
  
}

void CmpIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  odsState.addTypes(result);
}

void CmpIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::CmpIPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  odsState.addTypes(result);
}

void CmpIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::CmpIPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CmpIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CmpIOp::verify() {
  if (failed(CmpIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger(1))) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1)))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1)))))) {
        return emitOpError("result #") << index << " must be bool-like, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((getI1SameShape((*this->getODSOperands(0).begin()).getType()) == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type has i1 element type and same shape as operands");
  return success();
}



ParseResult CmpIOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType lhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> lhsOperands(lhsRawOperands);  llvm::SMLoc lhsOperandsLoc = parser.getCurrentLocation();
  (void)lhsOperandsLoc;
  OpAsmParser::OperandType rhsRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> rhsOperands(rhsRawOperands);  llvm::SMLoc rhsOperandsLoc = parser.getCurrentLocation();
  (void)rhsOperandsLoc;
  Type lhsRawTypes[1];
  ArrayRef<Type> lhsTypes(lhsRawTypes);

  {
    StringAttr attrVal;
    NamedAttrList attrStorage;
    auto loc = parser.getCurrentLocation();
    if (parser.parseAttribute(attrVal, parser.getBuilder().getNoneType(),
                              "predicate", attrStorage))
      return failure();

    auto attrOptional = ::mlir::symbolizeCmpIPredicate(attrVal.getValue());
    if (!attrOptional)
      return parser.emitError(loc, "invalid ")
             << "predicate attribute specification: " << attrVal;

    result.addAttribute("predicate", parser.getBuilder().getI64IntegerAttr(static_cast<int64_t>(attrOptional.getValue())));
  }
  if (parser.parseComma())
    return failure();

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

  if (parser.parseType(lhsRawTypes[0]))
    return failure();
  for (Type type : lhsTypes) {
    (void)type;
    if (!(((type.isSignlessInteger())) || ((type.isa<IndexType>())) || (((type.isa<VectorType>())) && ((type.cast<ShapedType>().getElementType().isSignlessInteger()))) || (((type.isa<TensorType>())) && ((type.cast<ShapedType>().getElementType().isSignlessInteger()))))) {
      return parser.emitError(parser.getNameLoc()) << "'lhs' must be signless-integer-like, but got " << type;
    }
  }
  result.addTypes(getI1SameShape(lhsTypes[0]));
  if (parser.resolveOperands(lhsOperands, lhsTypes, lhsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(rhsOperands, lhsTypes, rhsOperandsLoc, result.operands))
    return failure();
  return success();
}

void CmpIOp::print(OpAsmPrinter &p) {
  p << "cmpi";
  p << " ";
  p << "\"" << stringifyCmpIPredicate(predicate()) << "\"";
  p << ",";
  p << " ";
  p << lhs();
  p << ",";
  p << " ";
  p << rhs();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"predicate"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(lhs().getType());
}

void CmpIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// CondBranchOp definitions
//===----------------------------------------------------------------------===//

CondBranchOpAdaptor::CondBranchOpAdaptor(ValueRange values, DictionaryAttr attrs)  : odsOperands(values), odsAttrs(attrs) {

}

CondBranchOpAdaptor::CondBranchOpAdaptor(CondBranchOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CondBranchOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

ValueRange CondBranchOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CondBranchOpAdaptor::condition() {
  return *getODSOperands(0).begin();
}

ValueRange CondBranchOpAdaptor::trueDestOperands() {
  return getODSOperands(1);
}

ValueRange CondBranchOpAdaptor::falseDestOperands() {
  return getODSOperands(2);
}

LogicalResult CondBranchOpAdaptor::verify(Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
    if (numElements != 3)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 3 elements");
  }
    return success();
}

StringRef CondBranchOp::getOperationName() {
  return "std.cond_br";
}

std::pair<unsigned, unsigned> CondBranchOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

Operation::operand_range CondBranchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CondBranchOp::condition() {
  return *getODSOperands(0).begin();
}

Operation::operand_range CondBranchOp::trueDestOperands() {
  return getODSOperands(1);
}

Operation::operand_range CondBranchOp::falseDestOperands() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange CondBranchOp::conditionMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange CondBranchOp::trueDestOperandsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange CondBranchOp::falseDestOperandsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> CondBranchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CondBranchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Block *CondBranchOp::trueDest() {
  return this->getOperation()->getSuccessor(0);
}

Block *CondBranchOp::falseDest() {
  return this->getOperation()->getSuccessor(1);
}

void CondBranchOp::build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, ValueRange trueOperands,Block *falseDest, ValueRange falseOperands) {
      build(builder, result, condition, trueOperands, falseOperands, trueDest,
            falseDest);
  
}

void CondBranchOp::build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, Block *falseDest, ValueRange falseOperands ) {
      build(builder, result, condition, trueDest, ValueRange(), falseDest,
            falseOperands);
  
}

void CondBranchOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest) {
  odsState.addOperands(condition);
  odsState.addOperands(trueDestOperands);
  odsState.addOperands(falseDestOperands);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(trueDestOperands.size()), static_cast<int32_t>(falseDestOperands.size())}));
  odsState.addSuccessors(trueDest);
  odsState.addSuccessors(falseDest);
}

void CondBranchOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest) {
  odsState.addOperands(condition);
  odsState.addOperands(trueDestOperands);
  odsState.addOperands(falseDestOperands);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(trueDestOperands.size()), static_cast<int32_t>(falseDestOperands.size())}));
  odsState.addSuccessors(trueDest);
  odsState.addSuccessors(falseDest);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CondBranchOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CondBranchOp::verify() {
  if (failed(CondBranchOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isSignlessInteger(1)))) {
        return emitOpError("operand #") << index << " must be 1-bit signless integer, but got " << v.getType();
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
  }
{
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}







ParseResult CondBranchOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType conditionRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> conditionOperands(conditionRawOperands);  llvm::SMLoc conditionOperandsLoc = parser.getCurrentLocation();
  (void)conditionOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> trueDestOperandsOperands;
  llvm::SMLoc trueDestOperandsOperandsLoc = parser.getCurrentLocation();
  (void)trueDestOperandsOperandsLoc;
  SmallVector<Type, 1> trueDestOperandsTypes;
  SmallVector<OpAsmParser::OperandType, 4> falseDestOperandsOperands;
  llvm::SMLoc falseDestOperandsOperandsLoc = parser.getCurrentLocation();
  (void)falseDestOperandsOperandsLoc;
  SmallVector<Type, 1> falseDestOperandsTypes;

  if (parser.parseOperand(conditionRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  Block *trueDestSuccessor = nullptr;
  if (parser.parseSuccessor(trueDestSuccessor))
    return failure();
  if (succeeded(parser.parseOptionalLParen())) {

  if (parser.parseOperandList(trueDestOperandsOperands))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(trueDestOperandsTypes))
    return failure();
  if (parser.parseRParen())
    return failure();
  }
  if (parser.parseComma())
    return failure();

  Block *falseDestSuccessor = nullptr;
  if (parser.parseSuccessor(falseDestSuccessor))
    return failure();
  if (succeeded(parser.parseOptionalLParen())) {

  if (parser.parseOperandList(falseDestOperandsOperands))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(falseDestOperandsTypes))
    return failure();
  if (parser.parseRParen())
    return failure();
  }
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(conditionOperands, odsBuildableType0, result.operands))
    return failure();
  if (parser.resolveOperands(trueDestOperandsOperands, trueDestOperandsTypes, trueDestOperandsOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(falseDestOperandsOperands, falseDestOperandsTypes, falseDestOperandsOperandsLoc, result.operands))
    return failure();
  result.addSuccessors(trueDestSuccessor);
  result.addSuccessors(falseDestSuccessor);
  result.addAttribute("operand_segment_sizes", parser.getBuilder().getI32VectorAttr({1, static_cast<int32_t>(trueDestOperandsOperands.size()), static_cast<int32_t>(falseDestOperandsOperands.size())}));
  return success();
}

void CondBranchOp::print(OpAsmPrinter &p) {
  p << "cond_br";
  p << " ";
  p << condition();
  p << ",";
  p << " ";
  p << trueDest();
  if (!trueDestOperands().empty()) {
  p << "(";
  p << trueDestOperands();
  p << " " << ":";
  p << " ";
  p << trueDestOperands().getTypes();
  p << ")";
  }
  p << ",";
  p << " ";
  p << falseDest();
  if (!falseDestOperands().empty()) {
  p << "(";
  p << falseDestOperands();
  p << " " << ":";
  p << " ";
  p << falseDestOperands().getTypes();
  p << ")";
  }
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"operand_segment_sizes", });
}

void CondBranchOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ConstantOp definitions
//===----------------------------------------------------------------------===//

ConstantOpAdaptor::ConstantOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstantOpAdaptor::ConstantOpAdaptor(ConstantOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstantOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConstantOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Attribute ConstantOpAdaptor::value() {
  assert(odsAttrs && "no attributes when constructing adapter");
  Attribute attr = odsAttrs.get("value").cast<Attribute>();
  return attr;
}

LogicalResult ConstantOpAdaptor::verify(Location loc) {
  {
  auto tblgen_value = odsAttrs.get("value");
  if (!tblgen_value) return emitError(loc, "'std.constant' op ""requires attribute 'value'");
    if (!((true))) return emitError(loc, "'std.constant' op ""attribute 'value' failed to satisfy constraint: any attribute");
  }
  return success();
}

StringRef ConstantOp::getOperationName() {
  return "std.constant";
}

std::pair<unsigned, unsigned> ConstantOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConstantOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ConstantOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConstantOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Attribute ConstantOp::valueAttr() {
  return this->getAttr("value").cast<Attribute>();
}

Attribute ConstantOp::value() {
  auto attr = valueAttr();
  return attr;
}

void ConstantOp::valueAttr(Attribute attr) {
  this->getOperation()->setAttr("value", attr);
}

void ConstantOp::build(OpBuilder &builder, OperationState &result, Attribute value) {
 build(builder, result, value.getType(), value); 
}

void ConstantOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Attribute value) {
  odsState.addAttribute("value", value);
  odsState.addTypes(resultType0);
}

void ConstantOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Attribute value) {
  odsState.addAttribute("value", value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstantOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ConstantOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseConstantOp(parser, result);
}

void ConstantOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ConstantOp::verify() {
  if (failed(ConstantOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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





void ConstantOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// CopySignOp definitions
//===----------------------------------------------------------------------===//

CopySignOpAdaptor::CopySignOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CopySignOpAdaptor::CopySignOpAdaptor(CopySignOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CopySignOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CopySignOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CopySignOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value CopySignOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult CopySignOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CopySignOp::getOperationName() {
  return "std.copysign";
}

std::pair<unsigned, unsigned> CopySignOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CopySignOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CopySignOp::lhs() {
  return *getODSOperands(0).begin();
}

Value CopySignOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CopySignOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CopySignOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CopySignOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CopySignOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CopySignOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult CopySignOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void CopySignOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult CopySignOp::verify() {
  if (failed(CopySignOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void CopySignOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// CosOp definitions
//===----------------------------------------------------------------------===//

CosOpAdaptor::CosOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CosOpAdaptor::CosOpAdaptor(CosOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CosOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CosOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CosOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult CosOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CosOp::getOperationName() {
  return "std.cos";
}

std::pair<unsigned, unsigned> CosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CosOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange CosOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CosOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CosOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CosOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult CosOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void CosOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult CosOp::verify() {
  if (failed(CosOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void CosOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// CreateComplexOp definitions
//===----------------------------------------------------------------------===//

CreateComplexOpAdaptor::CreateComplexOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CreateComplexOpAdaptor::CreateComplexOpAdaptor(CreateComplexOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CreateComplexOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CreateComplexOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CreateComplexOpAdaptor::real() {
  return *getODSOperands(0).begin();
}

Value CreateComplexOpAdaptor::imaginary() {
  return *getODSOperands(1).begin();
}

LogicalResult CreateComplexOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CreateComplexOp::getOperationName() {
  return "std.create_complex";
}

std::pair<unsigned, unsigned> CreateComplexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CreateComplexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CreateComplexOp::real() {
  return *getODSOperands(0).begin();
}

Value CreateComplexOp::imaginary() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CreateComplexOp::realMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CreateComplexOp::imaginaryMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CreateComplexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CreateComplexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value CreateComplexOp::complex() {
  return *getODSResults(0).begin();
}

void CreateComplexOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type complex, Value real, Value imaginary) {
  odsState.addOperands(real);
  odsState.addOperands(imaginary);
  odsState.addTypes(complex);
}

void CreateComplexOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value real, Value imaginary) {
  odsState.addOperands(real);
  odsState.addOperands(imaginary);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CreateComplexOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CreateComplexOp::verify() {
  if (failed(CreateComplexOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<FloatType>()))) {
        return emitOpError("operand #") << index << " must be floating-point, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<FloatType>()))) {
        return emitOpError("operand #") << index << " must be floating-point, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<ComplexType>())) && ((v.getType().cast<ComplexType>().getElementType().isa<FloatType>())))) {
        return emitOpError("result #") << index << " must be complex type with floating-point elements, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(0).begin()).getType(), (*this->getODSOperands(1).begin()).getType()})))))
    return emitOpError("failed to verify that all of {real, imaginary} have same type");
  if (!(((*this->getODSResults(0).begin()).getType().cast<ComplexType>().getElementType() == (*this->getODSOperands(0).begin()).getType())))
    return emitOpError("failed to verify that complex element type matches real operand type");
  if (!(((*this->getODSResults(0).begin()).getType().cast<ComplexType>().getElementType() == (*this->getODSOperands(1).begin()).getType())))
    return emitOpError("failed to verify that complex element type matches imaginary operand type");
  return mlir::success();
}

ParseResult CreateComplexOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType realRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> realOperands(realRawOperands);  llvm::SMLoc realOperandsLoc = parser.getCurrentLocation();
  (void)realOperandsLoc;
  OpAsmParser::OperandType imaginaryRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> imaginaryOperands(imaginaryRawOperands);  llvm::SMLoc imaginaryOperandsLoc = parser.getCurrentLocation();
  (void)imaginaryOperandsLoc;
  Type complexRawTypes[1];
  ArrayRef<Type> complexTypes(complexRawTypes);

  if (parser.parseOperand(realRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(imaginaryRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(complexRawTypes[0]))
    return failure();
  for (Type type : complexTypes) {
    (void)type;
    if (!(((type.isa<ComplexType>())) && ((type.cast<ComplexType>().getElementType().isa<FloatType>())))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(complexTypes);
  if (parser.resolveOperands(realOperands, complexTypes[0].cast<ComplexType>().getElementType(), realOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(imaginaryOperands, complexTypes[0].cast<ComplexType>().getElementType(), imaginaryOperandsLoc, result.operands))
    return failure();
  return success();
}

void CreateComplexOp::print(OpAsmPrinter &p) {
  p << "create_complex";
  p << " ";
  p << real();
  p << ",";
  p << " ";
  p << imaginary();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(complex().getType());
}

void CreateComplexOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// DeallocOp definitions
//===----------------------------------------------------------------------===//

DeallocOpAdaptor::DeallocOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DeallocOpAdaptor::DeallocOpAdaptor(DeallocOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DeallocOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange DeallocOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value DeallocOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

LogicalResult DeallocOpAdaptor::verify(Location loc) {
  return success();
}

StringRef DeallocOp::getOperationName() {
  return "std.dealloc";
}

std::pair<unsigned, unsigned> DeallocOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range DeallocOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value DeallocOp::memref() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange DeallocOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DeallocOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range DeallocOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DeallocOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value memref) {
  odsState.addOperands(memref);
}

void DeallocOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref) {
  odsState.addOperands(memref);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DeallocOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult DeallocOp::verify() {
  if (failed(DeallocOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}





ParseResult DeallocOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  return success();
}

void DeallocOp::print(OpAsmPrinter &p) {
  p << "dealloc";
  p << " ";
  p << memref();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
}

void DeallocOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  effects.emplace_back(MemoryEffects::Free::get(), ::mlir::SideEffects::DefaultResource::get());
  for (Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Free::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// DimOp definitions
//===----------------------------------------------------------------------===//

DimOpAdaptor::DimOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DimOpAdaptor::DimOpAdaptor(DimOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DimOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange DimOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value DimOpAdaptor::memrefOrTensor() {
  return *getODSOperands(0).begin();
}

Value DimOpAdaptor::index() {
  return *getODSOperands(1).begin();
}

LogicalResult DimOpAdaptor::verify(Location loc) {
  return success();
}

StringRef DimOp::getOperationName() {
  return "std.dim";
}

std::pair<unsigned, unsigned> DimOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range DimOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value DimOp::memrefOrTensor() {
  return *getODSOperands(0).begin();
}

Value DimOp::index() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange DimOp::memrefOrTensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DimOp::indexMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DimOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range DimOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value DimOp::result() {
  return *getODSResults(0).begin();
}



void DimOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memrefOrTensor, Value index) {
  odsState.addOperands(memrefOrTensor);
  odsState.addOperands(index);
  odsState.addTypes(result);
}

void DimOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memrefOrTensor, Value index) {
  odsState.addOperands(memrefOrTensor);
  odsState.addOperands(index);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DimOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult DimOp::verify() {
  if (failed(DimOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((true))) || (((v.getType().isa<TensorType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be any tensor or memref type, but got " << v.getType();
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
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



ParseResult DimOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType memrefOrTensorRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOrTensorOperands(memrefOrTensorRawOperands);  llvm::SMLoc memrefOrTensorOperandsLoc = parser.getCurrentLocation();
  (void)memrefOrTensorOperandsLoc;
  OpAsmParser::OperandType indexRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> indexOperands(indexRawOperands);  llvm::SMLoc indexOperandsLoc = parser.getCurrentLocation();
  (void)indexOperandsLoc;
  Type memrefOrTensorRawTypes[1];
  ArrayRef<Type> memrefOrTensorTypes(memrefOrTensorRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperand(memrefOrTensorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(indexRawOperands[0]))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefOrTensorRawTypes[0]))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(memrefOrTensorOperands, memrefOrTensorTypes, memrefOrTensorOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(indexOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void DimOp::print(OpAsmPrinter &p) {
  p << "dim";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " ";
  p << memrefOrTensor();
  p << ",";
  p << " ";
  p << index();
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memrefOrTensor().getType());
}

void DimOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// DivFOp definitions
//===----------------------------------------------------------------------===//

DivFOpAdaptor::DivFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DivFOpAdaptor::DivFOpAdaptor(DivFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DivFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange DivFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value DivFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value DivFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult DivFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef DivFOp::getOperationName() {
  return "std.divf";
}

std::pair<unsigned, unsigned> DivFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range DivFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value DivFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value DivFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange DivFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange DivFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DivFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range DivFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DivFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void DivFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DivFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DivFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void DivFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult DivFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void DivFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult DivFOp::verify() {
  if (failed(DivFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void DivFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// Exp2Op definitions
//===----------------------------------------------------------------------===//

Exp2OpAdaptor::Exp2OpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

Exp2OpAdaptor::Exp2OpAdaptor(Exp2Op& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> Exp2OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange Exp2OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value Exp2OpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult Exp2OpAdaptor::verify(Location loc) {
  return success();
}

StringRef Exp2Op::getOperationName() {
  return "std.exp2";
}

std::pair<unsigned, unsigned> Exp2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Exp2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value Exp2Op::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange Exp2Op::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> Exp2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range Exp2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Exp2Op::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult Exp2Op::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void Exp2Op::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult Exp2Op::verify() {
  if (failed(Exp2OpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void Exp2Op::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ExpOp definitions
//===----------------------------------------------------------------------===//

ExpOpAdaptor::ExpOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExpOpAdaptor::ExpOpAdaptor(ExpOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExpOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ExpOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ExpOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult ExpOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ExpOp::getOperationName() {
  return "std.exp";
}

std::pair<unsigned, unsigned> ExpOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ExpOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExpOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExpOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExpOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ExpOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExpOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult ExpOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void ExpOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult ExpOp::verify() {
  if (failed(ExpOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void ExpOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ExtractElementOp definitions
//===----------------------------------------------------------------------===//

ExtractElementOpAdaptor::ExtractElementOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractElementOpAdaptor::ExtractElementOpAdaptor(ExtractElementOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractElementOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange ExtractElementOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ExtractElementOpAdaptor::aggregate() {
  return *getODSOperands(0).begin();
}

ValueRange ExtractElementOpAdaptor::indices() {
  return getODSOperands(1);
}

LogicalResult ExtractElementOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ExtractElementOp::getOperationName() {
  return "std.extract_element";
}

std::pair<unsigned, unsigned> ExtractElementOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range ExtractElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExtractElementOp::aggregate() {
  return *getODSOperands(0).begin();
}

Operation::operand_range ExtractElementOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange ExtractElementOp::aggregateMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ExtractElementOp::indicesMutable() {
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

void ExtractElementOp::build(OpBuilder &builder, OperationState &result, Value aggregate,ValueRange indices ) {
      auto resType = aggregate.getType().cast<ShapedType>()
                                         .getElementType();
      build(builder, result, resType, aggregate, indices);
    
}

void ExtractElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value aggregate, ValueRange indices) {
  odsState.addOperands(aggregate);
  odsState.addOperands(indices);
  odsState.addTypes(result);
}

void ExtractElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value aggregate, ValueRange indices) {
  odsState.addOperands(aggregate);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractElementOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
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
      if (!((((v.getType().isa<VectorType>())) && ((true))) || (((v.getType().isa<TensorType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be vector of any type values or tensor of any type values, but got " << v.getType();
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
  if (!(((*this->getODSOperands(0).begin()).getType().cast<ShapedType>().getElementType() == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type matches element type of aggregate");
  return ::verify(*this);
}



ParseResult ExtractElementOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType aggregateRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> aggregateOperands(aggregateRawOperands);  llvm::SMLoc aggregateOperandsLoc = parser.getCurrentLocation();
  (void)aggregateOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> indicesOperands;
  llvm::SMLoc indicesOperandsLoc = parser.getCurrentLocation();
  (void)indicesOperandsLoc;
  Type aggregateRawTypes[1];
  ArrayRef<Type> aggregateTypes(aggregateRawTypes);

  if (parser.parseOperand(aggregateRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(indicesOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(aggregateRawTypes[0]))
    return failure();
  for (Type type : aggregateTypes) {
    (void)type;
    if (!((((type.isa<VectorType>())) && ((true))) || (((type.isa<TensorType>())) && ((true))))) {
      return parser.emitError(parser.getNameLoc()) << "'aggregate' must be vector of any type values or tensor of any type values, but got " << type;
    }
  }
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(aggregateTypes[0].cast<ShapedType>().getElementType());
  if (parser.resolveOperands(aggregateOperands, aggregateTypes, aggregateOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void ExtractElementOp::print(OpAsmPrinter &p) {
  p << "extract_element";
  p << " ";
  p << aggregate();
  p << "[";
  p << indices();
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(aggregate().getType());
}

void ExtractElementOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// FPExtOp definitions
//===----------------------------------------------------------------------===//

FPExtOpAdaptor::FPExtOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FPExtOpAdaptor::FPExtOpAdaptor(FPExtOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FPExtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FPExtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FPExtOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult FPExtOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FPExtOp::getOperationName() {
  return "std.fpext";
}

std::pair<unsigned, unsigned> FPExtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FPExtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FPExtOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FPExtOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FPExtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FPExtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FPExtOp::build(OpBuilder &builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void FPExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(resultType0);
}

void FPExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPExtOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult FPExtOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void FPExtOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult FPExtOp::verify() {
  if (failed(FPExtOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyCastOp(*this);
}

void FPExtOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// FPToSIOp definitions
//===----------------------------------------------------------------------===//

FPToSIOpAdaptor::FPToSIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FPToSIOpAdaptor::FPToSIOpAdaptor(FPToSIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FPToSIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FPToSIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FPToSIOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult FPToSIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FPToSIOp::getOperationName() {
  return "std.fptosi";
}

std::pair<unsigned, unsigned> FPToSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FPToSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FPToSIOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FPToSIOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FPToSIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FPToSIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FPToSIOp::build(OpBuilder &builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void FPToSIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(resultType0);
}

void FPToSIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPToSIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult FPToSIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void FPToSIOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult FPToSIOp::verify() {
  if (failed(FPToSIOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyCastOp(*this);
}

void FPToSIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// FPTruncOp definitions
//===----------------------------------------------------------------------===//

FPTruncOpAdaptor::FPTruncOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FPTruncOpAdaptor::FPTruncOpAdaptor(FPTruncOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FPTruncOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FPTruncOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FPTruncOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult FPTruncOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FPTruncOp::getOperationName() {
  return "std.fptrunc";
}

std::pair<unsigned, unsigned> FPTruncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FPTruncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FPTruncOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FPTruncOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FPTruncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FPTruncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FPTruncOp::build(OpBuilder &builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void FPTruncOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(resultType0);
}

void FPTruncOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPTruncOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult FPTruncOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void FPTruncOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult FPTruncOp::verify() {
  if (failed(FPTruncOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyCastOp(*this);
}

void FPTruncOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// GenericAtomicRMWOp definitions
//===----------------------------------------------------------------------===//

GenericAtomicRMWOpAdaptor::GenericAtomicRMWOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GenericAtomicRMWOpAdaptor::GenericAtomicRMWOpAdaptor(GenericAtomicRMWOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GenericAtomicRMWOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange GenericAtomicRMWOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value GenericAtomicRMWOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ValueRange GenericAtomicRMWOpAdaptor::indices() {
  return getODSOperands(1);
}

LogicalResult GenericAtomicRMWOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GenericAtomicRMWOp::getOperationName() {
  return "std.generic_atomic_rmw";
}

std::pair<unsigned, unsigned> GenericAtomicRMWOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range GenericAtomicRMWOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value GenericAtomicRMWOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range GenericAtomicRMWOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange GenericAtomicRMWOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange GenericAtomicRMWOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> GenericAtomicRMWOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GenericAtomicRMWOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value GenericAtomicRMWOp::result() {
  return *getODSResults(0).begin();
}

Region &GenericAtomicRMWOp::body() {
  return this->getOperation()->getRegion(0);
}



ParseResult GenericAtomicRMWOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGenericAtomicRMWOp(parser, result);
}

void GenericAtomicRMWOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult GenericAtomicRMWOp::verify() {
  if (failed(GenericAtomicRMWOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be memref of signless integer or floating-point values, but got " << v.getType();
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
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<FloatType>())))) {
        return emitOpError("result #") << index << " must be signless integer or floating-point, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!(((*this->getODSOperands(0).begin()).getType().cast<MemRefType>().getElementType() == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type matches element type of memref");
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((true))) {
        return emitOpError("region #") << index << " ('body') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// ImOp definitions
//===----------------------------------------------------------------------===//

ImOpAdaptor::ImOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ImOpAdaptor::ImOpAdaptor(ImOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ImOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ImOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ImOpAdaptor::complex() {
  return *getODSOperands(0).begin();
}

LogicalResult ImOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ImOp::getOperationName() {
  return "std.im";
}

std::pair<unsigned, unsigned> ImOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ImOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ImOp::complex() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ImOp::complexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ImOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ImOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ImOp::imaginary() {
  return *getODSResults(0).begin();
}

void ImOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type imaginary, Value complex) {
  odsState.addOperands(complex);
  odsState.addTypes(imaginary);
}

void ImOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value complex) {
  odsState.addOperands(complex);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ImOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ImOp::verify() {
  if (failed(ImOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<ComplexType>())) && ((v.getType().cast<ComplexType>().getElementType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be complex type with floating-point elements, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<FloatType>()))) {
        return emitOpError("result #") << index << " must be floating-point, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!(((*this->getODSOperands(0).begin()).getType().cast<ComplexType>().getElementType() == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that complex element type matches result type");
  return mlir::success();
}

ParseResult ImOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType complexRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> complexOperands(complexRawOperands);  llvm::SMLoc complexOperandsLoc = parser.getCurrentLocation();
  (void)complexOperandsLoc;
  Type complexRawTypes[1];
  ArrayRef<Type> complexTypes(complexRawTypes);

  if (parser.parseOperand(complexRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(complexRawTypes[0]))
    return failure();
  for (Type type : complexTypes) {
    (void)type;
    if (!(((type.isa<ComplexType>())) && ((type.cast<ComplexType>().getElementType().isa<FloatType>())))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(complexTypes[0].cast<ComplexType>().getElementType());
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return failure();
  return success();
}

void ImOp::print(OpAsmPrinter &p) {
  p << "im";
  p << " ";
  p << complex();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(complex().getType());
}

void ImOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// IndexCastOp definitions
//===----------------------------------------------------------------------===//

IndexCastOpAdaptor::IndexCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

IndexCastOpAdaptor::IndexCastOpAdaptor(IndexCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> IndexCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange IndexCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value IndexCastOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult IndexCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef IndexCastOp::getOperationName() {
  return "std.index_cast";
}

std::pair<unsigned, unsigned> IndexCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range IndexCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value IndexCastOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IndexCastOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IndexCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range IndexCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void IndexCastOp::build(OpBuilder &builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void IndexCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(resultType0);
}

void IndexCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IndexCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult IndexCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void IndexCastOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult IndexCastOp::verify() {
  if (failed(IndexCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyCastOp(*this);
}



void IndexCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LoadOp definitions
//===----------------------------------------------------------------------===//

LoadOpAdaptor::LoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LoadOpAdaptor::LoadOpAdaptor(LoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange LoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value LoadOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ValueRange LoadOpAdaptor::indices() {
  return getODSOperands(1);
}

LogicalResult LoadOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LoadOp::getOperationName() {
  return "std.load";
}

std::pair<unsigned, unsigned> LoadOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range LoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value LoadOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range LoadOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange LoadOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LoadOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value LoadOp::result() {
  return *getODSResults(0).begin();
}

void LoadOp::build(OpBuilder &, OperationState &result, Value memref,ValueRange indices ) {
      auto memrefType = memref.getType().cast<MemRefType>();
      result.addOperands(memref);
      result.addOperands(indices);
      result.types.push_back(memrefType.getElementType());
  
}

void LoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref, ValueRange indices) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addTypes(result);
}

void LoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult LoadOp::verify() {
  if (failed(LoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  if (!(((*this->getODSOperands(0).begin()).getType().cast<MemRefType>().getElementType() == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type matches element type of 'memref'");
  return ::verify(*this);
}



ParseResult LoadOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> indicesOperands;
  llvm::SMLoc indicesOperandsLoc = parser.getCurrentLocation();
  (void)indicesOperandsLoc;
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(indicesOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  for (Type type : memrefTypes) {
    (void)type;
    if (!(((type.isa<MemRefType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'memref' must be memref of any type values, but got " << type;
    }
  }
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(memrefTypes[0].cast<MemRefType>().getElementType());
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void LoadOp::print(OpAsmPrinter &p) {
  p << "load";
  p << " ";
  p << memref();
  p << "[";
  p << indices();
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
}

void LoadOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// Log10Op definitions
//===----------------------------------------------------------------------===//

Log10OpAdaptor::Log10OpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

Log10OpAdaptor::Log10OpAdaptor(Log10Op& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> Log10OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange Log10OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value Log10OpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult Log10OpAdaptor::verify(Location loc) {
  return success();
}

StringRef Log10Op::getOperationName() {
  return "std.log10";
}

std::pair<unsigned, unsigned> Log10Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Log10Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value Log10Op::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange Log10Op::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> Log10Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range Log10Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log10Op::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult Log10Op::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void Log10Op::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult Log10Op::verify() {
  if (failed(Log10OpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void Log10Op::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// Log2Op definitions
//===----------------------------------------------------------------------===//

Log2OpAdaptor::Log2OpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

Log2OpAdaptor::Log2OpAdaptor(Log2Op& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> Log2OpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange Log2OpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value Log2OpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult Log2OpAdaptor::verify(Location loc) {
  return success();
}

StringRef Log2Op::getOperationName() {
  return "std.log2";
}

std::pair<unsigned, unsigned> Log2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Log2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value Log2Op::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange Log2Op::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> Log2Op::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range Log2Op::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Log2Op::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult Log2Op::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void Log2Op::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult Log2Op::verify() {
  if (failed(Log2OpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void Log2Op::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LogOp definitions
//===----------------------------------------------------------------------===//

LogOpAdaptor::LogOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LogOpAdaptor::LogOpAdaptor(LogOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LogOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange LogOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value LogOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult LogOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LogOp::getOperationName() {
  return "std.log";
}

std::pair<unsigned, unsigned> LogOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range LogOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value LogOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange LogOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LogOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LogOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LogOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult LogOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void LogOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult LogOp::verify() {
  if (failed(LogOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void LogOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// MemRefCastOp definitions
//===----------------------------------------------------------------------===//

MemRefCastOpAdaptor::MemRefCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MemRefCastOpAdaptor::MemRefCastOpAdaptor(MemRefCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MemRefCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MemRefCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MemRefCastOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

LogicalResult MemRefCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MemRefCastOp::getOperationName() {
  return "std.memref_cast";
}

std::pair<unsigned, unsigned> MemRefCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MemRefCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MemRefCastOp::source() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange MemRefCastOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MemRefCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MemRefCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MemRefCastOp::build(OpBuilder &builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void MemRefCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value source) {
  odsState.addOperands(source);
  odsState.addTypes(resultType0);
}

void MemRefCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source) {
  odsState.addOperands(source);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MemRefCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult MemRefCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void MemRefCastOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult MemRefCastOp::verify() {
  if (failed(MemRefCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<UnrankedMemRefType>())) && ((true))) || (((v.getType().isa<MemRefType>())) && ((true))))) {
        return emitOpError("operand #") << index << " must be unranked.memref of any type values or memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<UnrankedMemRefType>())) && ((true))) || (((v.getType().isa<MemRefType>())) && ((true))))) {
        return emitOpError("result #") << index << " must be unranked.memref of any type values or memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyCastOp(*this);
}



void MemRefCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// MulFOp definitions
//===----------------------------------------------------------------------===//

MulFOpAdaptor::MulFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MulFOpAdaptor::MulFOpAdaptor(MulFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MulFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MulFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MulFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value MulFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult MulFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MulFOp::getOperationName() {
  return "std.mulf";
}

std::pair<unsigned, unsigned> MulFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MulFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MulFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value MulFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MulFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MulFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MulFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MulFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MulFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void MulFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void MulFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult MulFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void MulFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult MulFOp::verify() {
  if (failed(MulFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}



void MulFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// MulIOp definitions
//===----------------------------------------------------------------------===//

MulIOpAdaptor::MulIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MulIOpAdaptor::MulIOpAdaptor(MulIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MulIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MulIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MulIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value MulIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult MulIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MulIOp::getOperationName() {
  return "std.muli";
}

std::pair<unsigned, unsigned> MulIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MulIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MulIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value MulIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MulIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MulIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MulIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MulIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void MulIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void MulIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MulIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void MulIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void MulIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult MulIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void MulIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult MulIOp::verify() {
  if (failed(MulIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void MulIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// NegFOp definitions
//===----------------------------------------------------------------------===//

NegFOpAdaptor::NegFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

NegFOpAdaptor::NegFOpAdaptor(NegFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> NegFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange NegFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value NegFOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult NegFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef NegFOp::getOperationName() {
  return "std.negf";
}

std::pair<unsigned, unsigned> NegFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range NegFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value NegFOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange NegFOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> NegFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range NegFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void NegFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void NegFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NegFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void NegFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void NegFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult NegFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void NegFOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult NegFOp::verify() {
  if (failed(NegFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void NegFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// OrOp definitions
//===----------------------------------------------------------------------===//

OrOpAdaptor::OrOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

OrOpAdaptor::OrOpAdaptor(OrOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> OrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange OrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value OrOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value OrOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult OrOpAdaptor::verify(Location loc) {
  return success();
}

StringRef OrOp::getOperationName() {
  return "std.or";
}

std::pair<unsigned, unsigned> OrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range OrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value OrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value OrOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange OrOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange OrOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> OrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range OrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void OrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void OrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void OrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void OrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult OrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void OrOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult OrOp::verify() {
  if (failed(OrOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void OrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// PrefetchOp definitions
//===----------------------------------------------------------------------===//

PrefetchOpAdaptor::PrefetchOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PrefetchOpAdaptor::PrefetchOpAdaptor(PrefetchOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PrefetchOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange PrefetchOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PrefetchOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

ValueRange PrefetchOpAdaptor::indices() {
  return getODSOperands(1);
}

BoolAttr PrefetchOpAdaptor::isWrite() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("isWrite").cast<BoolAttr>();
  return attr;
}

IntegerAttr PrefetchOpAdaptor::localityHint() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("localityHint").cast<IntegerAttr>();
  return attr;
}

BoolAttr PrefetchOpAdaptor::isDataCache() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("isDataCache").cast<BoolAttr>();
  return attr;
}

LogicalResult PrefetchOpAdaptor::verify(Location loc) {
  {
  auto tblgen_isWrite = odsAttrs.get("isWrite");
  if (!tblgen_isWrite) return emitError(loc, "'std.prefetch' op ""requires attribute 'isWrite'");
    if (!((tblgen_isWrite.isa<BoolAttr>()))) return emitError(loc, "'std.prefetch' op ""attribute 'isWrite' failed to satisfy constraint: bool attribute");
  }
  {
  auto tblgen_localityHint = odsAttrs.get("localityHint");
  if (!tblgen_localityHint) return emitError(loc, "'std.prefetch' op ""requires attribute 'localityHint'");
    if (!((((tblgen_localityHint.isa<IntegerAttr>())) && ((tblgen_localityHint.cast<IntegerAttr>().getType().isSignlessInteger(32)))) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() >= 0)) && ((tblgen_localityHint.cast<IntegerAttr>().getInt() <= 3)))) return emitError(loc, "'std.prefetch' op ""attribute 'localityHint' failed to satisfy constraint: 32-bit signless integer attribute whose minimum value is 0 whose maximum value is 3");
  }
  {
  auto tblgen_isDataCache = odsAttrs.get("isDataCache");
  if (!tblgen_isDataCache) return emitError(loc, "'std.prefetch' op ""requires attribute 'isDataCache'");
    if (!((tblgen_isDataCache.isa<BoolAttr>()))) return emitError(loc, "'std.prefetch' op ""attribute 'isDataCache' failed to satisfy constraint: bool attribute");
  }
  return success();
}

StringRef PrefetchOp::getOperationName() {
  return "std.prefetch";
}

std::pair<unsigned, unsigned> PrefetchOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range PrefetchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value PrefetchOp::memref() {
  return *getODSOperands(0).begin();
}

Operation::operand_range PrefetchOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange PrefetchOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PrefetchOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PrefetchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range PrefetchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

BoolAttr PrefetchOp::isWriteAttr() {
  return this->getAttr("isWrite").cast<BoolAttr>();
}

bool PrefetchOp::isWrite() {
  auto attr = isWriteAttr();
  return attr.getValue();
}

IntegerAttr PrefetchOp::localityHintAttr() {
  return this->getAttr("localityHint").cast<IntegerAttr>();
}

APInt PrefetchOp::localityHint() {
  auto attr = localityHintAttr();
  return attr.getValue();
}

BoolAttr PrefetchOp::isDataCacheAttr() {
  return this->getAttr("isDataCache").cast<BoolAttr>();
}

bool PrefetchOp::isDataCache() {
  auto attr = isDataCacheAttr();
  return attr.getValue();
}

void PrefetchOp::isWriteAttr(BoolAttr attr) {
  this->getOperation()->setAttr("isWrite", attr);
}

void PrefetchOp::localityHintAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("localityHint", attr);
}

void PrefetchOp::isDataCacheAttr(BoolAttr attr) {
  this->getOperation()->setAttr("isDataCache", attr);
}

void PrefetchOp::build(OpBuilder &builder, OperationState &result, Value memref,ArrayRef<Value> indices, bool isWrite, unsigned hint, bool isData) {
      auto hintAttr = builder.getI32IntegerAttr(hint);
      auto isWriteAttr = builder.getBoolAttr(isWrite);
      auto isDataCacheAttr = builder.getBoolAttr(isData);
      result.addOperands(memref);
      result.addOperands(indices);
      result.addAttribute("localityHint", hintAttr);
      result.addAttribute("isWrite", isWriteAttr);
      result.addAttribute("isDataCache", isDataCacheAttr);
    
}

void PrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", isWrite);
  odsState.addAttribute("localityHint", localityHint);
  odsState.addAttribute("isDataCache", isDataCache);
}

void PrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", isWrite);
  odsState.addAttribute("localityHint", localityHint);
  odsState.addAttribute("isDataCache", isDataCache);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", odsBuilder.getBoolAttr(isWrite));
  odsState.addAttribute("localityHint", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), localityHint));
  odsState.addAttribute("isDataCache", odsBuilder.getBoolAttr(isDataCache));
}

void PrefetchOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache) {
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  odsState.addAttribute("isWrite", odsBuilder.getBoolAttr(isWrite));
  odsState.addAttribute("localityHint", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), localityHint));
  odsState.addAttribute("isDataCache", odsBuilder.getBoolAttr(isDataCache));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PrefetchOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult PrefetchOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parsePrefetchOp(parser, result);
}

void PrefetchOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult PrefetchOp::verify() {
  if (failed(PrefetchOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
// RankOp definitions
//===----------------------------------------------------------------------===//

RankOpAdaptor::RankOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

RankOpAdaptor::RankOpAdaptor(RankOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> RankOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange RankOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult RankOpAdaptor::verify(Location loc) {
  return success();
}

StringRef RankOp::getOperationName() {
  return "std.rank";
}

std::pair<unsigned, unsigned> RankOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range RankOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> RankOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range RankOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RankOp::build(OpBuilder &builder, OperationState &result, Value tensor) {
      auto indexType = builder.getIndexType();
      build(builder, result, indexType, tensor);
    
}

void RankOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(resultType0);
}

void RankOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RankOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult RankOp::verify() {
  if (failed(RankOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("result #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



ParseResult RankOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<Type, 1> allOperandTypes;
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(allOperandTypes))
    return failure();
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void RankOp::print(OpAsmPrinter &p) {
  p << "rank";
  p << " ";
  p << getOperation()->getOperands();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << getOperation()->getOperandTypes();
}

void RankOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ReOp definitions
//===----------------------------------------------------------------------===//

ReOpAdaptor::ReOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ReOpAdaptor::ReOpAdaptor(ReOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ReOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ReOpAdaptor::complex() {
  return *getODSOperands(0).begin();
}

LogicalResult ReOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ReOp::getOperationName() {
  return "std.re";
}

std::pair<unsigned, unsigned> ReOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ReOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ReOp::complex() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ReOp::complexMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ReOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ReOp::real() {
  return *getODSResults(0).begin();
}

void ReOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type real, Value complex) {
  odsState.addOperands(complex);
  odsState.addTypes(real);
}

void ReOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value complex) {
  odsState.addOperands(complex);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ReOp::verify() {
  if (failed(ReOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<ComplexType>())) && ((v.getType().cast<ComplexType>().getElementType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be complex type with floating-point elements, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isa<FloatType>()))) {
        return emitOpError("result #") << index << " must be floating-point, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!(((*this->getODSOperands(0).begin()).getType().cast<ComplexType>().getElementType() == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that complex element type matches result type");
  return mlir::success();
}

ParseResult ReOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType complexRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> complexOperands(complexRawOperands);  llvm::SMLoc complexOperandsLoc = parser.getCurrentLocation();
  (void)complexOperandsLoc;
  Type complexRawTypes[1];
  ArrayRef<Type> complexTypes(complexRawTypes);

  if (parser.parseOperand(complexRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(complexRawTypes[0]))
    return failure();
  for (Type type : complexTypes) {
    (void)type;
    if (!(((type.isa<ComplexType>())) && ((type.cast<ComplexType>().getElementType().isa<FloatType>())))) {
      return parser.emitError(parser.getNameLoc()) << "'complex' must be complex type with floating-point elements, but got " << type;
    }
  }
  result.addTypes(complexTypes[0].cast<ComplexType>().getElementType());
  if (parser.resolveOperands(complexOperands, complexTypes, complexOperandsLoc, result.operands))
    return failure();
  return success();
}

void ReOp::print(OpAsmPrinter &p) {
  p << "re";
  p << " ";
  p << complex();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(complex().getType());
}

void ReOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// RemFOp definitions
//===----------------------------------------------------------------------===//

RemFOpAdaptor::RemFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

RemFOpAdaptor::RemFOpAdaptor(RemFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> RemFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange RemFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value RemFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value RemFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult RemFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef RemFOp::getOperationName() {
  return "std.remf";
}

std::pair<unsigned, unsigned> RemFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range RemFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value RemFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value RemFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange RemFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange RemFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RemFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range RemFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RemFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void RemFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RemFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RemFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void RemFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult RemFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void RemFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult RemFOp::verify() {
  if (failed(RemFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void RemFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ReturnOp definitions
//===----------------------------------------------------------------------===//

ReturnOpAdaptor::ReturnOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ReturnOpAdaptor::ReturnOpAdaptor(ReturnOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ReturnOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange ReturnOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange ReturnOpAdaptor::operands() {
  return getODSOperands(0);
}

LogicalResult ReturnOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ReturnOp::getOperationName() {
  return "std.return";
}

std::pair<unsigned, unsigned> ReturnOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range ReturnOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range ReturnOp::operands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ReturnOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ReturnOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ReturnOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReturnOp::build(OpBuilder &b, OperationState &result) {
 build(b, result, llvm::None); 
}

void ReturnOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands) {
  odsState.addOperands(operands);
}

void ReturnOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands) {
  odsState.addOperands(operands);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReturnOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ReturnOp::verify() {
  if (failed(ReturnOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult ReturnOp::parse(OpAsmParser &parser, OperationState &result) {
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

void ReturnOp::print(OpAsmPrinter &p) {
  p << "return";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  if (!operands().empty()) {
  p << " ";
  p << operands();
  p << " " << ":";
  p << " ";
  p << operands().getTypes();
  }
}

void ReturnOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// RsqrtOp definitions
//===----------------------------------------------------------------------===//

RsqrtOpAdaptor::RsqrtOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

RsqrtOpAdaptor::RsqrtOpAdaptor(RsqrtOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> RsqrtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange RsqrtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value RsqrtOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult RsqrtOpAdaptor::verify(Location loc) {
  return success();
}

StringRef RsqrtOp::getOperationName() {
  return "std.rsqrt";
}

std::pair<unsigned, unsigned> RsqrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range RsqrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value RsqrtOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange RsqrtOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> RsqrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range RsqrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void RsqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void RsqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RsqrtOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RsqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void RsqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult RsqrtOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void RsqrtOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult RsqrtOp::verify() {
  if (failed(RsqrtOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void RsqrtOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SIToFPOp definitions
//===----------------------------------------------------------------------===//

SIToFPOpAdaptor::SIToFPOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SIToFPOpAdaptor::SIToFPOpAdaptor(SIToFPOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SIToFPOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SIToFPOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SIToFPOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult SIToFPOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SIToFPOp::getOperationName() {
  return "std.sitofp";
}

std::pair<unsigned, unsigned> SIToFPOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SIToFPOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SIToFPOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SIToFPOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SIToFPOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SIToFPOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SIToFPOp::build(OpBuilder &builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void SIToFPOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(resultType0);
}

void SIToFPOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SIToFPOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult SIToFPOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void SIToFPOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult SIToFPOp::verify() {
  if (failed(SIToFPOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyCastOp(*this);
}

void SIToFPOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SelectOp definitions
//===----------------------------------------------------------------------===//

SelectOpAdaptor::SelectOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SelectOpAdaptor::SelectOpAdaptor(SelectOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SelectOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SelectOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SelectOpAdaptor::condition() {
  return *getODSOperands(0).begin();
}

Value SelectOpAdaptor::true_value() {
  return *getODSOperands(1).begin();
}

Value SelectOpAdaptor::false_value() {
  return *getODSOperands(2).begin();
}

LogicalResult SelectOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SelectOp::getOperationName() {
  return "std.select";
}

std::pair<unsigned, unsigned> SelectOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SelectOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SelectOp::condition() {
  return *getODSOperands(0).begin();
}

Value SelectOp::true_value() {
  return *getODSOperands(1).begin();
}

Value SelectOp::false_value() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange SelectOp::conditionMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectOp::true_valueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectOp::false_valueMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SelectOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SelectOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SelectOp::result() {
  return *getODSResults(0).begin();
}

void SelectOp::build(OpBuilder &builder, OperationState &result, Value condition,Value trueValue, Value falseValue) {
      result.addOperands({condition, trueValue, falseValue});
      result.addTypes(trueValue.getType());
  
}

void SelectOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value condition, Value true_value, Value false_value) {
  odsState.addOperands(condition);
  odsState.addOperands(true_value);
  odsState.addOperands(false_value);
  odsState.addTypes(result);
}

void SelectOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, Value true_value, Value false_value) {
  odsState.addOperands(condition);
  odsState.addOperands(true_value);
  odsState.addOperands(false_value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SelectOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult SelectOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSelectOp(parser, result);
}

void SelectOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult SelectOp::verify() {
  if (failed(SelectOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger(1))) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1)))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(1)))))) {
        return emitOpError("operand #") << index << " must be bool-like, but got " << v.getType();
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSOperands(2).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {true_value, false_value, result} have same type");
  return ::verify(*this);
}



void SelectOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ShiftLeftOp definitions
//===----------------------------------------------------------------------===//

ShiftLeftOpAdaptor::ShiftLeftOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShiftLeftOpAdaptor::ShiftLeftOpAdaptor(ShiftLeftOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShiftLeftOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ShiftLeftOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ShiftLeftOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value ShiftLeftOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult ShiftLeftOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ShiftLeftOp::getOperationName() {
  return "std.shift_left";
}

std::pair<unsigned, unsigned> ShiftLeftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShiftLeftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShiftLeftOp::lhs() {
  return *getODSOperands(0).begin();
}

Value ShiftLeftOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ShiftLeftOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShiftLeftOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShiftLeftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ShiftLeftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ShiftLeftOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void ShiftLeftOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftLeftOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShiftLeftOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void ShiftLeftOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult ShiftLeftOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void ShiftLeftOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult ShiftLeftOp::verify() {
  if (failed(ShiftLeftOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}

void ShiftLeftOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SignExtendIOp definitions
//===----------------------------------------------------------------------===//

SignExtendIOpAdaptor::SignExtendIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SignExtendIOpAdaptor::SignExtendIOpAdaptor(SignExtendIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SignExtendIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SignExtendIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SignExtendIOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

LogicalResult SignExtendIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SignExtendIOp::getOperationName() {
  return "std.sexti";
}

std::pair<unsigned, unsigned> SignExtendIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SignExtendIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SignExtendIOp::value() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SignExtendIOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SignExtendIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SignExtendIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SignExtendIOp::build(OpBuilder &builder, OperationState &result, Value value, Type destType) {
      result.addOperands(value);
      result.addTypes(destType);
  
}

void SignExtendIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value) {
  odsState.addOperands(value);
  odsState.addTypes(resultType0);
}

void SignExtendIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value) {
  odsState.addOperands(value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignExtendIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult SignExtendIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void SignExtendIOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult SignExtendIOp::verify() {
  if (failed(SignExtendIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("result #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

void SignExtendIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SignedDivIOp definitions
//===----------------------------------------------------------------------===//

SignedDivIOpAdaptor::SignedDivIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SignedDivIOpAdaptor::SignedDivIOpAdaptor(SignedDivIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SignedDivIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SignedDivIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SignedDivIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SignedDivIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SignedDivIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SignedDivIOp::getOperationName() {
  return "std.divi_signed";
}

std::pair<unsigned, unsigned> SignedDivIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SignedDivIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SignedDivIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SignedDivIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SignedDivIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SignedDivIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SignedDivIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SignedDivIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void SignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignedDivIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SignedDivIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SignedDivIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SignedDivIOp::verify() {
  if (failed(SignedDivIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void SignedDivIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SignedRemIOp definitions
//===----------------------------------------------------------------------===//

SignedRemIOpAdaptor::SignedRemIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SignedRemIOpAdaptor::SignedRemIOpAdaptor(SignedRemIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SignedRemIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SignedRemIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SignedRemIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SignedRemIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SignedRemIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SignedRemIOp::getOperationName() {
  return "std.remi_signed";
}

std::pair<unsigned, unsigned> SignedRemIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SignedRemIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SignedRemIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SignedRemIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SignedRemIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SignedRemIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SignedRemIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SignedRemIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void SignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignedRemIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SignedRemIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SignedRemIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SignedRemIOp::verify() {
  if (failed(SignedRemIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void SignedRemIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SignedShiftRightOp definitions
//===----------------------------------------------------------------------===//

SignedShiftRightOpAdaptor::SignedShiftRightOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SignedShiftRightOpAdaptor::SignedShiftRightOpAdaptor(SignedShiftRightOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SignedShiftRightOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SignedShiftRightOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SignedShiftRightOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SignedShiftRightOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SignedShiftRightOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SignedShiftRightOp::getOperationName() {
  return "std.shift_right_signed";
}

std::pair<unsigned, unsigned> SignedShiftRightOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SignedShiftRightOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SignedShiftRightOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SignedShiftRightOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SignedShiftRightOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SignedShiftRightOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SignedShiftRightOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SignedShiftRightOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void SignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SignedShiftRightOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SignedShiftRightOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SignedShiftRightOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SignedShiftRightOp::verify() {
  if (failed(SignedShiftRightOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}

void SignedShiftRightOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SinOp definitions
//===----------------------------------------------------------------------===//

SinOpAdaptor::SinOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SinOpAdaptor::SinOpAdaptor(SinOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SinOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SinOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SinOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult SinOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SinOp::getOperationName() {
  return "std.sin";
}

std::pair<unsigned, unsigned> SinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SinOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SinOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SinOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SinOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SinOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SinOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SinOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult SinOp::verify() {
  if (failed(SinOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void SinOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SplatOp definitions
//===----------------------------------------------------------------------===//

SplatOpAdaptor::SplatOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SplatOpAdaptor::SplatOpAdaptor(SplatOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SplatOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SplatOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SplatOpAdaptor::input() {
  return *getODSOperands(0).begin();
}

LogicalResult SplatOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SplatOp::getOperationName() {
  return "std.splat";
}

std::pair<unsigned, unsigned> SplatOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SplatOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SplatOp::input() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SplatOp::inputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SplatOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SplatOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SplatOp::aggregate() {
  return *getODSResults(0).begin();
}

void SplatOp::build(OpBuilder &builder, OperationState &result, Value element, Type aggregateType) {
 build(builder, result, aggregateType, element); 
}

void SplatOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type aggregate, Value input) {
  odsState.addOperands(input);
  odsState.addTypes(aggregate);
}

void SplatOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input) {
  odsState.addOperands(input);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SplatOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult SplatOp::verify() {
  if (failed(SplatOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be integer or float type, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<VectorType>())) && ((true))) || ((((v.getType().isa<TensorType>())) && ((true))) && ((v.getType().cast<ShapedType>().hasStaticShape()))))) {
        return emitOpError("result #") << index << " must be vector of any type values or statically shaped tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  if (!(((*this->getODSResults(0).begin()).getType().cast<ShapedType>().getElementType() == (*this->getODSOperands(0).begin()).getType())))
    return emitOpError("failed to verify that operand type matches element type of result");
  return ::verify(*this);
}



ParseResult SplatOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType inputRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> inputOperands(inputRawOperands);  llvm::SMLoc inputOperandsLoc = parser.getCurrentLocation();
  (void)inputOperandsLoc;
  Type aggregateRawTypes[1];
  ArrayRef<Type> aggregateTypes(aggregateRawTypes);

  if (parser.parseOperand(inputRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(aggregateRawTypes[0]))
    return failure();
  for (Type type : aggregateTypes) {
    (void)type;
    if (!((((type.isa<VectorType>())) && ((true))) || ((((type.isa<TensorType>())) && ((true))) && ((type.cast<ShapedType>().hasStaticShape()))))) {
      return parser.emitError(parser.getNameLoc()) << "'aggregate' must be vector of any type values or statically shaped tensor of any type values, but got " << type;
    }
  }
  result.addTypes(aggregateTypes);
  if (parser.resolveOperands(inputOperands, aggregateTypes[0].cast<ShapedType>().getElementType(), inputOperandsLoc, result.operands))
    return failure();
  return success();
}

void SplatOp::print(OpAsmPrinter &p) {
  p << "splat";
  p << " ";
  p << input();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(aggregate().getType());
}

void SplatOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SqrtOp definitions
//===----------------------------------------------------------------------===//

SqrtOpAdaptor::SqrtOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SqrtOpAdaptor::SqrtOpAdaptor(SqrtOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SqrtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SqrtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SqrtOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult SqrtOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SqrtOp::getOperationName() {
  return "std.sqrt";
}

std::pair<unsigned, unsigned> SqrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SqrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SqrtOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SqrtOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SqrtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SqrtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SqrtOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SqrtOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SqrtOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult SqrtOp::verify() {
  if (failed(SqrtOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void SqrtOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// StoreOp definitions
//===----------------------------------------------------------------------===//

StoreOpAdaptor::StoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

StoreOpAdaptor::StoreOpAdaptor(StoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> StoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange StoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value StoreOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value StoreOpAdaptor::memref() {
  return *getODSOperands(1).begin();
}

ValueRange StoreOpAdaptor::indices() {
  return getODSOperands(2);
}

LogicalResult StoreOpAdaptor::verify(Location loc) {
  return success();
}

StringRef StoreOp::getOperationName() {
  return "std.store";
}

std::pair<unsigned, unsigned> StoreOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range StoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value StoreOp::value() {
  return *getODSOperands(0).begin();
}

Value StoreOp::memref() {
  return *getODSOperands(1).begin();
}

Operation::operand_range StoreOp::indices() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange StoreOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange StoreOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange StoreOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> StoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range StoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void StoreOp::build(OpBuilder &, OperationState &result, Value valueToStore, Value memref) {
      result.addOperands(valueToStore);
      result.addOperands(memref);
  
}

void StoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
}

void StoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value memref, ValueRange indices) {
  odsState.addOperands(value);
  odsState.addOperands(memref);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult StoreOp::verify() {
  if (failed(StoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  if (!(((*this->getODSOperands(1).begin()).getType().cast<MemRefType>().getElementType() == (*this->getODSOperands(0).begin()).getType())))
    return emitOpError("failed to verify that type of 'value' matches element type of 'memref'");
  return ::verify(*this);
}



ParseResult StoreOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType valueRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> valueOperands(valueRawOperands);  llvm::SMLoc valueOperandsLoc = parser.getCurrentLocation();
  (void)valueOperandsLoc;
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> indicesOperands;
  llvm::SMLoc indicesOperandsLoc = parser.getCurrentLocation();
  (void)indicesOperandsLoc;
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);

  if (parser.parseOperand(valueRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseLSquare())
    return failure();

  if (parser.parseOperandList(indicesOperands))
    return failure();
  if (parser.parseRSquare())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  for (Type type : memrefTypes) {
    (void)type;
    if (!(((type.isa<MemRefType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'memref' must be memref of any type values, but got " << type;
    }
  }
  Type odsBuildableType0 = parser.getBuilder().getIndexType();
  if (parser.resolveOperands(valueOperands, memrefTypes[0].cast<MemRefType>().getElementType(), valueOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(indicesOperands, odsBuildableType0, result.operands))
    return failure();
  return success();
}

void StoreOp::print(OpAsmPrinter &p) {
  p << "store";
  p << " ";
  p << value();
  p << ",";
  p << " ";
  p << memref();
  p << "[";
  p << indices();
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
}

void StoreOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// SubCFOp definitions
//===----------------------------------------------------------------------===//

SubCFOpAdaptor::SubCFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SubCFOpAdaptor::SubCFOpAdaptor(SubCFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SubCFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SubCFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SubCFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SubCFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SubCFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SubCFOp::getOperationName() {
  return "std.subcf";
}

std::pair<unsigned, unsigned> SubCFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SubCFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SubCFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SubCFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SubCFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SubCFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SubCFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SubCFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SubCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void SubCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubCFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SubCFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SubCFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SubCFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SubCFOp::verify() {
  if (failed(SubCFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<ComplexType>())) && ((v.getType().cast<ComplexType>().getElementType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be complex type with floating-point elements, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<ComplexType>())) && ((v.getType().cast<ComplexType>().getElementType().isa<FloatType>())))) {
        return emitOpError("operand #") << index << " must be complex type with floating-point elements, but got " << v.getType();
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
  return mlir::success();
}

void SubCFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SubFOp definitions
//===----------------------------------------------------------------------===//

SubFOpAdaptor::SubFOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SubFOpAdaptor::SubFOpAdaptor(SubFOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SubFOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SubFOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SubFOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SubFOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SubFOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SubFOp::getOperationName() {
  return "std.subf";
}

std::pair<unsigned, unsigned> SubFOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SubFOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SubFOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SubFOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SubFOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SubFOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SubFOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SubFOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SubFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void SubFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubFOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubFOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SubFOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SubFOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SubFOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SubFOp::verify() {
  if (failed(SubFOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}



void SubFOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SubIOp definitions
//===----------------------------------------------------------------------===//

SubIOpAdaptor::SubIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SubIOpAdaptor::SubIOpAdaptor(SubIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SubIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SubIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SubIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SubIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SubIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SubIOp::getOperationName() {
  return "std.subi";
}

std::pair<unsigned, unsigned> SubIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SubIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SubIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SubIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SubIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SubIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SubIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SubIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void SubIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void SubIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SubIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SubIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SubIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult SubIOp::verify() {
  if (failed(SubIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void SubIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// SubViewOp definitions
//===----------------------------------------------------------------------===//

SubViewOpAdaptor::SubViewOpAdaptor(ValueRange values, DictionaryAttr attrs)  : odsOperands(values), odsAttrs(attrs) {

}

SubViewOpAdaptor::SubViewOpAdaptor(SubViewOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SubViewOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

ValueRange SubViewOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SubViewOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

ValueRange SubViewOpAdaptor::offsets() {
  return getODSOperands(1);
}

ValueRange SubViewOpAdaptor::sizes() {
  return getODSOperands(2);
}

ValueRange SubViewOpAdaptor::strides() {
  return getODSOperands(3);
}

ArrayAttr SubViewOpAdaptor::static_offsets() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("static_offsets").cast<ArrayAttr>();
  return attr;
}

ArrayAttr SubViewOpAdaptor::static_sizes() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("static_sizes").cast<ArrayAttr>();
  return attr;
}

ArrayAttr SubViewOpAdaptor::static_strides() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("static_strides").cast<ArrayAttr>();
  return attr;
}

LogicalResult SubViewOpAdaptor::verify(Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
    if (numElements != 4)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 4 elements");
  }
    {
  auto tblgen_static_offsets = odsAttrs.get("static_offsets");
  if (!tblgen_static_offsets) return emitError(loc, "'std.subview' op ""requires attribute 'static_offsets'");
    if (!(((tblgen_static_offsets.isa<ArrayAttr>())) && (llvm::all_of(tblgen_static_offsets.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'std.subview' op ""attribute 'static_offsets' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_static_sizes = odsAttrs.get("static_sizes");
  if (!tblgen_static_sizes) return emitError(loc, "'std.subview' op ""requires attribute 'static_sizes'");
    if (!(((tblgen_static_sizes.isa<ArrayAttr>())) && (llvm::all_of(tblgen_static_sizes.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'std.subview' op ""attribute 'static_sizes' failed to satisfy constraint: 64-bit integer array attribute");
  }
  {
  auto tblgen_static_strides = odsAttrs.get("static_strides");
  if (!tblgen_static_strides) return emitError(loc, "'std.subview' op ""requires attribute 'static_strides'");
    if (!(((tblgen_static_strides.isa<ArrayAttr>())) && (llvm::all_of(tblgen_static_strides.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<IntegerAttr>())) && ((attr.cast<IntegerAttr>().getType().isSignlessInteger(64))); })))) return emitError(loc, "'std.subview' op ""attribute 'static_strides' failed to satisfy constraint: 64-bit integer array attribute");
  }
  return success();
}

StringRef SubViewOp::getOperationName() {
  return "std.subview";
}

std::pair<unsigned, unsigned> SubViewOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

Operation::operand_range SubViewOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SubViewOp::source() {
  return *getODSOperands(0).begin();
}

Operation::operand_range SubViewOp::offsets() {
  return getODSOperands(1);
}

Operation::operand_range SubViewOp::sizes() {
  return getODSOperands(2);
}

Operation::operand_range SubViewOp::strides() {
  return getODSOperands(3);
}

::mlir::MutableOperandRange SubViewOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange SubViewOp::offsetsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange SubViewOp::sizesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange SubViewOp::stridesMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> SubViewOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SubViewOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SubViewOp::result() {
  return *getODSResults(0).begin();
}

ArrayAttr SubViewOp::static_offsetsAttr() {
  return this->getAttr("static_offsets").cast<ArrayAttr>();
}

ArrayAttr SubViewOp::static_offsets() {
  auto attr = static_offsetsAttr();
  return attr;
}

ArrayAttr SubViewOp::static_sizesAttr() {
  return this->getAttr("static_sizes").cast<ArrayAttr>();
}

ArrayAttr SubViewOp::static_sizes() {
  auto attr = static_sizesAttr();
  return attr;
}

ArrayAttr SubViewOp::static_stridesAttr() {
  return this->getAttr("static_strides").cast<ArrayAttr>();
}

ArrayAttr SubViewOp::static_strides() {
  auto attr = static_stridesAttr();
  return attr;
}

void SubViewOp::static_offsetsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("static_offsets", attr);
}

void SubViewOp::static_sizesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("static_sizes", attr);
}

void SubViewOp::static_stridesAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("static_strides", attr);
}





void SubViewOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value source, ValueRange offsets, ValueRange sizes, ValueRange strides, ArrayAttr static_offsets, ArrayAttr static_sizes, ArrayAttr static_strides) {
  odsState.addOperands(source);
  odsState.addOperands(offsets);
  odsState.addOperands(sizes);
  odsState.addOperands(strides);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(offsets.size()), static_cast<int32_t>(sizes.size()), static_cast<int32_t>(strides.size())}));
  odsState.addAttribute("static_offsets", static_offsets);
  odsState.addAttribute("static_sizes", static_sizes);
  odsState.addAttribute("static_strides", static_strides);
  odsState.addTypes(result);
}

void SubViewOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, ValueRange offsets, ValueRange sizes, ValueRange strides, ArrayAttr static_offsets, ArrayAttr static_sizes, ArrayAttr static_strides) {
  odsState.addOperands(source);
  odsState.addOperands(offsets);
  odsState.addOperands(sizes);
  odsState.addOperands(strides);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(offsets.size()), static_cast<int32_t>(sizes.size()), static_cast<int32_t>(strides.size())}));
  odsState.addAttribute("static_offsets", static_offsets);
  odsState.addAttribute("static_sizes", static_sizes);
  odsState.addAttribute("static_strides", static_strides);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubViewOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult SubViewOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseSubViewOp(parser, result);
}

void SubViewOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult SubViewOp::verify() {
  if (failed(SubViewOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
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
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}





void SubViewOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// TanhOp definitions
//===----------------------------------------------------------------------===//

TanhOpAdaptor::TanhOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TanhOpAdaptor::TanhOpAdaptor(TanhOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TanhOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TanhOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TanhOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult TanhOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TanhOp::getOperationName() {
  return "std.tanh";
}

std::pair<unsigned, unsigned> TanhOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TanhOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TanhOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TanhOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TanhOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TanhOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TanhOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(resultType0);
}

void TanhOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TanhOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void TanhOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void TanhOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult TanhOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void TanhOp::print(OpAsmPrinter &p) {
  return printStandardUnaryOp(this->getOperation(), p);
}

LogicalResult TanhOp::verify() {
  if (failed(TanhOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<FloatType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isa<FloatType>()))))) {
        return emitOpError("operand #") << index << " must be floating-point-like, but got " << v.getType();
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
  return mlir::success();
}

void TanhOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// TensorCastOp definitions
//===----------------------------------------------------------------------===//

TensorCastOpAdaptor::TensorCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TensorCastOpAdaptor::TensorCastOpAdaptor(TensorCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TensorCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TensorCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult TensorCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TensorCastOp::getOperationName() {
  return "std.tensor_cast";
}

std::pair<unsigned, unsigned> TensorCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TensorCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TensorCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TensorCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TensorCastOp::build(OpBuilder &builder, OperationState &result, Value source, Type destType) {
       impl::buildCastOp(builder, result, source, destType);
  
}

void TensorCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(resultType0);
}

void TensorCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TensorCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TensorCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void TensorCastOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult TensorCastOp::verify() {
  if (failed(TensorCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verifyCastOp(*this);
}



void TensorCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// TensorFromElementsOp definitions
//===----------------------------------------------------------------------===//

TensorFromElementsOpAdaptor::TensorFromElementsOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TensorFromElementsOpAdaptor::TensorFromElementsOpAdaptor(TensorFromElementsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TensorFromElementsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange TensorFromElementsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange TensorFromElementsOpAdaptor::elements() {
  return getODSOperands(0);
}

LogicalResult TensorFromElementsOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TensorFromElementsOp::getOperationName() {
  return "std.tensor_from_elements";
}

std::pair<unsigned, unsigned> TensorFromElementsOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range TensorFromElementsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range TensorFromElementsOp::elements() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange TensorFromElementsOp::elementsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TensorFromElementsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TensorFromElementsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value TensorFromElementsOp::result() {
  return *getODSResults(0).begin();
}

void TensorFromElementsOp::build(OpBuilder &builder, OperationState &result, ValueRange elements) {
      assert(!elements.empty() && "expected at least one element");
      result.addOperands(elements);
      result.addTypes(
          RankedTensorType::get({static_cast<int64_t>(elements.size())},
                                *elements.getTypes().begin()));
    
}

ParseResult TensorFromElementsOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseTensorFromElementsOp(parser, result);
}

void TensorFromElementsOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult TensorFromElementsOp::verify() {
  if (failed(TensorFromElementsOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be tensor of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}



void TensorFromElementsOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// TensorLoadOp definitions
//===----------------------------------------------------------------------===//

TensorLoadOpAdaptor::TensorLoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TensorLoadOpAdaptor::TensorLoadOpAdaptor(TensorLoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TensorLoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TensorLoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TensorLoadOpAdaptor::memref() {
  return *getODSOperands(0).begin();
}

LogicalResult TensorLoadOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TensorLoadOp::getOperationName() {
  return "std.tensor_load";
}

std::pair<unsigned, unsigned> TensorLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TensorLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TensorLoadOp::memref() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TensorLoadOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TensorLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TensorLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value TensorLoadOp::result() {
  return *getODSResults(0).begin();
}

void TensorLoadOp::build(OpBuilder &builder, OperationState &result, Value memref) {
      auto memrefType = memref.getType().cast<MemRefType>();
      auto resultType = RankedTensorType::get(memrefType.getShape(),
                                              memrefType.getElementType());
      result.addOperands(memref);
      result.addTypes(resultType);
  
}

void TensorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref) {
  odsState.addOperands(memref);
  odsState.addTypes(result);
}

void TensorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref) {
  odsState.addOperands(memref);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TensorLoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult TensorLoadOp::verify() {
  if (failed(TensorLoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  if (!((getTensorTypeFromMemRefType((*this->getODSOperands(0).begin()).getType()) == (*this->getODSResults(0).begin()).getType())))
    return emitOpError("failed to verify that result type matches tensor equivalent of 'memref'");
  return mlir::success();
}

ParseResult TensorLoadOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  for (Type type : memrefTypes) {
    (void)type;
    if (!(((type.isa<MemRefType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'memref' must be memref of any type values, but got " << type;
    }
  }
  result.addTypes(getTensorTypeFromMemRefType(memrefTypes[0]));
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  return success();
}

void TensorLoadOp::print(OpAsmPrinter &p) {
  p << "tensor_load";
  p << " ";
  p << memref();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
}

void TensorLoadOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(0))
    effects.emplace_back(MemoryEffects::Read::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// TensorStoreOp definitions
//===----------------------------------------------------------------------===//

TensorStoreOpAdaptor::TensorStoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TensorStoreOpAdaptor::TensorStoreOpAdaptor(TensorStoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TensorStoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TensorStoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TensorStoreOpAdaptor::tensor() {
  return *getODSOperands(0).begin();
}

Value TensorStoreOpAdaptor::memref() {
  return *getODSOperands(1).begin();
}

LogicalResult TensorStoreOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TensorStoreOp::getOperationName() {
  return "std.tensor_store";
}

std::pair<unsigned, unsigned> TensorStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TensorStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TensorStoreOp::tensor() {
  return *getODSOperands(0).begin();
}

Value TensorStoreOp::memref() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange TensorStoreOp::tensorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange TensorStoreOp::memrefMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TensorStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TensorStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TensorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value tensor, Value memref) {
  odsState.addOperands(tensor);
  odsState.addOperands(memref);
}

void TensorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, Value memref) {
  odsState.addOperands(tensor);
  odsState.addOperands(memref);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TensorStoreOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult TensorStoreOp::verify() {
  if (failed(TensorStoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
  }
  if (!((getTensorTypeFromMemRefType((*this->getODSOperands(1).begin()).getType()) == (*this->getODSOperands(0).begin()).getType())))
    return emitOpError("failed to verify that type of 'value' matches tensor equivalent of 'memref'");
  return mlir::success();
}

ParseResult TensorStoreOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType tensorRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> tensorOperands(tensorRawOperands);  llvm::SMLoc tensorOperandsLoc = parser.getCurrentLocation();
  (void)tensorOperandsLoc;
  OpAsmParser::OperandType memrefRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> memrefOperands(memrefRawOperands);  llvm::SMLoc memrefOperandsLoc = parser.getCurrentLocation();
  (void)memrefOperandsLoc;
  Type memrefRawTypes[1];
  ArrayRef<Type> memrefTypes(memrefRawTypes);

  if (parser.parseOperand(tensorRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(memrefRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(memrefRawTypes[0]))
    return failure();
  for (Type type : memrefTypes) {
    (void)type;
    if (!(((type.isa<MemRefType>())) && ((true)))) {
      return parser.emitError(parser.getNameLoc()) << "'memref' must be memref of any type values, but got " << type;
    }
  }
  if (parser.resolveOperands(tensorOperands, getTensorTypeFromMemRefType(memrefTypes[0]), tensorOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(memrefOperands, memrefTypes, memrefOperandsLoc, result.operands))
    return failure();
  return success();
}

void TensorStoreOp::print(OpAsmPrinter &p) {
  p << "tensor_store";
  p << " ";
  p << tensor();
  p << ",";
  p << " ";
  p << memref();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(memref().getType());
}

void TensorStoreOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {
  for (Value value : getODSOperands(1))
    effects.emplace_back(MemoryEffects::Write::get(), value, ::mlir::SideEffects::DefaultResource::get());
}


//===----------------------------------------------------------------------===//
// TruncateIOp definitions
//===----------------------------------------------------------------------===//

TruncateIOpAdaptor::TruncateIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TruncateIOpAdaptor::TruncateIOpAdaptor(TruncateIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TruncateIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TruncateIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TruncateIOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

LogicalResult TruncateIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TruncateIOp::getOperationName() {
  return "std.trunci";
}

std::pair<unsigned, unsigned> TruncateIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TruncateIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TruncateIOp::value() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TruncateIOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TruncateIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TruncateIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TruncateIOp::build(OpBuilder &builder, OperationState &result, Value value, Type destType) {
      result.addOperands(value);
      result.addTypes(destType);
  
}

void TruncateIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value) {
  odsState.addOperands(value);
  odsState.addTypes(resultType0);
}

void TruncateIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value) {
  odsState.addOperands(value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TruncateIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TruncateIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void TruncateIOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult TruncateIOp::verify() {
  if (failed(TruncateIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("result #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

void TruncateIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// UnsignedDivIOp definitions
//===----------------------------------------------------------------------===//

UnsignedDivIOpAdaptor::UnsignedDivIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

UnsignedDivIOpAdaptor::UnsignedDivIOpAdaptor(UnsignedDivIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> UnsignedDivIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange UnsignedDivIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value UnsignedDivIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value UnsignedDivIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult UnsignedDivIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef UnsignedDivIOp::getOperationName() {
  return "std.divi_unsigned";
}

std::pair<unsigned, unsigned> UnsignedDivIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range UnsignedDivIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value UnsignedDivIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value UnsignedDivIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange UnsignedDivIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange UnsignedDivIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> UnsignedDivIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range UnsignedDivIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void UnsignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void UnsignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UnsignedDivIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void UnsignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void UnsignedDivIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult UnsignedDivIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UnsignedDivIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult UnsignedDivIOp::verify() {
  if (failed(UnsignedDivIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void UnsignedDivIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// UnsignedRemIOp definitions
//===----------------------------------------------------------------------===//

UnsignedRemIOpAdaptor::UnsignedRemIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

UnsignedRemIOpAdaptor::UnsignedRemIOpAdaptor(UnsignedRemIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> UnsignedRemIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange UnsignedRemIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value UnsignedRemIOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value UnsignedRemIOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult UnsignedRemIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef UnsignedRemIOp::getOperationName() {
  return "std.remi_unsigned";
}

std::pair<unsigned, unsigned> UnsignedRemIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range UnsignedRemIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value UnsignedRemIOp::lhs() {
  return *getODSOperands(0).begin();
}

Value UnsignedRemIOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange UnsignedRemIOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange UnsignedRemIOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> UnsignedRemIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range UnsignedRemIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void UnsignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void UnsignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UnsignedRemIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void UnsignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void UnsignedRemIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult UnsignedRemIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UnsignedRemIOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult UnsignedRemIOp::verify() {
  if (failed(UnsignedRemIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void UnsignedRemIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// UnsignedShiftRightOp definitions
//===----------------------------------------------------------------------===//

UnsignedShiftRightOpAdaptor::UnsignedShiftRightOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

UnsignedShiftRightOpAdaptor::UnsignedShiftRightOpAdaptor(UnsignedShiftRightOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> UnsignedShiftRightOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange UnsignedShiftRightOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value UnsignedShiftRightOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value UnsignedShiftRightOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult UnsignedShiftRightOpAdaptor::verify(Location loc) {
  return success();
}

StringRef UnsignedShiftRightOp::getOperationName() {
  return "std.shift_right_unsigned";
}

std::pair<unsigned, unsigned> UnsignedShiftRightOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range UnsignedShiftRightOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value UnsignedShiftRightOp::lhs() {
  return *getODSOperands(0).begin();
}

Value UnsignedShiftRightOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange UnsignedShiftRightOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange UnsignedShiftRightOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> UnsignedShiftRightOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range UnsignedShiftRightOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void UnsignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void UnsignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UnsignedShiftRightOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void UnsignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void UnsignedShiftRightOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult UnsignedShiftRightOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UnsignedShiftRightOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult UnsignedShiftRightOp::verify() {
  if (failed(UnsignedShiftRightOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}

void UnsignedShiftRightOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ViewOp definitions
//===----------------------------------------------------------------------===//

ViewOpAdaptor::ViewOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ViewOpAdaptor::ViewOpAdaptor(ViewOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ViewOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange ViewOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ViewOpAdaptor::source() {
  return *getODSOperands(0).begin();
}

Value ViewOpAdaptor::byte_shift() {
  return *getODSOperands(1).begin();
}

ValueRange ViewOpAdaptor::sizes() {
  return getODSOperands(2);
}

LogicalResult ViewOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ViewOp::getOperationName() {
  return "std.view";
}

std::pair<unsigned, unsigned> ViewOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range ViewOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ViewOp::source() {
  return *getODSOperands(0).begin();
}

Value ViewOp::byte_shift() {
  return *getODSOperands(1).begin();
}

Operation::operand_range ViewOp::sizes() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ViewOp::sourceMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ViewOp::byte_shiftMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ViewOp::sizesMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ViewOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ViewOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ViewOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value source, Value byte_shift, ValueRange sizes) {
  odsState.addOperands(source);
  odsState.addOperands(byte_shift);
  odsState.addOperands(sizes);
  odsState.addTypes(resultType0);
}

void ViewOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value byte_shift, ValueRange sizes) {
  odsState.addOperands(source);
  odsState.addOperands(byte_shift);
  odsState.addOperands(sizes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ViewOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ViewOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseViewOp(parser, result);
}

void ViewOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult ViewOp::verify() {
  if (failed(ViewOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<MemRefType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger(8)))) && (((v.getType().cast<ShapedType>().hasRank())) && ((v.getType().cast<ShapedType>().getRank() == 1))))) {
        return emitOpError("operand #") << index << " must be 1D memref of 8-bit signless integer values, but got " << v.getType();
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
      if (!(((v.getType().isa<MemRefType>())) && ((true)))) {
        return emitOpError("result #") << index << " must be memref of any type values, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}





void ViewOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// XOrOp definitions
//===----------------------------------------------------------------------===//

XOrOpAdaptor::XOrOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

XOrOpAdaptor::XOrOpAdaptor(XOrOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> XOrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange XOrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value XOrOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value XOrOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult XOrOpAdaptor::verify(Location loc) {
  return success();
}

StringRef XOrOp::getOperationName() {
  return "std.xor";
}

std::pair<unsigned, unsigned> XOrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range XOrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value XOrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value XOrOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange XOrOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange XOrOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> XOrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range XOrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void XOrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(resultType0);
}

void XOrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void XOrOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void XOrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void XOrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult XOrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void XOrOp::print(OpAsmPrinter &p) {
  return printStandardBinaryOp(this->getOperation(), p);
}

LogicalResult XOrOp::verify() {
  if (failed(XOrOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
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
  return mlir::success();
}



void XOrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// ZeroExtendIOp definitions
//===----------------------------------------------------------------------===//

ZeroExtendIOpAdaptor::ZeroExtendIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ZeroExtendIOpAdaptor::ZeroExtendIOpAdaptor(ZeroExtendIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ZeroExtendIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ZeroExtendIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ZeroExtendIOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

LogicalResult ZeroExtendIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ZeroExtendIOp::getOperationName() {
  return "std.zexti";
}

std::pair<unsigned, unsigned> ZeroExtendIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ZeroExtendIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ZeroExtendIOp::value() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ZeroExtendIOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ZeroExtendIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ZeroExtendIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ZeroExtendIOp::build(OpBuilder &builder, OperationState &result, Value value, Type destType) {
      result.addOperands(value);
      result.addTypes(destType);
  
}

void ZeroExtendIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value) {
  odsState.addOperands(value);
  odsState.addTypes(resultType0);
}

void ZeroExtendIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value) {
  odsState.addOperands(value);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ZeroExtendIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ZeroExtendIOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseCastOp(parser, result);
}

void ZeroExtendIOp::print(OpAsmPrinter &p) {
  return printStandardCastOp(this->getOperation(), p);
}

LogicalResult ZeroExtendIOp::verify() {
  if (failed(ZeroExtendIOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("operand #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<VectorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))) || (((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isSignlessInteger()))))) {
        return emitOpError("result #") << index << " must be signless-integer-like, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verify(*this);
}

void ZeroExtendIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

