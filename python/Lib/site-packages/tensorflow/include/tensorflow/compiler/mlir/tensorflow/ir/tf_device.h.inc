/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class ClusterFuncOp;
class ClusterOp;
class LaunchFuncOp;
class LaunchOp;
class ParallelExecuteOp;
class ReplicateOp;
class ReturnOp;

//===----------------------------------------------------------------------===//
// tf_device::ClusterFuncOp declarations
//===----------------------------------------------------------------------===//

class ClusterFuncOpAdaptor {
public:
  ClusterFuncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ClusterFuncOpAdaptor(ClusterFuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  FlatSymbolRefAttr func();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ClusterFuncOp : public Op<ClusterFuncOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = ClusterFuncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  FlatSymbolRefAttr funcAttr();
  StringRef func();
  void funcAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, FlatSymbolRefAttr func, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, StringRef func, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();

    StringRef getFunc() { return func(); }
  
};

//===----------------------------------------------------------------------===//
// tf_device::ClusterOp declarations
//===----------------------------------------------------------------------===//

class ClusterOpAdaptor {
public:
  ClusterOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ClusterOpAdaptor(ClusterOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ClusterOp : public Op<ClusterOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ClusterOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &body();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();

    Block &GetBody() { return getOperation()->getRegion(0).front(); }
  
};

//===----------------------------------------------------------------------===//
// tf_device::LaunchFuncOp declarations
//===----------------------------------------------------------------------===//

class LaunchFuncOpAdaptor {
public:
  LaunchFuncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LaunchFuncOpAdaptor(LaunchFuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  StringAttr device();
  FlatSymbolRefAttr func();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LaunchFuncOp : public Op<LaunchFuncOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = LaunchFuncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  StringAttr deviceAttr();
  StringRef device();
  FlatSymbolRefAttr funcAttr();
  StringRef func();
  void deviceAttr(StringAttr attr);
  void funcAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, StringAttr device, FlatSymbolRefAttr func, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, StringRef device, StringRef func, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();

    StringRef getFunc() { return func(); }
    StringRef getDevice() { return device(); }
  
};

//===----------------------------------------------------------------------===//
// tf_device::LaunchOp declarations
//===----------------------------------------------------------------------===//

class LaunchOpAdaptor {
public:
  LaunchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LaunchOpAdaptor(LaunchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr device();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LaunchOp : public Op<LaunchOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = LaunchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  Region &body();
  StringAttr deviceAttr();
  StringRef device();
  void deviceAttr(StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result,
                StringAttr device, ArrayRef<Type> result_types);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, StringAttr device);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, StringRef device);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);

    Block &GetBody() { return getOperation()->getRegion(0).front(); }
    StringRef getDevice() { return device(); }
    bool WrapsSingleOp();
  
};

//===----------------------------------------------------------------------===//
// tf_device::ParallelExecuteOp declarations
//===----------------------------------------------------------------------===//

class ParallelExecuteOpAdaptor {
public:
  ParallelExecuteOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ParallelExecuteOpAdaptor(ParallelExecuteOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ParallelExecuteOp : public Op<ParallelExecuteOp, OpTrait::VariadicRegions, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ParallelExecuteOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range execute_outputs();
  MutableArrayRef<Region> regions();
  static void build(OpBuilder& builder, OperationState& state, int num_regions,llvm::ArrayRef<Type> output_types);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> execute_outputs, unsigned regionsCount);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes, unsigned numRegions);
  LogicalResult verify();

    Block& GetRegionBlockWithIndex(unsigned index);
    Operation::result_range GetRegionOutputs(unsigned region_index);

    // Checks if a tf_device.parallel_execute index'th region block wraps a
    // single operation and the single operation results are perfectly forwarded
    // to the region block's return.
    bool RegionWrapsSingleOp(unsigned index);
  
};

//===----------------------------------------------------------------------===//
// tf_device::ReplicateOp declarations
//===----------------------------------------------------------------------===//

class ReplicateOpAdaptor {
public:
  ReplicateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReplicateOpAdaptor(ReplicateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange replicated_inputs();
  IntegerAttr n();
  DictionaryAttr devices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReplicateOp : public Op<ReplicateOp, OpTrait::OneRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ReplicateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range replicated_inputs();
  ::mlir::MutableOperandRange replicated_inputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range replicated_outputs();
  Region &body();
  IntegerAttr nAttr();
  APInt n();
  DictionaryAttr devicesAttr();
  Optional< DictionaryAttr > devices();
  void nAttr(IntegerAttr attr);
  void devicesAttr(DictionaryAttr attr);
  static void build(OpBuilder& builder, OperationState& state, int n, const llvm::SmallDenseMap<StringRef, llvm::SmallVector<StringRef, 4>>& devices, llvm::ArrayRef<std::pair<llvm::ArrayRef<Value>, Type>> replicated_inputs, llvm::ArrayRef<Type> replica_output_types);
  static void build(OpBuilder& builder, OperationState& state, int n, const llvm::SmallDenseMap<StringRef, llvm::SmallVector<StringRef, 4>>& devices, llvm::ArrayRef<std::pair<Operation::operand_range, Type>> replicated_inputs, Operation::result_type_range replica_output_types);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> replicated_outputs, ValueRange replicated_inputs, IntegerAttr n, /*optional*/DictionaryAttr devices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> replicated_outputs, ValueRange replicated_inputs, APInt n, /*optional*/DictionaryAttr devices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    Block &GetBody() { return getOperation()->getRegion(0).front(); }
  
};

//===----------------------------------------------------------------------===//
// tf_device::ReturnOp declarations
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
  static void build(OpBuilder &builder, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange results);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange results);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

