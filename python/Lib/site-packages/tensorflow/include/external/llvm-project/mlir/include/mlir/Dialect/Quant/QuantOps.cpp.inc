/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

quant::ConstFakeQuant,
quant::ConstFakeQuantPerAxis,
quant::CoupledRefOp,
quant::DequantizeCastOp,
quant::QuantizeCastOp,
quant::QuantizeRegionOp,
quant::ReturnOp,
quant::StatisticsOp,
quant::StatisticsRefOp,
quant::StorageCastOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// quant::ConstFakeQuant definitions
//===----------------------------------------------------------------------===//

ConstFakeQuantAdaptor::ConstFakeQuantAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstFakeQuantAdaptor::ConstFakeQuantAdaptor(ConstFakeQuant& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstFakeQuantAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConstFakeQuantAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ConstFakeQuantAdaptor::inputs() {
  return *getODSOperands(0).begin();
}

FloatAttr ConstFakeQuantAdaptor::min() {
  assert(odsAttrs && "no attributes when constructing adapter");
  FloatAttr attr = odsAttrs.get("min").cast<FloatAttr>();
  return attr;
}

FloatAttr ConstFakeQuantAdaptor::max() {
  assert(odsAttrs && "no attributes when constructing adapter");
  FloatAttr attr = odsAttrs.get("max").cast<FloatAttr>();
  return attr;
}

IntegerAttr ConstFakeQuantAdaptor::num_bits() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("num_bits").cast<IntegerAttr>();
  return attr;
}

BoolAttr ConstFakeQuantAdaptor::narrow_range() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("narrow_range").dyn_cast_or_null<BoolAttr>();
  if (!attr)
    attr = mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

BoolAttr ConstFakeQuantAdaptor::is_signed() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("is_signed").dyn_cast_or_null<BoolAttr>();
  if (!attr)
    attr = mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

LogicalResult ConstFakeQuantAdaptor::verify(Location loc) {
  {
  auto tblgen_min = odsAttrs.get("min");
  if (!tblgen_min) return emitError(loc, "'quant.const_fake_quant' op ""requires attribute 'min'");
    if (!(((tblgen_min.isa<FloatAttr>())) && ((tblgen_min.cast<FloatAttr>().getType().isF32())))) return emitError(loc, "'quant.const_fake_quant' op ""attribute 'min' failed to satisfy constraint: 32-bit float attribute");
  }
  {
  auto tblgen_max = odsAttrs.get("max");
  if (!tblgen_max) return emitError(loc, "'quant.const_fake_quant' op ""requires attribute 'max'");
    if (!(((tblgen_max.isa<FloatAttr>())) && ((tblgen_max.cast<FloatAttr>().getType().isF32())))) return emitError(loc, "'quant.const_fake_quant' op ""attribute 'max' failed to satisfy constraint: 32-bit float attribute");
  }
  {
  auto tblgen_num_bits = odsAttrs.get("num_bits");
  if (!tblgen_num_bits) return emitError(loc, "'quant.const_fake_quant' op ""requires attribute 'num_bits'");
    if (!(((tblgen_num_bits.isa<IntegerAttr>())) && ((tblgen_num_bits.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'quant.const_fake_quant' op ""attribute 'num_bits' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_narrow_range = odsAttrs.get("narrow_range");
  if (tblgen_narrow_range) {
    if (!((tblgen_narrow_range.isa<BoolAttr>()))) return emitError(loc, "'quant.const_fake_quant' op ""attribute 'narrow_range' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_is_signed = odsAttrs.get("is_signed");
  if (tblgen_is_signed) {
    if (!((tblgen_is_signed.isa<BoolAttr>()))) return emitError(loc, "'quant.const_fake_quant' op ""attribute 'is_signed' failed to satisfy constraint: bool attribute");
  }
  }
  return success();
}

StringRef ConstFakeQuant::getOperationName() {
  return "quant.const_fake_quant";
}

std::pair<unsigned, unsigned> ConstFakeQuant::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConstFakeQuant::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ConstFakeQuant::inputs() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ConstFakeQuant::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConstFakeQuant::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConstFakeQuant::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ConstFakeQuant::outputs() {
  return *getODSResults(0).begin();
}

FloatAttr ConstFakeQuant::minAttr() {
  return this->getAttr("min").cast<FloatAttr>();
}

APFloat ConstFakeQuant::min() {
  auto attr = minAttr();
  return attr.getValue();
}

FloatAttr ConstFakeQuant::maxAttr() {
  return this->getAttr("max").cast<FloatAttr>();
}

APFloat ConstFakeQuant::max() {
  auto attr = maxAttr();
  return attr.getValue();
}

IntegerAttr ConstFakeQuant::num_bitsAttr() {
  return this->getAttr("num_bits").cast<IntegerAttr>();
}

APInt ConstFakeQuant::num_bits() {
  auto attr = num_bitsAttr();
  return attr.getValue();
}

BoolAttr ConstFakeQuant::narrow_rangeAttr() {
  return this->getAttr("narrow_range").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuant::narrow_range() {
  auto attr = narrow_rangeAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

BoolAttr ConstFakeQuant::is_signedAttr() {
  return this->getAttr("is_signed").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuant::is_signed() {
  auto attr = is_signedAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void ConstFakeQuant::minAttr(FloatAttr attr) {
  this->getOperation()->setAttr("min", attr);
}

void ConstFakeQuant::maxAttr(FloatAttr attr) {
  this->getOperation()->setAttr("max", attr);
}

void ConstFakeQuant::num_bitsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("num_bits", attr);
}

void ConstFakeQuant::narrow_rangeAttr(BoolAttr attr) {
  this->getOperation()->setAttr("narrow_range", attr);
}

void ConstFakeQuant::is_signedAttr(BoolAttr attr) {
  this->getOperation()->setAttr("is_signed", attr);
}

void ConstFakeQuant::build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("num_bits", num_bits);
  odsState.addAttribute("narrow_range", narrow_range);
  odsState.addAttribute("is_signed", is_signed);
  odsState.addTypes(outputs);
}

void ConstFakeQuant::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("num_bits", num_bits);
  odsState.addAttribute("narrow_range", narrow_range);
  odsState.addAttribute("is_signed", is_signed);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstFakeQuant::build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), min));
  odsState.addAttribute("max", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), max));
  odsState.addAttribute("num_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_bits));
  odsState.addAttribute("narrow_range", odsBuilder.getBoolAttr(narrow_range));
  odsState.addAttribute("is_signed", odsBuilder.getBoolAttr(is_signed));
  odsState.addTypes(outputs);
}

void ConstFakeQuant::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), min));
  odsState.addAttribute("max", odsBuilder.getFloatAttr(odsBuilder.getF32Type(), max));
  odsState.addAttribute("num_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_bits));
  odsState.addAttribute("narrow_range", odsBuilder.getBoolAttr(narrow_range));
  odsState.addAttribute("is_signed", odsBuilder.getBoolAttr(is_signed));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstFakeQuant::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstFakeQuant::build(OpBuilder &odsBuilder, OperationState &odsState, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("num_bits", num_bits);
  odsState.addAttribute("narrow_range", narrow_range);
  odsState.addAttribute("is_signed", is_signed);
  odsState.addTypes({inputs.getType()});

}

void ConstFakeQuant::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult ConstFakeQuant::verify() {
  if (failed(ConstFakeQuantAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("operand #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("result #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

void ConstFakeQuant::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// quant::ConstFakeQuantPerAxis definitions
//===----------------------------------------------------------------------===//

ConstFakeQuantPerAxisAdaptor::ConstFakeQuantPerAxisAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

ConstFakeQuantPerAxisAdaptor::ConstFakeQuantPerAxisAdaptor(ConstFakeQuantPerAxis& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> ConstFakeQuantPerAxisAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange ConstFakeQuantPerAxisAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value ConstFakeQuantPerAxisAdaptor::inputs() {
  return *getODSOperands(0).begin();
}

ArrayAttr ConstFakeQuantPerAxisAdaptor::min() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("min").cast<ArrayAttr>();
  return attr;
}

ArrayAttr ConstFakeQuantPerAxisAdaptor::max() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("max").cast<ArrayAttr>();
  return attr;
}

IntegerAttr ConstFakeQuantPerAxisAdaptor::axis() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("axis").cast<IntegerAttr>();
  return attr;
}

IntegerAttr ConstFakeQuantPerAxisAdaptor::num_bits() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("num_bits").cast<IntegerAttr>();
  return attr;
}

BoolAttr ConstFakeQuantPerAxisAdaptor::narrow_range() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("narrow_range").dyn_cast_or_null<BoolAttr>();
  if (!attr)
    attr = mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

BoolAttr ConstFakeQuantPerAxisAdaptor::is_signed() {
  assert(odsAttrs && "no attributes when constructing adapter");
  BoolAttr attr = odsAttrs.get("is_signed").dyn_cast_or_null<BoolAttr>();
  if (!attr)
    attr = mlir::Builder(odsAttrs.getContext()).getBoolAttr(false);
  return attr;
}

LogicalResult ConstFakeQuantPerAxisAdaptor::verify(Location loc) {
  {
  auto tblgen_min = odsAttrs.get("min");
  if (!tblgen_min) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""requires attribute 'min'");
    if (!(((tblgen_min.isa<ArrayAttr>())) && (llvm::all_of(tblgen_min.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<FloatAttr>())) && ((attr.cast<FloatAttr>().getType().isF32())); })))) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""attribute 'min' failed to satisfy constraint: 32-bit float array attribute");
  }
  {
  auto tblgen_max = odsAttrs.get("max");
  if (!tblgen_max) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""requires attribute 'max'");
    if (!(((tblgen_max.isa<ArrayAttr>())) && (llvm::all_of(tblgen_max.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<FloatAttr>())) && ((attr.cast<FloatAttr>().getType().isF32())); })))) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""attribute 'max' failed to satisfy constraint: 32-bit float array attribute");
  }
  {
  auto tblgen_axis = odsAttrs.get("axis");
  if (!tblgen_axis) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""requires attribute 'axis'");
    if (!(((tblgen_axis.isa<IntegerAttr>())) && ((tblgen_axis.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""attribute 'axis' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_num_bits = odsAttrs.get("num_bits");
  if (!tblgen_num_bits) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""requires attribute 'num_bits'");
    if (!(((tblgen_num_bits.isa<IntegerAttr>())) && ((tblgen_num_bits.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""attribute 'num_bits' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  {
  auto tblgen_narrow_range = odsAttrs.get("narrow_range");
  if (tblgen_narrow_range) {
    if (!((tblgen_narrow_range.isa<BoolAttr>()))) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""attribute 'narrow_range' failed to satisfy constraint: bool attribute");
  }
  }
  {
  auto tblgen_is_signed = odsAttrs.get("is_signed");
  if (tblgen_is_signed) {
    if (!((tblgen_is_signed.isa<BoolAttr>()))) return emitError(loc, "'quant.const_fake_quant_per_axis' op ""attribute 'is_signed' failed to satisfy constraint: bool attribute");
  }
  }
  return success();
}

StringRef ConstFakeQuantPerAxis::getOperationName() {
  return "quant.const_fake_quant_per_axis";
}

std::pair<unsigned, unsigned> ConstFakeQuantPerAxis::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range ConstFakeQuantPerAxis::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value ConstFakeQuantPerAxis::inputs() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange ConstFakeQuantPerAxis::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> ConstFakeQuantPerAxis::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range ConstFakeQuantPerAxis::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Value ConstFakeQuantPerAxis::outputs() {
  return *getODSResults(0).begin();
}

ArrayAttr ConstFakeQuantPerAxis::minAttr() {
  return this->getAttr("min").cast<ArrayAttr>();
}

ArrayAttr ConstFakeQuantPerAxis::min() {
  auto attr = minAttr();
  return attr;
}

ArrayAttr ConstFakeQuantPerAxis::maxAttr() {
  return this->getAttr("max").cast<ArrayAttr>();
}

ArrayAttr ConstFakeQuantPerAxis::max() {
  auto attr = maxAttr();
  return attr;
}

IntegerAttr ConstFakeQuantPerAxis::axisAttr() {
  return this->getAttr("axis").cast<IntegerAttr>();
}

APInt ConstFakeQuantPerAxis::axis() {
  auto attr = axisAttr();
  return attr.getValue();
}

IntegerAttr ConstFakeQuantPerAxis::num_bitsAttr() {
  return this->getAttr("num_bits").cast<IntegerAttr>();
}

APInt ConstFakeQuantPerAxis::num_bits() {
  auto attr = num_bitsAttr();
  return attr.getValue();
}

BoolAttr ConstFakeQuantPerAxis::narrow_rangeAttr() {
  return this->getAttr("narrow_range").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuantPerAxis::narrow_range() {
  auto attr = narrow_rangeAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

BoolAttr ConstFakeQuantPerAxis::is_signedAttr() {
  return this->getAttr("is_signed").dyn_cast_or_null<BoolAttr>();
}

bool ConstFakeQuantPerAxis::is_signed() {
  auto attr = is_signedAttr();
    if (!attr)
      return mlir::Builder(this->getContext()).getBoolAttr(false).getValue();
  return attr.getValue();
}

void ConstFakeQuantPerAxis::minAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("min", attr);
}

void ConstFakeQuantPerAxis::maxAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("max", attr);
}

void ConstFakeQuantPerAxis::axisAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("axis", attr);
}

void ConstFakeQuantPerAxis::num_bitsAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("num_bits", attr);
}

void ConstFakeQuantPerAxis::narrow_rangeAttr(BoolAttr attr) {
  this->getOperation()->setAttr("narrow_range", attr);
}

void ConstFakeQuantPerAxis::is_signedAttr(BoolAttr attr) {
  this->getOperation()->setAttr("is_signed", attr);
}

void ConstFakeQuantPerAxis::build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("axis", axis);
  odsState.addAttribute("num_bits", num_bits);
  odsState.addAttribute("narrow_range", narrow_range);
  odsState.addAttribute("is_signed", is_signed);
  odsState.addTypes(outputs);
}

void ConstFakeQuantPerAxis::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("axis", axis);
  odsState.addAttribute("num_bits", num_bits);
  odsState.addAttribute("narrow_range", narrow_range);
  odsState.addAttribute("is_signed", is_signed);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstFakeQuantPerAxis::build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("axis", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), axis));
  odsState.addAttribute("num_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_bits));
  odsState.addAttribute("narrow_range", odsBuilder.getBoolAttr(narrow_range));
  odsState.addAttribute("is_signed", odsBuilder.getBoolAttr(is_signed));
  odsState.addTypes(outputs);
}

void ConstFakeQuantPerAxis::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range ,  bool is_signed ) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("axis", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), axis));
  odsState.addAttribute("num_bits", odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), num_bits));
  odsState.addAttribute("narrow_range", odsBuilder.getBoolAttr(narrow_range));
  odsState.addAttribute("is_signed", odsBuilder.getBoolAttr(is_signed));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ConstFakeQuantPerAxis::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ConstFakeQuantPerAxis::build(OpBuilder &odsBuilder, OperationState &odsState, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed) {
  odsState.addOperands(inputs);
  odsState.addAttribute("min", min);
  odsState.addAttribute("max", max);
  odsState.addAttribute("axis", axis);
  odsState.addAttribute("num_bits", num_bits);
  odsState.addAttribute("narrow_range", narrow_range);
  odsState.addAttribute("is_signed", is_signed);
  odsState.addTypes({inputs.getType()});

}

void ConstFakeQuantPerAxis::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult ConstFakeQuantPerAxis::verify() {
  if (failed(ConstFakeQuantPerAxisAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("operand #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((v.getType().isa<TensorType>())) && ((v.getType().cast<ShapedType>().getElementType().isF32())))) {
        return emitOpError("result #") << index << " must be tensor of 32-bit float values, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

void ConstFakeQuantPerAxis::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// quant::CoupledRefOp definitions
//===----------------------------------------------------------------------===//

CoupledRefOpAdaptor::CoupledRefOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

CoupledRefOpAdaptor::CoupledRefOpAdaptor(CoupledRefOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> CoupledRefOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange CoupledRefOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value CoupledRefOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringAttr CoupledRefOpAdaptor::coupledKey() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("coupledKey").cast<StringAttr>();
  return attr;
}

LogicalResult CoupledRefOpAdaptor::verify(Location loc) {
  {
  auto tblgen_coupledKey = odsAttrs.get("coupledKey");
  if (!tblgen_coupledKey) return emitError(loc, "'quant.coupled_ref' op ""requires attribute 'coupledKey'");
    if (!((tblgen_coupledKey.isa<StringAttr>()))) return emitError(loc, "'quant.coupled_ref' op ""attribute 'coupledKey' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef CoupledRefOp::getOperationName() {
  return "quant.coupled_ref";
}

std::pair<unsigned, unsigned> CoupledRefOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range CoupledRefOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value CoupledRefOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange CoupledRefOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> CoupledRefOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range CoupledRefOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

StringAttr CoupledRefOp::coupledKeyAttr() {
  return this->getAttr("coupledKey").cast<StringAttr>();
}

StringRef CoupledRefOp::coupledKey() {
  auto attr = coupledKeyAttr();
  return attr.getValue();
}

void CoupledRefOp::coupledKeyAttr(StringAttr attr) {
  this->getOperation()->setAttr("coupledKey", attr);
}

void CoupledRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringAttr coupledKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("coupledKey", coupledKey);
  odsState.addTypes(resultType0);
}

void CoupledRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringAttr coupledKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("coupledKey", coupledKey);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoupledRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringRef coupledKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("coupledKey", odsBuilder.getStringAttr(coupledKey));
  odsState.addTypes(resultType0);
}

void CoupledRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringRef coupledKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("coupledKey", odsBuilder.getStringAttr(coupledKey));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CoupledRefOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CoupledRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value arg, StringAttr coupledKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("coupledKey", coupledKey);
  odsState.addTypes({arg.getType()});

}

void CoupledRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult CoupledRefOp::verify() {
  if (failed(CoupledRefOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// quant::DequantizeCastOp definitions
//===----------------------------------------------------------------------===//

DequantizeCastOpAdaptor::DequantizeCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

DequantizeCastOpAdaptor::DequantizeCastOpAdaptor(DequantizeCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> DequantizeCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange DequantizeCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value DequantizeCastOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult DequantizeCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef DequantizeCastOp::getOperationName() {
  return "quant.dcast";
}

std::pair<unsigned, unsigned> DequantizeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range DequantizeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value DequantizeCastOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange DequantizeCastOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> DequantizeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range DequantizeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void DequantizeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(resultType0);
}

void DequantizeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DequantizeCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult DequantizeCastOp::verify() {
  if (failed(DequantizeCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

void DequantizeCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// quant::QuantizeCastOp definitions
//===----------------------------------------------------------------------===//

QuantizeCastOpAdaptor::QuantizeCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

QuantizeCastOpAdaptor::QuantizeCastOpAdaptor(QuantizeCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> QuantizeCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange QuantizeCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value QuantizeCastOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult QuantizeCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef QuantizeCastOp::getOperationName() {
  return "quant.qcast";
}

std::pair<unsigned, unsigned> QuantizeCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range QuantizeCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value QuantizeCastOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange QuantizeCastOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> QuantizeCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range QuantizeCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void QuantizeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(resultType0);
}

void QuantizeCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void QuantizeCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult QuantizeCastOp::verify() {
  if (failed(QuantizeCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}

void QuantizeCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// quant::QuantizeRegionOp definitions
//===----------------------------------------------------------------------===//

QuantizeRegionOpAdaptor::QuantizeRegionOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

QuantizeRegionOpAdaptor::QuantizeRegionOpAdaptor(QuantizeRegionOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> QuantizeRegionOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
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

ValueRange QuantizeRegionOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

ValueRange QuantizeRegionOpAdaptor::inputs() {
  return getODSOperands(0);
}

ArrayAttr QuantizeRegionOpAdaptor::input_specs() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("input_specs").cast<ArrayAttr>();
  return attr;
}

ArrayAttr QuantizeRegionOpAdaptor::output_specs() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ArrayAttr attr = odsAttrs.get("output_specs").cast<ArrayAttr>();
  return attr;
}

StringAttr QuantizeRegionOpAdaptor::logical_kernel() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("logical_kernel").cast<StringAttr>();
  return attr;
}

LogicalResult QuantizeRegionOpAdaptor::verify(Location loc) {
  {
  auto tblgen_input_specs = odsAttrs.get("input_specs");
  if (!tblgen_input_specs) return emitError(loc, "'quant.region' op ""requires attribute 'input_specs'");
    if (!(((tblgen_input_specs.isa<ArrayAttr>())) && (llvm::all_of(tblgen_input_specs.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<TypeAttr>())) && ((attr.cast<TypeAttr>().getValue().isa<Type>())); })))) return emitError(loc, "'quant.region' op ""attribute 'input_specs' failed to satisfy constraint: type array attribute");
  }
  {
  auto tblgen_output_specs = odsAttrs.get("output_specs");
  if (!tblgen_output_specs) return emitError(loc, "'quant.region' op ""requires attribute 'output_specs'");
    if (!(((tblgen_output_specs.isa<ArrayAttr>())) && (llvm::all_of(tblgen_output_specs.cast<ArrayAttr>(), [](Attribute attr) { return ((attr.isa<TypeAttr>())) && ((attr.cast<TypeAttr>().getValue().isa<Type>())); })))) return emitError(loc, "'quant.region' op ""attribute 'output_specs' failed to satisfy constraint: type array attribute");
  }
  {
  auto tblgen_logical_kernel = odsAttrs.get("logical_kernel");
  if (!tblgen_logical_kernel) return emitError(loc, "'quant.region' op ""requires attribute 'logical_kernel'");
    if (!((tblgen_logical_kernel.isa<StringAttr>()))) return emitError(loc, "'quant.region' op ""attribute 'logical_kernel' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef QuantizeRegionOp::getOperationName() {
  return "quant.region";
}

std::pair<unsigned, unsigned> QuantizeRegionOp::getODSOperandIndexAndLength(unsigned index) {
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

Operation::operand_range QuantizeRegionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Operation::operand_range QuantizeRegionOp::inputs() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange QuantizeRegionOp::inputsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> QuantizeRegionOp::getODSResultIndexAndLength(unsigned index) {
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

Operation::result_range QuantizeRegionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

Operation::result_range QuantizeRegionOp::outputs() {
  return getODSResults(0);
}

Region &QuantizeRegionOp::body() {
  return this->getOperation()->getRegion(0);
}

ArrayAttr QuantizeRegionOp::input_specsAttr() {
  return this->getAttr("input_specs").cast<ArrayAttr>();
}

ArrayAttr QuantizeRegionOp::input_specs() {
  auto attr = input_specsAttr();
  return attr;
}

ArrayAttr QuantizeRegionOp::output_specsAttr() {
  return this->getAttr("output_specs").cast<ArrayAttr>();
}

ArrayAttr QuantizeRegionOp::output_specs() {
  auto attr = output_specsAttr();
  return attr;
}

StringAttr QuantizeRegionOp::logical_kernelAttr() {
  return this->getAttr("logical_kernel").cast<StringAttr>();
}

StringRef QuantizeRegionOp::logical_kernel() {
  auto attr = logical_kernelAttr();
  return attr.getValue();
}

void QuantizeRegionOp::input_specsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("input_specs", attr);
}

void QuantizeRegionOp::output_specsAttr(ArrayAttr attr) {
  this->getOperation()->setAttr("output_specs", attr);
}

void QuantizeRegionOp::logical_kernelAttr(StringAttr attr) {
  this->getOperation()->setAttr("logical_kernel", attr);
}

void QuantizeRegionOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, ArrayAttr input_specs, ArrayAttr output_specs, StringAttr logical_kernel) {
  odsState.addOperands(inputs);
  odsState.addAttribute("input_specs", input_specs);
  odsState.addAttribute("output_specs", output_specs);
  odsState.addAttribute("logical_kernel", logical_kernel);
  (void)odsState.addRegion();
  odsState.addTypes(outputs);
}

void QuantizeRegionOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, ArrayAttr input_specs, ArrayAttr output_specs, StringRef logical_kernel) {
  odsState.addOperands(inputs);
  odsState.addAttribute("input_specs", input_specs);
  odsState.addAttribute("output_specs", output_specs);
  odsState.addAttribute("logical_kernel", odsBuilder.getStringAttr(logical_kernel));
  (void)odsState.addRegion();
  odsState.addTypes(outputs);
}

void QuantizeRegionOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  odsState.addTypes(resultTypes);
}

LogicalResult QuantizeRegionOp::verify() {
  if (failed(QuantizeRegionOpAdaptor(*this).verify(this->getLoc()))) return failure();
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
      if (!((region.getBlocks().size() == 1))) {
        return emitOpError("region #") << index << " ('body') failed to verify constraint: region with 1 blocks";
      }
      ++index;
    }
  }
  return verifyRegionOp(*this);
}

void QuantizeRegionOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


//===----------------------------------------------------------------------===//
// quant::ReturnOp definitions
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

ValueRange ReturnOpAdaptor::results() {
  return getODSOperands(0);
}

LogicalResult ReturnOpAdaptor::verify(Location loc) {
  return success();
}

StringRef ReturnOp::getOperationName() {
  return "quant.return";
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

Operation::operand_range ReturnOp::results() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ReturnOp::resultsMutable() {
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

void ReturnOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange results) {
  odsState.addOperands(results);
}

void ReturnOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange results) {
  odsState.addOperands(results);
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
      if (!(((v.getType().isa<TensorType>())) && ((true)))) {
        return emitOpError("operand #") << index << " must be tensor of any type values, but got " << v.getType();
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
// quant::StatisticsOp definitions
//===----------------------------------------------------------------------===//

StatisticsOpAdaptor::StatisticsOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

StatisticsOpAdaptor::StatisticsOpAdaptor(StatisticsOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> StatisticsOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange StatisticsOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value StatisticsOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

ElementsAttr StatisticsOpAdaptor::layerStats() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ElementsAttr attr = odsAttrs.get("layerStats").cast<ElementsAttr>();
  return attr;
}

ElementsAttr StatisticsOpAdaptor::axisStats() {
  assert(odsAttrs && "no attributes when constructing adapter");
  ElementsAttr attr = odsAttrs.get("axisStats").dyn_cast_or_null<ElementsAttr>();
  return attr;
}

IntegerAttr StatisticsOpAdaptor::axis() {
  assert(odsAttrs && "no attributes when constructing adapter");
  IntegerAttr attr = odsAttrs.get("axis").dyn_cast_or_null<IntegerAttr>();
  return attr;
}

LogicalResult StatisticsOpAdaptor::verify(Location loc) {
  {
  auto tblgen_layerStats = odsAttrs.get("layerStats");
  if (!tblgen_layerStats) return emitError(loc, "'quant.stats' op ""requires attribute 'layerStats'");
    if (!((tblgen_layerStats.isa<ElementsAttr>()))) return emitError(loc, "'quant.stats' op ""attribute 'layerStats' failed to satisfy constraint: constant vector/tensor attribute");
  }
  {
  auto tblgen_axisStats = odsAttrs.get("axisStats");
  if (tblgen_axisStats) {
    if (!((tblgen_axisStats.isa<ElementsAttr>()))) return emitError(loc, "'quant.stats' op ""attribute 'axisStats' failed to satisfy constraint: constant vector/tensor attribute");
  }
  }
  {
  auto tblgen_axis = odsAttrs.get("axis");
  if (tblgen_axis) {
    if (!(((tblgen_axis.isa<IntegerAttr>())) && ((tblgen_axis.cast<IntegerAttr>().getType().isSignlessInteger(64))))) return emitError(loc, "'quant.stats' op ""attribute 'axis' failed to satisfy constraint: 64-bit signless integer attribute");
  }
  }
  return success();
}

StringRef StatisticsOp::getOperationName() {
  return "quant.stats";
}

std::pair<unsigned, unsigned> StatisticsOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range StatisticsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value StatisticsOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange StatisticsOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> StatisticsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range StatisticsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

ElementsAttr StatisticsOp::layerStatsAttr() {
  return this->getAttr("layerStats").cast<ElementsAttr>();
}

ElementsAttr StatisticsOp::layerStats() {
  auto attr = layerStatsAttr();
  return attr;
}

ElementsAttr StatisticsOp::axisStatsAttr() {
  return this->getAttr("axisStats").dyn_cast_or_null<ElementsAttr>();
}

Optional< ElementsAttr > StatisticsOp::axisStats() {
  auto attr = axisStatsAttr();
  return attr ? Optional< ElementsAttr >(attr) : (llvm::None);
}

IntegerAttr StatisticsOp::axisAttr() {
  return this->getAttr("axis").dyn_cast_or_null<IntegerAttr>();
}

Optional< APInt > StatisticsOp::axis() {
  auto attr = axisAttr();
  return attr ? Optional< APInt >(attr.getValue()) : (llvm::None);
}

void StatisticsOp::layerStatsAttr(ElementsAttr attr) {
  this->getOperation()->setAttr("layerStats", attr);
}

void StatisticsOp::axisStatsAttr(ElementsAttr attr) {
  this->getOperation()->setAttr("axisStats", attr);
}

void StatisticsOp::axisAttr(IntegerAttr attr) {
  this->getOperation()->setAttr("axis", attr);
}

void StatisticsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis) {
  odsState.addOperands(arg);
  odsState.addAttribute("layerStats", layerStats);
  if (axisStats) {
  odsState.addAttribute("axisStats", axisStats);
  }
  if (axis) {
  odsState.addAttribute("axis", axis);
  }
  odsState.addTypes(resultType0);
}

void StatisticsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis) {
  odsState.addOperands(arg);
  odsState.addAttribute("layerStats", layerStats);
  if (axisStats) {
  odsState.addAttribute("axisStats", axisStats);
  }
  if (axis) {
  odsState.addAttribute("axis", axis);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StatisticsOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void StatisticsOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis) {
  odsState.addOperands(arg);
  odsState.addAttribute("layerStats", layerStats);
  if (axisStats) {
  odsState.addAttribute("axisStats", axisStats);
  }
  if (axis) {
  odsState.addAttribute("axis", axis);
  }
  odsState.addTypes({arg.getType()});

}

void StatisticsOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult StatisticsOp::verify() {
  if (failed(StatisticsOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  auto tensorArg = arg().getType().dyn_cast<TensorType>();
    if (!tensorArg) return emitOpError("arg needs to be tensor type.");

    // Verify layerStats attribute.
    {
      auto layerStatsType = layerStats().getType();
      if (!layerStatsType.getElementType().isa<FloatType>()) {
        return emitOpError(
            "layerStats must have a floating point element type");
      }
      if (layerStatsType.getRank() != 1 || layerStatsType.getDimSize(0) != 2) {
        return emitOpError("layerStats must have shape [2]");
      }
    }
    // Verify axisStats (optional) attribute.
    if (axisStats()) {
      if (!axis()) return emitOpError("axis must be specified for axisStats");

      auto shape = tensorArg.getShape();
      auto argSliceSize = std::accumulate(std::next(shape.begin(),
        axis()->getSExtValue()), shape.end(), 1, std::multiplies<int64_t>());

      auto axisStatsType = axisStats()->getType();
      if (!axisStatsType.getElementType().isa<FloatType>()) {
        return emitOpError("axisStats must have a floating point element type");
      }
      if (axisStatsType.getRank() != 2 ||
          axisStatsType.getDimSize(1) != 2 ||
          axisStatsType.getDimSize(0) != argSliceSize) {
        return emitOpError("axisStats must have shape [N,2] "
                           "where N = the slice size defined by the axis dim");
      }
    }
    return success();
}


//===----------------------------------------------------------------------===//
// quant::StatisticsRefOp definitions
//===----------------------------------------------------------------------===//

StatisticsRefOpAdaptor::StatisticsRefOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

StatisticsRefOpAdaptor::StatisticsRefOpAdaptor(StatisticsRefOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> StatisticsRefOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange StatisticsRefOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value StatisticsRefOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

StringAttr StatisticsRefOpAdaptor::statsKey() {
  assert(odsAttrs && "no attributes when constructing adapter");
  StringAttr attr = odsAttrs.get("statsKey").cast<StringAttr>();
  return attr;
}

LogicalResult StatisticsRefOpAdaptor::verify(Location loc) {
  {
  auto tblgen_statsKey = odsAttrs.get("statsKey");
  if (!tblgen_statsKey) return emitError(loc, "'quant.stats_ref' op ""requires attribute 'statsKey'");
    if (!((tblgen_statsKey.isa<StringAttr>()))) return emitError(loc, "'quant.stats_ref' op ""attribute 'statsKey' failed to satisfy constraint: string attribute");
  }
  return success();
}

StringRef StatisticsRefOp::getOperationName() {
  return "quant.stats_ref";
}

std::pair<unsigned, unsigned> StatisticsRefOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range StatisticsRefOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value StatisticsRefOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange StatisticsRefOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> StatisticsRefOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range StatisticsRefOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

StringAttr StatisticsRefOp::statsKeyAttr() {
  return this->getAttr("statsKey").cast<StringAttr>();
}

StringRef StatisticsRefOp::statsKey() {
  auto attr = statsKeyAttr();
  return attr.getValue();
}

void StatisticsRefOp::statsKeyAttr(StringAttr attr) {
  this->getOperation()->setAttr("statsKey", attr);
}

void StatisticsRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringAttr statsKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("statsKey", statsKey);
  odsState.addTypes(resultType0);
}

void StatisticsRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringAttr statsKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("statsKey", statsKey);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StatisticsRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringRef statsKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("statsKey", odsBuilder.getStringAttr(statsKey));
  odsState.addTypes(resultType0);
}

void StatisticsRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringRef statsKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("statsKey", odsBuilder.getStringAttr(statsKey));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StatisticsRefOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void StatisticsRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, Value arg, StringAttr statsKey) {
  odsState.addOperands(arg);
  odsState.addAttribute("statsKey", statsKey);
  odsState.addTypes({arg.getType()});

}

void StatisticsRefOp::build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes({operands[0].getType()});

}

LogicalResult StatisticsRefOp::verify() {
  if (failed(StatisticsRefOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("operand #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))))) {
        return emitOpError("result #") << index << " must be primitive/tensor/vector of real valued primitive (float or quantized type), but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}


//===----------------------------------------------------------------------===//
// quant::StorageCastOp definitions
//===----------------------------------------------------------------------===//

StorageCastOpAdaptor::StorageCastOpAdaptor(ValueRange values, DictionaryAttr attrs )  : odsOperands(values), odsAttrs(attrs) {

}

StorageCastOpAdaptor::StorageCastOpAdaptor(StorageCastOp& op)  : odsOperands(op.getOperation()->getOperands()), odsAttrs(op.getOperation()->getAttrDictionary()) {

}

std::pair<unsigned, unsigned> StorageCastOpAdaptor::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

ValueRange StorageCastOpAdaptor::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(odsOperands.begin(), valueRange.first),
           std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
}

Value StorageCastOpAdaptor::arg() {
  return *getODSOperands(0).begin();
}

LogicalResult StorageCastOpAdaptor::verify(Location loc) {
  return success();
}

StringRef StorageCastOp::getOperationName() {
  return "quant.scast";
}

std::pair<unsigned, unsigned> StorageCastOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::operand_range StorageCastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

Value StorageCastOp::arg() {
  return *getODSOperands(0).begin();
}

::mlir::MutableOperandRange StorageCastOp::argMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
}

std::pair<unsigned, unsigned> StorageCastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

Operation::result_range StorageCastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void StorageCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg) {
  odsState.addOperands(arg);
  odsState.addTypes(resultType0);
}

void StorageCastOp::build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg) {
  odsState.addOperands(arg);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void StorageCastOp::build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

LogicalResult StorageCastOp::verify() {
  if (failed(StorageCastOpAdaptor(*this).verify(this->getLoc()))) return failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))) || ((((v.getType().isSignlessInteger())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))))) {
        return emitOpError("operand #") << index << " must be quant_RealOrStorageValueType, but got " << v.getType();
      }
      ++index;
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);
    for (Value v : valueGroup0) {
      (void)v;
      if (!(((((v.getType().isa<FloatType>())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isa<FloatType>())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))) || ((((v.getType().isSignlessInteger())) || ((v.getType().isa<mlir::quant::QuantizedType>()))) || (((v.getType().isa<TensorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>())))) || (((v.getType().isa<VectorType>())) && (((v.getType().cast<ShapedType>().getElementType().isSignlessInteger())) || ((v.getType().cast<ShapedType>().getElementType().isa<mlir::quant::QuantizedType>()))))))) {
        return emitOpError("result #") << index << " must be quant_RealOrStorageValueType, but got " << v.getType();
      }
      ++index;
    }
  }
  return mlir::success();
}



void StorageCastOp::getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects) {

}


#endif  // GET_OP_CLASSES

