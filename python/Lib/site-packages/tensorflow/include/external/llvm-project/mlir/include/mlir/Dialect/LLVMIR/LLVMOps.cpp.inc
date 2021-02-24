/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

LLVM::AShrOp,
LLVM::AddOp,
LLVM::AddrSpaceCastOp,
LLVM::AddressOfOp,
LLVM::AllocaOp,
LLVM::AndOp,
LLVM::AssumeOp,
LLVM::AtomicCmpXchgOp,
LLVM::AtomicRMWOp,
LLVM::BitcastOp,
LLVM::BrOp,
LLVM::CallOp,
LLVM::CondBrOp,
LLVM::ConstantOp,
LLVM::CopySignOp,
LLVM::CosOp,
LLVM::DialectCastOp,
LLVM::Exp2Op,
LLVM::ExpOp,
LLVM::ExtractElementOp,
LLVM::ExtractValueOp,
LLVM::FAbsOp,
LLVM::FAddOp,
LLVM::FCeilOp,
LLVM::FCmpOp,
LLVM::FDivOp,
LLVM::FMAOp,
LLVM::FMulAddOp,
LLVM::FMulOp,
LLVM::FNegOp,
LLVM::FPExtOp,
LLVM::FPToSIOp,
LLVM::FPToUIOp,
LLVM::FPTruncOp,
LLVM::FRemOp,
LLVM::FSubOp,
LLVM::FenceOp,
LLVM::FreezeOp,
LLVM::GEPOp,
LLVM::GlobalOp,
LLVM::ICmpOp,
LLVM::InsertElementOp,
LLVM::InsertValueOp,
LLVM::IntToPtrOp,
LLVM::InvokeOp,
LLVM::LLVMFuncOp,
LLVM::LShrOp,
LLVM::LandingpadOp,
LLVM::LoadOp,
LLVM::Log10Op,
LLVM::Log2Op,
LLVM::LogOp,
LLVM::MaskedLoadOp,
LLVM::MaskedStoreOp,
LLVM::MatrixColumnMajorLoadOp,
LLVM::MatrixColumnMajorStoreOp,
LLVM::MatrixMultiplyOp,
LLVM::MatrixTransposeOp,
LLVM::MulOp,
LLVM::NullOp,
LLVM::OrOp,
LLVM::PowOp,
LLVM::Prefetch,
LLVM::PtrToIntOp,
LLVM::ResumeOp,
LLVM::ReturnOp,
LLVM::SDivOp,
LLVM::SExtOp,
LLVM::SIToFPOp,
LLVM::SRemOp,
LLVM::SelectOp,
LLVM::ShlOp,
LLVM::ShuffleVectorOp,
LLVM::SinOp,
LLVM::SqrtOp,
LLVM::StoreOp,
LLVM::SubOp,
LLVM::TruncOp,
LLVM::UDivOp,
LLVM::UIToFPOp,
LLVM::URemOp,
LLVM::UndefOp,
LLVM::UnreachableOp,
LLVM::XOrOp,
LLVM::ZExtOp,
LLVM::experimental_vector_reduce_add,
LLVM::experimental_vector_reduce_and,
LLVM::experimental_vector_reduce_fmax,
LLVM::experimental_vector_reduce_fmin,
LLVM::experimental_vector_reduce_mul,
LLVM::experimental_vector_reduce_or,
LLVM::experimental_vector_reduce_smax,
LLVM::experimental_vector_reduce_smin,
LLVM::experimental_vector_reduce_umax,
LLVM::experimental_vector_reduce_umin,
LLVM::experimental_vector_reduce_v2_fadd,
LLVM::experimental_vector_reduce_v2_fmul,
LLVM::experimental_vector_reduce_xor
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// LLVM::AShrOp definitions
//===----------------------------------------------------------------------===//

AShrOpAdaptor::AShrOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AShrOpAdaptor::AShrOpAdaptor(AShrOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AShrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AShrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AShrOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value AShrOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult AShrOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AShrOp::getOperationName() {
  return "llvm.ashr";
}

std::pair<unsigned, unsigned> AShrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AShrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AShrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value AShrOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AShrOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AShrOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AShrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AShrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AShrOp::res() {
  return *getODSResults(0).begin();
}

void AShrOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void AShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AShrOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void AShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult AShrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AShrOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult AShrOp::verify() {
  if (failed(AShrOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void AShrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::AddOp definitions
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
  return "llvm.add";
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

Value AddOp::res() {
  return *getODSResults(0).begin();
}

void AddOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AddOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
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

ParseResult AddOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void AddOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult AddOp::verify() {
  if (failed(AddOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void AddOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::AddrSpaceCastOp definitions
//===----------------------------------------------------------------------===//

AddrSpaceCastOpAdaptor::AddrSpaceCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AddrSpaceCastOpAdaptor::AddrSpaceCastOpAdaptor(AddrSpaceCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AddrSpaceCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AddrSpaceCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AddrSpaceCastOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult AddrSpaceCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AddrSpaceCastOp::getOperationName() {
  return "llvm.addrspacecast";
}

std::pair<unsigned, unsigned> AddrSpaceCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AddrSpaceCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AddrSpaceCastOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AddrSpaceCastOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AddrSpaceCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AddrSpaceCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AddrSpaceCastOp::res() {
  return *getODSResults(0).begin();
}

void AddrSpaceCastOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AddrSpaceCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void AddrSpaceCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddrSpaceCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AddrSpaceCastOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void AddrSpaceCastOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult AddrSpaceCastOp::verify() {
  if (failed(AddrSpaceCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void AddrSpaceCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::AddressOfOp definitions
//===----------------------------------------------------------------------===//

AddressOfOpAdaptor::AddressOfOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AddressOfOpAdaptor::AddressOfOpAdaptor(AddressOfOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AddressOfOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AddressOfOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

FlatSymbolRefAttr AddressOfOpAdaptor::global_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  FlatSymbolRefAttr attr = odsAttrs.get("global_name").cast<FlatSymbolRefAttr>();
  return attr;
}

LogicalResult AddressOfOpAdaptor::verify(Location loc) {
  {
  auto tblgen_global_name = odsAttrs.get("global_name");
  if (!tblgen_global_name) return emitError(loc, "'llvm.mlir.addressof' op ""requires attribute 'global_name'");
    if (!((tblgen_global_name.isa<FlatSymbolRefAttr>()))) return emitError(loc, "'llvm.mlir.addressof' op ""attribute 'global_name' failed to satisfy constraint: flat symbol reference attribute");
  }
  return success();
}

StringRef AddressOfOp::getOperationName() {
  return "llvm.mlir.addressof";
}

std::pair<unsigned, unsigned> AddressOfOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AddressOfOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AddressOfOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AddressOfOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AddressOfOp::res() {
  return *getODSResults(0).begin();
}

FlatSymbolRefAttr AddressOfOp::global_nameAttr() {
  return this->getAttr("global_name").cast<FlatSymbolRefAttr>();
}

StringRef AddressOfOp::global_name() {
  auto attr = global_nameAttr();
  return attr.getValue();
}

void AddressOfOp::global_nameAttr(FlatSymbolRefAttr attr) {
  this->getOperation()->setAttr("global_name", attr);
}

void AddressOfOp::build(OpBuilder &builder, OperationState &result, LLVMType resType, StringRef name, ArrayRef<NamedAttribute> attrs ) {
      result.addAttribute("global_name", builder.getSymbolRefAttr(name));
      result.addAttributes(attrs);
      result.addTypes(resType);
}

void AddressOfOp::build(OpBuilder &builder, OperationState &result, GlobalOp global, ArrayRef<NamedAttribute> attrs ) {
      build(builder, result,
            global.getType().getPointerTo(global.addr_space().getZExtValue()),
            global.sym_name(), attrs);
}

void AddressOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, FlatSymbolRefAttr global_name) {
  odsState.addAttribute("global_name", global_name);
  odsState.addTypes(res);
}

void AddressOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, FlatSymbolRefAttr global_name) {
  odsState.addAttribute("global_name", global_name);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddressOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, StringRef global_name) {
  odsState.addAttribute("global_name", odsBuilder.getSymbolRefAttr(global_name));
  odsState.addTypes(res);
}

void AddressOfOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef global_name) {
  odsState.addAttribute("global_name", odsBuilder.getSymbolRefAttr(global_name));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AddressOfOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AddressOfOp::verify() {
  if (failed(AddressOfOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verify(*this);
}

ParseResult AddressOfOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);

  FlatSymbolRefAttr global_nameAttr;
  if (parser.parseAttribute(global_nameAttr, parser.getBuilder().getType<NoneType>(), "global_name", result.attributes))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void AddressOfOp::print(OpAsmPrinter &p) {
  p << "llvm.mlir.addressof";
  p << " ";
  p.printAttributeWithoutType(global_nameAttr());
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"global_name"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}


//===----------------------------------------------------------------------===//
// LLVM::AllocaOp definitions
//===----------------------------------------------------------------------===//

AllocaOpAdaptor::AllocaOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AllocaOpAdaptor::AllocaOpAdaptor(AllocaOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AllocaOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AllocaOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AllocaOpAdaptor::arraySize() {
  return *getODSOperands(0).begin();
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
    if (!(((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'llvm.alloca' op ""attribute 'alignment' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  }
  return success();
}

StringRef AllocaOp::getOperationName() {
  return "llvm.alloca";
}

std::pair<unsigned, unsigned> AllocaOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AllocaOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AllocaOp::arraySize() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AllocaOp::arraySizeMutable() {
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

Value AllocaOp::res() {
  return *getODSResults(0).begin();
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

void AllocaOp::build(OpBuilder &b, OperationState &result, Type resultType, Value arraySize, unsigned alignment) {
      if (alignment == 0)
        return build(b, result, resultType, arraySize, IntegerAttr());
      build(b, result, resultType, arraySize, b.getI64IntegerAttr(alignment));
  
}

void AllocaOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arraySize, /*optional*/IntegerAttr alignment) {
  odsState.addOperands(arraySize);
  if (alignment) {
  odsState.addAttribute("alignment", alignment);
  }
  odsState.addTypes(res);
}

void AllocaOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arraySize, /*optional*/IntegerAttr alignment) {
  odsState.addOperands(arraySize);
  if (alignment) {
  odsState.addAttribute("alignment", alignment);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllocaOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AllocaOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseAllocaOp(parser, result);
}

void AllocaOp::print(OpAsmPrinter &p) {
  printAllocaOp(p, *this);
}

LogicalResult AllocaOp::verify() {
  if (failed(AllocaOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  if (alignment().hasValue()) {
      auto align = alignment().getValue().getSExtValue();
      if (align < 0)
        return emitOpError("expected positive alignment");
    }
    return success();
}


//===----------------------------------------------------------------------===//
// LLVM::AndOp definitions
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
  return "llvm.and";
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

Value AndOp::res() {
  return *getODSResults(0).begin();
}

void AndOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void AndOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
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
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult AndOp::verify() {
  if (failed(AndOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void AndOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::AssumeOp definitions
//===----------------------------------------------------------------------===//

AssumeOpAdaptor::AssumeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AssumeOpAdaptor::AssumeOpAdaptor(AssumeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AssumeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AssumeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AssumeOpAdaptor::cond() {
  return *getODSOperands(0).begin();
}

LogicalResult AssumeOpAdaptor::verify(Location loc) {
  return success();
}

StringRef AssumeOp::getOperationName() {
  return "llvm.intr.assume";
}

std::pair<unsigned, unsigned> AssumeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AssumeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AssumeOp::cond() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AssumeOp::condMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AssumeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AssumeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void AssumeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value cond) {
  odsState.addOperands(cond);
}

void AssumeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value cond) {
  odsState.addOperands(cond);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AssumeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult AssumeOp::verify() {
  if (failed(AssumeOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::AtomicCmpXchgOp definitions
//===----------------------------------------------------------------------===//

AtomicCmpXchgOpAdaptor::AtomicCmpXchgOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AtomicCmpXchgOpAdaptor::AtomicCmpXchgOpAdaptor(AtomicCmpXchgOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AtomicCmpXchgOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AtomicCmpXchgOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AtomicCmpXchgOpAdaptor::ptr() {
  return *getODSOperands(0).begin();
}

Value AtomicCmpXchgOpAdaptor::cmp() {
  return *getODSOperands(1).begin();
}

Value AtomicCmpXchgOpAdaptor::val() {
  return *getODSOperands(2).begin();
}

IntegerAttr AtomicCmpXchgOpAdaptor::success_ordering() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("success_ordering").cast<IntegerAttr>();
  return attr;
}

IntegerAttr AtomicCmpXchgOpAdaptor::failure_ordering() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("failure_ordering").cast<IntegerAttr>();
  return attr;
}

LogicalResult AtomicCmpXchgOpAdaptor::verify(Location loc) {
  {
  auto tblgen_success_ordering = odsAttrs.get("success_ordering");
  if (!tblgen_success_ordering) return emitError(loc, "'llvm.cmpxchg' op ""requires attribute 'success_ordering'");
    if (!((((tblgen_success_ordering.isa<IntegerAttr>())) && ((tblgen_success_ordering.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_success_ordering.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_success_ordering.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_success_ordering.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_success_ordering.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_success_ordering.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_success_ordering.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_success_ordering.cast<IntegerAttr>().getInt() == 7))))) return emitError(loc, "'llvm.cmpxchg' op ""attribute 'success_ordering' failed to satisfy constraint: Atomic ordering for LLVM's memory model");
  }
  {
  auto tblgen_failure_ordering = odsAttrs.get("failure_ordering");
  if (!tblgen_failure_ordering) return emitError(loc, "'llvm.cmpxchg' op ""requires attribute 'failure_ordering'");
    if (!((((tblgen_failure_ordering.isa<IntegerAttr>())) && ((tblgen_failure_ordering.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_failure_ordering.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_failure_ordering.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_failure_ordering.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_failure_ordering.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_failure_ordering.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_failure_ordering.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_failure_ordering.cast<IntegerAttr>().getInt() == 7))))) return emitError(loc, "'llvm.cmpxchg' op ""attribute 'failure_ordering' failed to satisfy constraint: Atomic ordering for LLVM's memory model");
  }
  return success();
}

StringRef AtomicCmpXchgOp::getOperationName() {
  return "llvm.cmpxchg";
}

std::pair<unsigned, unsigned> AtomicCmpXchgOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AtomicCmpXchgOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AtomicCmpXchgOp::ptr() {
  return *getODSOperands(0).begin();
}

Value AtomicCmpXchgOp::cmp() {
  return *getODSOperands(1).begin();
}

Value AtomicCmpXchgOp::val() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange AtomicCmpXchgOp::ptrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AtomicCmpXchgOp::cmpMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AtomicCmpXchgOp::valMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AtomicCmpXchgOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AtomicCmpXchgOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value AtomicCmpXchgOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicCmpXchgOp::success_orderingAttr() {
  return this->getAttr("success_ordering").cast<IntegerAttr>();
}

::mlir::LLVM::AtomicOrdering AtomicCmpXchgOp::success_ordering() {
  auto attr = success_orderingAttr();
  return static_cast<::mlir::LLVM::AtomicOrdering>(attr.getInt());
}

IntegerAttr AtomicCmpXchgOp::failure_orderingAttr() {
  return this->getAttr("failure_ordering").cast<IntegerAttr>();
}

::mlir::LLVM::AtomicOrdering AtomicCmpXchgOp::failure_ordering() {
  auto attr = failure_orderingAttr();
  return static_cast<::mlir::LLVM::AtomicOrdering>(attr.getInt());
}

void AtomicCmpXchgOp::success_orderingAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("success_ordering", attr);
}

void AtomicCmpXchgOp::failure_orderingAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("failure_ordering", attr);
}

void AtomicCmpXchgOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value ptr, Value cmp, Value val, IntegerAttr success_ordering, IntegerAttr failure_ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(cmp);
  odsState.addOperands(val);
  odsState.addAttribute("success_ordering", success_ordering);
  odsState.addAttribute("failure_ordering", failure_ordering);
  odsState.addTypes(res);
}

void AtomicCmpXchgOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value ptr, Value cmp, Value val, IntegerAttr success_ordering, IntegerAttr failure_ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(cmp);
  odsState.addOperands(val);
  odsState.addAttribute("success_ordering", success_ordering);
  odsState.addAttribute("failure_ordering", failure_ordering);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicCmpXchgOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value ptr, Value cmp, Value val, ::mlir::LLVM::AtomicOrdering success_ordering, ::mlir::LLVM::AtomicOrdering failure_ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(cmp);
  odsState.addOperands(val);
  odsState.addAttribute("success_ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(success_ordering)));
  odsState.addAttribute("failure_ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(failure_ordering)));
  odsState.addTypes(res);
}

void AtomicCmpXchgOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value ptr, Value cmp, Value val, ::mlir::LLVM::AtomicOrdering success_ordering, ::mlir::LLVM::AtomicOrdering failure_ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(cmp);
  odsState.addOperands(val);
  odsState.addAttribute("success_ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(success_ordering)));
  odsState.addAttribute("failure_ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(failure_ordering)));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicCmpXchgOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AtomicCmpXchgOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseAtomicCmpXchgOp(parser, result);
}

void AtomicCmpXchgOp::print(OpAsmPrinter &p) {
  printAtomicCmpXchgOp(p, *this);
}

LogicalResult AtomicCmpXchgOp::verify() {
  if (failed(AtomicCmpXchgOpAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::AtomicRMWOp definitions
//===----------------------------------------------------------------------===//

AtomicRMWOpAdaptor::AtomicRMWOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AtomicRMWOpAdaptor::AtomicRMWOpAdaptor(AtomicRMWOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AtomicRMWOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AtomicRMWOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AtomicRMWOpAdaptor::ptr() {
  return *getODSOperands(0).begin();
}

Value AtomicRMWOpAdaptor::val() {
  return *getODSOperands(1).begin();
}

IntegerAttr AtomicRMWOpAdaptor::bin_op() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("bin_op").cast<IntegerAttr>();
  return attr;
}

IntegerAttr AtomicRMWOpAdaptor::ordering() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("ordering").cast<IntegerAttr>();
  return attr;
}

LogicalResult AtomicRMWOpAdaptor::verify(Location loc) {
  {
  auto tblgen_bin_op = odsAttrs.get("bin_op");
  if (!tblgen_bin_op) return emitError(loc, "'llvm.atomicrmw' op ""requires attribute 'bin_op'");
    if (!((((tblgen_bin_op.isa<IntegerAttr>())) && ((tblgen_bin_op.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_bin_op.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 10)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 11)) || ((tblgen_bin_op.cast<IntegerAttr>().getInt() == 12))))) return emitError(loc, "'llvm.atomicrmw' op ""attribute 'bin_op' failed to satisfy constraint: llvm.atomicrmw binary operations");
  }
  {
  auto tblgen_ordering = odsAttrs.get("ordering");
  if (!tblgen_ordering) return emitError(loc, "'llvm.atomicrmw' op ""requires attribute 'ordering'");
    if (!((((tblgen_ordering.isa<IntegerAttr>())) && ((tblgen_ordering.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_ordering.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 7))))) return emitError(loc, "'llvm.atomicrmw' op ""attribute 'ordering' failed to satisfy constraint: Atomic ordering for LLVM's memory model");
  }
  return success();
}

StringRef AtomicRMWOp::getOperationName() {
  return "llvm.atomicrmw";
}

std::pair<unsigned, unsigned> AtomicRMWOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AtomicRMWOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AtomicRMWOp::ptr() {
  return *getODSOperands(0).begin();
}

Value AtomicRMWOp::val() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange AtomicRMWOp::ptrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange AtomicRMWOp::valMutable() {
  auto range = getODSOperandIndexAndLength(1);
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

Value AtomicRMWOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr AtomicRMWOp::bin_opAttr() {
  return this->getAttr("bin_op").cast<IntegerAttr>();
}

::mlir::LLVM::AtomicBinOp AtomicRMWOp::bin_op() {
  auto attr = bin_opAttr();
  return static_cast<::mlir::LLVM::AtomicBinOp>(attr.getInt());
}

IntegerAttr AtomicRMWOp::orderingAttr() {
  return this->getAttr("ordering").cast<IntegerAttr>();
}

::mlir::LLVM::AtomicOrdering AtomicRMWOp::ordering() {
  auto attr = orderingAttr();
  return static_cast<::mlir::LLVM::AtomicOrdering>(attr.getInt());
}

void AtomicRMWOp::bin_opAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("bin_op", attr);
}

void AtomicRMWOp::orderingAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("ordering", attr);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, IntegerAttr bin_op, Value ptr, Value val, IntegerAttr ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(val);
  odsState.addAttribute("bin_op", bin_op);
  odsState.addAttribute("ordering", ordering);
  odsState.addTypes(res);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr bin_op, Value ptr, Value val, IntegerAttr ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(val);
  odsState.addAttribute("bin_op", bin_op);
  odsState.addAttribute("ordering", ordering);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ::mlir::LLVM::AtomicBinOp bin_op, Value ptr, Value val, ::mlir::LLVM::AtomicOrdering ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(val);
  odsState.addAttribute("bin_op", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(bin_op)));
  odsState.addAttribute("ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(ordering)));
  odsState.addTypes(res);
}

void AtomicRMWOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::AtomicBinOp bin_op, Value ptr, Value val, ::mlir::LLVM::AtomicOrdering ordering) {
  odsState.addOperands(ptr);
  odsState.addOperands(val);
  odsState.addAttribute("bin_op", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(bin_op)));
  odsState.addAttribute("ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(ordering)));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicRMWOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult AtomicRMWOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseAtomicRMWOp(parser, result);
}

void AtomicRMWOp::print(OpAsmPrinter &p) {
  printAtomicRMWOp(p, *this);
}

LogicalResult AtomicRMWOp::verify() {
  if (failed(AtomicRMWOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// LLVM::BitcastOp definitions
//===----------------------------------------------------------------------===//

BitcastOpAdaptor::BitcastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BitcastOpAdaptor::BitcastOpAdaptor(BitcastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BitcastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BitcastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value BitcastOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult BitcastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BitcastOp::getOperationName() {
  return "llvm.bitcast";
}

std::pair<unsigned, unsigned> BitcastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BitcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value BitcastOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange BitcastOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BitcastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BitcastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value BitcastOp::res() {
  return *getODSResults(0).begin();
}

void BitcastOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void BitcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void BitcastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BitcastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult BitcastOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void BitcastOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult BitcastOp::verify() {
  if (failed(BitcastOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void BitcastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::BrOp definitions
//===----------------------------------------------------------------------===//

BrOpAdaptor::BrOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BrOpAdaptor::BrOpAdaptor(BrOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange BrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange BrOpAdaptor::destOperands() {
  return getODSOperands(0);
}

LogicalResult BrOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BrOp::getOperationName() {
  return "llvm.br";
}

std::pair<unsigned, unsigned> BrOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range BrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range BrOp::destOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange BrOp::destOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> BrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Block *BrOp::dest() {
  return this->getOperation()->getSuccessor(0);
}

void BrOp::build(OpBuilder &, OperationState &result, ValueRange operands, SuccessorRange destinations, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    result.addSuccessors(destinations);
    result.addAttributes(attributes);
  
}

void BrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange destOperands, Block *dest) {
  odsState.addOperands(destOperands);
  odsState.addSuccessors(dest);
}

void BrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange destOperands, Block *dest) {
  odsState.addOperands(destOperands);
  odsState.addSuccessors(dest);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BrOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BrOp::verify() {
  if (failed(BrOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
{
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}



ParseResult BrOp::parse(OpAsmParser &parser, OperationState &result) {
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

void BrOp::print(OpAsmPrinter &p) {
  p << "llvm.br";
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

void BrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::CallOp definitions
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

FlatSymbolRefAttr CallOpAdaptor::callee() {
  assert(odsAttrs && "no attributes when constructing adapter");
  FlatSymbolRefAttr attr = odsAttrs.get("callee").dyn_cast_or_null<FlatSymbolRefAttr>();
  return attr;
}

LogicalResult CallOpAdaptor::verify(Location loc) {
  {
  auto tblgen_callee = odsAttrs.get("callee");
  if (tblgen_callee) {
    if (!((tblgen_callee.isa<FlatSymbolRefAttr>()))) return emitError(loc, "'llvm.call' op ""attribute 'callee' failed to satisfy constraint: flat symbol reference attribute");
  }
  }
  return success();
}

StringRef CallOp::getOperationName() {
  return "llvm.call";
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
  return this->getAttr("callee").dyn_cast_or_null<FlatSymbolRefAttr>();
}

Optional< StringRef > CallOp::callee() {
  auto attr = calleeAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void CallOp::calleeAttr(FlatSymbolRefAttr attr) {
  this->getOperation()->setAttr("callee", attr);
}

void CallOp::build(OpBuilder &builder, OperationState &result, LLVMFuncOp func,ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
      LLVMType resultType = func.getType().getFunctionResultType();
      if (!resultType.isVoidTy())
        result.addTypes(resultType);
      result.addAttribute("callee", builder.getSymbolRefAttr(func));
      result.addAttributes(attributes);
      result.addOperands(operands);
    
}

void CallOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, /*optional*/FlatSymbolRefAttr callee, ValueRange odsArg_0) {
  odsState.addOperands(odsArg_0);
  if (callee) {
  odsState.addAttribute("callee", callee);
  }
  odsState.addTypes(resultType0);
}

void CallOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

ParseResult CallOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseCallOp(parser, result);
}

void CallOp::print(OpAsmPrinter &p) {
  printCallOp(p, *this);
}

LogicalResult CallOp::verify() {
  if (failed(CallOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  if (getNumResults() > 1)
      return emitOpError("must have 0 or 1 result");
    return success();
}


//===----------------------------------------------------------------------===//
// LLVM::CondBrOp definitions
//===----------------------------------------------------------------------===//

CondBrOpAdaptor::CondBrOpAdaptor(ValueRange values, DictionaryAttr attrs)  : odsOperands(values), odsAttrs(attrs) {

}

CondBrOpAdaptor::CondBrOpAdaptor(CondBrOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CondBrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

ValueRange CondBrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CondBrOpAdaptor::condition() {
  return *getODSOperands(0).begin();
}

ValueRange CondBrOpAdaptor::trueDestOperands() {
  return getODSOperands(1);
}

ValueRange CondBrOpAdaptor::falseDestOperands() {
  return getODSOperands(2);
}

LogicalResult CondBrOpAdaptor::verify(Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
    if (numElements != 3)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 3 elements");
  }
    return success();
}

StringRef CondBrOp::getOperationName() {
  return "llvm.cond_br";
}

std::pair<unsigned, unsigned> CondBrOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

Operation::operand_range CondBrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CondBrOp::condition() {
  return *getODSOperands(0).begin();
}

Operation::operand_range CondBrOp::trueDestOperands() {
  return getODSOperands(1);
}

Operation::operand_range CondBrOp::falseDestOperands() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange CondBrOp::conditionMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange CondBrOp::trueDestOperandsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange CondBrOp::falseDestOperandsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> CondBrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CondBrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Block *CondBrOp::trueDest() {
  return this->getOperation()->getSuccessor(0);
}

Block *CondBrOp::falseDest() {
  return this->getOperation()->getSuccessor(1);
}

void CondBrOp::build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, ValueRange trueOperands,Block *falseDest, ValueRange falseOperands) {
      build(builder, result, condition, trueOperands, falseOperands, trueDest,
            falseDest);
  
}

void CondBrOp::build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, Block *falseDest, ValueRange falseOperands ) {
      build(builder, result, condition, trueDest, ValueRange(), falseDest,
            falseOperands);
  
}

void CondBrOp::build(OpBuilder &, OperationState &result, ValueRange operands, SuccessorRange destinations, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    result.addSuccessors(destinations);
    result.addAttributes(attributes);
  
}

void CondBrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest) {
  odsState.addOperands(condition);
  odsState.addOperands(trueDestOperands);
  odsState.addOperands(falseDestOperands);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(trueDestOperands.size()), static_cast<int32_t>(falseDestOperands.size())}));
  odsState.addSuccessors(trueDest);
  odsState.addSuccessors(falseDest);
}

void CondBrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest) {
  odsState.addOperands(condition);
  odsState.addOperands(trueDestOperands);
  odsState.addOperands(falseDestOperands);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({1, static_cast<int32_t>(trueDestOperands.size()), static_cast<int32_t>(falseDestOperands.size())}));
  odsState.addSuccessors(trueDest);
  odsState.addSuccessors(falseDest);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CondBrOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult CondBrOp::verify() {
  if (failed(CondBrOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy(1))))) {
        return emitOpError("operand #") << index << " must be LLVM dialect 1-bit integer, but got " << v.getType();
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
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}



ParseResult CondBrOp::parse(OpAsmParser &parser, OperationState &result) {
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
  Type odsBuildableType0 = ::mlir::LLVM::LLVMType::getIntNTy(parser.getBuilder().getContext()->getRegisteredDialect<LLVM::LLVMDialect>(),1);
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

void CondBrOp::print(OpAsmPrinter &p) {
  p << "llvm.cond_br";
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

void CondBrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ConstantOp definitions
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
  if (!tblgen_value) return emitError(loc, "'llvm.mlir.constant' op ""requires attribute 'value'");
    if (!((true))) return emitError(loc, "'llvm.mlir.constant' op ""attribute 'value' failed to satisfy constraint: any attribute");
  }
  return success();
}

StringRef ConstantOp::getOperationName() {
  return "llvm.mlir.constant";
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

Value ConstantOp::res() {
  return *getODSResults(0).begin();
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

void ConstantOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ConstantOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Attribute value) {
  odsState.addAttribute("value", value);
  odsState.addTypes(res);
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
      if (!((v.getType().isa<::mlir::LLVM::LLVMType>()))) {
        return emitOpError("result #") << index << " must be LLVM dialect type, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

ParseResult ConstantOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  if (parser.parseLParen())
    return failure();

  Attribute valueAttr;
  if (parser.parseAttribute(valueAttr, "value", result.attributes))
    return failure();
  if (parser.parseRParen())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  return success();
}

void ConstantOp::print(OpAsmPrinter &p) {
  p << "llvm.mlir.constant";
  p << "(";
  p.printAttribute(valueAttr());
  p << ")";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{"value"});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void ConstantOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::CopySignOp definitions
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

Value CopySignOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

Value CopySignOpAdaptor::b() {
  return *getODSOperands(1).begin();
}

LogicalResult CopySignOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CopySignOp::getOperationName() {
  return "llvm.intr.copysign";
}

std::pair<unsigned, unsigned> CopySignOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CopySignOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CopySignOp::a() {
  return *getODSOperands(0).begin();
}

Value CopySignOp::b() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange CopySignOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange CopySignOp::bMutable() {
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

Value CopySignOp::res() {
  return *getODSResults(0).begin();
}

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes(res);
}

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
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

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes({a.getType()});

}

void CopySignOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult CopySignOp::verify() {
  if (failed(CopySignOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void CopySignOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::CosOp definitions
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

Value CosOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult CosOpAdaptor::verify(Location loc) {
  return success();
}

StringRef CosOp::getOperationName() {
  return "llvm.intr.cos";
}

std::pair<unsigned, unsigned> CosOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CosOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CosOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange CosOp::inMutable() {
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

Value CosOp::res() {
  return *getODSResults(0).begin();
}

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void CosOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult CosOp::verify() {
  if (failed(CosOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void CosOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::DialectCastOp definitions
//===----------------------------------------------------------------------===//

DialectCastOpAdaptor::DialectCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DialectCastOpAdaptor::DialectCastOpAdaptor(DialectCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DialectCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange DialectCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value DialectCastOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult DialectCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef DialectCastOp::getOperationName() {
  return "llvm.mlir.cast";
}

std::pair<unsigned, unsigned> DialectCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range DialectCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value DialectCastOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange DialectCastOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DialectCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range DialectCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value DialectCastOp::res() {
  return *getODSResults(0).begin();
}

void DialectCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void DialectCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DialectCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult DialectCastOp::verify() {
  if (failed(DialectCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult DialectCastOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType inRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> inOperands(inRawOperands);  llvm::SMLoc inOperandsLoc = parser.getCurrentLocation();
  (void)inOperandsLoc;
  Type inRawTypes[1];
  ArrayRef<Type> inTypes(inRawTypes);
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);

  if (parser.parseOperand(inRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(inRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(inOperands, inTypes, inOperandsLoc, result.operands))
    return failure();
  return success();
}

void DialectCastOp::print(OpAsmPrinter &p) {
  p << "llvm.mlir.cast";
  p << " ";
  p << in();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(in().getType());
  p << " " << "to";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void DialectCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::Exp2Op definitions
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

Value Exp2OpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult Exp2OpAdaptor::verify(Location loc) {
  return success();
}

StringRef Exp2Op::getOperationName() {
  return "llvm.intr.exp2";
}

std::pair<unsigned, unsigned> Exp2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Exp2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value Exp2Op::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange Exp2Op::inMutable() {
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

Value Exp2Op::res() {
  return *getODSResults(0).begin();
}

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void Exp2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult Exp2Op::verify() {
  if (failed(Exp2OpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void Exp2Op::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ExpOp definitions
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

Value ExpOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult ExpOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ExpOp::getOperationName() {
  return "llvm.intr.exp";
}

std::pair<unsigned, unsigned> ExpOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ExpOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExpOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExpOp::inMutable() {
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

Value ExpOp::res() {
  return *getODSResults(0).begin();
}

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void ExpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult ExpOp::verify() {
  if (failed(ExpOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void ExpOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ExtractElementOp definitions
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
  return "llvm.extractelement";
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

Value ExtractElementOp::res() {
  return *getODSResults(0).begin();
}



void ExtractElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value vector, Value position) {
  odsState.addOperands(vector);
  odsState.addOperands(position);
  odsState.addTypes(res);
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

ParseResult ExtractElementOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseExtractElementOp(parser, result);
}

void ExtractElementOp::print(OpAsmPrinter &p) {
  printExtractElementOp(p, *this);
}

LogicalResult ExtractElementOp::verify() {
  if (failed(ExtractElementOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void ExtractElementOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ExtractValueOp definitions
//===----------------------------------------------------------------------===//

ExtractValueOpAdaptor::ExtractValueOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ExtractValueOpAdaptor::ExtractValueOpAdaptor(ExtractValueOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ExtractValueOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ExtractValueOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ExtractValueOpAdaptor::container() {
  return *getODSOperands(0).begin();
}

ArrayAttr ExtractValueOpAdaptor::position() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("position").cast<ArrayAttr>();
  return attr;
}

LogicalResult ExtractValueOpAdaptor::verify(Location loc) {
  {
  auto tblgen_position = odsAttrs.get("position");
  if (!tblgen_position) return emitError(loc, "'llvm.extractvalue' op ""requires attribute 'position'");
    if (!((tblgen_position.isa<ArrayAttr>()))) return emitError(loc, "'llvm.extractvalue' op ""attribute 'position' failed to satisfy constraint: array attribute");
  }
  return success();
}

StringRef ExtractValueOp::getOperationName() {
  return "llvm.extractvalue";
}

std::pair<unsigned, unsigned> ExtractValueOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ExtractValueOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ExtractValueOp::container() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ExtractValueOp::containerMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ExtractValueOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ExtractValueOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ExtractValueOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr ExtractValueOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr ExtractValueOp::position() {
  auto attr = positionAttr();
  return attr;
}

void ExtractValueOp::positionAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("position", attr);
}

void ExtractValueOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ExtractValueOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value container, ArrayAttr position) {
  odsState.addOperands(container);
  odsState.addAttribute("position", position);
  odsState.addTypes(res);
}

void ExtractValueOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value container, ArrayAttr position) {
  odsState.addOperands(container);
  odsState.addAttribute("position", position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExtractValueOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ExtractValueOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseExtractValueOp(parser, result);
}

void ExtractValueOp::print(OpAsmPrinter &p) {
  printExtractValueOp(p, *this);
}

LogicalResult ExtractValueOp::verify() {
  if (failed(ExtractValueOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void ExtractValueOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FAbsOp definitions
//===----------------------------------------------------------------------===//

FAbsOpAdaptor::FAbsOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FAbsOpAdaptor::FAbsOpAdaptor(FAbsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FAbsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FAbsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FAbsOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult FAbsOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FAbsOp::getOperationName() {
  return "llvm.intr.fabs";
}

std::pair<unsigned, unsigned> FAbsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FAbsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FAbsOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FAbsOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FAbsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FAbsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FAbsOp::res() {
  return *getODSResults(0).begin();
}

void FAbsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void FAbsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FAbsOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FAbsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void FAbsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult FAbsOp::verify() {
  if (failed(FAbsOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FAbsOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FAddOp definitions
//===----------------------------------------------------------------------===//

FAddOpAdaptor::FAddOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FAddOpAdaptor::FAddOpAdaptor(FAddOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FAddOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FAddOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FAddOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value FAddOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult FAddOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FAddOp::getOperationName() {
  return "llvm.fadd";
}

std::pair<unsigned, unsigned> FAddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FAddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FAddOp::lhs() {
  return *getODSOperands(0).begin();
}

Value FAddOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FAddOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FAddOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FAddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FAddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FAddOp::res() {
  return *getODSResults(0).begin();
}

void FAddOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void FAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FAddOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void FAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult FAddOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FAddOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FAddOp::verify() {
  if (failed(FAddOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FAddOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FCeilOp definitions
//===----------------------------------------------------------------------===//

FCeilOpAdaptor::FCeilOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FCeilOpAdaptor::FCeilOpAdaptor(FCeilOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FCeilOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FCeilOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FCeilOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult FCeilOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FCeilOp::getOperationName() {
  return "llvm.intr.ceil";
}

std::pair<unsigned, unsigned> FCeilOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FCeilOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FCeilOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FCeilOp::inMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FCeilOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FCeilOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FCeilOp::res() {
  return *getODSResults(0).begin();
}

void FCeilOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void FCeilOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FCeilOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FCeilOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void FCeilOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult FCeilOp::verify() {
  if (failed(FCeilOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FCeilOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FCmpOp definitions
//===----------------------------------------------------------------------===//

FCmpOpAdaptor::FCmpOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FCmpOpAdaptor::FCmpOpAdaptor(FCmpOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FCmpOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FCmpOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FCmpOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value FCmpOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

IntegerAttr FCmpOpAdaptor::predicate() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("predicate").cast<IntegerAttr>();
  return attr;
}

LogicalResult FCmpOpAdaptor::verify(Location loc) {
  {
  auto tblgen_predicate = odsAttrs.get("predicate");
  if (!tblgen_predicate) return emitError(loc, "'llvm.fcmp' op ""requires attribute 'predicate'");
    if (!((((tblgen_predicate.isa<IntegerAttr>())) && ((tblgen_predicate.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_predicate.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 10)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 11)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 12)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 13)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 14)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 15))))) return emitError(loc, "'llvm.fcmp' op ""attribute 'predicate' failed to satisfy constraint: llvm.fcmp comparison predicate");
  }
  return success();
}

StringRef FCmpOp::getOperationName() {
  return "llvm.fcmp";
}

std::pair<unsigned, unsigned> FCmpOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FCmpOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FCmpOp::lhs() {
  return *getODSOperands(0).begin();
}

Value FCmpOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FCmpOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FCmpOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FCmpOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FCmpOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FCmpOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr FCmpOp::predicateAttr() {
  return this->getAttr("predicate").cast<IntegerAttr>();
}

::mlir::LLVM::FCmpPredicate FCmpOp::predicate() {
  auto attr = predicateAttr();
  return static_cast<::mlir::LLVM::FCmpPredicate>(attr.getInt());
}

void FCmpOp::predicateAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("predicate", attr);
}

void FCmpOp::build(OpBuilder &b, OperationState &result, FCmpPredicate predicate, Value lhs, Value rhs) {
      LLVMDialect *dialect = &lhs.getType().cast<LLVMType>().getDialect();
      build(b, result, LLVMType::getInt1Ty(dialect),
            b.getI64IntegerAttr(static_cast<int64_t>(predicate)), lhs, rhs);
    
}

void FCmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  odsState.addTypes(res);
}

void FCmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FCmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  odsState.addTypes(res);
}

void FCmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FCmpOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult FCmpOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseCmpOp<FCmpPredicate>(parser, result);
}

void FCmpOp::print(OpAsmPrinter &p) {
  printFCmpOp(p, *this);
}

LogicalResult FCmpOp::verify() {
  if (failed(FCmpOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FCmpOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FDivOp definitions
//===----------------------------------------------------------------------===//

FDivOpAdaptor::FDivOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FDivOpAdaptor::FDivOpAdaptor(FDivOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FDivOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FDivOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FDivOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value FDivOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult FDivOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FDivOp::getOperationName() {
  return "llvm.fdiv";
}

std::pair<unsigned, unsigned> FDivOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FDivOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FDivOp::lhs() {
  return *getODSOperands(0).begin();
}

Value FDivOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FDivOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FDivOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FDivOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FDivOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FDivOp::res() {
  return *getODSResults(0).begin();
}

void FDivOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void FDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FDivOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void FDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult FDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FDivOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FDivOp::verify() {
  if (failed(FDivOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FDivOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FMAOp definitions
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

Value FMAOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

Value FMAOpAdaptor::b() {
  return *getODSOperands(1).begin();
}

Value FMAOpAdaptor::c() {
  return *getODSOperands(2).begin();
}

LogicalResult FMAOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FMAOp::getOperationName() {
  return "llvm.intr.fma";
}

std::pair<unsigned, unsigned> FMAOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FMAOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FMAOp::a() {
  return *getODSOperands(0).begin();
}

Value FMAOp::b() {
  return *getODSOperands(1).begin();
}

Value FMAOp::c() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange FMAOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMAOp::bMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMAOp::cMutable() {
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

Value FMAOp::res() {
  return *getODSResults(0).begin();
}

void FMAOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b, Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.addTypes(res);
}

void FMAOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
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

void FMAOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b, Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.addTypes({a.getType()});

}

void FMAOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult FMAOp::verify() {
  if (failed(FMAOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FMAOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FMulAddOp definitions
//===----------------------------------------------------------------------===//

FMulAddOpAdaptor::FMulAddOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FMulAddOpAdaptor::FMulAddOpAdaptor(FMulAddOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FMulAddOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FMulAddOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FMulAddOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

Value FMulAddOpAdaptor::b() {
  return *getODSOperands(1).begin();
}

Value FMulAddOpAdaptor::c() {
  return *getODSOperands(2).begin();
}

LogicalResult FMulAddOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FMulAddOp::getOperationName() {
  return "llvm.intr.fmuladd";
}

std::pair<unsigned, unsigned> FMulAddOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FMulAddOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FMulAddOp::a() {
  return *getODSOperands(0).begin();
}

Value FMulAddOp::b() {
  return *getODSOperands(1).begin();
}

Value FMulAddOp::c() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange FMulAddOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMulAddOp::bMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMulAddOp::cMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FMulAddOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FMulAddOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FMulAddOp::res() {
  return *getODSResults(0).begin();
}

void FMulAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b, Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.addTypes(res);
}

void FMulAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FMulAddOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FMulAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b, Value c) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addOperands(c);
  odsState.addTypes({a.getType()});

}

void FMulAddOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult FMulAddOp::verify() {
  if (failed(FMulAddOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FMulAddOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FMulOp definitions
//===----------------------------------------------------------------------===//

FMulOpAdaptor::FMulOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FMulOpAdaptor::FMulOpAdaptor(FMulOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FMulOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FMulOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FMulOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value FMulOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult FMulOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FMulOp::getOperationName() {
  return "llvm.fmul";
}

std::pair<unsigned, unsigned> FMulOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FMulOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FMulOp::lhs() {
  return *getODSOperands(0).begin();
}

Value FMulOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FMulOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FMulOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FMulOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FMulOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FMulOp::res() {
  return *getODSResults(0).begin();
}

void FMulOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FMulOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void FMulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FMulOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FMulOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void FMulOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult FMulOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FMulOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FMulOp::verify() {
  if (failed(FMulOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FMulOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FNegOp definitions
//===----------------------------------------------------------------------===//

FNegOpAdaptor::FNegOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FNegOpAdaptor::FNegOpAdaptor(FNegOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FNegOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FNegOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FNegOpAdaptor::operand() {
  return *getODSOperands(0).begin();
}

LogicalResult FNegOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FNegOp::getOperationName() {
  return "llvm.fneg";
}

std::pair<unsigned, unsigned> FNegOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FNegOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FNegOp::operand() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FNegOp::operandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FNegOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FNegOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FNegOp::res() {
  return *getODSResults(0).begin();
}

void FNegOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FNegOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes(res);
}

void FNegOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand) {
  odsState.addOperands(operand);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FNegOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FNegOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value operand) {
  odsState.addOperands(operand);
  odsState.addTypes({operand.getType()});

}

void FNegOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult FNegOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FNegOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FNegOp::verify() {
  if (failed(FNegOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FNegOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FPExtOp definitions
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

Value FPExtOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult FPExtOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FPExtOp::getOperationName() {
  return "llvm.fpext";
}

std::pair<unsigned, unsigned> FPExtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FPExtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FPExtOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FPExtOp::argMutable() {
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

Value FPExtOp::res() {
  return *getODSResults(0).begin();
}

void FPExtOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void FPExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
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
  return mlir::impl::parseCastOp(parser, result);
}

void FPExtOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPExtOp::verify() {
  if (failed(FPExtOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FPExtOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FPToSIOp definitions
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

Value FPToSIOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult FPToSIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FPToSIOp::getOperationName() {
  return "llvm.fptosi";
}

std::pair<unsigned, unsigned> FPToSIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FPToSIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FPToSIOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FPToSIOp::argMutable() {
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

Value FPToSIOp::res() {
  return *getODSResults(0).begin();
}

void FPToSIOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPToSIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void FPToSIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
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
  return mlir::impl::parseCastOp(parser, result);
}

void FPToSIOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPToSIOp::verify() {
  if (failed(FPToSIOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FPToSIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FPToUIOp definitions
//===----------------------------------------------------------------------===//

FPToUIOpAdaptor::FPToUIOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FPToUIOpAdaptor::FPToUIOpAdaptor(FPToUIOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FPToUIOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FPToUIOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FPToUIOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult FPToUIOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FPToUIOp::getOperationName() {
  return "llvm.fptoui";
}

std::pair<unsigned, unsigned> FPToUIOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FPToUIOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FPToUIOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FPToUIOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FPToUIOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FPToUIOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FPToUIOp::res() {
  return *getODSResults(0).begin();
}

void FPToUIOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPToUIOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void FPToUIOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FPToUIOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult FPToUIOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void FPToUIOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPToUIOp::verify() {
  if (failed(FPToUIOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FPToUIOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FPTruncOp definitions
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

Value FPTruncOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult FPTruncOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FPTruncOp::getOperationName() {
  return "llvm.fptrunc";
}

std::pair<unsigned, unsigned> FPTruncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FPTruncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FPTruncOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FPTruncOp::argMutable() {
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

Value FPTruncOp::res() {
  return *getODSResults(0).begin();
}

void FPTruncOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FPTruncOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void FPTruncOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
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
  return mlir::impl::parseCastOp(parser, result);
}

void FPTruncOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult FPTruncOp::verify() {
  if (failed(FPTruncOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FPTruncOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FRemOp definitions
//===----------------------------------------------------------------------===//

FRemOpAdaptor::FRemOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FRemOpAdaptor::FRemOpAdaptor(FRemOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FRemOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FRemOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FRemOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value FRemOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult FRemOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FRemOp::getOperationName() {
  return "llvm.frem";
}

std::pair<unsigned, unsigned> FRemOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FRemOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FRemOp::lhs() {
  return *getODSOperands(0).begin();
}

Value FRemOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FRemOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FRemOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FRemOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FRemOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FRemOp::res() {
  return *getODSResults(0).begin();
}

void FRemOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void FRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FRemOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void FRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult FRemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FRemOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FRemOp::verify() {
  if (failed(FRemOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FRemOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FSubOp definitions
//===----------------------------------------------------------------------===//

FSubOpAdaptor::FSubOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FSubOpAdaptor::FSubOpAdaptor(FSubOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FSubOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FSubOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FSubOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value FSubOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult FSubOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FSubOp::getOperationName() {
  return "llvm.fsub";
}

std::pair<unsigned, unsigned> FSubOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FSubOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FSubOp::lhs() {
  return *getODSOperands(0).begin();
}

Value FSubOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange FSubOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange FSubOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FSubOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FSubOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FSubOp::res() {
  return *getODSResults(0).begin();
}

void FSubOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FSubOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void FSubOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FSubOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FSubOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void FSubOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult FSubOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void FSubOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult FSubOp::verify() {
  if (failed(FSubOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void FSubOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::FenceOp definitions
//===----------------------------------------------------------------------===//

FenceOpAdaptor::FenceOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FenceOpAdaptor::FenceOpAdaptor(FenceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FenceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FenceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

IntegerAttr FenceOpAdaptor::ordering() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("ordering").cast<IntegerAttr>();
  return attr;
}

StringAttr FenceOpAdaptor::syncscope() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("syncscope").cast<StringAttr>();
  return attr;
}

LogicalResult FenceOpAdaptor::verify(Location loc) {
  {
  auto tblgen_ordering = odsAttrs.get("ordering");
  if (!tblgen_ordering) return emitError(loc, "'llvm.fence' op ""requires attribute 'ordering'");
    if (!((((tblgen_ordering.isa<IntegerAttr>())) && ((tblgen_ordering.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_ordering.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_ordering.cast<IntegerAttr>().getInt() == 7))))) return emitError(loc, "'llvm.fence' op ""attribute 'ordering' failed to satisfy constraint: Atomic ordering for LLVM's memory model");
  }
  {
  auto tblgen_syncscope = odsAttrs.get("syncscope");
  if (!tblgen_syncscope) return emitError(loc, "'llvm.fence' op ""requires attribute 'syncscope'");
    if (!((tblgen_syncscope.isa<StringAttr>()))) return emitError(loc, "'llvm.fence' op ""attribute 'syncscope' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef FenceOp::getOperationName() {
  return "llvm.fence";
}

std::pair<unsigned, unsigned> FenceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FenceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> FenceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FenceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

IntegerAttr FenceOp::orderingAttr() {
  return this->getAttr("ordering").cast<IntegerAttr>();
}

::mlir::LLVM::AtomicOrdering FenceOp::ordering() {
  auto attr = orderingAttr();
  return static_cast<::mlir::LLVM::AtomicOrdering>(attr.getInt());
}

StringAttr FenceOp::syncscopeAttr() {
  return this->getAttr("syncscope").cast<StringAttr>();
}

StringRef FenceOp::syncscope() {
  auto attr = syncscopeAttr();
  return attr.getValue();
}

void FenceOp::orderingAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("ordering", attr);
}

void FenceOp::syncscopeAttr(StringAttr attr) {
  this->getOperation()->setAttr("syncscope", attr);
}

void FenceOp::build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    auto llvmType = resultType.dyn_cast<LLVM::LLVMType>(); (void)llvmType;
    assert(llvmType && "result must be an LLVM type");
    assert(llvmType.getUnderlyingType() &&
            llvmType.getUnderlyingType()->isVoidTy() &&
            "for zero-result operands, only 'void' is accepted as result type");
    build(builder, result, operands, attributes);
  
}

void FenceOp::build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FenceOp::build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr ordering, StringAttr syncscope) {
  odsState.addAttribute("ordering", ordering);
  odsState.addAttribute("syncscope", syncscope);
}

void FenceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr ordering, StringAttr syncscope) {
  odsState.addAttribute("ordering", ordering);
  odsState.addAttribute("syncscope", syncscope);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FenceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ::mlir::LLVM::AtomicOrdering ordering, StringRef syncscope) {
  odsState.addAttribute("ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(ordering)));
  odsState.addAttribute("syncscope", odsBuilder.getStringAttr(syncscope));
}

void FenceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::AtomicOrdering ordering, StringRef syncscope) {
  odsState.addAttribute("ordering", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(ordering)));
  odsState.addAttribute("syncscope", odsBuilder.getStringAttr(syncscope));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FenceOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult FenceOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseFenceOp(parser, result);
}

void FenceOp::print(OpAsmPrinter &p) {
  printFenceOp(p, *this);
}

LogicalResult FenceOp::verify() {
  if (failed(FenceOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// LLVM::FreezeOp definitions
//===----------------------------------------------------------------------===//

FreezeOpAdaptor::FreezeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FreezeOpAdaptor::FreezeOpAdaptor(FreezeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FreezeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange FreezeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value FreezeOpAdaptor::val() {
  return *getODSOperands(0).begin();
}

LogicalResult FreezeOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FreezeOp::getOperationName() {
  return "llvm.freeze";
}

std::pair<unsigned, unsigned> FreezeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range FreezeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value FreezeOp::val() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange FreezeOp::valMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FreezeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FreezeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value FreezeOp::res() {
  return *getODSResults(0).begin();
}

void FreezeOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void FreezeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value val) {
  odsState.addOperands(val);
  odsState.addTypes(res);
}

void FreezeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value val) {
  odsState.addOperands(val);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FreezeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void FreezeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value val) {
  odsState.addOperands(val);
  odsState.addTypes({val.getType()});

}

void FreezeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult FreezeOp::verify() {
  if (failed(FreezeOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult FreezeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType valRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> valOperands(valRawOperands);  llvm::SMLoc valOperandsLoc = parser.getCurrentLocation();
  (void)valOperandsLoc;
  Type valRawTypes[1];
  ArrayRef<Type> valTypes(valRawTypes);

  if (parser.parseOperand(valRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(valRawTypes[0]))
    return failure();
  result.addTypes(valTypes);
  if (parser.resolveOperands(valOperands, valTypes, valOperandsLoc, result.operands))
    return failure();
  return success();
}

void FreezeOp::print(OpAsmPrinter &p) {
  p << "llvm.freeze";
  p << " ";
  p << val();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(val().getType());
}


//===----------------------------------------------------------------------===//
// LLVM::GEPOp definitions
//===----------------------------------------------------------------------===//

GEPOpAdaptor::GEPOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GEPOpAdaptor::GEPOpAdaptor(GEPOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GEPOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange GEPOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value GEPOpAdaptor::base() {
  return *getODSOperands(0).begin();
}

ValueRange GEPOpAdaptor::indices() {
  return getODSOperands(1);
}

LogicalResult GEPOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GEPOp::getOperationName() {
  return "llvm.getelementptr";
}

std::pair<unsigned, unsigned> GEPOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range GEPOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value GEPOp::base() {
  return *getODSOperands(0).begin();
}

Operation::operand_range GEPOp::indices() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange GEPOp::baseMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange GEPOp::indicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> GEPOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GEPOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value GEPOp::res() {
  return *getODSResults(0).begin();
}

void GEPOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void GEPOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value base, ValueRange indices) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  odsState.addTypes(res);
}

void GEPOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value base, ValueRange indices) {
  odsState.addOperands(base);
  odsState.addOperands(indices);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GEPOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult GEPOp::verify() {
  if (failed(GEPOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult GEPOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType baseRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> baseOperands(baseRawOperands);  llvm::SMLoc baseOperandsLoc = parser.getCurrentLocation();
  (void)baseOperandsLoc;
  SmallVector<OpAsmParser::OperandType, 4> indicesOperands;
  llvm::SMLoc indicesOperandsLoc = parser.getCurrentLocation();
  (void)indicesOperandsLoc;
  ArrayRef<Type> allOperandTypes;
  ArrayRef<Type> allResultTypes;

  if (parser.parseOperand(baseRawOperands[0]))
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

  FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(llvm::concat<const OpAsmParser::OperandType>(baseOperands, indicesOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return failure();
  return success();
}

void GEPOp::print(OpAsmPrinter &p) {
  p << "llvm.getelementptr";
  p << " ";
  p << base();
  p << "[";
  p << indices();
  p << "]";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void GEPOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::GlobalOp definitions
//===----------------------------------------------------------------------===//

GlobalOpAdaptor::GlobalOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GlobalOpAdaptor::GlobalOpAdaptor(GlobalOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GlobalOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GlobalOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

TypeAttr GlobalOpAdaptor::type() {
  assert(odsAttrs && "no attributes when constructing adapter");
  TypeAttr attr = odsAttrs.get("type").cast<TypeAttr>();
  return attr;
}

UnitAttr GlobalOpAdaptor::constant() {
  assert(odsAttrs && "no attributes when constructing adapter");
  UnitAttr attr = odsAttrs.get("constant").dyn_cast_or_null<UnitAttr>();
  return attr;
}

StringAttr GlobalOpAdaptor::sym_name() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("sym_name").cast<StringAttr>();
  return attr;
}

IntegerAttr GlobalOpAdaptor::linkage() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("linkage").cast<IntegerAttr>();
  return attr;
}

Attribute GlobalOpAdaptor::value() {
  assert(odsAttrs && "no attributes when constructing adapter");
  Attribute attr = odsAttrs.get("value").dyn_cast_or_null<Attribute>();
  return attr;
}

IntegerAttr GlobalOpAdaptor::addr_space() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("addr_space").dyn_cast_or_null<IntegerAttr>();
  if (!attr)
    attr = mlir::Builder(odsAttrs.getContext()).getIntegerAttr(mlir::Builder(odsAttrs.getContext()).getIntegerType(32), 0);
  return attr;
}

LogicalResult GlobalOpAdaptor::verify(Location loc) {
  {
  auto tblgen_type = odsAttrs.get("type");
  if (!tblgen_type) return emitError(loc, "'llvm.mlir.global' op ""requires attribute 'type'");
    if (!(((tblgen_type.isa<TypeAttr>())) && ((tblgen_type.cast<TypeAttr>().getValue().isa<Type>())))) return emitError(loc, "'llvm.mlir.global' op ""attribute 'type' failed to satisfy constraint: any type attribute");
  }
  {
  auto tblgen_constant = odsAttrs.get("constant");
  if (tblgen_constant) {
    if (!((tblgen_constant.isa<UnitAttr>()))) return emitError(loc, "'llvm.mlir.global' op ""attribute 'constant' failed to satisfy constraint: unit attribute");
  }
  }
  {
  auto tblgen_sym_name = odsAttrs.get("sym_name");
  if (!tblgen_sym_name) return emitError(loc, "'llvm.mlir.global' op ""requires attribute 'sym_name'");
    if (!((tblgen_sym_name.isa<StringAttr>()))) return emitError(loc, "'llvm.mlir.global' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");
  }
  {
  auto tblgen_linkage = odsAttrs.get("linkage");
  if (!tblgen_linkage) return emitError(loc, "'llvm.mlir.global' op ""requires attribute 'linkage'");
    if (!((((tblgen_linkage.isa<IntegerAttr>())) && ((tblgen_linkage.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_linkage.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 10))))) return emitError(loc, "'llvm.mlir.global' op ""attribute 'linkage' failed to satisfy constraint: LLVM linkage types");
  }
  {
  auto tblgen_value = odsAttrs.get("value");
  if (tblgen_value) {
    if (!((true))) return emitError(loc, "'llvm.mlir.global' op ""attribute 'value' failed to satisfy constraint: any attribute");
  }
  }
  {
  auto tblgen_addr_space = odsAttrs.get("addr_space");
  if (tblgen_addr_space) {
    if (!((((tblgen_addr_space.isa<IntegerAttr>())) && ((tblgen_addr_space.cast<IntegerAttr>().getType().isSignlessInteger(32)))) && ((!tblgen_addr_space.cast<IntegerAttr>().getValue().isNegative())))) return emitError(loc, "'llvm.mlir.global' op ""attribute 'addr_space' failed to satisfy constraint: 32-bit signless integer attribute whose value is non-negative");
  }
  }
  return success();
}

StringRef GlobalOp::getOperationName() {
  return "llvm.mlir.global";
}

std::pair<unsigned, unsigned> GlobalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GlobalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GlobalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GlobalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &GlobalOp::initializer() {
  return this->getOperation()->getRegion(0);
}

TypeAttr GlobalOp::typeAttr() {
  return this->getAttr("type").cast<TypeAttr>();
}

Type GlobalOp::type() {
  auto attr = typeAttr();
  return attr.getValue().cast<Type>();
}

UnitAttr GlobalOp::constantAttr() {
  return this->getAttr("constant").dyn_cast_or_null<UnitAttr>();
}

bool GlobalOp::constant() {
  auto attr = constantAttr();
  return attr != nullptr;
}

StringAttr GlobalOp::sym_nameAttr() {
  return this->getAttr("sym_name").cast<StringAttr>();
}

StringRef GlobalOp::sym_name() {
  auto attr = sym_nameAttr();
  return attr.getValue();
}

IntegerAttr GlobalOp::linkageAttr() {
  return this->getAttr("linkage").cast<IntegerAttr>();
}

::mlir::LLVM::Linkage GlobalOp::linkage() {
  auto attr = linkageAttr();
  return static_cast<::mlir::LLVM::Linkage>(attr.getInt());
}

Attribute GlobalOp::valueAttr() {
  return this->getAttr("value").dyn_cast_or_null<Attribute>();
}

Optional<Attribute> GlobalOp::value() {
  auto attr = valueAttr();
  return attr ? Optional<Attribute>(attr) : (llvm::None);
}

IntegerAttr GlobalOp::addr_spaceAttr() {
  return this->getAttr("addr_space").dyn_cast_or_null<IntegerAttr>();
}

APInt GlobalOp::addr_space() {
  auto attr = addr_spaceAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getIntegerAttr(mlir::Builder(this->getContext()).getIntegerType(32), 0).getValue();
  return attr.getValue();
}

void GlobalOp::typeAttr(TypeAttr attr) {
  this->getOperation()->setAttr("type", attr);
}

void GlobalOp::constantAttr(UnitAttr attr) {
  this->getOperation()->setAttr("constant", attr);
}

void GlobalOp::sym_nameAttr(StringAttr attr) {
  this->getOperation()->setAttr("sym_name", attr);
}

void GlobalOp::linkageAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("linkage", attr);
}

void GlobalOp::valueAttr(Attribute attr) {
  this->getOperation()->setAttr("value", attr);
}

void GlobalOp::addr_spaceAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("addr_space", attr);
}



void GlobalOp::build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space) {
  odsState.addAttribute("type", type);
  if (constant) {
  odsState.addAttribute("constant", constant);
  }
  odsState.addAttribute("sym_name", sym_name);
  odsState.addAttribute("linkage", linkage);
  if (value) {
  odsState.addAttribute("value", value);
  }
  odsState.addAttribute("addr_space", addr_space);
  (void)odsState.addRegion();
}

void GlobalOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space) {
  odsState.addAttribute("type", type);
  if (constant) {
  odsState.addAttribute("constant", constant);
  }
  odsState.addAttribute("sym_name", sym_name);
  odsState.addAttribute("linkage", linkage);
  if (value) {
  odsState.addAttribute("value", value);
  }
  odsState.addAttribute("addr_space", addr_space);
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalOp::build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space) {
  odsState.addAttribute("type", type);
  if (constant) {
  odsState.addAttribute("constant", odsBuilder.getUnitAttr());
  }
  odsState.addAttribute("sym_name", odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute("linkage", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(linkage)));
  if (value) {
  odsState.addAttribute("value", value);
  }
  odsState.addAttribute("addr_space", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), addr_space));
  (void)odsState.addRegion();
}

void GlobalOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space) {
  odsState.addAttribute("type", type);
  if (constant) {
  odsState.addAttribute("constant", odsBuilder.getUnitAttr());
  }
  odsState.addAttribute("sym_name", odsBuilder.getStringAttr(sym_name));
  odsState.addAttribute("linkage", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(linkage)));
  if (value) {
  odsState.addAttribute("value", value);
  }
  odsState.addAttribute("addr_space", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), addr_space));
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult GlobalOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseGlobalOp(parser, result);
}

void GlobalOp::print(OpAsmPrinter &p) {
  printGlobalOp(p, *this);
}

LogicalResult GlobalOp::verify() {
  if (failed(GlobalOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
{
    unsigned index = 0; (void)index;
    for (Region &region : MutableArrayRef<Region>(this->getOperation()->getRegion(0))) {
      (void)region;
      if (!((true))) {
        return emitOpError("region #") << index << " ('initializer') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// LLVM::ICmpOp definitions
//===----------------------------------------------------------------------===//

ICmpOpAdaptor::ICmpOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ICmpOpAdaptor::ICmpOpAdaptor(ICmpOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ICmpOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ICmpOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ICmpOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value ICmpOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

IntegerAttr ICmpOpAdaptor::predicate() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("predicate").cast<IntegerAttr>();
  return attr;
}

LogicalResult ICmpOpAdaptor::verify(Location loc) {
  {
  auto tblgen_predicate = odsAttrs.get("predicate");
  if (!tblgen_predicate) return emitError(loc, "'llvm.icmp' op ""requires attribute 'predicate'");
    if (!((((tblgen_predicate.isa<IntegerAttr>())) && ((tblgen_predicate.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_predicate.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_predicate.cast<IntegerAttr>().getInt() == 9))))) return emitError(loc, "'llvm.icmp' op ""attribute 'predicate' failed to satisfy constraint: llvm.icmp comparison predicate");
  }
  return success();
}

StringRef ICmpOp::getOperationName() {
  return "llvm.icmp";
}

std::pair<unsigned, unsigned> ICmpOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ICmpOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ICmpOp::lhs() {
  return *getODSOperands(0).begin();
}

Value ICmpOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ICmpOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ICmpOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ICmpOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ICmpOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ICmpOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr ICmpOp::predicateAttr() {
  return this->getAttr("predicate").cast<IntegerAttr>();
}

::mlir::LLVM::ICmpPredicate ICmpOp::predicate() {
  auto attr = predicateAttr();
  return static_cast<::mlir::LLVM::ICmpPredicate>(attr.getInt());
}

void ICmpOp::predicateAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("predicate", attr);
}

void ICmpOp::build(OpBuilder &b, OperationState &result, ICmpPredicate predicate, Value lhs, Value rhs) {
      LLVMDialect *dialect = &lhs.getType().cast<LLVMType>().getDialect();
      build(b, result, LLVMType::getInt1Ty(dialect),
            b.getI64IntegerAttr(static_cast<int64_t>(predicate)), lhs, rhs);
    
}

void ICmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  odsState.addTypes(res);
}

void ICmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", predicate);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ICmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  odsState.addTypes(res);
}

void ICmpOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("predicate", odsBuilder.getI64IntegerAttr(static_cast<int64_t>(predicate)));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ICmpOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ICmpOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseCmpOp<ICmpPredicate>(parser, result);
}

void ICmpOp::print(OpAsmPrinter &p) {
  printICmpOp(p, *this);
}

LogicalResult ICmpOp::verify() {
  if (failed(ICmpOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void ICmpOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::InsertElementOp definitions
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

Value InsertElementOpAdaptor::vector() {
  return *getODSOperands(0).begin();
}

Value InsertElementOpAdaptor::value() {
  return *getODSOperands(1).begin();
}

Value InsertElementOpAdaptor::position() {
  return *getODSOperands(2).begin();
}

LogicalResult InsertElementOpAdaptor::verify(Location loc) {
  return success();
}

StringRef InsertElementOp::getOperationName() {
  return "llvm.insertelement";
}

std::pair<unsigned, unsigned> InsertElementOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range InsertElementOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value InsertElementOp::vector() {
  return *getODSOperands(0).begin();
}

Value InsertElementOp::value() {
  return *getODSOperands(1).begin();
}

Value InsertElementOp::position() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange InsertElementOp::vectorMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertElementOp::valueMutable() {
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

Value InsertElementOp::res() {
  return *getODSResults(0).begin();
}

void InsertElementOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void InsertElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value vector, Value value, Value position) {
  odsState.addOperands(vector);
  odsState.addOperands(value);
  odsState.addOperands(position);
  odsState.addTypes(res);
}

void InsertElementOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value value, Value position) {
  odsState.addOperands(vector);
  odsState.addOperands(value);
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

ParseResult InsertElementOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseInsertElementOp(parser, result);
}

void InsertElementOp::print(OpAsmPrinter &p) {
  printInsertElementOp(p, *this);
}

LogicalResult InsertElementOp::verify() {
  if (failed(InsertElementOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void InsertElementOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::InsertValueOp definitions
//===----------------------------------------------------------------------===//

InsertValueOpAdaptor::InsertValueOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

InsertValueOpAdaptor::InsertValueOpAdaptor(InsertValueOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InsertValueOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange InsertValueOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value InsertValueOpAdaptor::container() {
  return *getODSOperands(0).begin();
}

Value InsertValueOpAdaptor::value() {
  return *getODSOperands(1).begin();
}

ArrayAttr InsertValueOpAdaptor::position() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("position").cast<ArrayAttr>();
  return attr;
}

LogicalResult InsertValueOpAdaptor::verify(Location loc) {
  {
  auto tblgen_position = odsAttrs.get("position");
  if (!tblgen_position) return emitError(loc, "'llvm.insertvalue' op ""requires attribute 'position'");
    if (!((tblgen_position.isa<ArrayAttr>()))) return emitError(loc, "'llvm.insertvalue' op ""attribute 'position' failed to satisfy constraint: array attribute");
  }
  return success();
}

StringRef InsertValueOp::getOperationName() {
  return "llvm.insertvalue";
}

std::pair<unsigned, unsigned> InsertValueOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range InsertValueOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value InsertValueOp::container() {
  return *getODSOperands(0).begin();
}

Value InsertValueOp::value() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange InsertValueOp::containerMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange InsertValueOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> InsertValueOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range InsertValueOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value InsertValueOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr InsertValueOp::positionAttr() {
  return this->getAttr("position").cast<ArrayAttr>();
}

ArrayAttr InsertValueOp::position() {
  auto attr = positionAttr();
  return attr;
}

void InsertValueOp::positionAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("position", attr);
}

void InsertValueOp::build(OpBuilder &b, OperationState &result, Value container, Value value, ArrayAttr position) {
      build(b, result, container.getType(), container, value, position);
    
}

void InsertValueOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value container, Value value, ArrayAttr position) {
  odsState.addOperands(container);
  odsState.addOperands(value);
  odsState.addAttribute("position", position);
  odsState.addTypes(res);
}

void InsertValueOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value container, Value value, ArrayAttr position) {
  odsState.addOperands(container);
  odsState.addOperands(value);
  odsState.addAttribute("position", position);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void InsertValueOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult InsertValueOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseInsertValueOp(parser, result);
}

void InsertValueOp::print(OpAsmPrinter &p) {
  printInsertValueOp(p, *this);
}

LogicalResult InsertValueOp::verify() {
  if (failed(InsertValueOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void InsertValueOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::IntToPtrOp definitions
//===----------------------------------------------------------------------===//

IntToPtrOpAdaptor::IntToPtrOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

IntToPtrOpAdaptor::IntToPtrOpAdaptor(IntToPtrOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> IntToPtrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange IntToPtrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value IntToPtrOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult IntToPtrOpAdaptor::verify(Location loc) {
  return success();
}

StringRef IntToPtrOp::getOperationName() {
  return "llvm.inttoptr";
}

std::pair<unsigned, unsigned> IntToPtrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range IntToPtrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value IntToPtrOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange IntToPtrOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> IntToPtrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range IntToPtrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value IntToPtrOp::res() {
  return *getODSResults(0).begin();
}

void IntToPtrOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void IntToPtrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void IntToPtrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void IntToPtrOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult IntToPtrOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void IntToPtrOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult IntToPtrOp::verify() {
  if (failed(IntToPtrOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void IntToPtrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::InvokeOp definitions
//===----------------------------------------------------------------------===//

InvokeOpAdaptor::InvokeOpAdaptor(ValueRange values, DictionaryAttr attrs)  : odsOperands(values), odsAttrs(attrs) {

}

InvokeOpAdaptor::InvokeOpAdaptor(InvokeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> InvokeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

ValueRange InvokeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange InvokeOpAdaptor::operands() {
  return getODSOperands(0);
}

ValueRange InvokeOpAdaptor::normalDestOperands() {
  return getODSOperands(1);
}

ValueRange InvokeOpAdaptor::unwindDestOperands() {
  return getODSOperands(2);
}

FlatSymbolRefAttr InvokeOpAdaptor::callee() {
  assert(odsAttrs && "no attributes when constructing adapter");
  FlatSymbolRefAttr attr = odsAttrs.get("callee").dyn_cast_or_null<FlatSymbolRefAttr>();
  return attr;
}

LogicalResult InvokeOpAdaptor::verify(Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
    if (numElements != 3)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 3 elements");
  }
    {
  auto tblgen_callee = odsAttrs.get("callee");
  if (tblgen_callee) {
    if (!((tblgen_callee.isa<FlatSymbolRefAttr>()))) return emitError(loc, "'llvm.invoke' op ""attribute 'callee' failed to satisfy constraint: flat symbol reference attribute");
  }
  }
  return success();
}

StringRef InvokeOp::getOperationName() {
  return "llvm.invoke";
}

std::pair<unsigned, unsigned> InvokeOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

Operation::operand_range InvokeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range InvokeOp::operands() {
  return getODSOperands(0);
}

Operation::operand_range InvokeOp::normalDestOperands() {
  return getODSOperands(1);
}

Operation::operand_range InvokeOp::unwindDestOperands() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange InvokeOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange InvokeOp::normalDestOperandsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange InvokeOp::unwindDestOperandsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> InvokeOp::getODSResultIndexAndLength(unsigned index) {
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

Operation::result_range InvokeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Block *InvokeOp::normalDest() {
  return this->getOperation()->getSuccessor(0);
}

Block *InvokeOp::unwindDest() {
  return this->getOperation()->getSuccessor(1);
}

FlatSymbolRefAttr InvokeOp::calleeAttr() {
  return this->getAttr("callee").dyn_cast_or_null<FlatSymbolRefAttr>();
}

Optional< StringRef > InvokeOp::callee() {
  auto attr = calleeAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void InvokeOp::calleeAttr(FlatSymbolRefAttr attr) {
  this->getOperation()->setAttr("callee", attr);
}

void InvokeOp::build(OpBuilder &b, OperationState &result, ArrayRef<Type> tys, FlatSymbolRefAttr callee, ValueRange ops, Block* normal, ValueRange normalOps, Block* unwind, ValueRange unwindOps) {
      result.addAttribute("callee", callee);
      build(b, result, tys, ops, normal, normalOps, unwind, unwindOps);
    
}

void InvokeOp::build(OpBuilder &b, OperationState &result, ArrayRef<Type> tys, ValueRange ops, Block* normal, ValueRange normalOps, Block* unwind, ValueRange unwindOps) {
      build(b, result, tys, /*callee=*/FlatSymbolRefAttr(), ops, normalOps,
            unwindOps, normal, unwind);
    
}

void InvokeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, /*optional*/FlatSymbolRefAttr callee, ValueRange operands, ValueRange normalDestOperands, ValueRange unwindDestOperands, Block *normalDest, Block *unwindDest) {
  odsState.addOperands(operands);
  odsState.addOperands(normalDestOperands);
  odsState.addOperands(unwindDestOperands);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({static_cast<int32_t>(operands.size()), static_cast<int32_t>(normalDestOperands.size()), static_cast<int32_t>(unwindDestOperands.size())}));
  if (callee) {
  odsState.addAttribute("callee", callee);
  }
  odsState.addSuccessors(normalDest);
  odsState.addSuccessors(unwindDest);
  odsState.addTypes(resultType0);
}

void InvokeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

ParseResult InvokeOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseInvokeOp(parser, result);
}

void InvokeOp::print(OpAsmPrinter &p) {
  printInvokeOp(p, *this);
}

LogicalResult InvokeOp::verify() {
  if (failed(InvokeOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
{
    unsigned index = 0; (void)index;
  }
  return ::verify(*this);
}




//===----------------------------------------------------------------------===//
// LLVM::LLVMFuncOp definitions
//===----------------------------------------------------------------------===//

LLVMFuncOpAdaptor::LLVMFuncOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LLVMFuncOpAdaptor::LLVMFuncOpAdaptor(LLVMFuncOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LLVMFuncOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange LLVMFuncOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

IntegerAttr LLVMFuncOpAdaptor::linkage() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("linkage").dyn_cast_or_null<IntegerAttr>();
  if (!attr)
    attr = mlir::Builder(odsAttrs.getContext()).getI64IntegerAttr(static_cast<int64_t>(Linkage::External));
  return attr;
}

FlatSymbolRefAttr LLVMFuncOpAdaptor::personality() {
  assert(odsAttrs && "no attributes when constructing adapter");
  FlatSymbolRefAttr attr = odsAttrs.get("personality").dyn_cast_or_null<FlatSymbolRefAttr>();
  return attr;
}

ArrayAttr LLVMFuncOpAdaptor::passthrough() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("passthrough").dyn_cast_or_null<ArrayAttr>();
  return attr;
}

LogicalResult LLVMFuncOpAdaptor::verify(Location loc) {
  {
  auto tblgen_linkage = odsAttrs.get("linkage");
  if (tblgen_linkage) {
    if (!((((tblgen_linkage.isa<IntegerAttr>())) && ((tblgen_linkage.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((tblgen_linkage.cast<IntegerAttr>().getInt() == 0)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 1)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 2)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 3)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 4)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 5)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 6)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 7)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 8)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 9)) || ((tblgen_linkage.cast<IntegerAttr>().getInt() == 10))))) return emitError(loc, "'llvm.func' op ""attribute 'linkage' failed to satisfy constraint: LLVM linkage types");
  }
  }
  {
  auto tblgen_personality = odsAttrs.get("personality");
  if (tblgen_personality) {
    if (!((tblgen_personality.isa<FlatSymbolRefAttr>()))) return emitError(loc, "'llvm.func' op ""attribute 'personality' failed to satisfy constraint: flat symbol reference attribute");
  }
  }
  {
  auto tblgen_passthrough = odsAttrs.get("passthrough");
  if (tblgen_passthrough) {
    if (!((tblgen_passthrough.isa<ArrayAttr>()))) return emitError(loc, "'llvm.func' op ""attribute 'passthrough' failed to satisfy constraint: array attribute");
  }
  }
  return success();
}

StringRef LLVMFuncOp::getOperationName() {
  return "llvm.func";
}

std::pair<unsigned, unsigned> LLVMFuncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range LLVMFuncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> LLVMFuncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LLVMFuncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &LLVMFuncOp::body() {
  return this->getOperation()->getRegion(0);
}

IntegerAttr LLVMFuncOp::linkageAttr() {
  return this->getAttr("linkage").dyn_cast_or_null<IntegerAttr>();
}

::mlir::LLVM::Linkage LLVMFuncOp::linkage() {
  auto attr = linkageAttr();
    if (!attr)
      return static_cast<::mlir::LLVM::Linkage>(mlir::Builder(this->getContext()).getI64IntegerAttr(static_cast<int64_t>(Linkage::External)).getInt());
  return static_cast<::mlir::LLVM::Linkage>(attr.getInt());
}

FlatSymbolRefAttr LLVMFuncOp::personalityAttr() {
  return this->getAttr("personality").dyn_cast_or_null<FlatSymbolRefAttr>();
}

Optional< StringRef > LLVMFuncOp::personality() {
  auto attr = personalityAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

ArrayAttr LLVMFuncOp::passthroughAttr() {
  return this->getAttr("passthrough").dyn_cast_or_null<ArrayAttr>();
}

Optional< ArrayAttr > LLVMFuncOp::passthrough() {
  auto attr = passthroughAttr();
  return attr ? Optional< ArrayAttr >(attr) : (llvm::None);
}

void LLVMFuncOp::linkageAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("linkage", attr);
}

void LLVMFuncOp::personalityAttr(FlatSymbolRefAttr attr) {
  this->getOperation()->setAttr("personality", attr);
}

void LLVMFuncOp::passthroughAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("passthrough", attr);
}



ParseResult LLVMFuncOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLLVMFuncOp(parser, result);
}

void LLVMFuncOp::print(OpAsmPrinter &p) {
  printLLVMFuncOp(p, *this);
}

LogicalResult LLVMFuncOp::verify() {
  if (failed(LLVMFuncOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
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
// LLVM::LShrOp definitions
//===----------------------------------------------------------------------===//

LShrOpAdaptor::LShrOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LShrOpAdaptor::LShrOpAdaptor(LShrOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LShrOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange LShrOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value LShrOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value LShrOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult LShrOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LShrOp::getOperationName() {
  return "llvm.lshr";
}

std::pair<unsigned, unsigned> LShrOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range LShrOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value LShrOp::lhs() {
  return *getODSOperands(0).begin();
}

Value LShrOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange LShrOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LShrOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LShrOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LShrOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value LShrOp::res() {
  return *getODSResults(0).begin();
}

void LShrOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void LShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void LShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LShrOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void LShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void LShrOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult LShrOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void LShrOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult LShrOp::verify() {
  if (failed(LShrOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void LShrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::LandingpadOp definitions
//===----------------------------------------------------------------------===//

LandingpadOpAdaptor::LandingpadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LandingpadOpAdaptor::LandingpadOpAdaptor(LandingpadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LandingpadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange LandingpadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

UnitAttr LandingpadOpAdaptor::cleanup() {
  assert(odsAttrs && "no attributes when constructing adapter");
  UnitAttr attr = odsAttrs.get("cleanup").dyn_cast_or_null<UnitAttr>();
  return attr;
}

LogicalResult LandingpadOpAdaptor::verify(Location loc) {
  {
  auto tblgen_cleanup = odsAttrs.get("cleanup");
  if (tblgen_cleanup) {
    if (!((tblgen_cleanup.isa<UnitAttr>()))) return emitError(loc, "'llvm.landingpad' op ""attribute 'cleanup' failed to satisfy constraint: unit attribute");
  }
  }
  return success();
}

StringRef LandingpadOp::getOperationName() {
  return "llvm.landingpad";
}

std::pair<unsigned, unsigned> LandingpadOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range LandingpadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> LandingpadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LandingpadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value LandingpadOp::res() {
  return *getODSResults(0).begin();
}

UnitAttr LandingpadOp::cleanupAttr() {
  return this->getAttr("cleanup").dyn_cast_or_null<UnitAttr>();
}

bool LandingpadOp::cleanup() {
  auto attr = cleanupAttr();
  return attr != nullptr;
}

void LandingpadOp::cleanupAttr(UnitAttr attr) {
  this->getOperation()->setAttr("cleanup", attr);
}

void LandingpadOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void LandingpadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, /*optional*/UnitAttr cleanup, ValueRange odsArg_0) {
  odsState.addOperands(odsArg_0);
  if (cleanup) {
  odsState.addAttribute("cleanup", cleanup);
  }
  odsState.addTypes(res);
}

void LandingpadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, /*optional*/UnitAttr cleanup, ValueRange odsArg_0) {
  odsState.addOperands(odsArg_0);
  if (cleanup) {
  odsState.addAttribute("cleanup", cleanup);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LandingpadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, /*optional*/bool cleanup, ValueRange odsArg_0) {
  odsState.addOperands(odsArg_0);
  if (cleanup) {
  odsState.addAttribute("cleanup", odsBuilder.getUnitAttr());
  }
  odsState.addTypes(res);
}

void LandingpadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, /*optional*/bool cleanup, ValueRange odsArg_0) {
  odsState.addOperands(odsArg_0);
  if (cleanup) {
  odsState.addAttribute("cleanup", odsBuilder.getUnitAttr());
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LandingpadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult LandingpadOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLandingpadOp(parser, result);
}

void LandingpadOp::print(OpAsmPrinter &p) {
  printLandingpadOp(p, *this);
}

LogicalResult LandingpadOp::verify() {
  if (failed(LandingpadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::LoadOp definitions
//===----------------------------------------------------------------------===//

LoadOpAdaptor::LoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LoadOpAdaptor::LoadOpAdaptor(LoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange LoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value LoadOpAdaptor::addr() {
  return *getODSOperands(0).begin();
}

LogicalResult LoadOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LoadOp::getOperationName() {
  return "llvm.load";
}

std::pair<unsigned, unsigned> LoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range LoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value LoadOp::addr() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange LoadOp::addrMutable() {
  auto range = getODSOperandIndexAndLength(0);
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

Value LoadOp::res() {
  return *getODSResults(0).begin();
}

void LoadOp::build(OpBuilder &b, OperationState &result, Value addr) {
      auto type = addr.getType().cast<LLVM::LLVMType>().getPointerElementTy();
      build(b, result, type, addr);
    
}

void LoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value addr) {
  odsState.addOperands(addr);
  odsState.addTypes(res);
}

void LoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value addr) {
  odsState.addOperands(addr);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void LoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult LoadOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLoadOp(parser, result);
}

void LoadOp::print(OpAsmPrinter &p) {
  printLoadOp(p, *this);
}

LogicalResult LoadOp::verify() {
  if (failed(LoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::Log10Op definitions
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

Value Log10OpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult Log10OpAdaptor::verify(Location loc) {
  return success();
}

StringRef Log10Op::getOperationName() {
  return "llvm.intr.log10";
}

std::pair<unsigned, unsigned> Log10Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Log10Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value Log10Op::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange Log10Op::inMutable() {
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

Value Log10Op::res() {
  return *getODSResults(0).begin();
}

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void Log10Op::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult Log10Op::verify() {
  if (failed(Log10OpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void Log10Op::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::Log2Op definitions
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

Value Log2OpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult Log2OpAdaptor::verify(Location loc) {
  return success();
}

StringRef Log2Op::getOperationName() {
  return "llvm.intr.log2";
}

std::pair<unsigned, unsigned> Log2Op::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Log2Op::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value Log2Op::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange Log2Op::inMutable() {
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

Value Log2Op::res() {
  return *getODSResults(0).begin();
}

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void Log2Op::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult Log2Op::verify() {
  if (failed(Log2OpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void Log2Op::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::LogOp definitions
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

Value LogOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult LogOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LogOp::getOperationName() {
  return "llvm.intr.log";
}

std::pair<unsigned, unsigned> LogOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range LogOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value LogOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange LogOp::inMutable() {
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

Value LogOp::res() {
  return *getODSResults(0).begin();
}

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void LogOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult LogOp::verify() {
  if (failed(LogOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void LogOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::MaskedLoadOp definitions
//===----------------------------------------------------------------------===//

MaskedLoadOpAdaptor::MaskedLoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MaskedLoadOpAdaptor::MaskedLoadOpAdaptor(MaskedLoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MaskedLoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange MaskedLoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MaskedLoadOpAdaptor::data() {
  return *getODSOperands(0).begin();
}

Value MaskedLoadOpAdaptor::mask() {
  return *getODSOperands(1).begin();
}

ValueRange MaskedLoadOpAdaptor::pass_thru() {
  return getODSOperands(2);
}

IntegerAttr MaskedLoadOpAdaptor::alignment() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("alignment").cast<IntegerAttr>();
  return attr;
}

LogicalResult MaskedLoadOpAdaptor::verify(Location loc) {
  {
  auto tblgen_alignment = odsAttrs.get("alignment");
  if (!tblgen_alignment) return emitError(loc, "'llvm.intr.masked.load' op ""requires attribute 'alignment'");
    if (!(((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.masked.load' op ""attribute 'alignment' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef MaskedLoadOp::getOperationName() {
  return "llvm.intr.masked.load";
}

std::pair<unsigned, unsigned> MaskedLoadOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range MaskedLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MaskedLoadOp::data() {
  return *getODSOperands(0).begin();
}

Value MaskedLoadOp::mask() {
  return *getODSOperands(1).begin();
}

Operation::operand_range MaskedLoadOp::pass_thru() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange MaskedLoadOp::dataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskedLoadOp::maskMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskedLoadOp::pass_thruMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MaskedLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MaskedLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MaskedLoadOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr MaskedLoadOp::alignmentAttr() {
  return this->getAttr("alignment").cast<IntegerAttr>();
}

APInt MaskedLoadOp::alignment() {
  auto attr = alignmentAttr();
  return attr.getValue();
}

void MaskedLoadOp::alignmentAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("alignment", attr);
}

void MaskedLoadOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MaskedLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value mask, ValueRange pass_thru, IntegerAttr alignment) {
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  odsState.addAttribute("alignment", alignment);
  odsState.addTypes(res);
}

void MaskedLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value mask, ValueRange pass_thru, IntegerAttr alignment) {
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  odsState.addAttribute("alignment", alignment);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value mask, ValueRange pass_thru, APInt alignment) {
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  odsState.addAttribute("alignment", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), alignment));
  odsState.addTypes(res);
}

void MaskedLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value mask, ValueRange pass_thru, APInt alignment) {
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addOperands(pass_thru);
  odsState.addAttribute("alignment", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), alignment));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedLoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() >= 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MaskedLoadOp::verify() {
  if (failed(MaskedLoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult MaskedLoadOp::parse(OpAsmParser &parser, OperationState &result) {
  ArrayRef<Type> allOperandTypes;
  ArrayRef<Type> allResultTypes;
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(allOperands, allOperandTypes, allOperandLoc, result.operands))
    return failure();
  return success();
}

void MaskedLoadOp::print(OpAsmPrinter &p) {
  p << "llvm.intr.masked.load";
  p << " ";
  p << getOperation()->getOperands();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}


//===----------------------------------------------------------------------===//
// LLVM::MaskedStoreOp definitions
//===----------------------------------------------------------------------===//

MaskedStoreOpAdaptor::MaskedStoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MaskedStoreOpAdaptor::MaskedStoreOpAdaptor(MaskedStoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MaskedStoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MaskedStoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MaskedStoreOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value MaskedStoreOpAdaptor::data() {
  return *getODSOperands(1).begin();
}

Value MaskedStoreOpAdaptor::mask() {
  return *getODSOperands(2).begin();
}

IntegerAttr MaskedStoreOpAdaptor::alignment() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("alignment").cast<IntegerAttr>();
  return attr;
}

LogicalResult MaskedStoreOpAdaptor::verify(Location loc) {
  {
  auto tblgen_alignment = odsAttrs.get("alignment");
  if (!tblgen_alignment) return emitError(loc, "'llvm.intr.masked.store' op ""requires attribute 'alignment'");
    if (!(((tblgen_alignment.isa<IntegerAttr>())) && ((tblgen_alignment.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.masked.store' op ""attribute 'alignment' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef MaskedStoreOp::getOperationName() {
  return "llvm.intr.masked.store";
}

std::pair<unsigned, unsigned> MaskedStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MaskedStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MaskedStoreOp::value() {
  return *getODSOperands(0).begin();
}

Value MaskedStoreOp::data() {
  return *getODSOperands(1).begin();
}

Value MaskedStoreOp::mask() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange MaskedStoreOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskedStoreOp::dataMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MaskedStoreOp::maskMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MaskedStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MaskedStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

IntegerAttr MaskedStoreOp::alignmentAttr() {
  return this->getAttr("alignment").cast<IntegerAttr>();
}

APInt MaskedStoreOp::alignment() {
  auto attr = alignmentAttr();
  return attr.getValue();
}

void MaskedStoreOp::alignmentAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("alignment", attr);
}

void MaskedStoreOp::build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    auto llvmType = resultType.dyn_cast<LLVM::LLVMType>(); (void)llvmType;
    assert(llvmType && "result must be an LLVM type");
    assert(llvmType.getUnderlyingType() &&
            llvmType.getUnderlyingType()->isVoidTy() &&
            "for zero-result operands, only 'void' is accepted as result type");
    build(builder, result, operands, attributes);
  
}

void MaskedStoreOp::build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MaskedStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value data, Value mask, IntegerAttr alignment) {
  odsState.addOperands(value);
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addAttribute("alignment", alignment);
}

void MaskedStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value data, Value mask, IntegerAttr alignment) {
  odsState.addOperands(value);
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addAttribute("alignment", alignment);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value data, Value mask, APInt alignment) {
  odsState.addOperands(value);
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addAttribute("alignment", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), alignment));
}

void MaskedStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value data, Value mask, APInt alignment) {
  odsState.addOperands(value);
  odsState.addOperands(data);
  odsState.addOperands(mask);
  odsState.addAttribute("alignment", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), alignment));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MaskedStoreOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MaskedStoreOp::verify() {
  if (failed(MaskedStoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult MaskedStoreOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType valueRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> valueOperands(valueRawOperands);  llvm::SMLoc valueOperandsLoc = parser.getCurrentLocation();
  (void)valueOperandsLoc;
  OpAsmParser::OperandType dataRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> dataOperands(dataRawOperands);  llvm::SMLoc dataOperandsLoc = parser.getCurrentLocation();
  (void)dataOperandsLoc;
  OpAsmParser::OperandType maskRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> maskOperands(maskRawOperands);  llvm::SMLoc maskOperandsLoc = parser.getCurrentLocation();
  (void)maskOperandsLoc;
  Type valueRawTypes[1];
  ArrayRef<Type> valueTypes(valueRawTypes);
  Type maskRawTypes[1];
  ArrayRef<Type> maskTypes(maskRawTypes);
  Type dataRawTypes[1];
  ArrayRef<Type> dataTypes(dataRawTypes);

  if (parser.parseOperand(valueRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(dataRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(maskRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(valueRawTypes[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseType(maskRawTypes[0]))
    return failure();
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseType(dataRawTypes[0]))
    return failure();
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(dataOperands, dataTypes, dataOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(maskOperands, maskTypes, maskOperandsLoc, result.operands))
    return failure();
  return success();
}

void MaskedStoreOp::print(OpAsmPrinter &p) {
  p << "llvm.intr.masked.store";
  p << " ";
  p << value();
  p << ",";
  p << " ";
  p << data();
  p << ",";
  p << " ";
  p << mask();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(value().getType());
  p << ",";
  p << " ";
  p << ArrayRef<Type>(mask().getType());
  p << " " << "into";
  p << " ";
  p << ArrayRef<Type>(data().getType());
}


//===----------------------------------------------------------------------===//
// LLVM::MatrixColumnMajorLoadOp definitions
//===----------------------------------------------------------------------===//

MatrixColumnMajorLoadOpAdaptor::MatrixColumnMajorLoadOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatrixColumnMajorLoadOpAdaptor::MatrixColumnMajorLoadOpAdaptor(MatrixColumnMajorLoadOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatrixColumnMajorLoadOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MatrixColumnMajorLoadOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MatrixColumnMajorLoadOpAdaptor::data() {
  return *getODSOperands(0).begin();
}

Value MatrixColumnMajorLoadOpAdaptor::stride() {
  return *getODSOperands(1).begin();
}

IntegerAttr MatrixColumnMajorLoadOpAdaptor::isVolatile() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("isVolatile").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatrixColumnMajorLoadOpAdaptor::rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("rows").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatrixColumnMajorLoadOpAdaptor::columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("columns").cast<IntegerAttr>();
  return attr;
}

LogicalResult MatrixColumnMajorLoadOpAdaptor::verify(Location loc) {
  {
  auto tblgen_isVolatile = odsAttrs.get("isVolatile");
  if (!tblgen_isVolatile) return emitError(loc, "'llvm.intr.matrix.column.major.load' op ""requires attribute 'isVolatile'");
    if (!(((tblgen_isVolatile.isa<IntegerAttr>())) && ((tblgen_isVolatile.cast<IntegerAttr>().getType().isSignlessInteger(1))))) return emitError(loc, "'llvm.intr.matrix.column.major.load' op ""attribute 'isVolatile' failed to satisfy constraint: 1-bit signless integer attribute");
  }
  {
  auto tblgen_rows = odsAttrs.get("rows");
  if (!tblgen_rows) return emitError(loc, "'llvm.intr.matrix.column.major.load' op ""requires attribute 'rows'");
    if (!(((tblgen_rows.isa<IntegerAttr>())) && ((tblgen_rows.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.column.major.load' op ""attribute 'rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_columns = odsAttrs.get("columns");
  if (!tblgen_columns) return emitError(loc, "'llvm.intr.matrix.column.major.load' op ""requires attribute 'columns'");
    if (!(((tblgen_columns.isa<IntegerAttr>())) && ((tblgen_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.column.major.load' op ""attribute 'columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef MatrixColumnMajorLoadOp::getOperationName() {
  return "llvm.intr.matrix.column.major.load";
}

std::pair<unsigned, unsigned> MatrixColumnMajorLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MatrixColumnMajorLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MatrixColumnMajorLoadOp::data() {
  return *getODSOperands(0).begin();
}

Value MatrixColumnMajorLoadOp::stride() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MatrixColumnMajorLoadOp::dataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MatrixColumnMajorLoadOp::strideMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatrixColumnMajorLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MatrixColumnMajorLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MatrixColumnMajorLoadOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr MatrixColumnMajorLoadOp::isVolatileAttr() {
  return this->getAttr("isVolatile").cast<IntegerAttr>();
}

APInt MatrixColumnMajorLoadOp::isVolatile() {
  auto attr = isVolatileAttr();
  return attr.getValue();
}

IntegerAttr MatrixColumnMajorLoadOp::rowsAttr() {
  return this->getAttr("rows").cast<IntegerAttr>();
}

APInt MatrixColumnMajorLoadOp::rows() {
  auto attr = rowsAttr();
  return attr.getValue();
}

IntegerAttr MatrixColumnMajorLoadOp::columnsAttr() {
  return this->getAttr("columns").cast<IntegerAttr>();
}

APInt MatrixColumnMajorLoadOp::columns() {
  auto attr = columnsAttr();
  return attr.getValue();
}

void MatrixColumnMajorLoadOp::isVolatileAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("isVolatile", attr);
}

void MatrixColumnMajorLoadOp::rowsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("rows", attr);
}

void MatrixColumnMajorLoadOp::columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("columns", attr);
}

void MatrixColumnMajorLoadOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MatrixColumnMajorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", isVolatile);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  odsState.addTypes(res);
}

void MatrixColumnMajorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", isVolatile);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixColumnMajorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns) {
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(1), isVolatile));
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  odsState.addTypes(res);
}

void MatrixColumnMajorLoadOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns) {
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(1), isVolatile));
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixColumnMajorLoadOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MatrixColumnMajorLoadOp::verify() {
  if (failed(MatrixColumnMajorLoadOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult MatrixColumnMajorLoadOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType dataRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> dataOperands(dataRawOperands);  llvm::SMLoc dataOperandsLoc = parser.getCurrentLocation();
  (void)dataOperandsLoc;
  OpAsmParser::OperandType strideRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> strideOperands(strideRawOperands);  llvm::SMLoc strideOperandsLoc = parser.getCurrentLocation();
  (void)strideOperandsLoc;
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  Type dataRawTypes[1];
  ArrayRef<Type> dataTypes(dataRawTypes);
  Type strideRawTypes[1];
  ArrayRef<Type> strideTypes(strideRawTypes);

  if (parser.parseOperand(dataRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();
  if (parser.parseLess())
    return failure();
  if (parser.parseKeyword("stride"))
    return failure();
  if (parser.parseEqual())
    return failure();

  if (parser.parseOperand(strideRawOperands[0]))
    return failure();
  if (parser.parseGreater())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  if (parser.parseKeyword("from"))
    return failure();

  if (parser.parseType(dataRawTypes[0]))
    return failure();
  if (parser.parseKeyword("stride"))
    return failure();

  if (parser.parseType(strideRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(dataOperands, dataTypes, dataOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(strideOperands, strideTypes, strideOperandsLoc, result.operands))
    return failure();
  return success();
}

void MatrixColumnMajorLoadOp::print(OpAsmPrinter &p) {
  p << "llvm.intr.matrix.column.major.load";
  p << " ";
  p << data();
  p << ",";
  p << " " << "<";
  p << "stride";
  p << " " << "=";
  p << " ";
  p << stride();
  p << ">";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
  p << " " << "from";
  p << " ";
  p << ArrayRef<Type>(data().getType());
  p << " " << "stride";
  p << " ";
  p << ArrayRef<Type>(stride().getType());
}


//===----------------------------------------------------------------------===//
// LLVM::MatrixColumnMajorStoreOp definitions
//===----------------------------------------------------------------------===//

MatrixColumnMajorStoreOpAdaptor::MatrixColumnMajorStoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatrixColumnMajorStoreOpAdaptor::MatrixColumnMajorStoreOpAdaptor(MatrixColumnMajorStoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatrixColumnMajorStoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MatrixColumnMajorStoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MatrixColumnMajorStoreOpAdaptor::matrix() {
  return *getODSOperands(0).begin();
}

Value MatrixColumnMajorStoreOpAdaptor::data() {
  return *getODSOperands(1).begin();
}

Value MatrixColumnMajorStoreOpAdaptor::stride() {
  return *getODSOperands(2).begin();
}

IntegerAttr MatrixColumnMajorStoreOpAdaptor::isVolatile() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("isVolatile").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatrixColumnMajorStoreOpAdaptor::rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("rows").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatrixColumnMajorStoreOpAdaptor::columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("columns").cast<IntegerAttr>();
  return attr;
}

LogicalResult MatrixColumnMajorStoreOpAdaptor::verify(Location loc) {
  {
  auto tblgen_isVolatile = odsAttrs.get("isVolatile");
  if (!tblgen_isVolatile) return emitError(loc, "'llvm.intr.matrix.column.major.store' op ""requires attribute 'isVolatile'");
    if (!(((tblgen_isVolatile.isa<IntegerAttr>())) && ((tblgen_isVolatile.cast<IntegerAttr>().getType().isSignlessInteger(1))))) return emitError(loc, "'llvm.intr.matrix.column.major.store' op ""attribute 'isVolatile' failed to satisfy constraint: 1-bit signless integer attribute");
  }
  {
  auto tblgen_rows = odsAttrs.get("rows");
  if (!tblgen_rows) return emitError(loc, "'llvm.intr.matrix.column.major.store' op ""requires attribute 'rows'");
    if (!(((tblgen_rows.isa<IntegerAttr>())) && ((tblgen_rows.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.column.major.store' op ""attribute 'rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_columns = odsAttrs.get("columns");
  if (!tblgen_columns) return emitError(loc, "'llvm.intr.matrix.column.major.store' op ""requires attribute 'columns'");
    if (!(((tblgen_columns.isa<IntegerAttr>())) && ((tblgen_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.column.major.store' op ""attribute 'columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef MatrixColumnMajorStoreOp::getOperationName() {
  return "llvm.intr.matrix.column.major.store";
}

std::pair<unsigned, unsigned> MatrixColumnMajorStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MatrixColumnMajorStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MatrixColumnMajorStoreOp::matrix() {
  return *getODSOperands(0).begin();
}

Value MatrixColumnMajorStoreOp::data() {
  return *getODSOperands(1).begin();
}

Value MatrixColumnMajorStoreOp::stride() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange MatrixColumnMajorStoreOp::matrixMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MatrixColumnMajorStoreOp::dataMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MatrixColumnMajorStoreOp::strideMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatrixColumnMajorStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MatrixColumnMajorStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

IntegerAttr MatrixColumnMajorStoreOp::isVolatileAttr() {
  return this->getAttr("isVolatile").cast<IntegerAttr>();
}

APInt MatrixColumnMajorStoreOp::isVolatile() {
  auto attr = isVolatileAttr();
  return attr.getValue();
}

IntegerAttr MatrixColumnMajorStoreOp::rowsAttr() {
  return this->getAttr("rows").cast<IntegerAttr>();
}

APInt MatrixColumnMajorStoreOp::rows() {
  auto attr = rowsAttr();
  return attr.getValue();
}

IntegerAttr MatrixColumnMajorStoreOp::columnsAttr() {
  return this->getAttr("columns").cast<IntegerAttr>();
}

APInt MatrixColumnMajorStoreOp::columns() {
  auto attr = columnsAttr();
  return attr.getValue();
}

void MatrixColumnMajorStoreOp::isVolatileAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("isVolatile", attr);
}

void MatrixColumnMajorStoreOp::rowsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("rows", attr);
}

void MatrixColumnMajorStoreOp::columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("columns", attr);
}

void MatrixColumnMajorStoreOp::build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    auto llvmType = resultType.dyn_cast<LLVM::LLVMType>(); (void)llvmType;
    assert(llvmType && "result must be an LLVM type");
    assert(llvmType.getUnderlyingType() &&
            llvmType.getUnderlyingType()->isVoidTy() &&
            "for zero-result operands, only 'void' is accepted as result type");
    build(builder, result, operands, attributes);
  
}

void MatrixColumnMajorStoreOp::build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MatrixColumnMajorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value matrix, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", isVolatile);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
}

void MatrixColumnMajorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", isVolatile);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixColumnMajorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value matrix, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns) {
  odsState.addOperands(matrix);
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(1), isVolatile));
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
}

void MatrixColumnMajorStoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns) {
  odsState.addOperands(matrix);
  odsState.addOperands(data);
  odsState.addOperands(stride);
  odsState.addAttribute("isVolatile", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(1), isVolatile));
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixColumnMajorStoreOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MatrixColumnMajorStoreOp::verify() {
  if (failed(MatrixColumnMajorStoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult MatrixColumnMajorStoreOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType matrixRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> matrixOperands(matrixRawOperands);  llvm::SMLoc matrixOperandsLoc = parser.getCurrentLocation();
  (void)matrixOperandsLoc;
  OpAsmParser::OperandType dataRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> dataOperands(dataRawOperands);  llvm::SMLoc dataOperandsLoc = parser.getCurrentLocation();
  (void)dataOperandsLoc;
  OpAsmParser::OperandType strideRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> strideOperands(strideRawOperands);  llvm::SMLoc strideOperandsLoc = parser.getCurrentLocation();
  (void)strideOperandsLoc;
  Type matrixRawTypes[1];
  ArrayRef<Type> matrixTypes(matrixRawTypes);
  Type dataRawTypes[1];
  ArrayRef<Type> dataTypes(dataRawTypes);
  Type strideRawTypes[1];
  ArrayRef<Type> strideTypes(strideRawTypes);

  if (parser.parseOperand(matrixRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseOperand(dataRawOperands[0]))
    return failure();
  if (parser.parseComma())
    return failure();
  if (parser.parseLess())
    return failure();
  if (parser.parseKeyword("stride"))
    return failure();
  if (parser.parseEqual())
    return failure();

  if (parser.parseOperand(strideRawOperands[0]))
    return failure();
  if (parser.parseGreater())
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(matrixRawTypes[0]))
    return failure();
  if (parser.parseKeyword("to"))
    return failure();

  if (parser.parseType(dataRawTypes[0]))
    return failure();
  if (parser.parseKeyword("stride"))
    return failure();

  if (parser.parseType(strideRawTypes[0]))
    return failure();
  if (parser.resolveOperands(matrixOperands, matrixTypes, matrixOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(dataOperands, dataTypes, dataOperandsLoc, result.operands))
    return failure();
  if (parser.resolveOperands(strideOperands, strideTypes, strideOperandsLoc, result.operands))
    return failure();
  return success();
}

void MatrixColumnMajorStoreOp::print(OpAsmPrinter &p) {
  p << "llvm.intr.matrix.column.major.store";
  p << " ";
  p << matrix();
  p << ",";
  p << " ";
  p << data();
  p << ",";
  p << " " << "<";
  p << "stride";
  p << " " << "=";
  p << " ";
  p << stride();
  p << ">";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(matrix().getType());
  p << " " << "to";
  p << " ";
  p << ArrayRef<Type>(data().getType());
  p << " " << "stride";
  p << " ";
  p << ArrayRef<Type>(stride().getType());
}


//===----------------------------------------------------------------------===//
// LLVM::MatrixMultiplyOp definitions
//===----------------------------------------------------------------------===//

MatrixMultiplyOpAdaptor::MatrixMultiplyOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatrixMultiplyOpAdaptor::MatrixMultiplyOpAdaptor(MatrixMultiplyOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatrixMultiplyOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MatrixMultiplyOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MatrixMultiplyOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value MatrixMultiplyOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

IntegerAttr MatrixMultiplyOpAdaptor::lhs_rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("lhs_rows").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatrixMultiplyOpAdaptor::lhs_columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("lhs_columns").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatrixMultiplyOpAdaptor::rhs_columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("rhs_columns").cast<IntegerAttr>();
  return attr;
}

LogicalResult MatrixMultiplyOpAdaptor::verify(Location loc) {
  {
  auto tblgen_lhs_rows = odsAttrs.get("lhs_rows");
  if (!tblgen_lhs_rows) return emitError(loc, "'llvm.intr.matrix.multiply' op ""requires attribute 'lhs_rows'");
    if (!(((tblgen_lhs_rows.isa<IntegerAttr>())) && ((tblgen_lhs_rows.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.multiply' op ""attribute 'lhs_rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_lhs_columns = odsAttrs.get("lhs_columns");
  if (!tblgen_lhs_columns) return emitError(loc, "'llvm.intr.matrix.multiply' op ""requires attribute 'lhs_columns'");
    if (!(((tblgen_lhs_columns.isa<IntegerAttr>())) && ((tblgen_lhs_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.multiply' op ""attribute 'lhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_rhs_columns = odsAttrs.get("rhs_columns");
  if (!tblgen_rhs_columns) return emitError(loc, "'llvm.intr.matrix.multiply' op ""requires attribute 'rhs_columns'");
    if (!(((tblgen_rhs_columns.isa<IntegerAttr>())) && ((tblgen_rhs_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.multiply' op ""attribute 'rhs_columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef MatrixMultiplyOp::getOperationName() {
  return "llvm.intr.matrix.multiply";
}

std::pair<unsigned, unsigned> MatrixMultiplyOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MatrixMultiplyOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MatrixMultiplyOp::lhs() {
  return *getODSOperands(0).begin();
}

Value MatrixMultiplyOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange MatrixMultiplyOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange MatrixMultiplyOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatrixMultiplyOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MatrixMultiplyOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MatrixMultiplyOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr MatrixMultiplyOp::lhs_rowsAttr() {
  return this->getAttr("lhs_rows").cast<IntegerAttr>();
}

APInt MatrixMultiplyOp::lhs_rows() {
  auto attr = lhs_rowsAttr();
  return attr.getValue();
}

IntegerAttr MatrixMultiplyOp::lhs_columnsAttr() {
  return this->getAttr("lhs_columns").cast<IntegerAttr>();
}

APInt MatrixMultiplyOp::lhs_columns() {
  auto attr = lhs_columnsAttr();
  return attr.getValue();
}

IntegerAttr MatrixMultiplyOp::rhs_columnsAttr() {
  return this->getAttr("rhs_columns").cast<IntegerAttr>();
}

APInt MatrixMultiplyOp::rhs_columns() {
  auto attr = rhs_columnsAttr();
  return attr.getValue();
}

void MatrixMultiplyOp::lhs_rowsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("lhs_rows", attr);
}

void MatrixMultiplyOp::lhs_columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("lhs_columns", attr);
}

void MatrixMultiplyOp::rhs_columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("rhs_columns", attr);
}

void MatrixMultiplyOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MatrixMultiplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", lhs_rows);
  odsState.addAttribute("lhs_columns", lhs_columns);
  odsState.addAttribute("rhs_columns", rhs_columns);
  odsState.addTypes(res);
}

void MatrixMultiplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", lhs_rows);
  odsState.addAttribute("lhs_columns", lhs_columns);
  odsState.addAttribute("rhs_columns", rhs_columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixMultiplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows));
  odsState.addAttribute("lhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns));
  odsState.addAttribute("rhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns));
  odsState.addTypes(res);
}

void MatrixMultiplyOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addAttribute("lhs_rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_rows));
  odsState.addAttribute("lhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), lhs_columns));
  odsState.addAttribute("rhs_columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rhs_columns));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixMultiplyOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MatrixMultiplyOp::verify() {
  if (failed(MatrixMultiplyOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult MatrixMultiplyOp::parse(OpAsmParser &parser, OperationState &result) {
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

void MatrixMultiplyOp::print(OpAsmPrinter &p) {
  p << "llvm.intr.matrix.multiply";
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


//===----------------------------------------------------------------------===//
// LLVM::MatrixTransposeOp definitions
//===----------------------------------------------------------------------===//

MatrixTransposeOpAdaptor::MatrixTransposeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MatrixTransposeOpAdaptor::MatrixTransposeOpAdaptor(MatrixTransposeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MatrixTransposeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MatrixTransposeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value MatrixTransposeOpAdaptor::matrix() {
  return *getODSOperands(0).begin();
}

IntegerAttr MatrixTransposeOpAdaptor::rows() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("rows").cast<IntegerAttr>();
  return attr;
}

IntegerAttr MatrixTransposeOpAdaptor::columns() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("columns").cast<IntegerAttr>();
  return attr;
}

LogicalResult MatrixTransposeOpAdaptor::verify(Location loc) {
  {
  auto tblgen_rows = odsAttrs.get("rows");
  if (!tblgen_rows) return emitError(loc, "'llvm.intr.matrix.transpose' op ""requires attribute 'rows'");
    if (!(((tblgen_rows.isa<IntegerAttr>())) && ((tblgen_rows.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.transpose' op ""attribute 'rows' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  {
  auto tblgen_columns = odsAttrs.get("columns");
  if (!tblgen_columns) return emitError(loc, "'llvm.intr.matrix.transpose' op ""requires attribute 'columns'");
    if (!(((tblgen_columns.isa<IntegerAttr>())) && ((tblgen_columns.cast<IntegerAttr>().getType().isSignlessInteger(32))))) return emitError(loc, "'llvm.intr.matrix.transpose' op ""attribute 'columns' failed to satisfy constraint: 32-bit signless integer attribute");
  }
  return success();
}

StringRef MatrixTransposeOp::getOperationName() {
  return "llvm.intr.matrix.transpose";
}

std::pair<unsigned, unsigned> MatrixTransposeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MatrixTransposeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value MatrixTransposeOp::matrix() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange MatrixTransposeOp::matrixMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> MatrixTransposeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MatrixTransposeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value MatrixTransposeOp::res() {
  return *getODSResults(0).begin();
}

IntegerAttr MatrixTransposeOp::rowsAttr() {
  return this->getAttr("rows").cast<IntegerAttr>();
}

APInt MatrixTransposeOp::rows() {
  auto attr = rowsAttr();
  return attr.getValue();
}

IntegerAttr MatrixTransposeOp::columnsAttr() {
  return this->getAttr("columns").cast<IntegerAttr>();
}

APInt MatrixTransposeOp::columns() {
  auto attr = columnsAttr();
  return attr.getValue();
}

void MatrixTransposeOp::rowsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("rows", attr);
}

void MatrixTransposeOp::columnsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("columns", attr);
}

void MatrixTransposeOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MatrixTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  odsState.addTypes(res);
}

void MatrixTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, IntegerAttr rows, IntegerAttr columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", rows);
  odsState.addAttribute("columns", columns);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, APInt rows, APInt columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  odsState.addTypes(res);
}

void MatrixTransposeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, APInt rows, APInt columns) {
  odsState.addOperands(matrix);
  odsState.addAttribute("rows", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), rows));
  odsState.addAttribute("columns", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(32), columns));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MatrixTransposeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MatrixTransposeOp::verify() {
  if (failed(MatrixTransposeOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult MatrixTransposeOp::parse(OpAsmParser &parser, OperationState &result) {
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
  if (parser.parseKeyword("into"))
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(matrixOperands, matrixTypes, matrixOperandsLoc, result.operands))
    return failure();
  return success();
}

void MatrixTransposeOp::print(OpAsmPrinter &p) {
  p << "llvm.intr.matrix.transpose";
  p << " ";
  p << matrix();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(matrix().getType());
  p << " " << "into";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}


//===----------------------------------------------------------------------===//
// LLVM::MulOp definitions
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
  return "llvm.mul";
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

Value MulOp::res() {
  return *getODSResults(0).begin();
}

void MulOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void MulOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
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

ParseResult MulOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void MulOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult MulOp::verify() {
  if (failed(MulOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void MulOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::NullOp definitions
//===----------------------------------------------------------------------===//

NullOpAdaptor::NullOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

NullOpAdaptor::NullOpAdaptor(NullOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> NullOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange NullOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult NullOpAdaptor::verify(Location loc) {
  return success();
}

StringRef NullOp::getOperationName() {
  return "llvm.mlir.null";
}

std::pair<unsigned, unsigned> NullOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range NullOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> NullOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range NullOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value NullOp::res() {
  return *getODSResults(0).begin();
}

void NullOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void NullOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void NullOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NullOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult NullOp::verify() {
  if (failed(NullOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verify(*this);
}

ParseResult NullOp::parse(OpAsmParser &parser, OperationState &result) {
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

void NullOp::print(OpAsmPrinter &p) {
  p << "llvm.mlir.null";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void NullOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::OrOp definitions
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
  return "llvm.or";
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

Value OrOp::res() {
  return *getODSResults(0).begin();
}

void OrOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void OrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
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
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult OrOp::verify() {
  if (failed(OrOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void OrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::PowOp definitions
//===----------------------------------------------------------------------===//

PowOpAdaptor::PowOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PowOpAdaptor::PowOpAdaptor(PowOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PowOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange PowOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PowOpAdaptor::a() {
  return *getODSOperands(0).begin();
}

Value PowOpAdaptor::b() {
  return *getODSOperands(1).begin();
}

LogicalResult PowOpAdaptor::verify(Location loc) {
  return success();
}

StringRef PowOp::getOperationName() {
  return "llvm.intr.pow";
}

std::pair<unsigned, unsigned> PowOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range PowOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value PowOp::a() {
  return *getODSOperands(0).begin();
}

Value PowOp::b() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange PowOp::aMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange PowOp::bMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PowOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range PowOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value PowOp::res() {
  return *getODSResults(0).begin();
}

void PowOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes(res);
}

void PowOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PowOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void PowOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b) {
  odsState.addOperands(a);
  odsState.addOperands(b);
  odsState.addTypes({a.getType()});

}

void PowOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult PowOp::verify() {
  if (failed(PowOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void PowOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::Prefetch definitions
//===----------------------------------------------------------------------===//

PrefetchAdaptor::PrefetchAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PrefetchAdaptor::PrefetchAdaptor(Prefetch& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PrefetchAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange PrefetchAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PrefetchAdaptor::addr() {
  return *getODSOperands(0).begin();
}

Value PrefetchAdaptor::rw() {
  return *getODSOperands(1).begin();
}

Value PrefetchAdaptor::hint() {
  return *getODSOperands(2).begin();
}

Value PrefetchAdaptor::cache() {
  return *getODSOperands(3).begin();
}

LogicalResult PrefetchAdaptor::verify(Location loc) {
  return success();
}

StringRef Prefetch::getOperationName() {
  return "llvm.intr.prefetch";
}

std::pair<unsigned, unsigned> Prefetch::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range Prefetch::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value Prefetch::addr() {
  return *getODSOperands(0).begin();
}

Value Prefetch::rw() {
  return *getODSOperands(1).begin();
}

Value Prefetch::hint() {
  return *getODSOperands(2).begin();
}

Value Prefetch::cache() {
  return *getODSOperands(3).begin();
}

::mlir::MutableOperandRange Prefetch::addrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange Prefetch::rwMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange Prefetch::hintMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange Prefetch::cacheMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> Prefetch::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range Prefetch::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void Prefetch::build(OpBuilder &odsBuilder, OperationState &odsState, Value addr, Value rw, Value hint, Value cache) {
  odsState.addOperands(addr);
  odsState.addOperands(rw);
  odsState.addOperands(hint);
  odsState.addOperands(cache);
}

void Prefetch::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value addr, Value rw, Value hint, Value cache) {
  odsState.addOperands(addr);
  odsState.addOperands(rw);
  odsState.addOperands(hint);
  odsState.addOperands(cache);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void Prefetch::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 4u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult Prefetch::verify() {
  if (failed(PrefetchAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::PtrToIntOp definitions
//===----------------------------------------------------------------------===//

PtrToIntOpAdaptor::PtrToIntOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

PtrToIntOpAdaptor::PtrToIntOpAdaptor(PtrToIntOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> PtrToIntOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange PtrToIntOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value PtrToIntOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult PtrToIntOpAdaptor::verify(Location loc) {
  return success();
}

StringRef PtrToIntOp::getOperationName() {
  return "llvm.ptrtoint";
}

std::pair<unsigned, unsigned> PtrToIntOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range PtrToIntOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value PtrToIntOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange PtrToIntOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> PtrToIntOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range PtrToIntOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value PtrToIntOp::res() {
  return *getODSResults(0).begin();
}

void PtrToIntOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void PtrToIntOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void PtrToIntOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void PtrToIntOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult PtrToIntOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void PtrToIntOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult PtrToIntOp::verify() {
  if (failed(PtrToIntOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void PtrToIntOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ResumeOp definitions
//===----------------------------------------------------------------------===//

ResumeOpAdaptor::ResumeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ResumeOpAdaptor::ResumeOpAdaptor(ResumeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ResumeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ResumeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ResumeOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

LogicalResult ResumeOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ResumeOp::getOperationName() {
  return "llvm.resume";
}

std::pair<unsigned, unsigned> ResumeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ResumeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ResumeOp::value() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ResumeOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ResumeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ResumeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ResumeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value value) {
  odsState.addOperands(value);
}

void ResumeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value) {
  odsState.addOperands(value);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ResumeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ResumeOp::verify() {
  if (failed(ResumeOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  if (!isa_and_nonnull<LandingpadOp>(value().getDefiningOp()))
      return emitOpError("expects landingpad value as operand");
    // No check for personality of function - landingpad op verifies it.
    return success();
}

ParseResult ResumeOp::parse(OpAsmParser &parser, OperationState &result) {
  OpAsmParser::OperandType valueRawOperands[1];
  ArrayRef<OpAsmParser::OperandType> valueOperands(valueRawOperands);  llvm::SMLoc valueOperandsLoc = parser.getCurrentLocation();
  (void)valueOperandsLoc;
  Type valueRawTypes[1];
  ArrayRef<Type> valueTypes(valueRawTypes);

  if (parser.parseOperand(valueRawOperands[0]))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(valueRawTypes[0]))
    return failure();
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return failure();
  return success();
}

void ResumeOp::print(OpAsmPrinter &p) {
  p << "llvm.resume";
  p << " ";
  p << value();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(value().getType());
}


//===----------------------------------------------------------------------===//
// LLVM::ReturnOp definitions
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

ValueRange ReturnOpAdaptor::args() {
  return getODSOperands(0);
}

LogicalResult ReturnOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ReturnOp::getOperationName() {
  return "llvm.return";
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

Operation::operand_range ReturnOp::args() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ReturnOp::argsMutable() {
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

void ReturnOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange args) {
  odsState.addOperands(args);
}

void ReturnOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args) {
  odsState.addOperands(args);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReturnOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ReturnOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseReturnOp(parser, result);
}

void ReturnOp::print(OpAsmPrinter &p) {
  printReturnOp(p, *this);
}

LogicalResult ReturnOp::verify() {
  if (failed(ReturnOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  if (getNumOperands() > 1)
      return emitOpError("expects at most 1 operand");
    return success();
}

void ReturnOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::SDivOp definitions
//===----------------------------------------------------------------------===//

SDivOpAdaptor::SDivOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SDivOpAdaptor::SDivOpAdaptor(SDivOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SDivOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SDivOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SDivOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SDivOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SDivOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SDivOp::getOperationName() {
  return "llvm.sdiv";
}

std::pair<unsigned, unsigned> SDivOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SDivOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SDivOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SDivOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SDivOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SDivOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SDivOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SDivOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SDivOp::res() {
  return *getODSResults(0).begin();
}

void SDivOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void SDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SDivOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SDivOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult SDivOp::verify() {
  if (failed(SDivOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void SDivOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::SExtOp definitions
//===----------------------------------------------------------------------===//

SExtOpAdaptor::SExtOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SExtOpAdaptor::SExtOpAdaptor(SExtOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SExtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SExtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SExtOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult SExtOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SExtOp::getOperationName() {
  return "llvm.sext";
}

std::pair<unsigned, unsigned> SExtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SExtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SExtOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SExtOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SExtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SExtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SExtOp::res() {
  return *getODSResults(0).begin();
}

void SExtOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void SExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SExtOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult SExtOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void SExtOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult SExtOp::verify() {
  if (failed(SExtOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void SExtOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::SIToFPOp definitions
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

Value SIToFPOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult SIToFPOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SIToFPOp::getOperationName() {
  return "llvm.sitofp";
}

std::pair<unsigned, unsigned> SIToFPOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SIToFPOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SIToFPOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SIToFPOp::argMutable() {
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

Value SIToFPOp::res() {
  return *getODSResults(0).begin();
}

void SIToFPOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SIToFPOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void SIToFPOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
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
  return mlir::impl::parseCastOp(parser, result);
}

void SIToFPOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult SIToFPOp::verify() {
  if (failed(SIToFPOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void SIToFPOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::SRemOp definitions
//===----------------------------------------------------------------------===//

SRemOpAdaptor::SRemOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SRemOpAdaptor::SRemOpAdaptor(SRemOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SRemOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SRemOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SRemOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SRemOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SRemOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SRemOp::getOperationName() {
  return "llvm.srem";
}

std::pair<unsigned, unsigned> SRemOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SRemOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SRemOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SRemOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SRemOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SRemOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SRemOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SRemOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SRemOp::res() {
  return *getODSResults(0).begin();
}

void SRemOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void SRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SRemOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SRemOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SRemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SRemOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult SRemOp::verify() {
  if (failed(SRemOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void SRemOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::SelectOp definitions
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

Value SelectOpAdaptor::trueValue() {
  return *getODSOperands(1).begin();
}

Value SelectOpAdaptor::falseValue() {
  return *getODSOperands(2).begin();
}

LogicalResult SelectOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SelectOp::getOperationName() {
  return "llvm.select";
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

Value SelectOp::trueValue() {
  return *getODSOperands(1).begin();
}

Value SelectOp::falseValue() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange SelectOp::conditionMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectOp::trueValueMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SelectOp::falseValueMutable() {
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

Value SelectOp::res() {
  return *getODSResults(0).begin();
}

void SelectOp::build(OpBuilder &b, OperationState &result, Value condition, Value lhs, Value rhs) {
      build(b, result, lhs.getType(), condition, lhs, rhs);
    
}

void SelectOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value condition, Value trueValue, Value falseValue) {
  odsState.addOperands(condition);
  odsState.addOperands(trueValue);
  odsState.addOperands(falseValue);
  odsState.addTypes(res);
}

void SelectOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, Value trueValue, Value falseValue) {
  odsState.addOperands(condition);
  odsState.addOperands(trueValue);
  odsState.addOperands(falseValue);
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

LogicalResult SelectOp::verify() {
  if (failed(SelectOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  if (!((llvm::is_splat(llvm::makeArrayRef({(*this->getODSOperands(1).begin()).getType(), (*this->getODSOperands(2).begin()).getType(), (*this->getODSResults(0).begin()).getType()})))))
    return emitOpError("failed to verify that all of {trueValue, falseValue, res} have same type");
  return mlir::success();
}

ParseResult SelectOp::parse(OpAsmParser &parser, OperationState &result) {
  Type conditionRawTypes[1];
  ArrayRef<Type> conditionTypes(conditionRawTypes);
  Type resRawTypes[1];
  ArrayRef<Type> resTypes(resRawTypes);
  llvm::SMLoc allOperandLoc = parser.getCurrentLocation();
  SmallVector<OpAsmParser::OperandType, 4> allOperands;
  if (parser.parseOperandList(allOperands))
    return failure();
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(conditionRawTypes[0]))
    return failure();
  if (parser.parseComma())
    return failure();

  if (parser.parseType(resRawTypes[0]))
    return failure();
  result.addTypes(resTypes);
  if (parser.resolveOperands(allOperands, llvm::concat<const Type>(ArrayRef<Type>(conditionTypes), ArrayRef<Type>(resTypes), ArrayRef<Type>(resTypes)), allOperandLoc, result.operands))
    return failure();
  return success();
}

void SelectOp::print(OpAsmPrinter &p) {
  p << "llvm.select";
  p << " ";
  p << getOperation()->getOperands();
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(condition().getType());
  p << ",";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void SelectOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ShlOp definitions
//===----------------------------------------------------------------------===//

ShlOpAdaptor::ShlOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShlOpAdaptor::ShlOpAdaptor(ShlOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShlOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ShlOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ShlOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value ShlOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult ShlOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ShlOp::getOperationName() {
  return "llvm.shl";
}

std::pair<unsigned, unsigned> ShlOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShlOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShlOp::lhs() {
  return *getODSOperands(0).begin();
}

Value ShlOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ShlOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShlOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShlOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ShlOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ShlOp::res() {
  return *getODSResults(0).begin();
}

void ShlOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ShlOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void ShlOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShlOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShlOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void ShlOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult ShlOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void ShlOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult ShlOp::verify() {
  if (failed(ShlOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void ShlOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ShuffleVectorOp definitions
//===----------------------------------------------------------------------===//

ShuffleVectorOpAdaptor::ShuffleVectorOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ShuffleVectorOpAdaptor::ShuffleVectorOpAdaptor(ShuffleVectorOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ShuffleVectorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ShuffleVectorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ShuffleVectorOpAdaptor::v1() {
  return *getODSOperands(0).begin();
}

Value ShuffleVectorOpAdaptor::v2() {
  return *getODSOperands(1).begin();
}

ArrayAttr ShuffleVectorOpAdaptor::mask() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("mask").cast<ArrayAttr>();
  return attr;
}

LogicalResult ShuffleVectorOpAdaptor::verify(Location loc) {
  {
  auto tblgen_mask = odsAttrs.get("mask");
  if (!tblgen_mask) return emitError(loc, "'llvm.shufflevector' op ""requires attribute 'mask'");
    if (!((tblgen_mask.isa<ArrayAttr>()))) return emitError(loc, "'llvm.shufflevector' op ""attribute 'mask' failed to satisfy constraint: array attribute");
  }
  return success();
}

StringRef ShuffleVectorOp::getOperationName() {
  return "llvm.shufflevector";
}

std::pair<unsigned, unsigned> ShuffleVectorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShuffleVectorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShuffleVectorOp::v1() {
  return *getODSOperands(0).begin();
}

Value ShuffleVectorOp::v2() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange ShuffleVectorOp::v1Mutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShuffleVectorOp::v2Mutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ShuffleVectorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ShuffleVectorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ShuffleVectorOp::res() {
  return *getODSResults(0).begin();
}

ArrayAttr ShuffleVectorOp::maskAttr() {
  return this->getAttr("mask").cast<ArrayAttr>();
}

ArrayAttr ShuffleVectorOp::mask() {
  auto attr = maskAttr();
  return attr;
}

void ShuffleVectorOp::maskAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("mask", attr);
}



void ShuffleVectorOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value v1, Value v2, ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.addAttribute("mask", mask);
  odsState.addTypes(res);
}

void ShuffleVectorOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask) {
  odsState.addOperands(v1);
  odsState.addOperands(v2);
  odsState.addAttribute("mask", mask);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleVectorOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ShuffleVectorOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseShuffleVectorOp(parser, result);
}

void ShuffleVectorOp::print(OpAsmPrinter &p) {
  printShuffleVectorOp(p, *this);
}

LogicalResult ShuffleVectorOp::verify() {
  if (failed(ShuffleVectorOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  auto wrappedVectorType1 = v1().getType().cast<LLVM::LLVMType>();
    auto wrappedVectorType2 = v2().getType().cast<LLVM::LLVMType>();
    if (!wrappedVectorType2.getUnderlyingType()->isVectorTy())
      return emitOpError("expected LLVM IR Dialect vector type for operand #2");
    if (wrappedVectorType1.getVectorElementType() !=
        wrappedVectorType2.getVectorElementType())
      return emitOpError("expected matching LLVM IR Dialect element types");
    return success();
}

void ShuffleVectorOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::SinOp definitions
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

Value SinOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult SinOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SinOp::getOperationName() {
  return "llvm.intr.sin";
}

std::pair<unsigned, unsigned> SinOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SinOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SinOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SinOp::inMutable() {
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

Value SinOp::res() {
  return *getODSResults(0).begin();
}

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void SinOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult SinOp::verify() {
  if (failed(SinOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void SinOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::SqrtOp definitions
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

Value SqrtOpAdaptor::in() {
  return *getODSOperands(0).begin();
}

LogicalResult SqrtOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SqrtOp::getOperationName() {
  return "llvm.intr.sqrt";
}

std::pair<unsigned, unsigned> SqrtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SqrtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SqrtOp::in() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange SqrtOp::inMutable() {
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

Value SqrtOp::res() {
  return *getODSResults(0).begin();
}

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in) {
  odsState.addOperands(in);
  odsState.addTypes(res);
}

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in) {
  odsState.addOperands(in);
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

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value in) {
  odsState.addOperands(in);
  odsState.addTypes({in.getType()});

}

void SqrtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult SqrtOp::verify() {
  if (failed(SqrtOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void SqrtOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::StoreOp definitions
//===----------------------------------------------------------------------===//

StoreOpAdaptor::StoreOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

StoreOpAdaptor::StoreOpAdaptor(StoreOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> StoreOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange StoreOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value StoreOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value StoreOpAdaptor::addr() {
  return *getODSOperands(1).begin();
}

LogicalResult StoreOpAdaptor::verify(Location loc) {
  return success();
}

StringRef StoreOp::getOperationName() {
  return "llvm.store";
}

std::pair<unsigned, unsigned> StoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range StoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value StoreOp::value() {
  return *getODSOperands(0).begin();
}

Value StoreOp::addr() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange StoreOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange StoreOp::addrMutable() {
  auto range = getODSOperandIndexAndLength(1);
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

void StoreOp::build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    auto llvmType = resultType.dyn_cast<LLVM::LLVMType>(); (void)llvmType;
    assert(llvmType && "result must be an LLVM type");
    assert(llvmType.getUnderlyingType() &&
            llvmType.getUnderlyingType()->isVoidTy() &&
            "for zero-result operands, only 'void' is accepted as result type");
    build(builder, result, operands, attributes);
  
}

void StoreOp::build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void StoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value addr) {
  odsState.addOperands(value);
  odsState.addOperands(addr);
}

void StoreOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value addr) {
  odsState.addOperands(value);
  odsState.addOperands(addr);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StoreOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult StoreOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseStoreOp(parser, result);
}

void StoreOp::print(OpAsmPrinter &p) {
  printStoreOp(p, *this);
}

LogicalResult StoreOp::verify() {
  if (failed(StoreOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::SubOp definitions
//===----------------------------------------------------------------------===//

SubOpAdaptor::SubOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SubOpAdaptor::SubOpAdaptor(SubOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SubOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SubOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value SubOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value SubOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult SubOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SubOp::getOperationName() {
  return "llvm.sub";
}

std::pair<unsigned, unsigned> SubOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SubOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value SubOp::lhs() {
  return *getODSOperands(0).begin();
}

Value SubOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange SubOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange SubOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> SubOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SubOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SubOp::res() {
  return *getODSResults(0).begin();
}

void SubOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void SubOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void SubOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SubOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void SubOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult SubOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void SubOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult SubOp::verify() {
  if (failed(SubOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void SubOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::TruncOp definitions
//===----------------------------------------------------------------------===//

TruncOpAdaptor::TruncOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TruncOpAdaptor::TruncOpAdaptor(TruncOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TruncOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TruncOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value TruncOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult TruncOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TruncOp::getOperationName() {
  return "llvm.trunc";
}

std::pair<unsigned, unsigned> TruncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TruncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value TruncOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange TruncOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> TruncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TruncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value TruncOp::res() {
  return *getODSResults(0).begin();
}

void TruncOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void TruncOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void TruncOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TruncOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult TruncOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void TruncOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult TruncOp::verify() {
  if (failed(TruncOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void TruncOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::UDivOp definitions
//===----------------------------------------------------------------------===//

UDivOpAdaptor::UDivOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

UDivOpAdaptor::UDivOpAdaptor(UDivOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> UDivOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange UDivOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value UDivOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value UDivOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult UDivOpAdaptor::verify(Location loc) {
  return success();
}

StringRef UDivOp::getOperationName() {
  return "llvm.udiv";
}

std::pair<unsigned, unsigned> UDivOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range UDivOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value UDivOp::lhs() {
  return *getODSOperands(0).begin();
}

Value UDivOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange UDivOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange UDivOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> UDivOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range UDivOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value UDivOp::res() {
  return *getODSResults(0).begin();
}

void UDivOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void UDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void UDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UDivOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void UDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void UDivOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult UDivOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void UDivOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult UDivOp::verify() {
  if (failed(UDivOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void UDivOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::UIToFPOp definitions
//===----------------------------------------------------------------------===//

UIToFPOpAdaptor::UIToFPOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

UIToFPOpAdaptor::UIToFPOpAdaptor(UIToFPOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> UIToFPOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange UIToFPOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value UIToFPOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult UIToFPOpAdaptor::verify(Location loc) {
  return success();
}

StringRef UIToFPOp::getOperationName() {
  return "llvm.uitofp";
}

std::pair<unsigned, unsigned> UIToFPOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range UIToFPOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value UIToFPOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange UIToFPOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> UIToFPOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range UIToFPOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value UIToFPOp::res() {
  return *getODSResults(0).begin();
}

void UIToFPOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void UIToFPOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void UIToFPOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UIToFPOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult UIToFPOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void UIToFPOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult UIToFPOp::verify() {
  if (failed(UIToFPOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void UIToFPOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::URemOp definitions
//===----------------------------------------------------------------------===//

URemOpAdaptor::URemOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

URemOpAdaptor::URemOpAdaptor(URemOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> URemOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange URemOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value URemOpAdaptor::lhs() {
  return *getODSOperands(0).begin();
}

Value URemOpAdaptor::rhs() {
  return *getODSOperands(1).begin();
}

LogicalResult URemOpAdaptor::verify(Location loc) {
  return success();
}

StringRef URemOp::getOperationName() {
  return "llvm.urem";
}

std::pair<unsigned, unsigned> URemOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range URemOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value URemOp::lhs() {
  return *getODSOperands(0).begin();
}

Value URemOp::rhs() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange URemOp::lhsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange URemOp::rhsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> URemOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range URemOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value URemOp::res() {
  return *getODSResults(0).begin();
}

void URemOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void URemOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
}

void URemOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void URemOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void URemOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes({lhs.getType()});

}

void URemOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

ParseResult URemOp::parse(OpAsmParser &parser, OperationState &result) {
  return impl::parseOneResultSameOperandTypeOp(parser, result);
}

void URemOp::print(OpAsmPrinter &p) {
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult URemOp::verify() {
  if (failed(URemOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void URemOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::UndefOp definitions
//===----------------------------------------------------------------------===//

UndefOpAdaptor::UndefOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

UndefOpAdaptor::UndefOpAdaptor(UndefOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> UndefOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange UndefOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult UndefOpAdaptor::verify(Location loc) {
  return success();
}

StringRef UndefOp::getOperationName() {
  return "llvm.mlir.undef";
}

std::pair<unsigned, unsigned> UndefOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range UndefOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> UndefOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range UndefOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value UndefOp::res() {
  return *getODSResults(0).begin();
}

void UndefOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void UndefOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res) {
  odsState.addTypes(res);
}

void UndefOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UndefOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult UndefOp::verify() {
  if (failed(UndefOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult UndefOp::parse(OpAsmParser &parser, OperationState &result) {
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

void UndefOp::print(OpAsmPrinter &p) {
  p << "llvm.mlir.undef";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(res().getType());
}

void UndefOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::UnreachableOp definitions
//===----------------------------------------------------------------------===//

UnreachableOpAdaptor::UnreachableOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

UnreachableOpAdaptor::UnreachableOpAdaptor(UnreachableOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> UnreachableOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange UnreachableOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult UnreachableOpAdaptor::verify(Location loc) {
  return success();
}

StringRef UnreachableOp::getOperationName() {
  return "llvm.unreachable";
}

std::pair<unsigned, unsigned> UnreachableOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range UnreachableOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> UnreachableOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range UnreachableOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void UnreachableOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void UnreachableOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UnreachableOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult UnreachableOp::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void UnreachableOp::print(OpAsmPrinter &p) {
  p << getOperationName();
}

LogicalResult UnreachableOp::verify() {
  if (failed(UnreachableOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// LLVM::XOrOp definitions
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
  return "llvm.xor";
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

Value XOrOp::res() {
  return *getODSResults(0).begin();
}

void XOrOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void XOrOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs) {
  odsState.addOperands(lhs);
  odsState.addOperands(rhs);
  odsState.addTypes(res);
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
  mlir::impl::printOneResultOp(this->getOperation(), p);
}

LogicalResult XOrOp::verify() {
  if (failed(XOrOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void XOrOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::ZExtOp definitions
//===----------------------------------------------------------------------===//

ZExtOpAdaptor::ZExtOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ZExtOpAdaptor::ZExtOpAdaptor(ZExtOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ZExtOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ZExtOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ZExtOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult ZExtOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ZExtOp::getOperationName() {
  return "llvm.zext";
}

std::pair<unsigned, unsigned> ZExtOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ZExtOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ZExtOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ZExtOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ZExtOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ZExtOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ZExtOp::res() {
  return *getODSResults(0).begin();
}

void ZExtOp::build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes ) {
    if (resultType) result.addTypes(resultType);
    result.addOperands(operands);
    for (auto namedAttr : attributes) {
      result.addAttribute(namedAttr.first, namedAttr.second);
    }
  
}

void ZExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(res);
}

void ZExtOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ZExtOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ZExtOp::parse(OpAsmParser &parser, OperationState &result) {
  return mlir::impl::parseCastOp(parser, result);
}

void ZExtOp::print(OpAsmPrinter &p) {
  mlir::impl::printCastOp(this->getOperation(), p);
}

LogicalResult ZExtOp::verify() {
  if (failed(ZExtOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

void ZExtOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_add definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_addAdaptor::experimental_vector_reduce_addAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_addAdaptor::experimental_vector_reduce_addAdaptor(experimental_vector_reduce_add& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_addAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_addAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_addAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_add::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.add";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_add::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_add::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_add::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_add::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_add::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_add::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_add::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_add::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_add::verify() {
  if (failed(experimental_vector_reduce_addAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_and definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_andAdaptor::experimental_vector_reduce_andAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_andAdaptor::experimental_vector_reduce_andAdaptor(experimental_vector_reduce_and& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_andAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_andAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_andAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_and::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.and";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_and::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_and::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_and::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_and::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_and::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_and::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_and::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_and::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_and::verify() {
  if (failed(experimental_vector_reduce_andAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_fmax definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_fmaxAdaptor::experimental_vector_reduce_fmaxAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_fmaxAdaptor::experimental_vector_reduce_fmaxAdaptor(experimental_vector_reduce_fmax& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_fmaxAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_fmaxAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_fmaxAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_fmax::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.fmax";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_fmax::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_fmax::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_fmax::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_fmax::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_fmax::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_fmax::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_fmax::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_fmax::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_fmax::verify() {
  if (failed(experimental_vector_reduce_fmaxAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_fmin definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_fminAdaptor::experimental_vector_reduce_fminAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_fminAdaptor::experimental_vector_reduce_fminAdaptor(experimental_vector_reduce_fmin& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_fminAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_fminAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_fminAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_fmin::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.fmin";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_fmin::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_fmin::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_fmin::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_fmin::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_fmin::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_fmin::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_fmin::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_fmin::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_fmin::verify() {
  if (failed(experimental_vector_reduce_fminAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_mul definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_mulAdaptor::experimental_vector_reduce_mulAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_mulAdaptor::experimental_vector_reduce_mulAdaptor(experimental_vector_reduce_mul& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_mulAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_mulAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_mulAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_mul::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.mul";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_mul::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_mul::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_mul::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_mul::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_mul::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_mul::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_mul::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_mul::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_mul::verify() {
  if (failed(experimental_vector_reduce_mulAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_or definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_orAdaptor::experimental_vector_reduce_orAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_orAdaptor::experimental_vector_reduce_orAdaptor(experimental_vector_reduce_or& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_orAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_orAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_orAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_or::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.or";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_or::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_or::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_or::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_or::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_or::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_or::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_or::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_or::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_or::verify() {
  if (failed(experimental_vector_reduce_orAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_smax definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_smaxAdaptor::experimental_vector_reduce_smaxAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_smaxAdaptor::experimental_vector_reduce_smaxAdaptor(experimental_vector_reduce_smax& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_smaxAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_smaxAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_smaxAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_smax::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.smax";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_smax::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_smax::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_smax::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_smax::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_smax::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_smax::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_smax::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_smax::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_smax::verify() {
  if (failed(experimental_vector_reduce_smaxAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_smin definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_sminAdaptor::experimental_vector_reduce_sminAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_sminAdaptor::experimental_vector_reduce_sminAdaptor(experimental_vector_reduce_smin& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_sminAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_sminAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_sminAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_smin::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.smin";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_smin::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_smin::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_smin::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_smin::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_smin::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_smin::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_smin::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_smin::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_smin::verify() {
  if (failed(experimental_vector_reduce_sminAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_umax definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_umaxAdaptor::experimental_vector_reduce_umaxAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_umaxAdaptor::experimental_vector_reduce_umaxAdaptor(experimental_vector_reduce_umax& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_umaxAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_umaxAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_umaxAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_umax::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.umax";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_umax::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_umax::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_umax::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_umax::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_umax::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_umax::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_umax::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_umax::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_umax::verify() {
  if (failed(experimental_vector_reduce_umaxAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_umin definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_uminAdaptor::experimental_vector_reduce_uminAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_uminAdaptor::experimental_vector_reduce_uminAdaptor(experimental_vector_reduce_umin& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_uminAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_uminAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_uminAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_umin::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.umin";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_umin::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_umin::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_umin::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_umin::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_umin::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_umin::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_umin::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_umin::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_umin::verify() {
  if (failed(experimental_vector_reduce_uminAdaptor(*this).verify(this->getLoc()))) return failure();
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


//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_v2_fadd definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_v2_faddAdaptor::experimental_vector_reduce_v2_faddAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_v2_faddAdaptor::experimental_vector_reduce_v2_faddAdaptor(experimental_vector_reduce_v2_fadd& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_v2_faddAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_v2_faddAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_v2_faddAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_v2_fadd::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.v2.fadd";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_v2_fadd::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_v2_fadd::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_v2_fadd::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_v2_fadd::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_v2_fadd::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_v2_fadd::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addTypes(res);
}

void experimental_vector_reduce_v2_fadd::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_v2_fadd::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_v2_fadd::verify() {
  if (failed(experimental_vector_reduce_v2_faddAdaptor(*this).verify(this->getLoc()))) return failure();
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
// LLVM::experimental_vector_reduce_v2_fmul definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_v2_fmulAdaptor::experimental_vector_reduce_v2_fmulAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_v2_fmulAdaptor::experimental_vector_reduce_v2_fmulAdaptor(experimental_vector_reduce_v2_fmul& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_v2_fmulAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_v2_fmulAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_v2_fmulAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_v2_fmul::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.v2.fmul";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_v2_fmul::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_v2_fmul::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_v2_fmul::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_v2_fmul::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_v2_fmul::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_v2_fmul::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  odsState.addTypes(res);
}

void experimental_vector_reduce_v2_fmul::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1) {
  odsState.addOperands(odsArg_0);
  odsState.addOperands(odsArg_1);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_v2_fmul::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_v2_fmul::verify() {
  if (failed(experimental_vector_reduce_v2_fmulAdaptor(*this).verify(this->getLoc()))) return failure();
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
// LLVM::experimental_vector_reduce_xor definitions
//===----------------------------------------------------------------------===//

experimental_vector_reduce_xorAdaptor::experimental_vector_reduce_xorAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

experimental_vector_reduce_xorAdaptor::experimental_vector_reduce_xorAdaptor(experimental_vector_reduce_xor& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> experimental_vector_reduce_xorAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange experimental_vector_reduce_xorAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult experimental_vector_reduce_xorAdaptor::verify(Location loc) {
  return success();
}

StringRef experimental_vector_reduce_xor::getOperationName() {
  return "llvm.intr.experimental.vector.reduce.xor";
}

std::pair<unsigned, unsigned> experimental_vector_reduce_xor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range experimental_vector_reduce_xor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> experimental_vector_reduce_xor::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range experimental_vector_reduce_xor::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value experimental_vector_reduce_xor::res() {
  return *getODSResults(0).begin();
}

void experimental_vector_reduce_xor::build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  odsState.addTypes(res);
}

void experimental_vector_reduce_xor::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0) {
  odsState.addOperands(odsArg_0);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void experimental_vector_reduce_xor::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult experimental_vector_reduce_xor::verify() {
  if (failed(experimental_vector_reduce_xorAdaptor(*this).verify(this->getLoc()))) return failure();
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


#endif  // GET_OP_CLASSES

