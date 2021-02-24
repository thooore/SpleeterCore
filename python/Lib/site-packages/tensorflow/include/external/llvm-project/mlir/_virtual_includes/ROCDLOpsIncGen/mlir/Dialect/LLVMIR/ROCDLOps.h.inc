/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class BarrierOp;
class BlockDimXOp;
class BlockDimYOp;
class BlockDimZOp;
class BlockIdXOp;
class BlockIdYOp;
class BlockIdZOp;
class GridDimXOp;
class GridDimYOp;
class GridDimZOp;
class MubufLoadOp;
class MubufStoreOp;
class ThreadIdXOp;
class ThreadIdYOp;
class ThreadIdZOp;
class mfma_f32_16x16x16f16;
class mfma_f32_16x16x1f32;
class mfma_f32_16x16x2bf16;
class mfma_f32_16x16x4f16;
class mfma_f32_16x16x4f32;
class mfma_f32_16x16x8bf16;
class mfma_f32_32x32x1f32;
class mfma_f32_32x32x2bf16;
class mfma_f32_32x32x2f32;
class mfma_f32_32x32x4bf16;
class mfma_f32_32x32x4f16;
class mfma_f32_32x32x8f16;
class mfma_f32_4x4x1f32;
class mfma_f32_4x4x2bf16;
class mfma_f32_4x4x4f16;
class mfma_i32_16x16x16i8;
class mfma_i32_16x16x4i8;
class mfma_i32_32x32x4i8;
class mfma_i32_32x32x8i8;
class mfma_i32_4x4x4i8;

//===----------------------------------------------------------------------===//
// ROCDL::BarrierOp declarations
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
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// ROCDL::BlockDimXOp declarations
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
// ROCDL::BlockDimYOp declarations
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
// ROCDL::BlockDimZOp declarations
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
// ROCDL::BlockIdXOp declarations
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
// ROCDL::BlockIdYOp declarations
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
// ROCDL::BlockIdZOp declarations
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
// ROCDL::GridDimXOp declarations
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
// ROCDL::GridDimYOp declarations
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
// ROCDL::GridDimZOp declarations
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
// ROCDL::MubufLoadOp declarations
//===----------------------------------------------------------------------===//

class MubufLoadOpAdaptor {
public:
  MubufLoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MubufLoadOpAdaptor(MubufLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value rsrc();
  Value vindex();
  Value offset();
  Value glc();
  Value slc();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MubufLoadOp : public Op<MubufLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = MubufLoadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value rsrc();
  Value vindex();
  Value offset();
  Value glc();
  Value slc();
  ::mlir::MutableOperandRange rsrcMutable();
  ::mlir::MutableOperandRange vindexMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange glcMutable();
  ::mlir::MutableOperandRange slcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value rsrc, Value vindex, Value offset, Value glc, Value slc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value rsrc, Value vindex, Value offset, Value glc, Value slc);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// ROCDL::MubufStoreOp declarations
//===----------------------------------------------------------------------===//

class MubufStoreOpAdaptor {
public:
  MubufStoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MubufStoreOpAdaptor(MubufStoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vdata();
  Value rsrc();
  Value vindex();
  Value offset();
  Value glc();
  Value slc();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MubufStoreOp : public Op<MubufStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<6>::Impl> {
public:
  using Op::Op;
  using Adaptor = MubufStoreOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vdata();
  Value rsrc();
  Value vindex();
  Value offset();
  Value glc();
  Value slc();
  ::mlir::MutableOperandRange vdataMutable();
  ::mlir::MutableOperandRange rsrcMutable();
  ::mlir::MutableOperandRange vindexMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange glcMutable();
  ::mlir::MutableOperandRange slcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value vdata, Value rsrc, Value vindex, Value offset, Value glc, Value slc);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vdata, Value rsrc, Value vindex, Value offset, Value glc, Value slc);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// ROCDL::ThreadIdXOp declarations
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
// ROCDL::ThreadIdYOp declarations
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
// ROCDL::ThreadIdZOp declarations
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
// ROCDL::mfma_f32_16x16x16f16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_16x16x16f16Adaptor {
public:
  mfma_f32_16x16x16f16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_16x16x16f16Adaptor(mfma_f32_16x16x16f16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_16x16x16f16 : public Op<mfma_f32_16x16x16f16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_16x16x16f16Adaptor;
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
// ROCDL::mfma_f32_16x16x1f32 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_16x16x1f32Adaptor {
public:
  mfma_f32_16x16x1f32Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_16x16x1f32Adaptor(mfma_f32_16x16x1f32& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_16x16x1f32 : public Op<mfma_f32_16x16x1f32, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_16x16x1f32Adaptor;
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
// ROCDL::mfma_f32_16x16x2bf16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_16x16x2bf16Adaptor {
public:
  mfma_f32_16x16x2bf16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_16x16x2bf16Adaptor(mfma_f32_16x16x2bf16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_16x16x2bf16 : public Op<mfma_f32_16x16x2bf16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_16x16x2bf16Adaptor;
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
// ROCDL::mfma_f32_16x16x4f16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_16x16x4f16Adaptor {
public:
  mfma_f32_16x16x4f16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_16x16x4f16Adaptor(mfma_f32_16x16x4f16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_16x16x4f16 : public Op<mfma_f32_16x16x4f16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_16x16x4f16Adaptor;
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
// ROCDL::mfma_f32_16x16x4f32 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_16x16x4f32Adaptor {
public:
  mfma_f32_16x16x4f32Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_16x16x4f32Adaptor(mfma_f32_16x16x4f32& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_16x16x4f32 : public Op<mfma_f32_16x16x4f32, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_16x16x4f32Adaptor;
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
// ROCDL::mfma_f32_16x16x8bf16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_16x16x8bf16Adaptor {
public:
  mfma_f32_16x16x8bf16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_16x16x8bf16Adaptor(mfma_f32_16x16x8bf16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_16x16x8bf16 : public Op<mfma_f32_16x16x8bf16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_16x16x8bf16Adaptor;
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
// ROCDL::mfma_f32_32x32x1f32 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_32x32x1f32Adaptor {
public:
  mfma_f32_32x32x1f32Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_32x32x1f32Adaptor(mfma_f32_32x32x1f32& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_32x32x1f32 : public Op<mfma_f32_32x32x1f32, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_32x32x1f32Adaptor;
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
// ROCDL::mfma_f32_32x32x2bf16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_32x32x2bf16Adaptor {
public:
  mfma_f32_32x32x2bf16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_32x32x2bf16Adaptor(mfma_f32_32x32x2bf16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_32x32x2bf16 : public Op<mfma_f32_32x32x2bf16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_32x32x2bf16Adaptor;
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
// ROCDL::mfma_f32_32x32x2f32 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_32x32x2f32Adaptor {
public:
  mfma_f32_32x32x2f32Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_32x32x2f32Adaptor(mfma_f32_32x32x2f32& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_32x32x2f32 : public Op<mfma_f32_32x32x2f32, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_32x32x2f32Adaptor;
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
// ROCDL::mfma_f32_32x32x4bf16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_32x32x4bf16Adaptor {
public:
  mfma_f32_32x32x4bf16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_32x32x4bf16Adaptor(mfma_f32_32x32x4bf16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_32x32x4bf16 : public Op<mfma_f32_32x32x4bf16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_32x32x4bf16Adaptor;
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
// ROCDL::mfma_f32_32x32x4f16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_32x32x4f16Adaptor {
public:
  mfma_f32_32x32x4f16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_32x32x4f16Adaptor(mfma_f32_32x32x4f16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_32x32x4f16 : public Op<mfma_f32_32x32x4f16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_32x32x4f16Adaptor;
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
// ROCDL::mfma_f32_32x32x8f16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_32x32x8f16Adaptor {
public:
  mfma_f32_32x32x8f16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_32x32x8f16Adaptor(mfma_f32_32x32x8f16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_32x32x8f16 : public Op<mfma_f32_32x32x8f16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_32x32x8f16Adaptor;
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
// ROCDL::mfma_f32_4x4x1f32 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_4x4x1f32Adaptor {
public:
  mfma_f32_4x4x1f32Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_4x4x1f32Adaptor(mfma_f32_4x4x1f32& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_4x4x1f32 : public Op<mfma_f32_4x4x1f32, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_4x4x1f32Adaptor;
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
// ROCDL::mfma_f32_4x4x2bf16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_4x4x2bf16Adaptor {
public:
  mfma_f32_4x4x2bf16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_4x4x2bf16Adaptor(mfma_f32_4x4x2bf16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_4x4x2bf16 : public Op<mfma_f32_4x4x2bf16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_4x4x2bf16Adaptor;
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
// ROCDL::mfma_f32_4x4x4f16 declarations
//===----------------------------------------------------------------------===//

class mfma_f32_4x4x4f16Adaptor {
public:
  mfma_f32_4x4x4f16Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_f32_4x4x4f16Adaptor(mfma_f32_4x4x4f16& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_f32_4x4x4f16 : public Op<mfma_f32_4x4x4f16, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_f32_4x4x4f16Adaptor;
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
// ROCDL::mfma_i32_16x16x16i8 declarations
//===----------------------------------------------------------------------===//

class mfma_i32_16x16x16i8Adaptor {
public:
  mfma_i32_16x16x16i8Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_i32_16x16x16i8Adaptor(mfma_i32_16x16x16i8& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_i32_16x16x16i8 : public Op<mfma_i32_16x16x16i8, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_i32_16x16x16i8Adaptor;
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
// ROCDL::mfma_i32_16x16x4i8 declarations
//===----------------------------------------------------------------------===//

class mfma_i32_16x16x4i8Adaptor {
public:
  mfma_i32_16x16x4i8Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_i32_16x16x4i8Adaptor(mfma_i32_16x16x4i8& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_i32_16x16x4i8 : public Op<mfma_i32_16x16x4i8, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_i32_16x16x4i8Adaptor;
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
// ROCDL::mfma_i32_32x32x4i8 declarations
//===----------------------------------------------------------------------===//

class mfma_i32_32x32x4i8Adaptor {
public:
  mfma_i32_32x32x4i8Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_i32_32x32x4i8Adaptor(mfma_i32_32x32x4i8& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_i32_32x32x4i8 : public Op<mfma_i32_32x32x4i8, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_i32_32x32x4i8Adaptor;
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
// ROCDL::mfma_i32_32x32x8i8 declarations
//===----------------------------------------------------------------------===//

class mfma_i32_32x32x8i8Adaptor {
public:
  mfma_i32_32x32x8i8Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_i32_32x32x8i8Adaptor(mfma_i32_32x32x8i8& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_i32_32x32x8i8 : public Op<mfma_i32_32x32x8i8, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_i32_32x32x8i8Adaptor;
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
// ROCDL::mfma_i32_4x4x4i8 declarations
//===----------------------------------------------------------------------===//

class mfma_i32_4x4x4i8Adaptor {
public:
  mfma_i32_4x4x4i8Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  mfma_i32_4x4x4i8Adaptor(mfma_i32_4x4x4i8& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class mfma_i32_4x4x4i8 : public Op<mfma_i32_4x4x4i8, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = mfma_i32_4x4x4i8Adaptor;
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

#endif  // GET_OP_CLASSES

