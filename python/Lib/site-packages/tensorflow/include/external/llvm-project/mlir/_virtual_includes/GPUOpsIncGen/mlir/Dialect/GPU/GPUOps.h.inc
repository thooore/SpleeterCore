/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AllReduceOp;
class BarrierOp;
class BlockDimOp;
class BlockIdOp;
class GPUFuncOp;
class GPUModuleOp;
class GridDimOp;
class LaunchFuncOp;
class LaunchOp;
class ModuleEndOp;
class NumSubgroupsOp;
class ReturnOp;
class ShuffleOp;
class SubgroupIdOp;
class SubgroupSizeOp;
class TerminatorOp;
class ThreadIdOp;
class YieldOp;

//===----------------------------------------------------------------------===//
// gpu::AllReduceOp declarations
//===----------------------------------------------------------------------===//

class AllReduceOpAdaptor {
public:
  AllReduceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllReduceOpAdaptor(AllReduceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  StringAttr op();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllReduceOp : public Op<AllReduceOp, OpTrait::OneRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, OpTrait::IsIsolatedFromAbove> {
public:
  using Op::Op;
  using Adaptor = AllReduceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  StringAttr opAttr();
  Optional< StringRef > op();
  void opAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value, /*optional*/StringAttr op);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, /*optional*/StringAttr op);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value, /*optional*/StringAttr op);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::BarrierOp declarations
//===----------------------------------------------------------------------===//

class BarrierOpAdaptor {
public:
  BarrierOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BarrierOpAdaptor(BarrierOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BarrierOp : public Op<BarrierOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = BarrierOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::BlockDimOp declarations
//===----------------------------------------------------------------------===//

class BlockDimOpAdaptor {
public:
  BlockDimOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockDimOpAdaptor(BlockDimOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockDimOp : public Op<BlockDimOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockDimOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  void dimensionAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::BlockIdOp declarations
//===----------------------------------------------------------------------===//

class BlockIdOpAdaptor {
public:
  BlockIdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockIdOpAdaptor(BlockIdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockIdOp : public Op<BlockIdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockIdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  void dimensionAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::GPUFuncOp declarations
//===----------------------------------------------------------------------===//

class GPUFuncOpAdaptor {
public:
  GPUFuncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GPUFuncOpAdaptor(GPUFuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GPUFuncOp : public Op<GPUFuncOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::HasParent<GPUModuleOp>::Impl, OpTrait::AutomaticAllocationScope, OpTrait::FunctionLike, OpTrait::IsIsolatedFromAbove, SymbolOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GPUFuncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  static void build(OpBuilder &builder, OperationState &result, StringRef name, FunctionType type, ArrayRef<Type> workgroupAttributions = {}, ArrayRef<Type> privateAttributions = {}, ArrayRef<NamedAttribute> attrs = {});
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    /// Returns `true` if the GPU function defined by this Op is a kernel, i.e.
    /// it is intended to be launched from host.
    bool isKernel() {
      return getAttrOfType<UnitAttr>(GPUDialect::getKernelFuncAttrName()) !=
             nullptr;
    }

    /// Change the type of this function in place. This is an extremely
    /// dangerous operation and it is up to the caller to ensure that this is
    /// legal for this function, and to restore invariants:
    ///  - the entry block args must be updated to match the function params.
    ///  - the argument/result attributes may need an update: if the new type
    ///  has less parameters we drop the extra attributes, if there are more
    ///  parameters they won't have any attributes.
    // TODO(b/146349912): consider removing this function thanks to rewrite
    // patterns.
    void setType(FunctionType newType);

    /// Returns the number of buffers located in the workgroup memory.
    unsigned getNumWorkgroupAttributions() {
      return getAttrOfType<IntegerAttr>(getNumWorkgroupAttributionsAttrName())
          .getInt();
    }

    /// Returns a list of block arguments that correspond to buffers located in
    /// the workgroup memory
    ArrayRef<BlockArgument> getWorkgroupAttributions() {
      auto begin =
          std::next(getBody().front().args_begin(), getType().getNumInputs());
      auto end = std::next(begin, getNumWorkgroupAttributions());
      return {begin, end};
    }

    /// Adds a new block argument that corresponds to buffers located in
    /// workgroup memory.
    BlockArgument addWorkgroupAttribution(Type type);

    /// Returns the number of buffers located in the private memory.
    unsigned getNumPrivateAttributions() {
      return getBody().front().getNumArguments() - getType().getNumInputs() -
          getNumWorkgroupAttributions();
    }
 
    /// Returns a list of block arguments that correspond to buffers located in
    /// the private memory.
    ArrayRef<BlockArgument> getPrivateAttributions() {
      // Buffers on the private memory always come after buffers on the workgroup
      // memory.
      auto begin =
          std::next(getBody().front().args_begin(),
                    getType().getNumInputs() + getNumWorkgroupAttributions());
      return {begin, getBody().front().args_end()};
    }

    /// Adds a new block argument that corresponds to buffers located in
    /// private memory.
    BlockArgument addPrivateAttribution(Type type);

    /// Returns the name of the attribute containing the number of buffers
    /// located in the workgroup memory.
    static StringRef getNumWorkgroupAttributionsAttrName() {
      return "workgroup_attributions";
    }

    // FunctionLike trait needs access to the functions below.
    friend class OpTrait::FunctionLike<GPUFuncOp>;

    /// Hooks for the input/output type enumeration in FunctionLike .
    unsigned getNumFuncArguments() { return getType().getNumInputs(); }
    unsigned getNumFuncResults() { return getType().getNumResults(); }

    /// Returns the keywords used in the custom syntax for this Op.
    static StringRef getWorkgroupKeyword() { return "workgroup"; }
    static StringRef getPrivateKeyword() { return "private"; }
    static StringRef getKernelKeyword() { return "kernel"; }

    /// Hook for FunctionLike verifier.
    LogicalResult verifyType();

    /// Verifies the body of the function.
    LogicalResult verifyBody();
  
};

//===----------------------------------------------------------------------===//
// gpu::GPUModuleOp declarations
//===----------------------------------------------------------------------===//

class GPUModuleOpAdaptor {
public:
  GPUModuleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GPUModuleOpAdaptor(GPUModuleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GPUModuleOp : public Op<GPUModuleOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsIsolatedFromAbove, OpTrait::SymbolTable, SymbolOpInterface::Trait, OpTrait::SingleBlockImplicitTerminator<ModuleEndOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = GPUModuleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  static void build(OpBuilder &builder, OperationState &result, StringRef name);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::GridDimOp declarations
//===----------------------------------------------------------------------===//

class GridDimOpAdaptor {
public:
  GridDimOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GridDimOpAdaptor(GridDimOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GridDimOp : public Op<GridDimOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GridDimOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  void dimensionAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::LaunchFuncOp declarations
//===----------------------------------------------------------------------===//

class LaunchFuncOpAdaptor {
public:
  LaunchFuncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LaunchFuncOpAdaptor(LaunchFuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gridSizeX();
  Value gridSizeY();
  Value gridSizeZ();
  Value blockSizeX();
  Value blockSizeY();
  Value blockSizeZ();
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LaunchFuncOp : public Op<LaunchFuncOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<6>::Impl> {
public:
  using Op::Op;
  using Adaptor = LaunchFuncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gridSizeX();
  Value gridSizeY();
  Value gridSizeZ();
  Value blockSizeX();
  Value blockSizeY();
  Value blockSizeZ();
  Operation::operand_range operands();
  ::mlir::MutableOperandRange gridSizeXMutable();
  ::mlir::MutableOperandRange gridSizeYMutable();
  ::mlir::MutableOperandRange gridSizeZMutable();
  ::mlir::MutableOperandRange blockSizeXMutable();
  ::mlir::MutableOperandRange blockSizeYMutable();
  ::mlir::MutableOperandRange blockSizeZMutable();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, GPUFuncOp kernelFunc, Value gridSizeX, Value gridSizeY, Value gridSizeZ, Value blockSizeX, Value blockSizeY, Value blockSizeZ, ValueRange kernelOperands);
  static void build(OpBuilder &builder, OperationState &result, GPUFuncOp kernelFunc, KernelDim3 gridSize, KernelDim3 blockSize, ValueRange kernelOperands);
  LogicalResult verify();

    /// The kernel function specified by the operation's `kernel` attribute.
    SymbolRefAttr kernel();

    /// The number of operands passed to the kernel function.
    unsigned getNumKernelOperands();

    /// The name of the kernel's containing module.
    StringRef getKernelModuleName();

    /// The name of the kernel.
    StringRef getKernelName();

    /// The i-th operand passed to the kernel function.
    Value getKernelOperand(unsigned i);

    /// Get the SSA values passed as operands to specify the grid size.
    KernelDim3 getGridSizeOperandValues();

    /// Get the SSA values passed as operands to specify the block size.
    KernelDim3 getBlockSizeOperandValues();

    /// The number of launch configuration operands, placed at the leading
    /// positions of the operand list.
    static constexpr unsigned kNumConfigOperands = 6;

    // This needs to quietly verify if attributes with names defined below are
    // present since it is run before the verifier of this op.
    friend LogicalResult GPUDialect::verifyOperationAttribute(Operation *,
                                                              NamedAttribute);

    /// The name of the symbol reference attribute specifying the kernel to launch.
    static StringRef getKernelAttrName() { return "kernel"; }
  
};

//===----------------------------------------------------------------------===//
// gpu::LaunchOp declarations
//===----------------------------------------------------------------------===//

class LaunchOpAdaptor {
public:
  LaunchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LaunchOpAdaptor(LaunchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value gridSizeX();
  Value gridSizeY();
  Value gridSizeZ();
  Value blockSizeX();
  Value blockSizeY();
  Value blockSizeZ();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LaunchOp : public Op<LaunchOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<6>::Impl> {
public:
  using Op::Op;
  using Adaptor = LaunchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value gridSizeX();
  Value gridSizeY();
  Value gridSizeZ();
  Value blockSizeX();
  Value blockSizeY();
  Value blockSizeZ();
  ::mlir::MutableOperandRange gridSizeXMutable();
  ::mlir::MutableOperandRange gridSizeYMutable();
  ::mlir::MutableOperandRange gridSizeZMutable();
  ::mlir::MutableOperandRange blockSizeXMutable();
  ::mlir::MutableOperandRange blockSizeYMutable();
  ::mlir::MutableOperandRange blockSizeZMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  static void build(OpBuilder &builder, OperationState &result, Value gridSizeX,Value gridSizeY, Value gridSizeZ, Value blockSizeX,Value blockSizeY, Value blockSizeZ);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    /// Get the SSA values corresponding to kernel block identifiers.
    KernelDim3 getBlockIds();
    /// Get the SSA values corresponding to kernel thread identifiers.
    KernelDim3 getThreadIds();
    /// Get the SSA values corresponding to kernel grid size.
    KernelDim3 getGridSize();
    /// Get the SSA values corresponding to kernel block size.
    KernelDim3 getBlockSize();

    /// Get the SSA values passed as operands to specify the grid size.
    KernelDim3 getGridSizeOperandValues();
    /// Get the SSA values passed as operands to specify the block size.
    KernelDim3 getBlockSizeOperandValues();

    static StringRef getBlocksKeyword() { return "blocks"; }
    static StringRef getThreadsKeyword() { return "threads"; }

    /// The number of launch configuration operands, placed at the leading
    /// positions of the operand list.
    static constexpr unsigned kNumConfigOperands = 6;

    /// The number of region attributes containing the launch configuration,
    /// placed in the leading positions of the argument list.
    static constexpr unsigned kNumConfigRegionAttributes = 12;
  
};

//===----------------------------------------------------------------------===//
// gpu::ModuleEndOp declarations
//===----------------------------------------------------------------------===//

class ModuleEndOpAdaptor {
public:
  ModuleEndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ModuleEndOpAdaptor(ModuleEndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ModuleEndOp : public Op<ModuleEndOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsTerminator, OpTrait::HasParent<GPUModuleOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = ModuleEndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// gpu::NumSubgroupsOp declarations
//===----------------------------------------------------------------------===//

class NumSubgroupsOpAdaptor {
public:
  NumSubgroupsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NumSubgroupsOpAdaptor(NumSubgroupsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NumSubgroupsOp : public Op<NumSubgroupsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NumSubgroupsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpAdaptor {
public:
  ReturnOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReturnOpAdaptor(ReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::HasParent<GPUFuncOp>::Impl, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ReturnOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::ShuffleOp declarations
//===----------------------------------------------------------------------===//

class ShuffleOpAdaptor {
public:
  ShuffleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShuffleOpAdaptor(ShuffleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value offset();
  Value width();
  StringAttr mode();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShuffleOp : public Op<ShuffleOp, OpTrait::ZeroRegion, OpTrait::NResults<2>::Impl, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShuffleOpAdaptor;
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value offset();
  Value width();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange widthMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  Value valid();
  StringAttr modeAttr();
  StringRef mode();
  void modeAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Type valid, Value value, Value offset, Value width, StringAttr mode);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringAttr mode);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Type valid, Value value, Value offset, Value width, StringRef mode);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value offset, Value width, StringRef mode);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::SubgroupIdOp declarations
//===----------------------------------------------------------------------===//

class SubgroupIdOpAdaptor {
public:
  SubgroupIdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubgroupIdOpAdaptor(SubgroupIdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubgroupIdOp : public Op<SubgroupIdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SubgroupIdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::SubgroupSizeOp declarations
//===----------------------------------------------------------------------===//

class SubgroupSizeOpAdaptor {
public:
  SubgroupSizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubgroupSizeOpAdaptor(SubgroupSizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubgroupSizeOp : public Op<SubgroupSizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SubgroupSizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::TerminatorOp declarations
//===----------------------------------------------------------------------===//

class TerminatorOpAdaptor {
public:
  TerminatorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TerminatorOpAdaptor(TerminatorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TerminatorOp : public Op<TerminatorOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::HasParent<LaunchOp>::Impl, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = TerminatorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::ThreadIdOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdOpAdaptor {
public:
  ThreadIdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ThreadIdOpAdaptor(ThreadIdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr dimension();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ThreadIdOp : public Op<ThreadIdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ThreadIdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr dimensionAttr();
  StringRef dimension();
  void dimensionAttr(StringAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, StringRef dimension);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef dimension);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// gpu::YieldOp declarations
//===----------------------------------------------------------------------===//

class YieldOpAdaptor {
public:
  YieldOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  YieldOpAdaptor(YieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange values();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class YieldOp : public Op<YieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = YieldOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range values();
  ::mlir::MutableOperandRange valuesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange values);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

