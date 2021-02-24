/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ControlTriggerOp;
class EnterOp;
class ExitOp;
class FetchOp;
class GraphOp;
class IslandOp;
class LoopCondOp;
class MergeOp;
class NextIterationSinkOp;
class NextIterationSourceOp;
class SwitchNOp;
class SwitchOp;
class YieldOp;

//===----------------------------------------------------------------------===//
// tf_executor::ControlTriggerOp declarations
//===----------------------------------------------------------------------===//

class ControlTriggerOpAdaptor {
public:
  ControlTriggerOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ControlTriggerOpAdaptor(ControlTriggerOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange controlInputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ControlTriggerOp : public Op<ControlTriggerOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasParent<GraphOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ControlTriggerOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value control();
  static void build(OpBuilder &builder, OperationState &result, ArrayRef<Value> operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type control, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange controlInputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
};

//===----------------------------------------------------------------------===//
// tf_executor::EnterOp declarations
//===----------------------------------------------------------------------===//

class EnterOpAdaptor {
public:
  EnterOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EnterOpAdaptor(EnterOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  ValueRange controlInputs();
  StringAttr frame_name();
  BoolAttr is_constant();
  IntegerAttr parallel_iterations();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EnterOp : public Op<EnterOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::HasParent<GraphOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EnterOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Value control();
  StringAttr frame_nameAttr();
  StringRef frame_name();
  BoolAttr is_constantAttr();
  bool is_constant();
  IntegerAttr parallel_iterationsAttr();
  APInt parallel_iterations();
  void frame_nameAttr(StringAttr attr);
  void is_constantAttr(BoolAttr attr);
  void parallel_iterationsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Type control, Value data, StringAttr frame_name, BoolAttr is_constant, IntegerAttr parallel_iterations, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, StringAttr frame_name, BoolAttr is_constant, IntegerAttr parallel_iterations, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Type control, Value data, StringRef frame_name, bool is_constant, APInt parallel_iterations, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, StringRef frame_name, bool is_constant, APInt parallel_iterations, ValueRange controlInputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::ExitOp declarations
//===----------------------------------------------------------------------===//

class ExitOpAdaptor {
public:
  ExitOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExitOpAdaptor(ExitOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  ValueRange controlInputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExitOp : public Op<ExitOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::HasParent<GraphOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExitOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Value control();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Type control, Value data, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, ValueRange controlInputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::FetchOp declarations
//===----------------------------------------------------------------------===//

class FetchOpAdaptor {
public:
  FetchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FetchOpAdaptor(FetchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange fetches();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FetchOp : public Op<FetchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsTerminator, OpTrait::HasParent<GraphOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = FetchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range fetches();
  ::mlir::MutableOperandRange fetchesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange fetches);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange fetches);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::GraphOp declarations
//===----------------------------------------------------------------------===//

class GraphOpAdaptor {
public:
  GraphOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GraphOpAdaptor(GraphOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GraphOp : public Op<GraphOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::SingleBlockImplicitTerminator<FetchOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = GraphOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &body();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);

    Block &GetBody() { return getOperation()->getRegion(0).front(); }
    FetchOp GetFetch();
  
};

//===----------------------------------------------------------------------===//
// tf_executor::IslandOp declarations
//===----------------------------------------------------------------------===//

class IslandOpAdaptor {
public:
  IslandOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IslandOpAdaptor(IslandOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange controlInputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IslandOp : public Op<IslandOp, OpTrait::OneRegion, OpTrait::AtLeastNResults<1>::Impl, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasParent<GraphOp>::Impl, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IslandOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  Value control();
  Region &body();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Type control, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange controlInputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    Block &GetBody() { return getOperation()->getRegion(0).front(); }
    YieldOp GetYield();
    bool WrapsSingleOp();
  
};

//===----------------------------------------------------------------------===//
// tf_executor::LoopCondOp declarations
//===----------------------------------------------------------------------===//

class LoopCondOpAdaptor {
public:
  LoopCondOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LoopCondOpAdaptor(LoopCondOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  ValueRange controlInputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LoopCondOp : public Op<LoopCondOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::HasParent<GraphOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LoopCondOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Value control();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Type control, Value input, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input, ValueRange controlInputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::MergeOp declarations
//===----------------------------------------------------------------------===//

class MergeOpAdaptor {
public:
  MergeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MergeOpAdaptor(MergeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange inputs_and_control();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MergeOp : public Op<MergeOp, OpTrait::ZeroRegion, OpTrait::NResults<3>::Impl, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasParent<GraphOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MergeOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range inputs_and_control();
  ::mlir::MutableOperandRange inputs_and_controlMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Value value_index();
  Value control();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Type value_index, Type control, ValueRange inputs_and_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange inputs_and_control);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::NextIterationSinkOp declarations
//===----------------------------------------------------------------------===//

class NextIterationSinkOpAdaptor {
public:
  NextIterationSinkOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NextIterationSinkOpAdaptor(NextIterationSinkOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value token();
  Value input();
  ValueRange controlInputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NextIterationSinkOp : public Op<NextIterationSinkOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, OpTrait::HasParent<GraphOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = NextIterationSinkOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value token();
  Value input();
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange tokenMutable();
  ::mlir::MutableOperandRange inputMutable();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value token, ArrayRef<Value> operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value token, Value input, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value token, Value input, ValueRange controlInputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::NextIterationSourceOp declarations
//===----------------------------------------------------------------------===//

class NextIterationSourceOpAdaptor {
public:
  NextIterationSourceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NextIterationSourceOpAdaptor(NextIterationSourceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NextIterationSourceOp : public Op<NextIterationSourceOp, OpTrait::ZeroRegion, OpTrait::NResults<3>::Impl, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::HasParent<GraphOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NextIterationSourceOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value output();
  Value token();
  Value control();
  static void build(OpBuilder &builder, OperationState &result, Type result_type, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type output, Type token, Type control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    NextIterationSinkOp GetSink() {
      return cast<NextIterationSinkOp>(*token().user_begin());
    }
  
};

//===----------------------------------------------------------------------===//
// tf_executor::SwitchNOp declarations
//===----------------------------------------------------------------------===//

class SwitchNOpAdaptor {
public:
  SwitchNOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SwitchNOpAdaptor(SwitchNOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value index();
  ValueRange controlInputs();
  IntegerAttr num_outs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SwitchNOp : public Op<SwitchNOp, OpTrait::ZeroRegion, OpTrait::AtLeastNResults<1>::Impl, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, OpTrait::HasParent<GraphOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SwitchNOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value index();
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange indexMutable();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range outputs();
  Value control();
  IntegerAttr num_outsAttr();
  APInt num_outs();
  void num_outsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Type control, Value data, Value index, ValueRange controlInputs, IntegerAttr num_outs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value index, ValueRange controlInputs, IntegerAttr num_outs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> outputs, Type control, Value data, Value index, ValueRange controlInputs, APInt num_outs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value index, ValueRange controlInputs, APInt num_outs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::SwitchOp declarations
//===----------------------------------------------------------------------===//

class SwitchOpAdaptor {
public:
  SwitchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SwitchOpAdaptor(SwitchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value predicate();
  ValueRange controlInputs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SwitchOp : public Op<SwitchOp, OpTrait::ZeroRegion, OpTrait::NResults<3>::Impl, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, OpTrait::HasParent<GraphOp>::Impl, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SwitchOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value predicate();
  Operation::operand_range controlInputs();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange predicateMutable();
  ::mlir::MutableOperandRange controlInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value falseOutput();
  Value trueOutput();
  Value control();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type falseOutput, Type trueOutput, Type control, Value data, Value predicate, ValueRange controlInputs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value predicate, ValueRange controlInputs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_executor::YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpAdaptor {
public:
  YieldOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  YieldOpAdaptor(YieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange fetches();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class YieldOp : public Op<YieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::IsTerminator, OpTrait::HasParent<IslandOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = YieldOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range fetches();
  ::mlir::MutableOperandRange fetchesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange fetches);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange fetches);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

