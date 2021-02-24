/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

gpu::AllReduceOp,
gpu::BarrierOp,
gpu::BlockDimOp,
gpu::BlockIdOp,
gpu::GPUFuncOp,
gpu::GPUModuleOp,
gpu::GridDimOp,
gpu::LaunchFuncOp,
gpu::LaunchOp,
gpu::ModuleEndOp,
gpu::NumSubgroupsOp,
gpu::ReturnOp,
gpu::ShuffleOp,
gpu::SubgroupIdOp,
gpu::SubgroupSizeOp,
gpu::TerminatorOp,
gpu::ThreadIdOp,
gpu::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// gpu::AllReduceOp definitions
//===----------------------------------------------------------------------===//

AllReduceOpAdaptor::AllReduceOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

AllReduceOpAdaptor::AllReduceOpAdaptor(AllReduceOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> AllReduceOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange AllReduceOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value AllReduceOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

StringAttr AllReduceOpAdaptor::op() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("op").dyn_cast_or_null<StringAttr>();
  return attr;
}

LogicalResult AllReduceOpAdaptor::verify(Location loc) {
  {
  auto tblgen_op = odsAttrs.get("op");
  if (tblgen_op) {
    if (!(((tblgen_op.isa<StringAttr>())) && (((tblgen_op.cast<StringAttr>().getValue() == "add")) || ((tblgen_op.cast<StringAttr>().getValue() == "and")) || ((tblgen_op.cast<StringAttr>().getValue() == "max")) || ((tblgen_op.cast<StringAttr>().getValue() == "min")) || ((tblgen_op.cast<StringAttr>().getValue() == "mul")) || ((tblgen_op.cast<StringAttr>().getValue() == "or")) || ((tblgen_op.cast<StringAttr>().getValue() == "xor"))))) return emitError(loc, "'gpu.all_reduce' op ""attribute 'op' failed to satisfy constraint: built-in reduction operations supported by gpu.allreduce.");
  }
  }
  return success();
}

StringRef AllReduceOp::getOperationName() {
  return "gpu.all_reduce";
}

std::pair<unsigned, unsigned> AllReduceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range AllReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value AllReduceOp::value() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange AllReduceOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> AllReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range AllReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &AllReduceOp::body() {
  return this->getOperation()->getRegion(0);
}

StringAttr AllReduceOp::opAttr() {
  return this->getAttr("op").dyn_cast_or_null<StringAttr>();
}

Optional< StringRef > AllReduceOp::op() {
  auto attr = opAttr();
  return attr ? Optional< StringRef >(attr.getValue()) : (llvm::None);
}

void AllReduceOp::opAttr(StringAttr attr) {
  this->getOperation()->setAttr("op", attr);
}

void AllReduceOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value, /*optional*/StringAttr op) {
  odsState.addOperands(value);
  if (op) {
  odsState.addAttribute("op", op);
  }
  (void)odsState.addRegion();
  odsState.addTypes(resultType0);
}

void AllReduceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, /*optional*/StringAttr op) {
  odsState.addOperands(value);
  if (op) {
  odsState.addAttribute("op", op);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value value, /*optional*/StringAttr op) {
  odsState.addOperands(value);
  if (op) {
  odsState.addAttribute("op", op);
  }
  (void)odsState.addRegion();
  odsState.addTypes({value.getType()});

}

void AllReduceOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes({operands[0].getType()});

}

LogicalResult AllReduceOp::verify() {
  if (failed(AllReduceOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return ::verifyAllReduce(*this);
}


//===----------------------------------------------------------------------===//
// gpu::BarrierOp definitions
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
  return "gpu.barrier";
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

ParseResult BarrierOp::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void BarrierOp::print(OpAsmPrinter &p) {
  p << getOperationName();
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


//===----------------------------------------------------------------------===//
// gpu::BlockDimOp definitions
//===----------------------------------------------------------------------===//

BlockDimOpAdaptor::BlockDimOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockDimOpAdaptor::BlockDimOpAdaptor(BlockDimOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockDimOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockDimOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

StringAttr BlockDimOpAdaptor::dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("dimension").cast<StringAttr>();
  return attr;
}

LogicalResult BlockDimOpAdaptor::verify(Location loc) {
  {
  auto tblgen_dimension = odsAttrs.get("dimension");
  if (!tblgen_dimension) return emitError(loc, "'gpu.block_dim' op ""requires attribute 'dimension'");
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitError(loc, "'gpu.block_dim' op ""attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef BlockDimOp::getOperationName() {
  return "gpu.block_dim";
}

std::pair<unsigned, unsigned> BlockDimOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockDimOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockDimOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockDimOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

StringAttr BlockDimOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef BlockDimOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void BlockDimOp::dimensionAttr(StringAttr attr) {
  this->getOperation()->setAttr("dimension", attr);
}

void BlockDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  odsState.addTypes(resultType0);
}

void BlockDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  odsState.addTypes(resultType0);
}

void BlockDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockDimOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockDimOp::verify() {
  if (failed(BlockDimOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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
  return ::verifyIndexOp(*this);
}

void BlockDimOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::BlockIdOp definitions
//===----------------------------------------------------------------------===//

BlockIdOpAdaptor::BlockIdOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

BlockIdOpAdaptor::BlockIdOpAdaptor(BlockIdOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> BlockIdOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange BlockIdOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

StringAttr BlockIdOpAdaptor::dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("dimension").cast<StringAttr>();
  return attr;
}

LogicalResult BlockIdOpAdaptor::verify(Location loc) {
  {
  auto tblgen_dimension = odsAttrs.get("dimension");
  if (!tblgen_dimension) return emitError(loc, "'gpu.block_id' op ""requires attribute 'dimension'");
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitError(loc, "'gpu.block_id' op ""attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef BlockIdOp::getOperationName() {
  return "gpu.block_id";
}

std::pair<unsigned, unsigned> BlockIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range BlockIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BlockIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range BlockIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

StringAttr BlockIdOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef BlockIdOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void BlockIdOp::dimensionAttr(StringAttr attr) {
  this->getOperation()->setAttr("dimension", attr);
}

void BlockIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  odsState.addTypes(resultType0);
}

void BlockIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  odsState.addTypes(resultType0);
}

void BlockIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BlockIdOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult BlockIdOp::verify() {
  if (failed(BlockIdOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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
  return ::verifyIndexOp(*this);
}

void BlockIdOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::GPUFuncOp definitions
//===----------------------------------------------------------------------===//

GPUFuncOpAdaptor::GPUFuncOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GPUFuncOpAdaptor::GPUFuncOpAdaptor(GPUFuncOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GPUFuncOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GPUFuncOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult GPUFuncOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GPUFuncOp::getOperationName() {
  return "gpu.func";
}

std::pair<unsigned, unsigned> GPUFuncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GPUFuncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GPUFuncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GPUFuncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &GPUFuncOp::body() {
  return this->getOperation()->getRegion(0);
}



ParseResult GPUFuncOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseGPUFuncOp(parser, result);
}

void GPUFuncOp::print(OpAsmPrinter &p) {
  printGPUFuncOp(p, *this);
}

LogicalResult GPUFuncOp::verify() {
  if (failed(GPUFuncOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// gpu::GPUModuleOp definitions
//===----------------------------------------------------------------------===//

GPUModuleOpAdaptor::GPUModuleOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GPUModuleOpAdaptor::GPUModuleOpAdaptor(GPUModuleOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GPUModuleOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GPUModuleOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult GPUModuleOpAdaptor::verify(Location loc) {
  return success();
}

StringRef GPUModuleOp::getOperationName() {
  return "gpu.module";
}

std::pair<unsigned, unsigned> GPUModuleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GPUModuleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GPUModuleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GPUModuleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &GPUModuleOp::body() {
  return this->getOperation()->getRegion(0);
}



ParseResult GPUModuleOp::parse(OpAsmParser &parser, OperationState &result) {
  return ::parseGPUModuleOp(parser, result);
}

void GPUModuleOp::print(OpAsmPrinter &p) {
  return ::print(p, *this);
}

LogicalResult GPUModuleOp::verify() {
  if (failed(GPUModuleOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((region.getBlocks().size() == 1))) {
        return emitOpError("region #") << index << " ('body') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// gpu::GridDimOp definitions
//===----------------------------------------------------------------------===//

GridDimOpAdaptor::GridDimOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

GridDimOpAdaptor::GridDimOpAdaptor(GridDimOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> GridDimOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange GridDimOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

StringAttr GridDimOpAdaptor::dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("dimension").cast<StringAttr>();
  return attr;
}

LogicalResult GridDimOpAdaptor::verify(Location loc) {
  {
  auto tblgen_dimension = odsAttrs.get("dimension");
  if (!tblgen_dimension) return emitError(loc, "'gpu.grid_dim' op ""requires attribute 'dimension'");
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitError(loc, "'gpu.grid_dim' op ""attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef GridDimOp::getOperationName() {
  return "gpu.grid_dim";
}

std::pair<unsigned, unsigned> GridDimOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range GridDimOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GridDimOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range GridDimOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

StringAttr GridDimOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef GridDimOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void GridDimOp::dimensionAttr(StringAttr attr) {
  this->getOperation()->setAttr("dimension", attr);
}

void GridDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  odsState.addTypes(resultType0);
}

void GridDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  odsState.addTypes(resultType0);
}

void GridDimOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GridDimOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult GridDimOp::verify() {
  if (failed(GridDimOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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
  return ::verifyIndexOp(*this);
}

void GridDimOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::LaunchFuncOp definitions
//===----------------------------------------------------------------------===//

LaunchFuncOpAdaptor::LaunchFuncOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LaunchFuncOpAdaptor::LaunchFuncOpAdaptor(LaunchFuncOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LaunchFuncOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperands.size() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

ValueRange LaunchFuncOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value LaunchFuncOpAdaptor::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value LaunchFuncOpAdaptor::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value LaunchFuncOpAdaptor::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value LaunchFuncOpAdaptor::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value LaunchFuncOpAdaptor::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value LaunchFuncOpAdaptor::blockSizeZ() {
  return *getODSOperands(5).begin();
}

ValueRange LaunchFuncOpAdaptor::operands() {
  return getODSOperands(6);
}

LogicalResult LaunchFuncOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LaunchFuncOp::getOperationName() {
  return "gpu.launch_func";
}

std::pair<unsigned, unsigned> LaunchFuncOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, false, false, false, false, false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 6) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

Operation::operand_range LaunchFuncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value LaunchFuncOp::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value LaunchFuncOp::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value LaunchFuncOp::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value LaunchFuncOp::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value LaunchFuncOp::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value LaunchFuncOp::blockSizeZ() {
  return *getODSOperands(5).begin();
}

Operation::operand_range LaunchFuncOp::operands() {
  return getODSOperands(6);
}

::mlir::MutableOperandRange LaunchFuncOp::gridSizeXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchFuncOp::gridSizeYMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchFuncOp::gridSizeZMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchFuncOp::blockSizeXMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchFuncOp::blockSizeYMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchFuncOp::blockSizeZMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchFuncOp::operandsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LaunchFuncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LaunchFuncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}





LogicalResult LaunchFuncOp::verify() {
  if (failed(LaunchFuncOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSOperands(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (Value v : valueGroup4) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (Value v : valueGroup5) {
      (void)v;
      if (!(((v.getType().isSignlessInteger())) || ((v.getType().isa<IndexType>())) || (((v.getType().isa<::mlir::LLVM::LLVMType>())) && ((v.getType().cast<::mlir::LLVM::LLVMType>().isIntegerTy()))))) {
        return emitOpError("operand #") << index << " must be integer, index or LLVM dialect equivalent, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup6 = getODSOperands(6);
    for (Value v : valueGroup6) {
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


//===----------------------------------------------------------------------===//
// gpu::LaunchOp definitions
//===----------------------------------------------------------------------===//

LaunchOpAdaptor::LaunchOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

LaunchOpAdaptor::LaunchOpAdaptor(LaunchOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> LaunchOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange LaunchOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value LaunchOpAdaptor::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value LaunchOpAdaptor::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value LaunchOpAdaptor::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value LaunchOpAdaptor::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value LaunchOpAdaptor::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value LaunchOpAdaptor::blockSizeZ() {
  return *getODSOperands(5).begin();
}

LogicalResult LaunchOpAdaptor::verify(Location loc) {
  return success();
}

StringRef LaunchOp::getOperationName() {
  return "gpu.launch";
}

std::pair<unsigned, unsigned> LaunchOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range LaunchOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value LaunchOp::gridSizeX() {
  return *getODSOperands(0).begin();
}

Value LaunchOp::gridSizeY() {
  return *getODSOperands(1).begin();
}

Value LaunchOp::gridSizeZ() {
  return *getODSOperands(2).begin();
}

Value LaunchOp::blockSizeX() {
  return *getODSOperands(3).begin();
}

Value LaunchOp::blockSizeY() {
  return *getODSOperands(4).begin();
}

Value LaunchOp::blockSizeZ() {
  return *getODSOperands(5).begin();
}

::mlir::MutableOperandRange LaunchOp::gridSizeXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchOp::gridSizeYMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchOp::gridSizeZMutable() {
  auto range = getODSOperandIndexAndLength(2);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchOp::blockSizeXMutable() {
  auto range = getODSOperandIndexAndLength(3);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchOp::blockSizeYMutable() {
  auto range = getODSOperandIndexAndLength(4);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange LaunchOp::blockSizeZMutable() {
  auto range = getODSOperandIndexAndLength(5);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> LaunchOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range LaunchOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Region &LaunchOp::body() {
  return this->getOperation()->getRegion(0);
}



ParseResult LaunchOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseLaunchOp(parser, result);
}

void LaunchOp::print(OpAsmPrinter &p) {
  printLaunchOp(p, *this);
}

LogicalResult LaunchOp::verify() {
  if (failed(LaunchOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
    auto valueGroup3 = getODSOperands(3);
    for (Value v : valueGroup3) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup4 = getODSOperands(4);
    for (Value v : valueGroup4) {
      (void)v;
      if (!((v.getType().isa<IndexType>()))) {
        return emitOpError("operand #") << index << " must be index, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup5 = getODSOperands(5);
    for (Value v : valueGroup5) {
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
      if (!((true))) {
        return emitOpError("region #") << index << " ('body') failed to verify constraint: any region";
      }
      ++index;
    }
  }
  return ::verify(*this);
}


//===----------------------------------------------------------------------===//
// gpu::ModuleEndOp definitions
//===----------------------------------------------------------------------===//

ModuleEndOpAdaptor::ModuleEndOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ModuleEndOpAdaptor::ModuleEndOpAdaptor(ModuleEndOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ModuleEndOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ModuleEndOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult ModuleEndOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ModuleEndOp::getOperationName() {
  return "gpu.module_end";
}

std::pair<unsigned, unsigned> ModuleEndOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ModuleEndOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ModuleEndOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ModuleEndOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ModuleEndOp::build(OpBuilder &odsBuilder, OperationState &odsState) {

}

void ModuleEndOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ModuleEndOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ModuleEndOp::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void ModuleEndOp::print(OpAsmPrinter &p) {
  p << getOperationName();
}

LogicalResult ModuleEndOp::verify() {
  if (failed(ModuleEndOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
  }
  {
    unsigned index = 0; (void)index;
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// gpu::NumSubgroupsOp definitions
//===----------------------------------------------------------------------===//

NumSubgroupsOpAdaptor::NumSubgroupsOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

NumSubgroupsOpAdaptor::NumSubgroupsOpAdaptor(NumSubgroupsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> NumSubgroupsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange NumSubgroupsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult NumSubgroupsOpAdaptor::verify(Location loc) {
  return success();
}

StringRef NumSubgroupsOp::getOperationName() {
  return "gpu.num_subgroups";
}

std::pair<unsigned, unsigned> NumSubgroupsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range NumSubgroupsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> NumSubgroupsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range NumSubgroupsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value NumSubgroupsOp::result() {
  return *getODSResults(0).begin();
}

void NumSubgroupsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result) {
  odsState.addTypes(result);
}

void NumSubgroupsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void NumSubgroupsOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult NumSubgroupsOp::verify() {
  if (failed(NumSubgroupsOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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
  return success();
}

ParseResult NumSubgroupsOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  return success();
}

void NumSubgroupsOp::print(OpAsmPrinter &p) {
  p << "gpu.num_subgroups";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void NumSubgroupsOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::ReturnOp definitions
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
  return "gpu.return";
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

void ReturnOp::build(OpBuilder &builder, OperationState &result) {
 // empty
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

ParseResult ReturnOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseReturnOp(parser, result);
}

void ReturnOp::print(OpAsmPrinter &p) {
  p << getOperationName();
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

void ReturnOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::ShuffleOp definitions
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

Value ShuffleOpAdaptor::value() {
  return *getODSOperands(0).begin();
}

Value ShuffleOpAdaptor::offset() {
  return *getODSOperands(1).begin();
}

Value ShuffleOpAdaptor::width() {
  return *getODSOperands(2).begin();
}

StringAttr ShuffleOpAdaptor::mode() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("mode").cast<StringAttr>();
  return attr;
}

LogicalResult ShuffleOpAdaptor::verify(Location loc) {
  {
  auto tblgen_mode = odsAttrs.get("mode");
  if (!tblgen_mode) return emitError(loc, "'gpu.shuffle' op ""requires attribute 'mode'");
    if (!(((tblgen_mode.isa<StringAttr>())) && ((tblgen_mode.cast<StringAttr>().getValue() == "xor")))) return emitError(loc, "'gpu.shuffle' op ""attribute 'mode' failed to satisfy constraint: Indexing modes supported by gpu.shuffle.");
  }
  return success();
}

void ShuffleOp::getAsmResultNames(OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!llvm::empty(resultGroup0))
    setNameFn(*resultGroup0.begin(), "result");
  auto resultGroup1 = getODSResults(1);
  if (!llvm::empty(resultGroup1))
    setNameFn(*resultGroup1.begin(), "valid");
}

StringRef ShuffleOp::getOperationName() {
  return "gpu.shuffle";
}

std::pair<unsigned, unsigned> ShuffleOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ShuffleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ShuffleOp::value() {
  return *getODSOperands(0).begin();
}

Value ShuffleOp::offset() {
  return *getODSOperands(1).begin();
}

Value ShuffleOp::width() {
  return *getODSOperands(2).begin();
}

::mlir::MutableOperandRange ShuffleOp::valueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShuffleOp::offsetMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

::mlir::MutableOperandRange ShuffleOp::widthMutable() {
  auto range = getODSOperandIndexAndLength(2);
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

Value ShuffleOp::result() {
  return *getODSResults(0).begin();
}

Value ShuffleOp::valid() {
  return *getODSResults(1).begin();
}

StringAttr ShuffleOp::modeAttr() {
  return this->getAttr("mode").cast<StringAttr>();
}

StringRef ShuffleOp::mode() {
  auto attr = modeAttr();
  return attr.getValue();
}

void ShuffleOp::modeAttr(StringAttr attr) {
  this->getOperation()->setAttr("mode", attr);
}

void ShuffleOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Type valid, Value value, Value offset, Value width, StringAttr mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.addAttribute("mode", mode);
  odsState.addTypes(result);
  odsState.addTypes(valid);
}

void ShuffleOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringAttr mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.addAttribute("mode", mode);
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Type valid, Value value, Value offset, Value width, StringRef mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.addAttribute("mode", odsBuilder.getStringAttr(mode));
  odsState.addTypes(result);
  odsState.addTypes(valid);
}

void ShuffleOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringRef mode) {
  odsState.addOperands(value);
  odsState.addOperands(offset);
  odsState.addOperands(width);
  odsState.addAttribute("mode", odsBuilder.getStringAttr(mode));
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShuffleOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 3u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

ParseResult ShuffleOp::parse(OpAsmParser &parser, OperationState &result) {
  return parseShuffleOp(parser, result);
}

void ShuffleOp::print(OpAsmPrinter &p) {
  printShuffleOp(p, *this);
}

LogicalResult ShuffleOp::verify() {
  if (failed(ShuffleOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((v.getType().isSignlessInteger(32)))) {
        return emitOpError("operand #") << index << " must be 32-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup2 = getODSOperands(2);
    for (Value v : valueGroup2) {
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
      if (!((true))) {
        return emitOpError("result #") << index << " must be any type, but got " << v.getType();
      }
      ++index;
    }
    auto valueGroup1 = getODSResults(1);
    for (Value v : valueGroup1) {
      (void)v;
      if (!((v.getType().isSignlessInteger(1)))) {
        return emitOpError("result #") << index << " must be 1-bit signless integer, but got " << v.getType();
      }
      ++index;
    }
  }
  return ::verifyShuffleOp(*this);
}

void ShuffleOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::SubgroupIdOp definitions
//===----------------------------------------------------------------------===//

SubgroupIdOpAdaptor::SubgroupIdOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SubgroupIdOpAdaptor::SubgroupIdOpAdaptor(SubgroupIdOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SubgroupIdOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SubgroupIdOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult SubgroupIdOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SubgroupIdOp::getOperationName() {
  return "gpu.subgroup_id";
}

std::pair<unsigned, unsigned> SubgroupIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SubgroupIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SubgroupIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SubgroupIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SubgroupIdOp::result() {
  return *getODSResults(0).begin();
}

void SubgroupIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result) {
  odsState.addTypes(result);
}

void SubgroupIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupIdOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult SubgroupIdOp::verify() {
  if (failed(SubgroupIdOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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
  return success();
}

ParseResult SubgroupIdOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  return success();
}

void SubgroupIdOp::print(OpAsmPrinter &p) {
  p << "gpu.subgroup_id";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void SubgroupIdOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::SubgroupSizeOp definitions
//===----------------------------------------------------------------------===//

SubgroupSizeOpAdaptor::SubgroupSizeOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

SubgroupSizeOpAdaptor::SubgroupSizeOpAdaptor(SubgroupSizeOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> SubgroupSizeOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange SubgroupSizeOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

LogicalResult SubgroupSizeOpAdaptor::verify(Location loc) {
  return success();
}

StringRef SubgroupSizeOp::getOperationName() {
  return "gpu.subgroup_size";
}

std::pair<unsigned, unsigned> SubgroupSizeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range SubgroupSizeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SubgroupSizeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range SubgroupSizeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value SubgroupSizeOp::result() {
  return *getODSResults(0).begin();
}

void SubgroupSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type result) {
  odsState.addTypes(result);
}

void SubgroupSizeOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgroupSizeOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult SubgroupSizeOp::verify() {
  if (failed(SubgroupSizeOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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
  return success();
}

ParseResult SubgroupSizeOp::parse(OpAsmParser &parser, OperationState &result) {
  Type resultRawTypes[1];
  ArrayRef<Type> resultTypes(resultRawTypes);
  if (parser.parseOptionalAttrDict(result.attributes))
    return failure();
  if (parser.parseColon())
    return failure();

  if (parser.parseType(resultRawTypes[0]))
    return failure();
  result.addTypes(resultTypes);
  return success();
}

void SubgroupSizeOp::print(OpAsmPrinter &p) {
  p << "gpu.subgroup_size";
  p.printOptionalAttrDict(getAttrs(), /*elidedAttrs=*/{});
  p << " " << ":";
  p << " ";
  p << ArrayRef<Type>(result().getType());
}

void SubgroupSizeOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::TerminatorOp definitions
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
  return "gpu.terminator";
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

ParseResult TerminatorOp::parse(OpAsmParser &parser, OperationState &result) {
  return success();
}

void TerminatorOp::print(OpAsmPrinter &p) {
  p << getOperationName();
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

void TerminatorOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::ThreadIdOp definitions
//===----------------------------------------------------------------------===//

ThreadIdOpAdaptor::ThreadIdOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ThreadIdOpAdaptor::ThreadIdOpAdaptor(ThreadIdOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ThreadIdOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ThreadIdOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

StringAttr ThreadIdOpAdaptor::dimension() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("dimension").cast<StringAttr>();
  return attr;
}

LogicalResult ThreadIdOpAdaptor::verify(Location loc) {
  {
  auto tblgen_dimension = odsAttrs.get("dimension");
  if (!tblgen_dimension) return emitError(loc, "'gpu.thread_id' op ""requires attribute 'dimension'");
    if (!((tblgen_dimension.isa<StringAttr>()))) return emitError(loc, "'gpu.thread_id' op ""attribute 'dimension' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef ThreadIdOp::getOperationName() {
  return "gpu.thread_id";
}

std::pair<unsigned, unsigned> ThreadIdOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ThreadIdOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ThreadIdOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ThreadIdOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

StringAttr ThreadIdOp::dimensionAttr() {
  return this->getAttr("dimension").cast<StringAttr>();
}

StringRef ThreadIdOp::dimension() {
  auto attr = dimensionAttr();
  return attr.getValue();
}

void ThreadIdOp::dimensionAttr(StringAttr attr) {
  this->getOperation()->setAttr("dimension", attr);
}

void ThreadIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  odsState.addTypes(resultType0);
}

void ThreadIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension) {
  odsState.addAttribute("dimension", dimension);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  odsState.addTypes(resultType0);
}

void ThreadIdOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension) {
  odsState.addAttribute("dimension", odsBuilder.getStringAttr(dimension));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadIdOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult ThreadIdOp::verify() {
  if (failed(ThreadIdOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
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
  return ::verifyIndexOp(*this);
}

void ThreadIdOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// gpu::YieldOp definitions
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
  return "gpu.yield";
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
  return mlir::success();
}

void YieldOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

