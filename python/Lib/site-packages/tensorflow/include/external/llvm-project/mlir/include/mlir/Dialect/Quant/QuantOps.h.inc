/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ConstFakeQuant;
class ConstFakeQuantPerAxis;
class CoupledRefOp;
class DequantizeCastOp;
class QuantizeCastOp;
class QuantizeRegionOp;
class ReturnOp;
class StatisticsOp;
class StatisticsRefOp;
class StorageCastOp;

//===----------------------------------------------------------------------===//
// quant::ConstFakeQuant declarations
//===----------------------------------------------------------------------===//

class ConstFakeQuantAdaptor {
public:
  ConstFakeQuantAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstFakeQuantAdaptor(ConstFakeQuant& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value inputs();
  FloatAttr min();
  FloatAttr max();
  IntegerAttr num_bits();
  BoolAttr narrow_range();
  BoolAttr is_signed();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstFakeQuant : public Op<ConstFakeQuant, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstFakeQuantAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value outputs();
  FloatAttr minAttr();
  APFloat min();
  FloatAttr maxAttr();
  APFloat max();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  BoolAttr is_signedAttr();
  bool is_signed();
  void minAttr(FloatAttr attr);
  void maxAttr(FloatAttr attr);
  void num_bitsAttr(IntegerAttr attr);
  void narrow_rangeAttr(BoolAttr attr);
  void is_signedAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, APFloat min, APFloat max, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value inputs, FloatAttr min, FloatAttr max, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// quant::ConstFakeQuantPerAxis declarations
//===----------------------------------------------------------------------===//

class ConstFakeQuantPerAxisAdaptor {
public:
  ConstFakeQuantPerAxisAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstFakeQuantPerAxisAdaptor(ConstFakeQuantPerAxis& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value inputs();
  ArrayAttr min();
  ArrayAttr max();
  IntegerAttr axis();
  IntegerAttr num_bits();
  BoolAttr narrow_range();
  BoolAttr is_signed();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstFakeQuantPerAxis : public Op<ConstFakeQuantPerAxis, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstFakeQuantPerAxisAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value outputs();
  ArrayAttr minAttr();
  ArrayAttr min();
  ArrayAttr maxAttr();
  ArrayAttr max();
  IntegerAttr axisAttr();
  APInt axis();
  IntegerAttr num_bitsAttr();
  APInt num_bits();
  BoolAttr narrow_rangeAttr();
  bool narrow_range();
  BoolAttr is_signedAttr();
  bool is_signed();
  void minAttr(ArrayAttr attr);
  void maxAttr(ArrayAttr attr);
  void axisAttr(IntegerAttr attr);
  void num_bitsAttr(IntegerAttr attr);
  void narrow_rangeAttr(BoolAttr attr);
  void is_signedAttr(BoolAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type outputs, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value inputs, ArrayAttr min, ArrayAttr max, APInt axis, APInt num_bits, bool narrow_range = false, bool is_signed = false);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value inputs, ArrayAttr min, ArrayAttr max, IntegerAttr axis, IntegerAttr num_bits, BoolAttr narrow_range, BoolAttr is_signed);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// quant::CoupledRefOp declarations
//===----------------------------------------------------------------------===//

class CoupledRefOpAdaptor {
public:
  CoupledRefOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CoupledRefOpAdaptor(CoupledRefOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  StringAttr coupledKey();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CoupledRefOp : public Op<CoupledRefOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CoupledRefOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr coupledKeyAttr();
  StringRef coupledKey();
  void coupledKeyAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringAttr coupledKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringAttr coupledKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringRef coupledKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringRef coupledKey);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value arg, StringAttr coupledKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::DequantizeCastOp declarations
//===----------------------------------------------------------------------===//

class DequantizeCastOpAdaptor {
public:
  DequantizeCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DequantizeCastOpAdaptor(DequantizeCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DequantizeCastOp : public Op<DequantizeCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DequantizeCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// quant::QuantizeCastOp declarations
//===----------------------------------------------------------------------===//

class QuantizeCastOpAdaptor {
public:
  QuantizeCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  QuantizeCastOpAdaptor(QuantizeCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class QuantizeCastOp : public Op<QuantizeCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = QuantizeCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// quant::QuantizeRegionOp declarations
//===----------------------------------------------------------------------===//

class QuantizeRegionOpAdaptor {
public:
  QuantizeRegionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  QuantizeRegionOpAdaptor(QuantizeRegionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs();
  ArrayAttr input_specs();
  ArrayAttr output_specs();
  StringAttr logical_kernel();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class QuantizeRegionOp : public Op<QuantizeRegionOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::IsIsolatedFromAbove, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = QuantizeRegionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs();
  ::mlir::MutableOperandRange inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  Region &body();
  ArrayAttr input_specsAttr();
  ArrayAttr input_specs();
  ArrayAttr output_specsAttr();
  ArrayAttr output_specs();
  StringAttr logical_kernelAttr();
  StringRef logical_kernel();
  void input_specsAttr(ArrayAttr attr);
  void output_specsAttr(ArrayAttr attr);
  void logical_kernelAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, ArrayAttr input_specs, ArrayAttr output_specs, StringAttr logical_kernel);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, ValueRange inputs, ArrayAttr input_specs, ArrayAttr output_specs, StringRef logical_kernel);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// quant::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpAdaptor {
public:
  ReturnOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReturnOpAdaptor(ReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange results();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ReturnOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range results();
  ::mlir::MutableOperandRange resultsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange results);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange results);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::StatisticsOp declarations
//===----------------------------------------------------------------------===//

class StatisticsOpAdaptor {
public:
  StatisticsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StatisticsOpAdaptor(StatisticsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  ElementsAttr layerStats();
  ElementsAttr axisStats();
  IntegerAttr axis();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StatisticsOp : public Op<StatisticsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = StatisticsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  ElementsAttr layerStatsAttr();
  ElementsAttr layerStats();
  ElementsAttr axisStatsAttr();
  Optional< ElementsAttr > axisStats();
  IntegerAttr axisAttr();
  Optional< APInt > axis();
  void layerStatsAttr(ElementsAttr attr);
  void axisStatsAttr(ElementsAttr attr);
  void axisAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value arg, ElementsAttr layerStats, /*optional*/ElementsAttr axisStats, /*optional*/IntegerAttr axis);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::StatisticsRefOp declarations
//===----------------------------------------------------------------------===//

class StatisticsRefOpAdaptor {
public:
  StatisticsRefOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StatisticsRefOpAdaptor(StatisticsRefOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  StringAttr statsKey();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StatisticsRefOp : public Op<StatisticsRefOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = StatisticsRefOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr statsKeyAttr();
  StringRef statsKey();
  void statsKeyAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringAttr statsKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringAttr statsKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg, StringRef statsKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg, StringRef statsKey);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value arg, StringAttr statsKey);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// quant::StorageCastOp declarations
//===----------------------------------------------------------------------===//

class StorageCastOpAdaptor {
public:
  StorageCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StorageCastOpAdaptor(StorageCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StorageCastOp : public Op<StorageCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StorageCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

