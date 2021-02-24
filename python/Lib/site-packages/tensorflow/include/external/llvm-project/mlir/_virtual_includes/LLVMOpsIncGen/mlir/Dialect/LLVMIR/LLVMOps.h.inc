/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AShrOp;
class AddOp;
class AddrSpaceCastOp;
class AddressOfOp;
class AllocaOp;
class AndOp;
class AssumeOp;
class AtomicCmpXchgOp;
class AtomicRMWOp;
class BitcastOp;
class BrOp;
class CallOp;
class CondBrOp;
class ConstantOp;
class CopySignOp;
class CosOp;
class DialectCastOp;
class Exp2Op;
class ExpOp;
class ExtractElementOp;
class ExtractValueOp;
class FAbsOp;
class FAddOp;
class FCeilOp;
class FCmpOp;
class FDivOp;
class FMAOp;
class FMulAddOp;
class FMulOp;
class FNegOp;
class FPExtOp;
class FPToSIOp;
class FPToUIOp;
class FPTruncOp;
class FRemOp;
class FSubOp;
class FenceOp;
class FreezeOp;
class GEPOp;
class GlobalOp;
class ICmpOp;
class InsertElementOp;
class InsertValueOp;
class IntToPtrOp;
class InvokeOp;
class LLVMFuncOp;
class LShrOp;
class LandingpadOp;
class LoadOp;
class Log10Op;
class Log2Op;
class LogOp;
class MaskedLoadOp;
class MaskedStoreOp;
class MatrixColumnMajorLoadOp;
class MatrixColumnMajorStoreOp;
class MatrixMultiplyOp;
class MatrixTransposeOp;
class MulOp;
class NullOp;
class OrOp;
class PowOp;
class Prefetch;
class PtrToIntOp;
class ResumeOp;
class ReturnOp;
class SDivOp;
class SExtOp;
class SIToFPOp;
class SRemOp;
class SelectOp;
class ShlOp;
class ShuffleVectorOp;
class SinOp;
class SqrtOp;
class StoreOp;
class SubOp;
class TruncOp;
class UDivOp;
class UIToFPOp;
class URemOp;
class UndefOp;
class UnreachableOp;
class XOrOp;
class ZExtOp;
class experimental_vector_reduce_add;
class experimental_vector_reduce_and;
class experimental_vector_reduce_fmax;
class experimental_vector_reduce_fmin;
class experimental_vector_reduce_mul;
class experimental_vector_reduce_or;
class experimental_vector_reduce_smax;
class experimental_vector_reduce_smin;
class experimental_vector_reduce_umax;
class experimental_vector_reduce_umin;
class experimental_vector_reduce_v2_fadd;
class experimental_vector_reduce_v2_fmul;
class experimental_vector_reduce_xor;

//===----------------------------------------------------------------------===//
// LLVM::AShrOp declarations
//===----------------------------------------------------------------------===//

class AShrOpAdaptor {
public:
  AShrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AShrOpAdaptor(AShrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AShrOp : public Op<AShrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AShrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AddOp declarations
//===----------------------------------------------------------------------===//

class AddOpAdaptor {
public:
  AddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddOpAdaptor(AddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddOp : public Op<AddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Adaptor = AddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AddrSpaceCastOp declarations
//===----------------------------------------------------------------------===//

class AddrSpaceCastOpAdaptor {
public:
  AddrSpaceCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddrSpaceCastOpAdaptor(AddrSpaceCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddrSpaceCastOp : public Op<AddrSpaceCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AddrSpaceCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AddressOfOp declarations
//===----------------------------------------------------------------------===//

class AddressOfOpAdaptor {
public:
  AddressOfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddressOfOpAdaptor(AddressOfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  FlatSymbolRefAttr global_name();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddressOfOp : public Op<AddressOfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = AddressOfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  FlatSymbolRefAttr global_nameAttr();
  StringRef global_name();
  void global_nameAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &result, LLVMType resType, StringRef name, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &builder, OperationState &result, GlobalOp global, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, FlatSymbolRefAttr global_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, FlatSymbolRefAttr global_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, StringRef global_name);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef global_name);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    /// Return the llvm.mlir.global operation that defined the value referenced
    /// here.
    GlobalOp getGlobal();
  
};

//===----------------------------------------------------------------------===//
// LLVM::AllocaOp declarations
//===----------------------------------------------------------------------===//

class AllocaOpAdaptor {
public:
  AllocaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllocaOpAdaptor(AllocaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arraySize();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllocaOp : public Op<AllocaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = AllocaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arraySize();
  ::mlir::MutableOperandRange arraySizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  void alignmentAttr(IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, Type resultType, Value arraySize, unsigned alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arraySize, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arraySize, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AndOp declarations
//===----------------------------------------------------------------------===//

class AndOpAdaptor {
public:
  AndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AndOpAdaptor(AndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AndOp : public Op<AndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::AssumeOp declarations
//===----------------------------------------------------------------------===//

class AssumeOpAdaptor {
public:
  AssumeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssumeOpAdaptor(AssumeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value cond();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssumeOp : public Op<AssumeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = AssumeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value cond();
  ::mlir::MutableOperandRange condMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value cond);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value cond);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AtomicCmpXchgOp declarations
//===----------------------------------------------------------------------===//

class AtomicCmpXchgOpAdaptor {
public:
  AtomicCmpXchgOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicCmpXchgOpAdaptor(AtomicCmpXchgOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value ptr();
  Value cmp();
  Value val();
  IntegerAttr success_ordering();
  IntegerAttr failure_ordering();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicCmpXchgOp : public Op<AtomicCmpXchgOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = AtomicCmpXchgOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value ptr();
  Value cmp();
  Value val();
  ::mlir::MutableOperandRange ptrMutable();
  ::mlir::MutableOperandRange cmpMutable();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr success_orderingAttr();
  ::mlir::LLVM::AtomicOrdering success_ordering();
  IntegerAttr failure_orderingAttr();
  ::mlir::LLVM::AtomicOrdering failure_ordering();
  void success_orderingAttr(IntegerAttr attr);
  void failure_orderingAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value ptr, Value cmp, Value val, IntegerAttr success_ordering, IntegerAttr failure_ordering);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value ptr, Value cmp, Value val, IntegerAttr success_ordering, IntegerAttr failure_ordering);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value ptr, Value cmp, Value val, ::mlir::LLVM::AtomicOrdering success_ordering, ::mlir::LLVM::AtomicOrdering failure_ordering);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value ptr, Value cmp, Value val, ::mlir::LLVM::AtomicOrdering success_ordering, ::mlir::LLVM::AtomicOrdering failure_ordering);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::AtomicRMWOp declarations
//===----------------------------------------------------------------------===//

class AtomicRMWOpAdaptor {
public:
  AtomicRMWOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicRMWOpAdaptor(AtomicRMWOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value ptr();
  Value val();
  IntegerAttr bin_op();
  IntegerAttr ordering();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicRMWOp : public Op<AtomicRMWOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = AtomicRMWOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value ptr();
  Value val();
  ::mlir::MutableOperandRange ptrMutable();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr bin_opAttr();
  ::mlir::LLVM::AtomicBinOp bin_op();
  IntegerAttr orderingAttr();
  ::mlir::LLVM::AtomicOrdering ordering();
  void bin_opAttr(IntegerAttr attr);
  void orderingAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, IntegerAttr bin_op, Value ptr, Value val, IntegerAttr ordering);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr bin_op, Value ptr, Value val, IntegerAttr ordering);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ::mlir::LLVM::AtomicBinOp bin_op, Value ptr, Value val, ::mlir::LLVM::AtomicOrdering ordering);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::AtomicBinOp bin_op, Value ptr, Value val, ::mlir::LLVM::AtomicOrdering ordering);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpAdaptor {
public:
  BitcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitcastOpAdaptor(BitcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitcastOp : public Op<BitcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::BrOp declarations
//===----------------------------------------------------------------------===//

class BrOpAdaptor {
public:
  BrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BrOpAdaptor(BrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange destOperands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BrOp : public Op<BrOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::OneSuccessor, OpTrait::VariadicOperands, BranchOpInterface::Trait, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = BrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range destOperands();
  ::mlir::MutableOperandRange destOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Block *dest();
  static void build(OpBuilder &, OperationState &result, ValueRange operands, SuccessorRange destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange destOperands, Block *dest);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange destOperands, Block *dest);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::CallOp declarations
//===----------------------------------------------------------------------===//

class CallOpAdaptor {
public:
  CallOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CallOpAdaptor(CallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  FlatSymbolRefAttr callee();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CallOp : public Op<CallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = CallOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FlatSymbolRefAttr calleeAttr();
  Optional< StringRef > callee();
  void calleeAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &result, LLVMFuncOp func,ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, /*optional*/FlatSymbolRefAttr callee, ValueRange odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::CondBrOp declarations
//===----------------------------------------------------------------------===//

class CondBrOpAdaptor {
public:
  CondBrOpAdaptor(ValueRange values, DictionaryAttr attrs);
  CondBrOpAdaptor(CondBrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  ValueRange trueDestOperands();
  ValueRange falseDestOperands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CondBrOp : public Op<CondBrOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::NSuccessors<2>::Impl, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, BranchOpInterface::Trait, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = CondBrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value condition();
  Operation::operand_range trueDestOperands();
  Operation::operand_range falseDestOperands();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange trueDestOperandsMutable();
  ::mlir::MutableOperandRange falseDestOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Block *trueDest();
  Block *falseDest();
  static void build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, ValueRange trueOperands,Block *falseDest, ValueRange falseOperands);
  static void build(OpBuilder &builder, OperationState &result, Value condition,Block *trueDest, Block *falseDest, ValueRange falseOperands = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, SuccessorRange destinations, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ConstantOp declarations
//===----------------------------------------------------------------------===//

class ConstantOpAdaptor {
public:
  ConstantOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConstantOpAdaptor(ConstantOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Attribute value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConstantOp : public Op<ConstantOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstantOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  Attribute valueAttr();
  Attribute value();
  void valueAttr(Attribute attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Attribute value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Attribute value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::CopySignOp declarations
//===----------------------------------------------------------------------===//

class CopySignOpAdaptor {
public:
  CopySignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CopySignOpAdaptor(CopySignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CopySignOp : public Op<CopySignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CopySignOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::CosOp declarations
//===----------------------------------------------------------------------===//

class CosOpAdaptor {
public:
  CosOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CosOpAdaptor(CosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CosOp : public Op<CosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = CosOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::DialectCastOp declarations
//===----------------------------------------------------------------------===//

class DialectCastOpAdaptor {
public:
  DialectCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DialectCastOpAdaptor(DialectCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DialectCastOp : public Op<DialectCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DialectCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::Exp2Op declarations
//===----------------------------------------------------------------------===//

class Exp2OpAdaptor {
public:
  Exp2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Exp2OpAdaptor(Exp2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Exp2Op : public Op<Exp2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = Exp2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ExpOp declarations
//===----------------------------------------------------------------------===//

class ExpOpAdaptor {
public:
  ExpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExpOpAdaptor(ExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExpOp : public Op<ExpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = ExpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ExtractElementOp declarations
//===----------------------------------------------------------------------===//

class ExtractElementOpAdaptor {
public:
  ExtractElementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExtractElementOpAdaptor(ExtractElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  Value position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExtractElementOp : public Op<ExtractElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractElementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  Value position();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange positionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &b, OperationState &result, Value vector, Value position,ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value vector, Value position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ExtractValueOp declarations
//===----------------------------------------------------------------------===//

class ExtractValueOpAdaptor {
public:
  ExtractValueOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExtractValueOpAdaptor(ExtractValueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value container();
  ArrayAttr position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExtractValueOp : public Op<ExtractValueOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractValueOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value container();
  ::mlir::MutableOperandRange containerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  ArrayAttr positionAttr();
  ArrayAttr position();
  void positionAttr(ArrayAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value container, ArrayAttr position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value container, ArrayAttr position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FAbsOp declarations
//===----------------------------------------------------------------------===//

class FAbsOpAdaptor {
public:
  FAbsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FAbsOpAdaptor(FAbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FAbsOp : public Op<FAbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FAbsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FAddOp declarations
//===----------------------------------------------------------------------===//

class FAddOpAdaptor {
public:
  FAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FAddOpAdaptor(FAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FAddOp : public Op<FAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FCeilOp declarations
//===----------------------------------------------------------------------===//

class FCeilOpAdaptor {
public:
  FCeilOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FCeilOpAdaptor(FCeilOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FCeilOp : public Op<FCeilOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FCeilOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FCmpOp declarations
//===----------------------------------------------------------------------===//

class FCmpOpAdaptor {
public:
  FCmpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FCmpOpAdaptor(FCmpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  IntegerAttr predicate();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FCmpOp : public Op<FCmpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FCmpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr predicateAttr();
  ::mlir::LLVM::FCmpPredicate predicate();
  void predicateAttr(IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, FCmpPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::FCmpPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FDivOp declarations
//===----------------------------------------------------------------------===//

class FDivOpAdaptor {
public:
  FDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FDivOpAdaptor(FDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FDivOp : public Op<FDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FMAOp declarations
//===----------------------------------------------------------------------===//

class FMAOpAdaptor {
public:
  FMAOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FMAOpAdaptor(FMAOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  Value c();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FMAOp : public Op<FMAOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FMAOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  Value c();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange cMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b, Value c);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value c);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b, Value c);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FMulAddOp declarations
//===----------------------------------------------------------------------===//

class FMulAddOpAdaptor {
public:
  FMulAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FMulAddOpAdaptor(FMulAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  Value c();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FMulAddOp : public Op<FMulAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FMulAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  Value c();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  ::mlir::MutableOperandRange cMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b, Value c);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value c);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b, Value c);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FMulOp declarations
//===----------------------------------------------------------------------===//

class FMulOpAdaptor {
public:
  FMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FMulOpAdaptor(FMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FMulOp : public Op<FMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FNegOp declarations
//===----------------------------------------------------------------------===//

class FNegOpAdaptor {
public:
  FNegOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FNegOpAdaptor(FNegOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FNegOp : public Op<FNegOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FNegOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPExtOp declarations
//===----------------------------------------------------------------------===//

class FPExtOpAdaptor {
public:
  FPExtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FPExtOpAdaptor(FPExtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FPExtOp : public Op<FPExtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPExtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPToSIOp declarations
//===----------------------------------------------------------------------===//

class FPToSIOpAdaptor {
public:
  FPToSIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FPToSIOpAdaptor(FPToSIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FPToSIOp : public Op<FPToSIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPToSIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPToUIOp declarations
//===----------------------------------------------------------------------===//

class FPToUIOpAdaptor {
public:
  FPToUIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FPToUIOpAdaptor(FPToUIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FPToUIOp : public Op<FPToUIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPToUIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FPTruncOp declarations
//===----------------------------------------------------------------------===//

class FPTruncOpAdaptor {
public:
  FPTruncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FPTruncOpAdaptor(FPTruncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FPTruncOp : public Op<FPTruncOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FPTruncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FRemOp declarations
//===----------------------------------------------------------------------===//

class FRemOpAdaptor {
public:
  FRemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FRemOpAdaptor(FRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FRemOp : public Op<FRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FRemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FSubOp declarations
//===----------------------------------------------------------------------===//

class FSubOpAdaptor {
public:
  FSubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FSubOpAdaptor(FSubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FSubOp : public Op<FSubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FSubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::FenceOp declarations
//===----------------------------------------------------------------------===//

class FenceOpAdaptor {
public:
  FenceOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FenceOpAdaptor(FenceOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr ordering();
  StringAttr syncscope();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FenceOp : public Op<FenceOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = FenceOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr orderingAttr();
  ::mlir::LLVM::AtomicOrdering ordering();
  StringAttr syncscopeAttr();
  StringRef syncscope();
  void orderingAttr(IntegerAttr attr);
  void syncscopeAttr(StringAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr ordering, StringAttr syncscope);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr ordering, StringAttr syncscope);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ::mlir::LLVM::AtomicOrdering ordering, StringRef syncscope);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::AtomicOrdering ordering, StringRef syncscope);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::FreezeOp declarations
//===----------------------------------------------------------------------===//

class FreezeOpAdaptor {
public:
  FreezeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FreezeOpAdaptor(FreezeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value val();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FreezeOp : public Op<FreezeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = FreezeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value val();
  ::mlir::MutableOperandRange valMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value val);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value val);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value val);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::GEPOp declarations
//===----------------------------------------------------------------------===//

class GEPOpAdaptor {
public:
  GEPOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GEPOpAdaptor(GEPOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value base();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GEPOp : public Op<GEPOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GEPOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value base();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value base, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value base, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::GlobalOp declarations
//===----------------------------------------------------------------------===//

class GlobalOpAdaptor {
public:
  GlobalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GlobalOpAdaptor(GlobalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  TypeAttr type();
  UnitAttr constant();
  StringAttr sym_name();
  IntegerAttr linkage();
  Attribute value();
  IntegerAttr addr_space();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GlobalOp : public Op<GlobalOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsIsolatedFromAbove, OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl, SymbolOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GlobalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &initializer();
  TypeAttr typeAttr();
  Type type();
  UnitAttr constantAttr();
  bool constant();
  StringAttr sym_nameAttr();
  StringRef sym_name();
  IntegerAttr linkageAttr();
  ::mlir::LLVM::Linkage linkage();
  Attribute valueAttr();
  Optional<Attribute> value();
  IntegerAttr addr_spaceAttr();
  APInt addr_space();
  void typeAttr(TypeAttr attr);
  void constantAttr(UnitAttr attr);
  void sym_nameAttr(StringAttr attr);
  void linkageAttr(IntegerAttr attr);
  void valueAttr(Attribute attr);
  void addr_spaceAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, LLVMType type, bool isConstant, Linkage linkage, StringRef name, Attribute value, unsigned addrSpace = 0, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/UnitAttr constant, StringAttr sym_name, IntegerAttr linkage, /*optional*/Attribute value, IntegerAttr addr_space);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, /*optional*/bool constant, StringRef sym_name, ::mlir::LLVM::Linkage linkage, /*optional*/Attribute value, APInt addr_space);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    /// Return the LLVM type of the global.
    LLVMType getType() {
      return type().cast<LLVMType>();
    }
    /// Return the initializer attribute if it exists, or a null attribute.
    Attribute getValueOrNull() {
      return value().getValueOr(Attribute());
    }
    /// Return the initializer region. This may be empty, but if it is not it
    /// terminates in an `llvm.return` op with the initializer value.
    Region &getInitializerRegion() {
      return getOperation()->getRegion(0);
    }
    /// Return the initializer block. If the initializer region is empty this
    /// is nullptr. If it is not nullptr, it terminates with an `llvm.return`
    /// op with the initializer value.
    Block *getInitializerBlock() {
      return getInitializerRegion().empty() ?
        nullptr : &getInitializerRegion().front();
    }
  
};

//===----------------------------------------------------------------------===//
// LLVM::ICmpOp declarations
//===----------------------------------------------------------------------===//

class ICmpOpAdaptor {
public:
  ICmpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ICmpOpAdaptor(ICmpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  IntegerAttr predicate();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ICmpOp : public Op<ICmpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ICmpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr predicateAttr();
  ::mlir::LLVM::ICmpPredicate predicate();
  void predicateAttr(IntegerAttr attr);
  static void build(OpBuilder &b, OperationState &result, ICmpPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::LLVM::ICmpPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::InsertElementOp declarations
//===----------------------------------------------------------------------===//

class InsertElementOpAdaptor {
public:
  InsertElementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InsertElementOpAdaptor(InsertElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value vector();
  Value value();
  Value position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InsertElementOp : public Op<InsertElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertElementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value vector();
  Value value();
  Value position();
  ::mlir::MutableOperandRange vectorMutable();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange positionMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value vector, Value value, Value position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value vector, Value value, Value position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::InsertValueOp declarations
//===----------------------------------------------------------------------===//

class InsertValueOpAdaptor {
public:
  InsertValueOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  InsertValueOpAdaptor(InsertValueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value container();
  Value value();
  ArrayAttr position();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InsertValueOp : public Op<InsertValueOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = InsertValueOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value container();
  Value value();
  ::mlir::MutableOperandRange containerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  ArrayAttr positionAttr();
  ArrayAttr position();
  void positionAttr(ArrayAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value container, Value value, ArrayAttr position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value container, Value value, ArrayAttr position);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value container, Value value, ArrayAttr position);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::IntToPtrOp declarations
//===----------------------------------------------------------------------===//

class IntToPtrOpAdaptor {
public:
  IntToPtrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IntToPtrOpAdaptor(IntToPtrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IntToPtrOp : public Op<IntToPtrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IntToPtrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::InvokeOp declarations
//===----------------------------------------------------------------------===//

class InvokeOpAdaptor {
public:
  InvokeOpAdaptor(ValueRange values, DictionaryAttr attrs);
  InvokeOpAdaptor(InvokeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  ValueRange normalDestOperands();
  ValueRange unwindDestOperands();
  FlatSymbolRefAttr callee();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class InvokeOp : public Op<InvokeOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::NSuccessors<2>::Impl, OpTrait::VariadicOperands, OpTrait::AttrSizedOperandSegments, BranchOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = InvokeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  Operation::operand_range normalDestOperands();
  Operation::operand_range unwindDestOperands();
  ::mlir::MutableOperandRange operandsMutable();
  ::mlir::MutableOperandRange normalDestOperandsMutable();
  ::mlir::MutableOperandRange unwindDestOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Block *normalDest();
  Block *unwindDest();
  FlatSymbolRefAttr calleeAttr();
  Optional< StringRef > callee();
  void calleeAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &b, OperationState &result, ArrayRef<Type> tys, FlatSymbolRefAttr callee, ValueRange ops, Block* normal, ValueRange normalOps, Block* unwind, ValueRange unwindOps);
  static void build(OpBuilder &b, OperationState &result, ArrayRef<Type> tys, ValueRange ops, Block* normal, ValueRange normalOps, Block* unwind, ValueRange unwindOps);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, /*optional*/FlatSymbolRefAttr callee, ValueRange operands, ValueRange normalDestOperands, ValueRange unwindDestOperands, Block *normalDest, Block *unwindDest);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
};

//===----------------------------------------------------------------------===//
// LLVM::LLVMFuncOp declarations
//===----------------------------------------------------------------------===//

class LLVMFuncOpAdaptor {
public:
  LLVMFuncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LLVMFuncOpAdaptor(LLVMFuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr linkage();
  FlatSymbolRefAttr personality();
  ArrayAttr passthrough();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LLVMFuncOp : public Op<LLVMFuncOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::AutomaticAllocationScope, OpTrait::IsIsolatedFromAbove, OpTrait::FunctionLike, SymbolOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LLVMFuncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr linkageAttr();
  ::mlir::LLVM::Linkage linkage();
  FlatSymbolRefAttr personalityAttr();
  Optional< StringRef > personality();
  ArrayAttr passthroughAttr();
  Optional< ArrayAttr > passthrough();
  void linkageAttr(IntegerAttr attr);
  void personalityAttr(FlatSymbolRefAttr attr);
  void passthroughAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result, StringRef name, LLVMType type, LLVM::Linkage linkage = LLVM::Linkage::External, ArrayRef<NamedAttribute> attrs = {}, ArrayRef<MutableDictionaryAttr> argAttrs = {});
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    // Add an entry block to an empty function, and set up the block arguments
    // to match the signature of the function.
    Block *addEntryBlock();

    LLVMType getType() {
      return getAttrOfType<TypeAttr>(getTypeAttrName())
          .getValue().cast<LLVMType>();
    }
    bool isVarArg() {
      return getType().getUnderlyingType()->isFunctionVarArg();
    }

    // Hook for OpTrait::FunctionLike, returns the number of function arguments.
    // Depends on the type attribute being correct as checked by verifyType.
    unsigned getNumFuncArguments();

    // Hook for OpTrait::FunctionLike, returns the number of function results.
    // Depends on the type attribute being correct as checked by verifyType.
    unsigned getNumFuncResults();

    // Hook for OpTrait::FunctionLike, called after verifying that the 'type'
    // attribute is present.  This can check for preconditions of the
    // getNumArguments hook not failing.
    LogicalResult verifyType();
  
};

//===----------------------------------------------------------------------===//
// LLVM::LShrOp declarations
//===----------------------------------------------------------------------===//

class LShrOpAdaptor {
public:
  LShrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LShrOpAdaptor(LShrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LShrOp : public Op<LShrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = LShrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::LandingpadOp declarations
//===----------------------------------------------------------------------===//

class LandingpadOpAdaptor {
public:
  LandingpadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LandingpadOpAdaptor(LandingpadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  UnitAttr cleanup();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LandingpadOp : public Op<LandingpadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands> {
public:
  using Op::Op;
  using Adaptor = LandingpadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  UnitAttr cleanupAttr();
  bool cleanup();
  void cleanupAttr(UnitAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, /*optional*/UnitAttr cleanup, ValueRange odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, /*optional*/UnitAttr cleanup, ValueRange odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, /*optional*/bool cleanup, ValueRange odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, /*optional*/bool cleanup, ValueRange odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::LoadOp declarations
//===----------------------------------------------------------------------===//

class LoadOpAdaptor {
public:
  LoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LoadOpAdaptor(LoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value addr();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LoadOp : public Op<LoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = LoadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value addr();
  ::mlir::MutableOperandRange addrMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &b, OperationState &result, Value addr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value addr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value addr);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::Log10Op declarations
//===----------------------------------------------------------------------===//

class Log10OpAdaptor {
public:
  Log10OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Log10OpAdaptor(Log10Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Log10Op : public Op<Log10Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = Log10OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::Log2Op declarations
//===----------------------------------------------------------------------===//

class Log2OpAdaptor {
public:
  Log2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Log2OpAdaptor(Log2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Log2Op : public Op<Log2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = Log2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::LogOp declarations
//===----------------------------------------------------------------------===//

class LogOpAdaptor {
public:
  LogOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogOpAdaptor(LogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogOp : public Op<LogOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = LogOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::MaskedLoadOp declarations
//===----------------------------------------------------------------------===//

class MaskedLoadOpAdaptor {
public:
  MaskedLoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaskedLoadOpAdaptor(MaskedLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value mask();
  ValueRange pass_thru();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaskedLoadOp : public Op<MaskedLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = MaskedLoadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value mask();
  Operation::operand_range pass_thru();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange maskMutable();
  ::mlir::MutableOperandRange pass_thruMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr alignmentAttr();
  APInt alignment();
  void alignmentAttr(IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value mask, ValueRange pass_thru, IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value mask, ValueRange pass_thru, IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value mask, ValueRange pass_thru, APInt alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value mask, ValueRange pass_thru, APInt alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MaskedStoreOp declarations
//===----------------------------------------------------------------------===//

class MaskedStoreOpAdaptor {
public:
  MaskedStoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MaskedStoreOpAdaptor(MaskedStoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value data();
  Value mask();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MaskedStoreOp : public Op<MaskedStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = MaskedStoreOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value data();
  Value mask();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange maskMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr alignmentAttr();
  APInt alignment();
  void alignmentAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value data, Value mask, IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value data, Value mask, IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value data, Value mask, APInt alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value data, Value mask, APInt alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixColumnMajorLoadOp declarations
//===----------------------------------------------------------------------===//

class MatrixColumnMajorLoadOpAdaptor {
public:
  MatrixColumnMajorLoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixColumnMajorLoadOpAdaptor(MatrixColumnMajorLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value data();
  Value stride();
  IntegerAttr isVolatile();
  IntegerAttr rows();
  IntegerAttr columns();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixColumnMajorLoadOp : public Op<MatrixColumnMajorLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = MatrixColumnMajorLoadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value data();
  Value stride();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange strideMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr isVolatileAttr();
  APInt isVolatile();
  IntegerAttr rowsAttr();
  APInt rows();
  IntegerAttr columnsAttr();
  APInt columns();
  void isVolatileAttr(IntegerAttr attr);
  void rowsAttr(IntegerAttr attr);
  void columnsAttr(IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixColumnMajorStoreOp declarations
//===----------------------------------------------------------------------===//

class MatrixColumnMajorStoreOpAdaptor {
public:
  MatrixColumnMajorStoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixColumnMajorStoreOpAdaptor(MatrixColumnMajorStoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value matrix();
  Value data();
  Value stride();
  IntegerAttr isVolatile();
  IntegerAttr rows();
  IntegerAttr columns();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixColumnMajorStoreOp : public Op<MatrixColumnMajorStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl> {
public:
  using Op::Op;
  using Adaptor = MatrixColumnMajorStoreOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value matrix();
  Value data();
  Value stride();
  ::mlir::MutableOperandRange matrixMutable();
  ::mlir::MutableOperandRange dataMutable();
  ::mlir::MutableOperandRange strideMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr isVolatileAttr();
  APInt isVolatile();
  IntegerAttr rowsAttr();
  APInt rows();
  IntegerAttr columnsAttr();
  APInt columns();
  void isVolatileAttr(IntegerAttr attr);
  void rowsAttr(IntegerAttr attr);
  void columnsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value matrix, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, Value data, Value stride, IntegerAttr isVolatile, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value matrix, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, Value data, Value stride, APInt isVolatile, APInt rows, APInt columns);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixMultiplyOp declarations
//===----------------------------------------------------------------------===//

class MatrixMultiplyOpAdaptor {
public:
  MatrixMultiplyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixMultiplyOpAdaptor(MatrixMultiplyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  IntegerAttr lhs_rows();
  IntegerAttr lhs_columns();
  IntegerAttr rhs_columns();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixMultiplyOp : public Op<MatrixMultiplyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = MatrixMultiplyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr lhs_rowsAttr();
  APInt lhs_rows();
  IntegerAttr lhs_columnsAttr();
  APInt lhs_columns();
  IntegerAttr rhs_columnsAttr();
  APInt rhs_columns();
  void lhs_rowsAttr(IntegerAttr attr);
  void lhs_columnsAttr(IntegerAttr attr);
  void rhs_columnsAttr(IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, IntegerAttr lhs_rows, IntegerAttr lhs_columns, IntegerAttr rhs_columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs, APInt lhs_rows, APInt lhs_columns, APInt rhs_columns);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MatrixTransposeOp declarations
//===----------------------------------------------------------------------===//

class MatrixTransposeOpAdaptor {
public:
  MatrixTransposeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixTransposeOpAdaptor(MatrixTransposeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value matrix();
  IntegerAttr rows();
  IntegerAttr columns();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixTransposeOp : public Op<MatrixTransposeOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = MatrixTransposeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value matrix();
  ::mlir::MutableOperandRange matrixMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  IntegerAttr rowsAttr();
  APInt rows();
  IntegerAttr columnsAttr();
  APInt columns();
  void rowsAttr(IntegerAttr attr);
  void columnsAttr(IntegerAttr attr);
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, IntegerAttr rows, IntegerAttr columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value matrix, APInt rows, APInt columns);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, APInt rows, APInt columns);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::MulOp declarations
//===----------------------------------------------------------------------===//

class MulOpAdaptor {
public:
  MulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MulOpAdaptor(MulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MulOp : public Op<MulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Adaptor = MulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::NullOp declarations
//===----------------------------------------------------------------------===//

class NullOpAdaptor {
public:
  NullOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NullOpAdaptor(NullOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NullOp : public Op<NullOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NullOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::OrOp declarations
//===----------------------------------------------------------------------===//

class OrOpAdaptor {
public:
  OrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  OrOpAdaptor(OrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class OrOp : public Op<OrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = OrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::PowOp declarations
//===----------------------------------------------------------------------===//

class PowOpAdaptor {
public:
  PowOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PowOpAdaptor(PowOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value a();
  Value b();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PowOp : public Op<PowOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = PowOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value a();
  Value b();
  ::mlir::MutableOperandRange aMutable();
  ::mlir::MutableOperandRange bMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value a, Value b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value a, Value b);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::Prefetch declarations
//===----------------------------------------------------------------------===//

class PrefetchAdaptor {
public:
  PrefetchAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PrefetchAdaptor(Prefetch& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value addr();
  Value rw();
  Value hint();
  Value cache();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Prefetch : public Op<Prefetch, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl> {
public:
  using Op::Op;
  using Adaptor = PrefetchAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value addr();
  Value rw();
  Value hint();
  Value cache();
  ::mlir::MutableOperandRange addrMutable();
  ::mlir::MutableOperandRange rwMutable();
  ::mlir::MutableOperandRange hintMutable();
  ::mlir::MutableOperandRange cacheMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value addr, Value rw, Value hint, Value cache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value addr, Value rw, Value hint, Value cache);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::PtrToIntOp declarations
//===----------------------------------------------------------------------===//

class PtrToIntOpAdaptor {
public:
  PtrToIntOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PtrToIntOpAdaptor(PtrToIntOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PtrToIntOp : public Op<PtrToIntOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = PtrToIntOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ResumeOp declarations
//===----------------------------------------------------------------------===//

class ResumeOpAdaptor {
public:
  ResumeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ResumeOpAdaptor(ResumeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ResumeOp : public Op<ResumeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ResumeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// LLVM::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpAdaptor {
public:
  ReturnOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReturnOpAdaptor(ReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange args();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = ReturnOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range args();
  ::mlir::MutableOperandRange argsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange args);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange args);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SDivOp declarations
//===----------------------------------------------------------------------===//

class SDivOpAdaptor {
public:
  SDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SDivOpAdaptor(SDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SDivOp : public Op<SDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SExtOp declarations
//===----------------------------------------------------------------------===//

class SExtOpAdaptor {
public:
  SExtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SExtOpAdaptor(SExtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SExtOp : public Op<SExtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SExtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SIToFPOp declarations
//===----------------------------------------------------------------------===//

class SIToFPOpAdaptor {
public:
  SIToFPOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SIToFPOpAdaptor(SIToFPOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SIToFPOp : public Op<SIToFPOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SIToFPOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SRemOp declarations
//===----------------------------------------------------------------------===//

class SRemOpAdaptor {
public:
  SRemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SRemOpAdaptor(SRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SRemOp : public Op<SRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SRemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpAdaptor {
public:
  SelectOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SelectOpAdaptor(SelectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  Value trueValue();
  Value falseValue();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectOp : public Op<SelectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value condition();
  Value trueValue();
  Value falseValue();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange trueValueMutable();
  ::mlir::MutableOperandRange falseValueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &b, OperationState &result, Value condition, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value condition, Value trueValue, Value falseValue);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, Value trueValue, Value falseValue);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ShlOp declarations
//===----------------------------------------------------------------------===//

class ShlOpAdaptor {
public:
  ShlOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShlOpAdaptor(ShlOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShlOp : public Op<ShlOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = ShlOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ShuffleVectorOp declarations
//===----------------------------------------------------------------------===//

class ShuffleVectorOpAdaptor {
public:
  ShuffleVectorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShuffleVectorOpAdaptor(ShuffleVectorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value v1();
  Value v2();
  ArrayAttr mask();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShuffleVectorOp : public Op<ShuffleVectorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShuffleVectorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value v1();
  Value v2();
  ::mlir::MutableOperandRange v1Mutable();
  ::mlir::MutableOperandRange v2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  ArrayAttr maskAttr();
  ArrayAttr mask();
  void maskAttr(ArrayAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value v1, Value v2, ArrayAttr mask, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value v1, Value v2, ArrayAttr mask);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value v1, Value v2, ArrayAttr mask);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SinOp declarations
//===----------------------------------------------------------------------===//

class SinOpAdaptor {
public:
  SinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SinOpAdaptor(SinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SinOp : public Op<SinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::SqrtOp declarations
//===----------------------------------------------------------------------===//

class SqrtOpAdaptor {
public:
  SqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SqrtOpAdaptor(SqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SqrtOp : public Op<SqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::StoreOp declarations
//===----------------------------------------------------------------------===//

class StoreOpAdaptor {
public:
  StoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StoreOpAdaptor(StoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value addr();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StoreOp : public Op<StoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = StoreOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value addr();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange addrMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &, OperationState &result, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value addr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value addr);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::SubOp declarations
//===----------------------------------------------------------------------===//

class SubOpAdaptor {
public:
  SubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubOpAdaptor(SubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubOp : public Op<SubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::TruncOp declarations
//===----------------------------------------------------------------------===//

class TruncOpAdaptor {
public:
  TruncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TruncOpAdaptor(TruncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TruncOp : public Op<TruncOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TruncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UDivOp declarations
//===----------------------------------------------------------------------===//

class UDivOpAdaptor {
public:
  UDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UDivOpAdaptor(UDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UDivOp : public Op<UDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = UDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UIToFPOp declarations
//===----------------------------------------------------------------------===//

class UIToFPOpAdaptor {
public:
  UIToFPOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UIToFPOpAdaptor(UIToFPOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UIToFPOp : public Op<UIToFPOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UIToFPOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::URemOp declarations
//===----------------------------------------------------------------------===//

class URemOpAdaptor {
public:
  URemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  URemOpAdaptor(URemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class URemOp : public Op<URemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = URemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UndefOp declarations
//===----------------------------------------------------------------------===//

class UndefOpAdaptor {
public:
  UndefOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UndefOpAdaptor(UndefOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UndefOp : public Op<UndefOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UndefOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::UnreachableOp declarations
//===----------------------------------------------------------------------===//

class UnreachableOpAdaptor {
public:
  UnreachableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnreachableOpAdaptor(UnreachableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnreachableOp : public Op<UnreachableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = UnreachableOpAdaptor;
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
// LLVM::XOrOp declarations
//===----------------------------------------------------------------------===//

class XOrOpAdaptor {
public:
  XOrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  XOrOpAdaptor(XOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class XOrOp : public Op<XOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = XOrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::ZExtOp declarations
//===----------------------------------------------------------------------===//

class ZExtOpAdaptor {
public:
  ZExtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ZExtOpAdaptor(ZExtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value arg();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ZExtOp : public Op<ZExtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ZExtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value arg();
  ::mlir::MutableOperandRange argMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &, OperationState &result, Type resultType, ValueRange operands, ArrayRef<NamedAttribute> attributes = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value arg);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value arg);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_add declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_addAdaptor {
public:
  experimental_vector_reduce_addAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_addAdaptor(experimental_vector_reduce_add& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_add : public Op<experimental_vector_reduce_add, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_addAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_and declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_andAdaptor {
public:
  experimental_vector_reduce_andAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_andAdaptor(experimental_vector_reduce_and& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_and : public Op<experimental_vector_reduce_and, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_andAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_fmax declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_fmaxAdaptor {
public:
  experimental_vector_reduce_fmaxAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_fmaxAdaptor(experimental_vector_reduce_fmax& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_fmax : public Op<experimental_vector_reduce_fmax, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_fmaxAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_fmin declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_fminAdaptor {
public:
  experimental_vector_reduce_fminAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_fminAdaptor(experimental_vector_reduce_fmin& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_fmin : public Op<experimental_vector_reduce_fmin, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_fminAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_mul declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_mulAdaptor {
public:
  experimental_vector_reduce_mulAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_mulAdaptor(experimental_vector_reduce_mul& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_mul : public Op<experimental_vector_reduce_mul, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_mulAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_or declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_orAdaptor {
public:
  experimental_vector_reduce_orAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_orAdaptor(experimental_vector_reduce_or& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_or : public Op<experimental_vector_reduce_or, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_orAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_smax declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_smaxAdaptor {
public:
  experimental_vector_reduce_smaxAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_smaxAdaptor(experimental_vector_reduce_smax& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_smax : public Op<experimental_vector_reduce_smax, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_smaxAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_smin declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_sminAdaptor {
public:
  experimental_vector_reduce_sminAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_sminAdaptor(experimental_vector_reduce_smin& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_smin : public Op<experimental_vector_reduce_smin, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_sminAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_umax declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_umaxAdaptor {
public:
  experimental_vector_reduce_umaxAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_umaxAdaptor(experimental_vector_reduce_umax& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_umax : public Op<experimental_vector_reduce_umax, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_umaxAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_umin declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_uminAdaptor {
public:
  experimental_vector_reduce_uminAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_uminAdaptor(experimental_vector_reduce_umin& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_umin : public Op<experimental_vector_reduce_umin, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_uminAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_v2_fadd declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_v2_faddAdaptor {
public:
  experimental_vector_reduce_v2_faddAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_v2_faddAdaptor(experimental_vector_reduce_v2_fadd& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_v2_fadd : public Op<experimental_vector_reduce_v2_fadd, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_v2_faddAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_v2_fmul declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_v2_fmulAdaptor {
public:
  experimental_vector_reduce_v2_fmulAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_v2_fmulAdaptor(experimental_vector_reduce_v2_fmul& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_v2_fmul : public Op<experimental_vector_reduce_v2_fmul, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_v2_fmulAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::experimental_vector_reduce_xor declarations
//===----------------------------------------------------------------------===//

class experimental_vector_reduce_xorAdaptor {
public:
  experimental_vector_reduce_xorAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  experimental_vector_reduce_xorAdaptor(experimental_vector_reduce_xor& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class experimental_vector_reduce_xor : public Op<experimental_vector_reduce_xor, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = experimental_vector_reduce_xorAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

