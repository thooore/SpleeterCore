/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AbsFOp;
class AddCFOp;
class AddFOp;
class AddIOp;
class AllocOp;
class AllocaOp;
class AndOp;
class AssumeAlignmentOp;
class AtomicRMWOp;
class AtomicYieldOp;
class BranchOp;
class CallIndirectOp;
class CallOp;
class CeilFOp;
class CmpFOp;
class CmpIOp;
class CondBranchOp;
class ConstantOp;
class CopySignOp;
class CosOp;
class CreateComplexOp;
class DeallocOp;
class DimOp;
class DivFOp;
class Exp2Op;
class ExpOp;
class ExtractElementOp;
class FPExtOp;
class FPToSIOp;
class FPTruncOp;
class GenericAtomicRMWOp;
class ImOp;
class IndexCastOp;
class LoadOp;
class Log10Op;
class Log2Op;
class LogOp;
class MemRefCastOp;
class MulFOp;
class MulIOp;
class NegFOp;
class OrOp;
class PrefetchOp;
class RankOp;
class ReOp;
class RemFOp;
class ReturnOp;
class RsqrtOp;
class SIToFPOp;
class SelectOp;
class ShiftLeftOp;
class SignExtendIOp;
class SignedDivIOp;
class SignedRemIOp;
class SignedShiftRightOp;
class SinOp;
class SplatOp;
class SqrtOp;
class StoreOp;
class SubCFOp;
class SubFOp;
class SubIOp;
class SubViewOp;
class TanhOp;
class TensorCastOp;
class TensorFromElementsOp;
class TensorLoadOp;
class TensorStoreOp;
class TruncateIOp;
class UnsignedDivIOp;
class UnsignedRemIOp;
class UnsignedShiftRightOp;
class ViewOp;
class XOrOp;
class ZeroExtendIOp;

//===----------------------------------------------------------------------===//
// AbsFOp declarations
//===----------------------------------------------------------------------===//

class AbsFOpAdaptor {
public:
  AbsFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AbsFOpAdaptor(AbsFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AbsFOp : public Op<AbsFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AbsFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// AddCFOp declarations
//===----------------------------------------------------------------------===//

class AddCFOpAdaptor {
public:
  AddCFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddCFOpAdaptor(AddCFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddCFOp : public Op<AddCFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AddCFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// AddFOp declarations
//===----------------------------------------------------------------------===//

class AddFOpAdaptor {
public:
  AddFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddFOpAdaptor(AddFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddFOp : public Op<AddFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AddFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// AddIOp declarations
//===----------------------------------------------------------------------===//

class AddIOpAdaptor {
public:
  AddIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddIOpAdaptor(AddIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddIOp : public Op<AddIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = AddIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// AllocOp declarations
//===----------------------------------------------------------------------===//

class AllocOpAdaptor {
public:
  AllocOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllocOpAdaptor(AllocOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange value();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllocOp : public Op<AllocOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AllocOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  void alignmentAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, MemRefType memrefType);
  static void build(OpBuilder &builder, OperationState &result, MemRefType memrefType, ValueRange operands, IntegerAttr alignment = IntegerAttr());
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange value, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange value, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getAlignmentAttrName() { return "alignment"; }

    MemRefType getType() { return getResult().getType().cast<MemRefType>(); }

    /// Returns the number of symbolic operands (the ones in square brackets),
    /// which bind to the symbols of the memref's layout map.
    unsigned getNumSymbolicOperands() {
      return getNumOperands() - getType().getNumDynamicDims();
    }

    /// Returns the symbolic operands (the ones in square brackets), which bind
    /// to the symbols of the memref's layout map.
    operand_range getSymbolicOperands() {
      return {operand_begin() + getType().getNumDynamicDims(), operand_end()};
    }

    /// Returns the dynamic sizes for this alloc operation if specified.
    operand_range getDynamicSizes() { return getOperands(); }
  
};

//===----------------------------------------------------------------------===//
// AllocaOp declarations
//===----------------------------------------------------------------------===//

class AllocaOpAdaptor {
public:
  AllocaOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AllocaOpAdaptor(AllocaOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange value();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AllocaOp : public Op<AllocaOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AllocaOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  void alignmentAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, MemRefType memrefType);
  static void build(OpBuilder &builder, OperationState &result, MemRefType memrefType, ValueRange operands, IntegerAttr alignment = IntegerAttr());
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, ValueRange value, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange value, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getAlignmentAttrName() { return "alignment"; }

    MemRefType getType() { return getResult().getType().cast<MemRefType>(); }

    /// Returns the number of symbolic operands (the ones in square brackets),
    /// which bind to the symbols of the memref's layout map.
    unsigned getNumSymbolicOperands() {
      return getNumOperands() - getType().getNumDynamicDims();
    }

    /// Returns the symbolic operands (the ones in square brackets), which bind
    /// to the symbols of the memref's layout map.
    operand_range getSymbolicOperands() {
      return {operand_begin() + getType().getNumDynamicDims(), operand_end()};
    }

    /// Returns the dynamic sizes for this alloc operation if specified.
    operand_range getDynamicSizes() { return getOperands(); }
  
};

//===----------------------------------------------------------------------===//
// AndOp declarations
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
class AndOp : public Op<AndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// AssumeAlignmentOp declarations
//===----------------------------------------------------------------------===//

class AssumeAlignmentOpAdaptor {
public:
  AssumeAlignmentOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AssumeAlignmentOpAdaptor(AssumeAlignmentOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AssumeAlignmentOp : public Op<AssumeAlignmentOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand> {
public:
  using Op::Op;
  using Adaptor = AssumeAlignmentOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  ::mlir::MutableOperandRange memrefMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr alignmentAttr();
  APInt alignment();
  void alignmentAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, APInt alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, APInt alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// AtomicRMWOp declarations
//===----------------------------------------------------------------------===//

class AtomicRMWOpAdaptor {
public:
  AtomicRMWOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicRMWOpAdaptor(AtomicRMWOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value memref();
  ValueRange indices();
  IntegerAttr kind();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicRMWOp : public Op<AtomicRMWOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl> {
public:
  using Op::Op;
  using Adaptor = AtomicRMWOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value memref();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange memrefMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr kindAttr();
  ::mlir::AtomicRMWKind kind();
  void kindAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr kind, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr kind, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::AtomicRMWKind kind, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::AtomicRMWKind kind, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
  
};

//===----------------------------------------------------------------------===//
// AtomicYieldOp declarations
//===----------------------------------------------------------------------===//

class AtomicYieldOpAdaptor {
public:
  AtomicYieldOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicYieldOpAdaptor(AtomicYieldOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value result();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicYieldOp : public Op<AtomicYieldOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::HasParent<GenericAtomicRMWOp>::Impl, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = AtomicYieldOpAdaptor;
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
// BranchOp declarations
//===----------------------------------------------------------------------===//

class BranchOpAdaptor {
public:
  BranchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BranchOpAdaptor(BranchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange destOperands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BranchOp : public Op<BranchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::OneSuccessor, OpTrait::VariadicOperands, BranchOpInterface::Trait, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = BranchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range destOperands();
  ::mlir::MutableOperandRange destOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Block *dest();
  static void build(OpBuilder &, OperationState &result, Block *dest, ValueRange destOperands = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange destOperands, Block *dest);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange destOperands, Block *dest);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  Block *getSuccessorForOperands(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    Block *getDest();
    void setDest(Block *block);

    /// Erase the operand at 'index' from the operand list.
    void eraseOperand(unsigned index);
  
};

//===----------------------------------------------------------------------===//
// CallIndirectOp declarations
//===----------------------------------------------------------------------===//

class CallIndirectOpAdaptor {
public:
  CallIndirectOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CallIndirectOpAdaptor(CallIndirectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value callee();
  ValueRange operands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CallIndirectOp : public Op<CallIndirectOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, CallOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CallIndirectOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value callee();
  Operation::operand_range operands();
  ::mlir::MutableOperandRange calleeMutable();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Operation::result_range results();
  static void build(OpBuilder &, OperationState &result, Value callee,ValueRange operands = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> results, Value callee, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    Value getCallee() { return getOperand(0); }

    /// Get the argument operands to the called function.
    operand_range getArgOperands() {
      return {arg_operand_begin(), arg_operand_end()};
    }

    operand_iterator arg_operand_begin() { return ++operand_begin(); }
    operand_iterator arg_operand_end() { return operand_end(); }

    /// Return the callee of this operation.
    CallInterfaceCallable getCallableForCallee() { return getCallee(); }
  
};

//===----------------------------------------------------------------------===//
// CallOp declarations
//===----------------------------------------------------------------------===//

class CallOpAdaptor {
public:
  CallOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CallOpAdaptor(CallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  FlatSymbolRefAttr callee();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CallOp : public Op<CallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, CallOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CallOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FlatSymbolRefAttr calleeAttr();
  StringRef callee();
  void calleeAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &result, FuncOp callee,ValueRange operands = {});
  static void build(OpBuilder &builder, OperationState &result, SymbolRefAttr callee,ArrayRef<Type> results, ValueRange operands = {});
  static void build(OpBuilder &builder, OperationState &result, StringRef callee,ArrayRef<Type> results, ValueRange operands = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, FlatSymbolRefAttr callee, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultType0, StringRef callee, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);

    StringRef getCallee() { return callee(); }
    FunctionType getCalleeType();

    /// Get the argument operands to the called function.
    operand_range getArgOperands() {
      return {arg_operand_begin(), arg_operand_end()};
    }

    operand_iterator arg_operand_begin() { return operand_begin(); }
    operand_iterator arg_operand_end() { return operand_end(); }

    /// Return the callee of this operation.
    CallInterfaceCallable getCallableForCallee() {
      return getAttrOfType<SymbolRefAttr>("callee");
    }
  
};

//===----------------------------------------------------------------------===//
// CeilFOp declarations
//===----------------------------------------------------------------------===//

class CeilFOpAdaptor {
public:
  CeilFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CeilFOpAdaptor(CeilFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CeilFOp : public Op<CeilFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CeilFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// CmpFOp declarations
//===----------------------------------------------------------------------===//

class CmpFOpAdaptor {
public:
  CmpFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CmpFOpAdaptor(CmpFOp& op);
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
class CmpFOp : public Op<CmpFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = CmpFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr predicateAttr();
  ::mlir::CmpFPredicate predicate();
  void predicateAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, CmpFPredicate predicate,Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::CmpFPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::CmpFPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getPredicateAttrName() { return "predicate"; }
    static CmpFPredicate getPredicateByName(StringRef name);

    CmpFPredicate getPredicate() {
      return (CmpFPredicate)getAttrOfType<IntegerAttr>(getPredicateAttrName())
          .getInt();
    }
  
};

//===----------------------------------------------------------------------===//
// CmpIOp declarations
//===----------------------------------------------------------------------===//

class CmpIOpAdaptor {
public:
  CmpIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CmpIOpAdaptor(CmpIOp& op);
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
class CmpIOp : public Op<CmpIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = CmpIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr predicateAttr();
  ::mlir::CmpIPredicate predicate();
  void predicateAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &result, CmpIPredicate predicate,Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::CmpIPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::CmpIPredicate predicate, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getPredicateAttrName() { return "predicate"; }
    static CmpIPredicate getPredicateByName(StringRef name);

    CmpIPredicate getPredicate() {
      return (CmpIPredicate)getAttrOfType<IntegerAttr>(getPredicateAttrName())
          .getInt();
    }
  
};

//===----------------------------------------------------------------------===//
// CondBranchOp declarations
//===----------------------------------------------------------------------===//

class CondBranchOpAdaptor {
public:
  CondBranchOpAdaptor(ValueRange values, DictionaryAttr attrs);
  CondBranchOpAdaptor(CondBranchOp& op);
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
class CondBranchOp : public Op<CondBranchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::NSuccessors<2>::Impl, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, BranchOpInterface::Trait, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = CondBranchOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, ValueRange trueDestOperands, ValueRange falseDestOperands, Block *trueDest, Block *falseDest);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  Block *getSuccessorForOperands(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // These are the indices into the dests list.
    enum { trueIndex = 0, falseIndex = 1 };

    // The condition operand is the first operand in the list.
    Value getCondition() { return getOperand(0); }

    /// Return the destination if the condition is true.
    Block *getTrueDest() {
      return getSuccessor(trueIndex);
    }

    /// Return the destination if the condition is false.
    Block *getFalseDest() {
      return getSuccessor(falseIndex);
    }

    // Accessors for operands to the 'true' destination.
    Value getTrueOperand(unsigned idx) {
      assert(idx < getNumTrueOperands());
      return getOperand(getTrueDestOperandIndex() + idx);
    }

    void setTrueOperand(unsigned idx, Value value) {
      assert(idx < getNumTrueOperands());
      setOperand(getTrueDestOperandIndex() + idx, value);
    }

    operand_range getTrueOperands() { return trueDestOperands(); }

    unsigned getNumTrueOperands()  { return getTrueOperands().size(); }

    /// Erase the operand at 'index' from the true operand list.
    void eraseTrueOperand(unsigned index)  {
      trueDestOperandsMutable().erase(index);
    }

    // Accessors for operands to the 'false' destination.
    Value getFalseOperand(unsigned idx) {
      assert(idx < getNumFalseOperands());
      return getOperand(getFalseDestOperandIndex() + idx);
    }
    void setFalseOperand(unsigned idx, Value value) {
      assert(idx < getNumFalseOperands());
      setOperand(getFalseDestOperandIndex() + idx, value);
    }

    operand_range getFalseOperands() { return falseDestOperands(); }

    unsigned getNumFalseOperands() { return getFalseOperands().size(); }

    /// Erase the operand at 'index' from the false operand list.
    void eraseFalseOperand(unsigned index) {
      falseDestOperandsMutable().erase(index);
    }

  private:
    /// Get the index of the first true destination operand.
    unsigned getTrueDestOperandIndex() { return 1; }

    /// Get the index of the first false destination operand.
    unsigned getFalseDestOperandIndex() {
      return getTrueDestOperandIndex() + getNumTrueOperands();
    }
  
};

//===----------------------------------------------------------------------===//
// ConstantOp declarations
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
class ConstantOp : public Op<ConstantOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, MemoryEffectOpInterface::Trait, OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstantOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Attribute valueAttr();
  Attribute value();
  void valueAttr(Attribute attr);
  static void build(OpBuilder &builder, OperationState &result, Attribute value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Attribute value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Attribute value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getAsmResultNames(OpAsmSetValueNameFn setNameFn);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    Attribute getValue() { return getAttr("value"); }

    /// Returns true if a constant operation can be built with the given value
    /// and result type.
    static bool isBuildableWith(Attribute value, Type type);
  
};

//===----------------------------------------------------------------------===//
// CopySignOp declarations
//===----------------------------------------------------------------------===//

class CopySignOpAdaptor {
public:
  CopySignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CopySignOpAdaptor(CopySignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
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
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// CosOp declarations
//===----------------------------------------------------------------------===//

class CosOpAdaptor {
public:
  CosOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CosOpAdaptor(CosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CosOp : public Op<CosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CosOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// CreateComplexOp declarations
//===----------------------------------------------------------------------===//

class CreateComplexOpAdaptor {
public:
  CreateComplexOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CreateComplexOpAdaptor(CreateComplexOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value real();
  Value imaginary();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CreateComplexOp : public Op<CreateComplexOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CreateComplexOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value real();
  Value imaginary();
  ::mlir::MutableOperandRange realMutable();
  ::mlir::MutableOperandRange imaginaryMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value complex();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type complex, Value real, Value imaginary);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value real, Value imaginary);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// DeallocOp declarations
//===----------------------------------------------------------------------===//

class DeallocOpAdaptor {
public:
  DeallocOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DeallocOpAdaptor(DeallocOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DeallocOp : public Op<DeallocOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DeallocOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  ::mlir::MutableOperandRange memrefMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value memref);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// DimOp declarations
//===----------------------------------------------------------------------===//

class DimOpAdaptor {
public:
  DimOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DimOpAdaptor(DimOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memrefOrTensor();
  Value index();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DimOp : public Op<DimOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = DimOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memrefOrTensor();
  Value index();
  ::mlir::MutableOperandRange memrefOrTensorMutable();
  ::mlir::MutableOperandRange indexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, Value memrefOrTensor, int64_t index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memrefOrTensor, Value index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memrefOrTensor, Value index);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Helper function to get the index as a simple integer if it is constant.
    Optional<int64_t> getConstantIndex();
  
};

//===----------------------------------------------------------------------===//
// DivFOp declarations
//===----------------------------------------------------------------------===//

class DivFOpAdaptor {
public:
  DivFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  DivFOpAdaptor(DivFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class DivFOp : public Op<DivFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = DivFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// Exp2Op declarations
//===----------------------------------------------------------------------===//

class Exp2OpAdaptor {
public:
  Exp2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Exp2OpAdaptor(Exp2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Exp2Op : public Op<Exp2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Exp2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// ExpOp declarations
//===----------------------------------------------------------------------===//

class ExpOpAdaptor {
public:
  ExpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExpOpAdaptor(ExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExpOp : public Op<ExpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// ExtractElementOp declarations
//===----------------------------------------------------------------------===//

class ExtractElementOpAdaptor {
public:
  ExtractElementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExtractElementOpAdaptor(ExtractElementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value aggregate();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExtractElementOp : public Op<ExtractElementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExtractElementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value aggregate();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange aggregateMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, Value aggregate,ValueRange indices = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value aggregate, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value aggregate, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    Value getAggregate() { return getOperand(0); }

    operand_range getIndices() {
      return {operand_begin() + 1, operand_end()};
    }
  
};

//===----------------------------------------------------------------------===//
// FPExtOp declarations
//===----------------------------------------------------------------------===//

class FPExtOpAdaptor {
public:
  FPExtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FPExtOpAdaptor(FPExtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FPExtOp : public Op<FPExtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = FPExtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value source, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Return true if `a` and `b` are valid operand and result pairs for
    /// the operation.
    static bool areCastCompatible(Type a, Type b);
  
};

//===----------------------------------------------------------------------===//
// FPToSIOp declarations
//===----------------------------------------------------------------------===//

class FPToSIOpAdaptor {
public:
  FPToSIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FPToSIOpAdaptor(FPToSIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FPToSIOp : public Op<FPToSIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = FPToSIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value source, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Return true if `a` and `b` are valid operand and result pairs for
    /// the operation.
    static bool areCastCompatible(Type a, Type b);
  
};

//===----------------------------------------------------------------------===//
// FPTruncOp declarations
//===----------------------------------------------------------------------===//

class FPTruncOpAdaptor {
public:
  FPTruncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FPTruncOpAdaptor(FPTruncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FPTruncOp : public Op<FPTruncOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = FPTruncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value source, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Return true if `a` and `b` are valid operand and result pairs for
    /// the operation.
    static bool areCastCompatible(Type a, Type b);
  
};

//===----------------------------------------------------------------------===//
// GenericAtomicRMWOp declarations
//===----------------------------------------------------------------------===//

class GenericAtomicRMWOpAdaptor {
public:
  GenericAtomicRMWOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GenericAtomicRMWOpAdaptor(GenericAtomicRMWOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GenericAtomicRMWOp : public Op<GenericAtomicRMWOp, OpTrait::OneRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::SingleBlockImplicitTerminator<AtomicYieldOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = GenericAtomicRMWOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange memrefMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  Region &body();
  static void build(OpBuilder &builder, OperationState &result, Value memref, ValueRange ivs);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    // The value stored in memref[ivs].
    Value getCurrentValue() {
      return body().front().getArgument(0);
    }
    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
  
};

//===----------------------------------------------------------------------===//
// ImOp declarations
//===----------------------------------------------------------------------===//

class ImOpAdaptor {
public:
  ImOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ImOpAdaptor(ImOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value complex();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ImOp : public Op<ImOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ImOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value complex();
  ::mlir::MutableOperandRange complexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value imaginary();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type imaginary, Value complex);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value complex);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// IndexCastOp declarations
//===----------------------------------------------------------------------===//

class IndexCastOpAdaptor {
public:
  IndexCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IndexCastOpAdaptor(IndexCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IndexCastOp : public Op<IndexCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = IndexCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value source, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Return true if `a` and `b` are valid operand and result pairs for
    /// the operation.
    static bool areCastCompatible(Type a, Type b);
  
};

//===----------------------------------------------------------------------===//
// LoadOp declarations
//===----------------------------------------------------------------------===//

class LoadOpAdaptor {
public:
  LoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LoadOpAdaptor(LoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LoadOp : public Op<LoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LoadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange memrefMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &, OperationState &result, Value memref,ValueRange indices = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    Value getMemRef() { return getOperand(0); }
    void setMemRef(Value value) { setOperand(0, value); }
    MemRefType getMemRefType() {
      return getMemRef().getType().cast<MemRefType>();
    }

    operand_range getIndices() { return {operand_begin() + 1, operand_end()}; }
  
};

//===----------------------------------------------------------------------===//
// Log10Op declarations
//===----------------------------------------------------------------------===//

class Log10OpAdaptor {
public:
  Log10OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Log10OpAdaptor(Log10Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Log10Op : public Op<Log10Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Log10OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// Log2Op declarations
//===----------------------------------------------------------------------===//

class Log2OpAdaptor {
public:
  Log2OpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  Log2OpAdaptor(Log2Op& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class Log2Op : public Op<Log2Op, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = Log2OpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// LogOp declarations
//===----------------------------------------------------------------------===//

class LogOpAdaptor {
public:
  LogOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogOpAdaptor(LogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogOp : public Op<LogOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// MemRefCastOp declarations
//===----------------------------------------------------------------------===//

class MemRefCastOpAdaptor {
public:
  MemRefCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MemRefCastOpAdaptor(MemRefCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MemRefCastOp : public Op<MemRefCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = MemRefCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  ::mlir::MutableOperandRange sourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value source, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value source);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Return true if `a` and `b` are valid operand and result pairs for
    /// the operation.
    static bool areCastCompatible(Type a, Type b);

    /// The result of a memref_cast is always a memref.
    Type getType() { return getResult().getType(); }
  
};

//===----------------------------------------------------------------------===//
// MulFOp declarations
//===----------------------------------------------------------------------===//

class MulFOpAdaptor {
public:
  MulFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MulFOpAdaptor(MulFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MulFOp : public Op<MulFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = MulFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// MulIOp declarations
//===----------------------------------------------------------------------===//

class MulIOpAdaptor {
public:
  MulIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MulIOpAdaptor(MulIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MulIOp : public Op<MulIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = MulIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// NegFOp declarations
//===----------------------------------------------------------------------===//

class NegFOpAdaptor {
public:
  NegFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NegFOpAdaptor(NegFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NegFOp : public Op<NegFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NegFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// OrOp declarations
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
class OrOp : public Op<OrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// PrefetchOp declarations
//===----------------------------------------------------------------------===//

class PrefetchOpAdaptor {
public:
  PrefetchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  PrefetchOpAdaptor(PrefetchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  ValueRange indices();
  BoolAttr isWrite();
  IntegerAttr localityHint();
  BoolAttr isDataCache();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class PrefetchOp : public Op<PrefetchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  using Adaptor = PrefetchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange memrefMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  BoolAttr isWriteAttr();
  bool isWrite();
  IntegerAttr localityHintAttr();
  APInt localityHint();
  BoolAttr isDataCacheAttr();
  bool isDataCache();
  void isWriteAttr(BoolAttr attr);
  void localityHintAttr(IntegerAttr attr);
  void isDataCacheAttr(BoolAttr attr);
  static void build(OpBuilder &builder, OperationState &result, Value memref,ArrayRef<Value> indices, bool isWrite, unsigned hint, bool isData);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }
    static StringRef getLocalityHintAttrName() { return "localityHint"; }
    static StringRef getIsWriteAttrName() { return "isWrite"; }
    static StringRef getIsDataCacheAttrName() { return "isDataCache"; }
  
};

//===----------------------------------------------------------------------===//
// RankOp declarations
//===----------------------------------------------------------------------===//

class RankOpAdaptor {
public:
  RankOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RankOpAdaptor(RankOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RankOp : public Op<RankOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RankOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value tensor);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// ReOp declarations
//===----------------------------------------------------------------------===//

class ReOpAdaptor {
public:
  ReOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReOpAdaptor(ReOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value complex();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReOp : public Op<ReOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value complex();
  ::mlir::MutableOperandRange complexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value real();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type real, Value complex);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value complex);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// RemFOp declarations
//===----------------------------------------------------------------------===//

class RemFOpAdaptor {
public:
  RemFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RemFOpAdaptor(RemFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RemFOp : public Op<RemFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = RemFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// ReturnOp declarations
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
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::HasParent<FuncOp>::Impl, OpTrait::ReturnLike, OpTrait::IsTerminator> {
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
  static void build(OpBuilder &b, OperationState &result);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// RsqrtOp declarations
//===----------------------------------------------------------------------===//

class RsqrtOpAdaptor {
public:
  RsqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  RsqrtOpAdaptor(RsqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class RsqrtOp : public Op<RsqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = RsqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// SIToFPOp declarations
//===----------------------------------------------------------------------===//

class SIToFPOpAdaptor {
public:
  SIToFPOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SIToFPOpAdaptor(SIToFPOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value in();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SIToFPOp : public Op<SIToFPOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = SIToFPOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value in();
  ::mlir::MutableOperandRange inMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value source, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value in);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value in);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Return true if `a` and `b` are valid operand and result pairs for
    /// the operation.
    static bool areCastCompatible(Type a, Type b);
  
};

//===----------------------------------------------------------------------===//
// SelectOp declarations
//===----------------------------------------------------------------------===//

class SelectOpAdaptor {
public:
  SelectOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SelectOpAdaptor(SelectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  Value true_value();
  Value false_value();
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
  Value true_value();
  Value false_value();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange true_valueMutable();
  ::mlir::MutableOperandRange false_valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, Value condition,Value trueValue, Value falseValue);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value condition, Value true_value, Value false_value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, Value true_value, Value false_value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      Value getCondition() { return condition(); }
      Value getTrueValue() { return true_value(); }
      Value getFalseValue() { return false_value(); }
  
};

//===----------------------------------------------------------------------===//
// ShiftLeftOp declarations
//===----------------------------------------------------------------------===//

class ShiftLeftOpAdaptor {
public:
  ShiftLeftOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftLeftOpAdaptor(ShiftLeftOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftLeftOp : public Op<ShiftLeftOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = ShiftLeftOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// SignExtendIOp declarations
//===----------------------------------------------------------------------===//

class SignExtendIOpAdaptor {
public:
  SignExtendIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SignExtendIOpAdaptor(SignExtendIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SignExtendIOp : public Op<SignExtendIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = SignExtendIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value value, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// SignedDivIOp declarations
//===----------------------------------------------------------------------===//

class SignedDivIOpAdaptor {
public:
  SignedDivIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SignedDivIOpAdaptor(SignedDivIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SignedDivIOp : public Op<SignedDivIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SignedDivIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// SignedRemIOp declarations
//===----------------------------------------------------------------------===//

class SignedRemIOpAdaptor {
public:
  SignedRemIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SignedRemIOpAdaptor(SignedRemIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SignedRemIOp : public Op<SignedRemIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SignedRemIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// SignedShiftRightOp declarations
//===----------------------------------------------------------------------===//

class SignedShiftRightOpAdaptor {
public:
  SignedShiftRightOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SignedShiftRightOpAdaptor(SignedShiftRightOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SignedShiftRightOp : public Op<SignedShiftRightOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SignedShiftRightOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// SinOp declarations
//===----------------------------------------------------------------------===//

class SinOpAdaptor {
public:
  SinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SinOpAdaptor(SinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SinOp : public Op<SinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// SplatOp declarations
//===----------------------------------------------------------------------===//

class SplatOpAdaptor {
public:
  SplatOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SplatOpAdaptor(SplatOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value input();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SplatOp : public Op<SplatOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SplatOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value input();
  ::mlir::MutableOperandRange inputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value aggregate();
  static void build(OpBuilder &builder, OperationState &result, Value element, Type aggregateType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type aggregate, Value input);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value input);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// SqrtOp declarations
//===----------------------------------------------------------------------===//

class SqrtOpAdaptor {
public:
  SqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SqrtOpAdaptor(SqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SqrtOp : public Op<SqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// StoreOp declarations
//===----------------------------------------------------------------------===//

class StoreOpAdaptor {
public:
  StoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StoreOpAdaptor(StoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value memref();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StoreOp : public Op<StoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StoreOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value memref();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange memrefMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &, OperationState &result, Value valueToStore, Value memref);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

      Value getValueToStore() { return getOperand(0); }

      Value getMemRef() { return getOperand(1); }
      void setMemRef(Value value) { setOperand(1, value); }
      MemRefType getMemRefType() {
        return getMemRef().getType().cast<MemRefType>();
      }

      operand_range getIndices() {
        return {operand_begin() + 2, operand_end()};
      }
  
};

//===----------------------------------------------------------------------===//
// SubCFOp declarations
//===----------------------------------------------------------------------===//

class SubCFOpAdaptor {
public:
  SubCFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubCFOpAdaptor(SubCFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubCFOp : public Op<SubCFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SubCFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// SubFOp declarations
//===----------------------------------------------------------------------===//

class SubFOpAdaptor {
public:
  SubFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubFOpAdaptor(SubFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubFOp : public Op<SubFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SubFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// SubIOp declarations
//===----------------------------------------------------------------------===//

class SubIOpAdaptor {
public:
  SubIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubIOpAdaptor(SubIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubIOp : public Op<SubIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = SubIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// SubViewOp declarations
//===----------------------------------------------------------------------===//

class SubViewOpAdaptor {
public:
  SubViewOpAdaptor(ValueRange values, DictionaryAttr attrs);
  SubViewOpAdaptor(SubViewOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  ValueRange offsets();
  ValueRange sizes();
  ValueRange strides();
  ArrayAttr static_offsets();
  ArrayAttr static_sizes();
  ArrayAttr static_strides();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubViewOp : public Op<SubViewOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, ViewLikeOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SubViewOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  Operation::operand_range offsets();
  Operation::operand_range sizes();
  Operation::operand_range strides();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange offsetsMutable();
  ::mlir::MutableOperandRange sizesMutable();
  ::mlir::MutableOperandRange stridesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  ArrayAttr static_offsetsAttr();
  ArrayAttr static_offsets();
  ArrayAttr static_sizesAttr();
  ArrayAttr static_sizes();
  ArrayAttr static_stridesAttr();
  ArrayAttr static_strides();
  void static_offsetsAttr(ArrayAttr attr);
  void static_sizesAttr(ArrayAttr attr);
  void static_stridesAttr(ArrayAttr attr);
  static void build(OpBuilder &b, OperationState &result, Value source, ArrayRef<int64_t> staticOffsets, ArrayRef<int64_t> staticSizes,ArrayRef<int64_t> staticStrides, ValueRange offsets, ValueRange sizes, ValueRange strides, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &b, OperationState &result, Value source, ValueRange offsets, ValueRange sizes, ValueRange strides, ArrayRef<NamedAttribute> attrs = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value source, ValueRange offsets, ValueRange sizes, ValueRange strides, ArrayAttr static_offsets, ArrayAttr static_sizes, ArrayAttr static_strides);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, ValueRange offsets, ValueRange sizes, ValueRange strides, ArrayAttr static_offsets, ArrayAttr static_sizes, ArrayAttr static_strides);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  Value getViewSource();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Returns the type of the base memref operand.
    MemRefType getBaseMemRefType() {
      return source().getType().cast<MemRefType>();
    }

    /// The result of a subview is always a memref.
    MemRefType getType() { return getResult().getType().cast<MemRefType>(); }

    /// Returns as integer value the number of offset operands.
    int64_t getNumOffsets() { return llvm::size(offsets()); }

    /// Returns as integer value the number of size operands.
    int64_t getNumSizes() { return llvm::size(sizes()); }

    /// Returns as integer value the number of stride operands.
    int64_t getNumStrides() { return llvm::size(strides()); }

    /// Returns the dynamic sizes for this subview operation if specified.
    operand_range getDynamicSizes() { return sizes(); }

    /// Returns in `staticStrides` the static value of the stride
    /// operands. Returns failure() if the static value of the stride
    /// operands could not be retrieved.
    LogicalResult getStaticStrides(SmallVectorImpl<int64_t> &staticStrides);

    /// Auxiliary range data structure and helper function that unpacks the
    /// offset, size and stride operands of the SubViewOp into a list of triples.
    /// Such a list of triple is sometimes more convenient to manipulate.
    struct Range {
      Value offset, size, stride;
    };
    /// Return the list of SubViewOp::Range (i.e. offset, size, stride). Each
    /// Range entry contains either the dynamic value or a ConstantIndexOp
    /// constructed with `b` at location `loc`.
    SmallVector<Range, 8> getOrCreateRanges(OpBuilder &b, Location loc);

    /// Return the offsets as Values. Each Value is either the dynamic
    /// value specified in the op or a ConstantIndexOp constructed
    /// with `b` at location `loc`
    SmallVector<Value, 4> getOrCreateOffsets(OpBuilder &b, Location loc);

    /// Return the sizes as Values. Each Value is either the dynamic
    /// value specified in the op or a ConstantIndexOp constructed
    /// with `b` at location `loc`
    SmallVector<Value, 4> getOrCreateSizes(OpBuilder &b, Location loc);

    /// Return the strides as Values. Each Value is either the dynamic
    /// value specified in the op or a ConstantIndexOp constructed with
    /// `b` at location `loc`
    SmallVector<Value, 4> getOrCreateStrides(OpBuilder &b, Location loc);

    /// A subview result type can be fully inferred from the source type and the
    /// static representation of offsets, sizes and strides. Special sentinels
    /// encode the dynamic case.
    static Type inferSubViewResultType(MemRefType sourceMemRefType,
                                       ArrayRef<int64_t> staticOffsets,
                                       ArrayRef<int64_t> staticSizes,
                                       ArrayRef<int64_t> staticStrides);

    /// Return the rank of the result MemRefType.
    unsigned getRank() { return getType().getRank(); }

    /// Return true if the offset `idx` is a static constant.
    bool isDynamicOffset(unsigned idx);
    /// Return true if the size `idx` is a static constant.
    bool isDynamicSize(unsigned idx);
    /// Return true if the stride `idx` is a static constant.
    bool isDynamicStride(unsigned idx);

    /// Assert the offset `idx` is a static constant and return its value.
    int64_t getStaticOffset(unsigned idx) {
      assert(!isDynamicOffset(idx) && "expected static offset");
      return
        static_offsets().cast<ArrayAttr>()[idx].cast<IntegerAttr>().getInt();
    }
    /// Assert the size `idx` is a static constant and return its value.
    int64_t getStaticSize(unsigned idx) {
      assert(!isDynamicSize(idx) && "expected static size");
      return static_sizes().cast<ArrayAttr>()[idx].cast<IntegerAttr>().getInt();
    }
    /// Assert the stride `idx` is a static constant and return its value.
    int64_t getStaticStride(unsigned idx) {
      assert(!isDynamicStride(idx) && "expected static stride");
      return
        static_strides().cast<ArrayAttr>()[idx].cast<IntegerAttr>().getInt();
    }

    /// Assert the offset `idx` is dynamic and return the position of the
    /// corresponding operand.
    unsigned getIndexOfDynamicOffset(unsigned idx);
    /// Assert the size `idx` is dynamic and return the position of the
    /// corresponding operand.
    unsigned getIndexOfDynamicSize(unsigned idx);
    /// Assert the stride `idx` is dynamic and return the position of the
    /// corresponding operand.
    unsigned getIndexOfDynamicStride(unsigned idx);

    /// Assert the offset `idx` is dynamic and return its value.
    Value getDynamicOffset(unsigned idx) {
      return getOperand(getIndexOfDynamicOffset(idx));
    }
    /// Assert the size `idx` is dynamic and return its value.
    Value getDynamicSize(unsigned idx) {
      return getOperand(getIndexOfDynamicSize(idx));
    }
    /// Assert the stride `idx` is dynamic and return its value.
    Value getDynamicStride(unsigned idx) {
      return getOperand(getIndexOfDynamicStride(idx));
    }

    static StringRef getStaticOffsetsAttrName() {
      return "static_offsets";
    }
    static StringRef getStaticSizesAttrName() {
      return "static_sizes";
    }
    static StringRef getStaticStridesAttrName() {
      return "static_strides";
    }
    static ArrayRef<StringRef> getSpecialAttrNames() {
      static SmallVector<StringRef, 4> names{
        getStaticOffsetsAttrName(),
        getStaticSizesAttrName(),
        getStaticStridesAttrName(),
        getOperandSegmentSizeAttr()};
      return names;
   }
  
};

//===----------------------------------------------------------------------===//
// TanhOp declarations
//===----------------------------------------------------------------------===//

class TanhOpAdaptor {
public:
  TanhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TanhOpAdaptor(TanhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TanhOp : public Op<TanhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TanhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value operand);
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
// TensorCastOp declarations
//===----------------------------------------------------------------------===//

class TensorCastOpAdaptor {
public:
  TensorCastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorCastOpAdaptor(TensorCastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorCastOp : public Op<TensorCastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = TensorCastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value source, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value odsArg_0);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Return true if `a` and `b` are valid operand and result pairs for
    /// the operation.
    static bool areCastCompatible(Type a, Type b);

    /// The result of a tensor_cast is always a tensor.
    TensorType getType() { return getResult().getType().cast<TensorType>(); }
  
};

//===----------------------------------------------------------------------===//
// TensorFromElementsOp declarations
//===----------------------------------------------------------------------===//

class TensorFromElementsOpAdaptor {
public:
  TensorFromElementsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorFromElementsOpAdaptor(TensorFromElementsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange elements();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorFromElementsOp : public Op<TensorFromElementsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultElementType> {
public:
  using Op::Op;
  using Adaptor = TensorFromElementsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range elements();
  ::mlir::MutableOperandRange elementsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, ValueRange elements);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TensorLoadOp declarations
//===----------------------------------------------------------------------===//

class TensorLoadOpAdaptor {
public:
  TensorLoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorLoadOpAdaptor(TensorLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorLoadOp : public Op<TensorLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, OpTrait::SameOperandsAndResultShape, OpTrait::SameOperandsAndResultElementType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorLoadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value memref();
  ::mlir::MutableOperandRange memrefMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &builder, OperationState &result, Value memref);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// The result of a tensor_load is always a tensor.
    TensorType getType() { return getResult().getType().cast<TensorType>(); }
  
};

//===----------------------------------------------------------------------===//
// TensorStoreOp declarations
//===----------------------------------------------------------------------===//

class TensorStoreOpAdaptor {
public:
  TensorStoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TensorStoreOpAdaptor(TensorStoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value tensor();
  Value memref();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TensorStoreOp : public Op<TensorStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::SameOperandsShape, OpTrait::SameOperandsElementType, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = TensorStoreOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value tensor();
  Value memref();
  ::mlir::MutableOperandRange tensorMutable();
  ::mlir::MutableOperandRange memrefMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value tensor, Value memref);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value tensor, Value memref);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// TruncateIOp declarations
//===----------------------------------------------------------------------===//

class TruncateIOpAdaptor {
public:
  TruncateIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  TruncateIOpAdaptor(TruncateIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class TruncateIOp : public Op<TruncateIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = TruncateIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value value, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// UnsignedDivIOp declarations
//===----------------------------------------------------------------------===//

class UnsignedDivIOpAdaptor {
public:
  UnsignedDivIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnsignedDivIOpAdaptor(UnsignedDivIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnsignedDivIOp : public Op<UnsignedDivIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = UnsignedDivIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// UnsignedRemIOp declarations
//===----------------------------------------------------------------------===//

class UnsignedRemIOpAdaptor {
public:
  UnsignedRemIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnsignedRemIOpAdaptor(UnsignedRemIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnsignedRemIOp : public Op<UnsignedRemIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = UnsignedRemIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// UnsignedShiftRightOp declarations
//===----------------------------------------------------------------------===//

class UnsignedShiftRightOpAdaptor {
public:
  UnsignedShiftRightOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UnsignedShiftRightOpAdaptor(UnsignedShiftRightOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UnsignedShiftRightOp : public Op<UnsignedShiftRightOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Adaptor = UnsignedShiftRightOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  ::mlir::MutableOperandRange lhsMutable();
  ::mlir::MutableOperandRange rhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
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
// ViewOp declarations
//===----------------------------------------------------------------------===//

class ViewOpAdaptor {
public:
  ViewOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ViewOpAdaptor(ViewOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value source();
  Value byte_shift();
  ValueRange sizes();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ViewOp : public Op<ViewOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, ViewLikeOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ViewOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value source();
  Value byte_shift();
  Operation::operand_range sizes();
  ::mlir::MutableOperandRange sourceMutable();
  ::mlir::MutableOperandRange byte_shiftMutable();
  ::mlir::MutableOperandRange sizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value source, Value byte_shift, ValueRange sizes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value source, Value byte_shift, ValueRange sizes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  Value getViewSource();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// The result of a view is always a memref.
    MemRefType getType() { return getResult().getType().cast<MemRefType>(); }

    /// Returns the dynamic sizes for this view operation. This is redundant
    /// with `sizes` but needed in template implementations. More specifically:
    /// ```
    /// template <typename AnyMemRefDefOp>
    /// bool isMemRefSizeValidSymbol(AnyMemRefDefOp memrefDefOp, unsigned index,
    ///                              Region *region)
    /// ```
    operand_range getDynamicSizes() {
      return {sizes().begin(), sizes().end()};
    }
  
};

//===----------------------------------------------------------------------===//
// XOrOp declarations
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
class XOrOp : public Op<XOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType> {
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// ZeroExtendIOp declarations
//===----------------------------------------------------------------------===//

class ZeroExtendIOpAdaptor {
public:
  ZeroExtendIOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ZeroExtendIOpAdaptor(ZeroExtendIOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ZeroExtendIOp : public Op<ZeroExtendIOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Adaptor = ZeroExtendIOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &builder, OperationState &result, Value value, Type destType);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

#endif  // GET_OP_CLASSES

