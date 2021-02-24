/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class Barrier0Op;
class BlockDimXOp;
class BlockDimYOp;
class BlockDimZOp;
class BlockIdXOp;
class BlockIdYOp;
class BlockIdZOp;
class GridDimXOp;
class GridDimYOp;
class GridDimZOp;
class LaneIdOp;
class MmaOp;
class ShflBflyOp;
class ThreadIdXOp;
class ThreadIdYOp;
class ThreadIdZOp;
class VoteBallotOp;
class WarpSizeOp;

//===----------------------------------------------------------------------===//
// NVVM::Barrier0Op declarations
//===----------------------------------------------------------------------===//

class Barrier0OpAdaptor {
public:
  Barrier0OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Barrier0OpAdaptor(Barrier0Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Barrier0Op : public Op<Barrier0Op, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = Barrier0OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// NVVM::BlockDimXOp declarations
//===----------------------------------------------------------------------===//

class BlockDimXOpAdaptor {
public:
  BlockDimXOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockDimXOpAdaptor(BlockDimXOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockDimXOp : public Op<BlockDimXOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockDimXOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::BlockDimYOp declarations
//===----------------------------------------------------------------------===//

class BlockDimYOpAdaptor {
public:
  BlockDimYOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockDimYOpAdaptor(BlockDimYOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockDimYOp : public Op<BlockDimYOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockDimYOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::BlockDimZOp declarations
//===----------------------------------------------------------------------===//

class BlockDimZOpAdaptor {
public:
  BlockDimZOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockDimZOpAdaptor(BlockDimZOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockDimZOp : public Op<BlockDimZOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockDimZOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::BlockIdXOp declarations
//===----------------------------------------------------------------------===//

class BlockIdXOpAdaptor {
public:
  BlockIdXOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockIdXOpAdaptor(BlockIdXOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockIdXOp : public Op<BlockIdXOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockIdXOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::BlockIdYOp declarations
//===----------------------------------------------------------------------===//

class BlockIdYOpAdaptor {
public:
  BlockIdYOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockIdYOpAdaptor(BlockIdYOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockIdYOp : public Op<BlockIdYOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockIdYOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::BlockIdZOp declarations
//===----------------------------------------------------------------------===//

class BlockIdZOpAdaptor {
public:
  BlockIdZOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BlockIdZOpAdaptor(BlockIdZOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BlockIdZOp : public Op<BlockIdZOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BlockIdZOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::GridDimXOp declarations
//===----------------------------------------------------------------------===//

class GridDimXOpAdaptor {
public:
  GridDimXOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GridDimXOpAdaptor(GridDimXOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GridDimXOp : public Op<GridDimXOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GridDimXOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::GridDimYOp declarations
//===----------------------------------------------------------------------===//

class GridDimYOpAdaptor {
public:
  GridDimYOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GridDimYOpAdaptor(GridDimYOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GridDimYOp : public Op<GridDimYOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GridDimYOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::GridDimZOp declarations
//===----------------------------------------------------------------------===//

class GridDimZOpAdaptor {
public:
  GridDimZOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GridDimZOpAdaptor(GridDimZOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GridDimZOp : public Op<GridDimZOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GridDimZOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::LaneIdOp declarations
//===----------------------------------------------------------------------===//

class LaneIdOpAdaptor {
public:
  LaneIdOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LaneIdOpAdaptor(LaneIdOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LaneIdOp : public Op<LaneIdOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LaneIdOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::MmaOp declarations
//===----------------------------------------------------------------------===//

class MmaOpAdaptor {
public:
  MmaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MmaOpAdaptor(MmaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MmaOp : public Op<MmaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = MmaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ValueRange args);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// NVVM::ShflBflyOp declarations
//===----------------------------------------------------------------------===//

class ShflBflyOpAdaptor {
public:
  ShflBflyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShflBflyOpAdaptor(ShflBflyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value dst();
  Value val();
  Value offset();
  Value mask_and_clamp();
  UnitAttr return_value_and_is_valid();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShflBflyOp : public Op<ShflBflyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using Adaptor = ShflBflyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value dst();
  Value val();
  Value offset();
  Value mask_and_clamp();
  ::mlir::MutableOperandRange dstMutable();
  ::mlir::MutableOperandRange valMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange mask_and_clampMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  UnitAttr return_value_and_is_validAttr();
  Optional<bool> return_value_and_is_valid();
  void return_value_and_is_validAttr(UnitAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value dst, Value val, Value offset, Value mask_and_clamp, /*optional*/UnitAttr return_value_and_is_valid);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::ThreadIdXOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdXOpAdaptor {
public:
  ThreadIdXOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ThreadIdXOpAdaptor(ThreadIdXOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ThreadIdXOp : public Op<ThreadIdXOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ThreadIdXOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::ThreadIdYOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdYOpAdaptor {
public:
  ThreadIdYOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ThreadIdYOpAdaptor(ThreadIdYOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ThreadIdYOp : public Op<ThreadIdYOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ThreadIdYOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::ThreadIdZOp declarations
//===----------------------------------------------------------------------===//

class ThreadIdZOpAdaptor {
public:
  ThreadIdZOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ThreadIdZOpAdaptor(ThreadIdZOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ThreadIdZOp : public Op<ThreadIdZOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ThreadIdZOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NVVM::VoteBallotOp declarations
//===----------------------------------------------------------------------===//

class VoteBallotOpAdaptor {
public:
  VoteBallotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  VoteBallotOpAdaptor(VoteBallotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value mask();
  Value pred();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class VoteBallotOp : public Op<VoteBallotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = VoteBallotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value mask();
  Value pred();
  ::mlir::MutableOperandRange maskMutable();
  ::mlir::MutableOperandRange predMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value mask, Value pred);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value mask, Value pred);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// NVVM::WarpSizeOp declarations
//===----------------------------------------------------------------------===//

class WarpSizeOpAdaptor {
public:
  WarpSizeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  WarpSizeOpAdaptor(WarpSizeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class WarpSizeOp : public Op<WarpSizeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = WarpSizeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

