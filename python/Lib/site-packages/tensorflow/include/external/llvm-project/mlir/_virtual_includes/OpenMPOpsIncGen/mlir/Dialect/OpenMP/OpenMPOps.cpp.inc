/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

omp::BarrierOp,
omp::FlushOp,
omp::MasterOp,
omp::ParallelOp,
omp::TaskwaitOp,
omp::TaskyieldOp,
omp::TerminatorOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// omp::BarrierOp definitions
//===----------------------------------------------------------------------===//

BarrierOpAdaptor::BarrierOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BarrierOpAdaptor::BarrierOpAdaptor(BarrierOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BarrierOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BarrierOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult BarrierOpAdaptor::verify(Location loc) {
  return success();
}

StringRef BarrierOp::getOperationName() {
  return "omp.barrier";
}

std::pair<unsigned, unsigned> BarrierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BarrierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BarrierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BarrierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BarrierOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void BarrierOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BarrierOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BarrierOp::verify() {
  if (failed(BarrierOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult BarrierOp::parse(OpAsmParser &parser, OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  return success();
}

void BarrierOp::print(OpAsmPrinter &p) {
  p << "omp.barrier";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// omp::FlushOp definitions
//===----------------------------------------------------------------------===//

FlushOpAdaptor::FlushOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

FlushOpAdaptor::FlushOpAdaptor(FlushOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> FlushOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange FlushOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange FlushOpAdaptor::varList() {
  return getODSOperands(0);
}

LogicalResult FlushOpAdaptor::verify(Location loc) {
  return success();
}

StringRef FlushOp::getOperationName() {
  return "omp.flush";
}

std::pair<unsigned, unsigned> FlushOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range FlushOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range FlushOp::varList() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange FlushOp::varListMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> FlushOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range FlushOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FlushOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange varList) {
  odsState.addOperands(varList);
}

void FlushOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange varList) {
  odsState.addOperands(varList);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FlushOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult FlushOp::verify() {
  if (failed(FlushOpAdaptor(*this).verify(this->getLoc()))) return failure();
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

ParseResult FlushOp::parse(OpAsmParser &parser, OperationState &result) {
  SmallVector<OpAsmParser::OperandType, 4> varListOperands;
  llvm::SMLoc varListOperandsLoc = parser.getCurrentLocation();
  (void)varListOperandsLoc;
  SmallVector<Type, 1> varListTypes;
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();

  if (parser.parseOperandList(varListOperands))
    return failure();
  if (!varListOperands.empty()) {
  if (parser.parseColon())
    return failure();

  if (parser.parseTypeList(varListTypes))
    return failure();
  }
  if (parser.resolveOperands(varListOperands, varListTypes, varListOperandsLoc, result.operands))
    return failure();
  return success();
}

void FlushOp::print(OpAsmPrinter &p) {
  p << "omp.flush";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  if (!varList().empty()) {
  p << " ";
  p << varList();
  p << " " << ":";
  p << " ";
  p << varList().getTypes();
  }
}


//===----------------------------------------------------------------------===//
// omp::MasterOp definitions
//===----------------------------------------------------------------------===//

MasterOpAdaptor::MasterOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

MasterOpAdaptor::MasterOpAdaptor(MasterOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> MasterOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange MasterOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult MasterOpAdaptor::verify(Location loc) {
  return success();
}

StringRef MasterOp::getOperationName() {
  return "omp.master";
}

std::pair<unsigned, unsigned> MasterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range MasterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> MasterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range MasterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &MasterOp::region() {
  return this->getOperation()->getRegion(0);
}

void MasterOp::build(OpBuilder &odsBuilder, OperationState &odsState) {
  (void)odsState.addRegion();
}

void MasterOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MasterOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult MasterOp::verify() {
  if (failed(MasterOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
        return emitOpError("region #") << index << " ('region') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// omp::ParallelOp definitions
//===----------------------------------------------------------------------===//

ParallelOpAdaptor::ParallelOpAdaptor(ValueRange values, DictionaryAttr attrs)  : odsOperands(values), odsAttrs(attrs) {

}

ParallelOpAdaptor::ParallelOpAdaptor(ParallelOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ParallelOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  assert(odsAttrs && "missing segment size attribute for op");
  auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

ValueRange ParallelOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ParallelOpAdaptor::if_expr_var() {
  auto operands = getODSOperands(0);
  return operands.empty() ? Value() : *operands.begin();
}

Value ParallelOpAdaptor::num_threads_var() {
  auto operands = getODSOperands(1);
  return operands.empty() ? Value() : *operands.begin();
}

ValueRange ParallelOpAdaptor::private_vars() {
  return getODSOperands(2);
}

ValueRange ParallelOpAdaptor::firstprivate_vars() {
  return getODSOperands(3);
}

ValueRange ParallelOpAdaptor::shared_vars() {
  return getODSOperands(4);
}

ValueRange ParallelOpAdaptor::copyin_vars() {
  return getODSOperands(5);
}

StringAttr ParallelOpAdaptor::default_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("default_val").dyn_cast_or_null<StringAttr>();
  return attr;
}

StringAttr ParallelOpAdaptor::proc_bind_val() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("proc_bind_val").dyn_cast_or_null<StringAttr>();
  return attr;
}

LogicalResult ParallelOpAdaptor::verify(Location loc) {
  {
    auto sizeAttr = odsAttrs.get("operand_segment_sizes").cast<DenseIntElementsAttr>();
    auto numElements = sizeAttr.getType().cast<ShapedType>().getNumElements();
    if (numElements != 6)
      return emitError(loc, "'operand_segment_sizes' attribute for specifying operand segments "
                       "must have 6 elements");
  }
    {
  auto tblgen_default_val = odsAttrs.get("default_val");
  if (tblgen_default_val) {
    if (!(((tblgen_default_val.isa<StringAttr>())) && (((tblgen_default_val.cast<StringAttr>().getValue() == "defprivate")) || ((tblgen_default_val.cast<StringAttr>().getValue() == "deffirstprivate")) || ((tblgen_default_val.cast<StringAttr>().getValue() == "defshared")) || ((tblgen_default_val.cast<StringAttr>().getValue() == "defnone"))))) return emitError(loc, "'omp.parallel' op ""attribute 'default_val' failed to satisfy constraint: default clause");
  }
  }
  {
  auto tblgen_proc_bind_val = odsAttrs.get("proc_bind_val");
  if (tblgen_proc_bind_val) {
    if (!(((tblgen_proc_bind_val.isa<StringAttr>())) && (((tblgen_proc_bind_val.cast<StringAttr>().getValue() == "master")) || ((tblgen_proc_bind_val.cast<StringAttr>().getValue() == "close")) || ((tblgen_proc_bind_val.cast<StringAttr>().getValue() == "spread"))))) return emitError(loc, "'omp.parallel' op ""attribute 'proc_bind_val' failed to satisfy constraint: procbind clause");
  }
  }
  return success();
}

StringRef ParallelOp::getOperationName() {
  return "omp.parallel";
}

std::pair<unsigned, unsigned> ParallelOp::getODSOperandIndexAndLength(unsigned index) {
  auto sizeAttr = getAttrOfType<DenseIntElementsAttr>("operand_segment_sizes");

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += (*(sizeAttr.begin() + i)).getZExtValue();
  unsigned size = (*(sizeAttr.begin() + index)).getZExtValue();
  return {start, size};
}

Operation::operand_range ParallelOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ParallelOp::if_expr_var() {
  auto operands = getODSOperands(0);
  return operands.empty() ? Value() : *operands.begin();
}

Value ParallelOp::num_threads_var() {
  auto operands = getODSOperands(1);
  return operands.empty() ? Value() : *operands.begin();
}

Operation::operand_range ParallelOp::private_vars() {
  return getODSOperands(2);
}

Operation::operand_range ParallelOp::firstprivate_vars() {
  return getODSOperands(3);
}

Operation::operand_range ParallelOp::shared_vars() {
  return getODSOperands(4);
}

Operation::operand_range ParallelOp::copyin_vars() {
  return getODSOperands(5);
}

::mlir::MutableOperandRange ParallelOp::if_expr_varMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ParallelOp::num_threads_varMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ParallelOp::private_varsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ParallelOp::firstprivate_varsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ParallelOp::shared_varsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

::mlir::MutableOperandRange ParallelOp::copyin_varsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, *getOperation()->getMutableAttrDict().getNamed("operand_segment_sizes")));
}

std::pair<unsigned, unsigned> ParallelOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ParallelOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &ParallelOp::region() {
  return this->getOperation()->getRegion(0);
}

StringAttr ParallelOp::default_valAttr() {
  return this->getAttr("default_val").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > ParallelOp::default_val() {
  auto attr = default_valAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

StringAttr ParallelOp::proc_bind_valAttr() {
  return this->getAttr("proc_bind_val").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > ParallelOp::proc_bind_val() {
  auto attr = proc_bind_valAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void ParallelOp::default_valAttr(StringAttr attr) {
  this->getOperation()->setAttr("default_val", attr);
}

void ParallelOp::proc_bind_valAttr(StringAttr attr) {
  this->getOperation()->setAttr("proc_bind_val", attr);
}

void ParallelOp::build(OpBuilder &odsBuilder, OperationState &odsState, /*optional*/Value if_expr_var, /*optional*/Value num_threads_var, /*optional*/StringAttr default_val, ValueRange private_vars, ValueRange firstprivate_vars, ValueRange shared_vars, ValueRange copyin_vars, /*optional*/StringAttr proc_bind_val) {
  if (if_expr_var)
    odsState.addOperands(if_expr_var);
  if (num_threads_var)
    odsState.addOperands(num_threads_var);
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(shared_vars);
  odsState.addOperands(copyin_vars);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({(if_expr_var ? 1 : 0), (num_threads_var ? 1 : 0), static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(shared_vars.size()), static_cast<int32_t>(copyin_vars.size())}));
  if (default_val) {
  odsState.addAttribute("default_val", default_val);
  }
  if (proc_bind_val) {
  odsState.addAttribute("proc_bind_val", proc_bind_val);
  }
  (void)odsState.addRegion();
}

void ParallelOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, /*optional*/Value if_expr_var, /*optional*/Value num_threads_var, /*optional*/StringAttr default_val, ValueRange private_vars, ValueRange firstprivate_vars, ValueRange shared_vars, ValueRange copyin_vars, /*optional*/StringAttr proc_bind_val) {
  if (if_expr_var)
    odsState.addOperands(if_expr_var);
  if (num_threads_var)
    odsState.addOperands(num_threads_var);
  odsState.addOperands(private_vars);
  odsState.addOperands(firstprivate_vars);
  odsState.addOperands(shared_vars);
  odsState.addOperands(copyin_vars);
  odsState.addAttribute("operand_segment_sizes", odsBuilder.getI32VectorAttr({(if_expr_var ? 1 : 0), (num_threads_var ? 1 : 0), static_cast<int32_t>(private_vars.size()), static_cast<int32_t>(firstprivate_vars.size()), static_cast<int32_t>(shared_vars.size()), static_cast<int32_t>(copyin_vars.size())}));
  if (default_val) {
  odsState.addAttribute("default_val", default_val);
  }
  if (proc_bind_val) {
  odsState.addAttribute("proc_bind_val", proc_bind_val);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ParallelOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ParallelOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseParallelOp(parser, result);
}

void ParallelOp::print(OpAsmPrinter &p) {
  return printParallelOp(p, *this);
}

LogicalResult ParallelOp::verify() {
  if (failed(ParallelOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    if (valueGroup0.size() > 1)
      return emitOpError("operand group starting at #") << index << " requires 0 or 1 element, but found " << valueGroup0.size();
    for (Value v : valueGroup0) {
      (void)v;
      if (!((v.getType().isSignlessInteger(1)))) {
        return emitOpError("operand #") << index << " must be 1-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    if (valueGroup1.size() > 1)
      return emitOpError("operand group starting at #") << index << " requires 0 or 1 element, but found " << valueGroup1.size();
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isa<IntegerType>()))) {
        return emitOpError("operand #") << index << " must be integer, but got " << v.getType();
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
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (Value v : valueGroup4) {
      (void)v;
      if (!((true))) {
        return emitOpError("operand #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (Value v : valueGroup5) {
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
      if (!((true))) {
        return emitOpError("region #") << index << " ('region') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// omp::TaskwaitOp definitions
//===----------------------------------------------------------------------===//

TaskwaitOpAdaptor::TaskwaitOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TaskwaitOpAdaptor::TaskwaitOpAdaptor(TaskwaitOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TaskwaitOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TaskwaitOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult TaskwaitOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TaskwaitOp::getOperationName() {
  return "omp.taskwait";
}

std::pair<unsigned, unsigned> TaskwaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TaskwaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TaskwaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TaskwaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TaskwaitOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void TaskwaitOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskwaitOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult TaskwaitOp::verify() {
  if (failed(TaskwaitOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult TaskwaitOp::parse(OpAsmParser &parser, OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  return success();
}

void TaskwaitOp::print(OpAsmPrinter &p) {
  p << "omp.taskwait";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// omp::TaskyieldOp definitions
//===----------------------------------------------------------------------===//

TaskyieldOpAdaptor::TaskyieldOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TaskyieldOpAdaptor::TaskyieldOpAdaptor(TaskyieldOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TaskyieldOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TaskyieldOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult TaskyieldOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TaskyieldOp::getOperationName() {
  return "omp.taskyield";
}

std::pair<unsigned, unsigned> TaskyieldOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TaskyieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TaskyieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TaskyieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TaskyieldOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void TaskyieldOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskyieldOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult TaskyieldOp::verify() {
  if (failed(TaskyieldOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult TaskyieldOp::parse(OpAsmParser &parser, OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  return success();
}

void TaskyieldOp::print(OpAsmPrinter &p) {
  p << "omp.taskyield";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


//===----------------------------------------------------------------------===//
// omp::TerminatorOp definitions
//===----------------------------------------------------------------------===//

TerminatorOpAdaptor::TerminatorOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

TerminatorOpAdaptor::TerminatorOpAdaptor(TerminatorOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> TerminatorOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange TerminatorOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult TerminatorOpAdaptor::verify(Location loc) {
  return success();
}

StringRef TerminatorOp::getOperationName() {
  return "omp.terminator";
}

std::pair<unsigned, unsigned> TerminatorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range TerminatorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TerminatorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range TerminatorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TerminatorOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void TerminatorOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TerminatorOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult TerminatorOp::verify() {
  if (failed(TerminatorOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}

ParseResult TerminatorOp::parse(OpAsmParser &parser, OperationState &result) {
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  return success();
}

void TerminatorOp::print(OpAsmPrinter &p) {
  p << "omp.terminator";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
}


#endif  // GET_OP_CLASSES

