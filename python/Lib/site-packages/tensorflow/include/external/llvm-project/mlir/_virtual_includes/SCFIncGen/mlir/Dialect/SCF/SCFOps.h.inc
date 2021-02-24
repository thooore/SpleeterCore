/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ForOp;
class IfOp;
class ParallelOp;
class ReduceOp;
class ReduceReturnOp;
class YieldOp;

//===----------------------------------------------------------------------===//
// ForOp declarations
//===----------------------------------------------------------------------===//

class ForOpAdaptor {
public:
  ForOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ForOpAdaptor(ForOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lowerBound();
  Value upperBound();
  Value step();
  ValueRange initArgs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ForOp : public Op<ForOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<3>::Impl, LoopLikeOpInterface::Trait, RegionBranchOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = ForOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lowerBound();
  Value upperBound();
  Value step();
  Operation::operand_range initArgs();
  ::mlir::MutableOperandRange lowerBoundMutable();
  ::mlir::MutableOperandRange upperBoundMutable();
  ::mlir::MutableOperandRange stepMutable();
  ::mlir::MutableOperandRange initArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &region();
  static void build(OpBuilder &builder, OperationState &result, Value lowerBound, Value upperBound, Value step, ValueRange iterArgs = llvm::None, function_ref<void(OpBuilder &, Location, Value, ValueRange)>    = nullptr);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  bool isDefinedOutsideOfLoop(Value  value);
  Region &getLoopBody();
  LogicalResult moveOutOfLoop(ArrayRef<Operation *> ops);
  void getSuccessorRegions(Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions);

    using BodyBuilderFn =
        function_ref<void(OpBuilder &, Location, Value, ValueRange)>;

    Value getInductionVar() { return getBody()->getArgument(0); }
    Block::BlockArgListType getRegionIterArgs() {
      return getBody()->getArguments().drop_front();
    }
    Operation::operand_range getIterOperands() {
      return getOperands().drop_front(getNumControlOperands());
    }

    void setLowerBound(Value bound) { getOperation()->setOperand(0, bound); }
    void setUpperBound(Value bound) { getOperation()->setOperand(1, bound); }
    void setStep(Value step) { getOperation()->setOperand(2, step); }

    /// Number of region arguments for loop-carried values
    unsigned getNumRegionIterArgs() {
      return getBody()->getNumArguments() - 1;
    }
    /// Number of operands controlling the loop: lb, ub, step
    unsigned getNumControlOperands() { return 3; }
    /// Does the operation hold operands for loop-carried values
    bool hasIterOperands() {
      return getOperation()->getNumOperands() > getNumControlOperands();
    }
    /// Get Number of loop-carried values
    unsigned getNumIterOperands() {
      return getOperation()->getNumOperands() - getNumControlOperands();
    }

    /// Return operands used when entering the region at 'index'. These operands
    /// correspond to the loop iterator operands, i.e., those exclusing the
    /// induction variable. LoopOp only has one region, so 0 is the only valid
    /// value for `index`.
    OperandRange getSuccessorEntryOperands(unsigned index);
  
};

//===----------------------------------------------------------------------===//
// IfOp declarations
//===----------------------------------------------------------------------===//

class IfOpAdaptor {
public:
  IfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IfOpAdaptor(IfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IfOp : public Op<IfOp, OpTrait::NRegions<2>::Impl, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::OneOperand, RegionBranchOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = IfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value condition();
  ::mlir::MutableOperandRange conditionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &thenRegion();
  Region &elseRegion();
  static void build(OpBuilder &builder, OperationState &result, Value cond, bool withElseRegion);
  static void build(OpBuilder &builder, OperationState &result, TypeRange resultTypes, Value cond, bool withElseRegion);
  static void build(OpBuilder &builder, OperationState &result, TypeRange resultTypes, Value cond, function_ref<void(OpBuilder &, Location)> thenBuilder     = buildTerminatedBody, function_ref<void(OpBuilder &, Location)> elseBuilder = nullptr);
  static void build(OpBuilder &builder, OperationState &result, Value cond, function_ref<void(OpBuilder &, Location)> thenBuilder     = buildTerminatedBody, function_ref<void(OpBuilder &, Location)> elseBuilder = nullptr);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getSuccessorRegions(Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions);

    OpBuilder getThenBodyBuilder() {
      Block* body = getBody(0);
      return results().empty() ? OpBuilder::atBlockTerminator(body)
                               : OpBuilder::atBlockEnd(body);
    }
    OpBuilder getElseBodyBuilder() {
      Block* body = getBody(1);
      return results().empty() ? OpBuilder::atBlockTerminator(body)
                               : OpBuilder::atBlockEnd(body);
    }
  
};

//===----------------------------------------------------------------------===//
// ParallelOp declarations
//===----------------------------------------------------------------------===//

class ParallelOpAdaptor {
public:
  ParallelOpAdaptor(ValueRange values, DictionaryAttr attrs);
  ParallelOpAdaptor(ParallelOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange lowerBound();
  ValueRange upperBound();
  ValueRange step();
  ValueRange initVals();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ParallelOp : public Op<ParallelOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::AttrSizedOperandSegments, LoopLikeOpInterface::Trait, OpTrait::HasRecursiveSideEffects, OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ParallelOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range lowerBound();
  Operation::operand_range upperBound();
  Operation::operand_range step();
  Operation::operand_range initVals();
  ::mlir::MutableOperandRange lowerBoundMutable();
  ::mlir::MutableOperandRange upperBoundMutable();
  ::mlir::MutableOperandRange stepMutable();
  ::mlir::MutableOperandRange initValsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &region();
  static void build(OpBuilder &builder, OperationState &result, ValueRange lowerBounds, ValueRange upperBounds, ValueRange steps, ValueRange initVals, function_ref<void (OpBuilder &, Location, ValueRange, ValueRange)>  bodyBuilderFn = nullptr);
  static void build(OpBuilder &builder, OperationState &result, ValueRange lowerBounds, ValueRange upperBounds, ValueRange steps, function_ref<void (OpBuilder &, Location, ValueRange)>  bodyBuilderFn = nullptr);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  bool isDefinedOutsideOfLoop(Value  value);
  Region &getLoopBody();
  LogicalResult moveOutOfLoop(ArrayRef<Operation *> ops);

    ValueRange getInductionVars() {
      return getBody()->getArguments();
    }
    unsigned getNumLoops() { return step().size(); }
    unsigned getNumReductions() { return initVals().size(); }
  
};

//===----------------------------------------------------------------------===//
// ReduceOp declarations
//===----------------------------------------------------------------------===//

class ReduceOpAdaptor {
public:
  ReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReduceOpAdaptor(ReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReduceOp : public Op<ReduceOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::HasParent<ParallelOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &reductionOperator();
  static void build(OpBuilder &builder, OperationState &result, Value operand, function_ref<void (OpBuilder &, Location, Value, Value)>  bodyBuilderFn = nullptr);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// ReduceReturnOp declarations
//===----------------------------------------------------------------------===//

class ReduceReturnOpAdaptor {
public:
  ReduceReturnOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReduceReturnOpAdaptor(ReduceReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value result();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReduceReturnOp : public Op<ReduceReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::HasParent<ReduceOp>::Impl, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ReduceReturnOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value result();
  ::mlir::MutableOperandRange resultMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value result);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpAdaptor {
public:
  YieldOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  YieldOpAdaptor(YieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange results();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class YieldOp : public Op<YieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::ReturnLike, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = YieldOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range results();
  ::mlir::MutableOperandRange resultsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange results);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange results);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

