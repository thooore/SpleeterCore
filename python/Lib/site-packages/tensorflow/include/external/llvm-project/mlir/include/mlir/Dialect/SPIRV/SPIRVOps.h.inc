/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AccessChainOp;
class AddressOfOp;
class AtomicAndOp;
class AtomicCompareExchangeWeakOp;
class AtomicIAddOp;
class AtomicIDecrementOp;
class AtomicIIncrementOp;
class AtomicISubOp;
class AtomicOrOp;
class AtomicSMaxOp;
class AtomicSMinOp;
class AtomicUMaxOp;
class AtomicUMinOp;
class AtomicXorOp;
class BitCountOp;
class BitFieldInsertOp;
class BitFieldSExtractOp;
class BitFieldUExtractOp;
class BitReverseOp;
class BitcastOp;
class BitwiseAndOp;
class BitwiseOrOp;
class BitwiseXorOp;
class BranchConditionalOp;
class BranchOp;
class CompositeConstructOp;
class CompositeExtractOp;
class CompositeInsertOp;
class ConstantOp;
class ControlBarrierOp;
class ConvertFToSOp;
class ConvertFToUOp;
class ConvertSToFOp;
class ConvertUToFOp;
class CooperativeMatrixLengthNVOp;
class CooperativeMatrixLoadNVOp;
class CooperativeMatrixMulAddNVOp;
class CooperativeMatrixStoreNVOp;
class EntryPointOp;
class ExecutionModeOp;
class FAddOp;
class FConvertOp;
class FDivOp;
class FModOp;
class FMulOp;
class FNegateOp;
class FOrdEqualOp;
class FOrdGreaterThanEqualOp;
class FOrdGreaterThanOp;
class FOrdLessThanEqualOp;
class FOrdLessThanOp;
class FOrdNotEqualOp;
class FRemOp;
class FSubOp;
class FUnordEqualOp;
class FUnordGreaterThanEqualOp;
class FUnordGreaterThanOp;
class FUnordLessThanEqualOp;
class FUnordLessThanOp;
class FUnordNotEqualOp;
class FuncOp;
class FunctionCallOp;
class GLSLCeilOp;
class GLSLCosOp;
class GLSLExpOp;
class GLSLFAbsOp;
class GLSLFMaxOp;
class GLSLFMinOp;
class GLSLFSignOp;
class GLSLFloorOp;
class GLSLInverseSqrtOp;
class GLSLLogOp;
class GLSLSAbsOp;
class GLSLSMaxOp;
class GLSLSMinOp;
class GLSLSSignOp;
class GLSLSinOp;
class GLSLSqrtOp;
class GLSLTanOp;
class GLSLTanhOp;
class GlobalVariableOp;
class GroupNonUniformBallotOp;
class GroupNonUniformElectOp;
class GroupNonUniformFAddOp;
class GroupNonUniformFMaxOp;
class GroupNonUniformFMinOp;
class GroupNonUniformFMulOp;
class GroupNonUniformIAddOp;
class GroupNonUniformIMulOp;
class GroupNonUniformSMaxOp;
class GroupNonUniformSMinOp;
class GroupNonUniformUMaxOp;
class GroupNonUniformUMinOp;
class IAddOp;
class IEqualOp;
class IMulOp;
class INotEqualOp;
class ISubOp;
class LoadOp;
class LogicalAndOp;
class LogicalEqualOp;
class LogicalNotEqualOp;
class LogicalNotOp;
class LogicalOrOp;
class LoopOp;
class MatrixTimesScalarOp;
class MemoryBarrierOp;
class MergeOp;
class ModuleEndOp;
class ModuleOp;
class NotOp;
class ReferenceOfOp;
class ReturnOp;
class ReturnValueOp;
class SConvertOp;
class SDivOp;
class SGreaterThanEqualOp;
class SGreaterThanOp;
class SLessThanEqualOp;
class SLessThanOp;
class SModOp;
class SRemOp;
class SelectOp;
class SelectionOp;
class ShiftLeftLogicalOp;
class ShiftRightArithmeticOp;
class ShiftRightLogicalOp;
class SpecConstantOp;
class StoreOp;
class SubgroupBallotKHROp;
class UConvertOp;
class UDivOp;
class UGreaterThanEqualOp;
class UGreaterThanOp;
class ULessThanEqualOp;
class ULessThanOp;
class UModOp;
class UndefOp;
class UnreachableOp;
class VariableOp;

//===----------------------------------------------------------------------===//
// spirv::AccessChainOp declarations
//===----------------------------------------------------------------------===//

class AccessChainOpAdaptor {
public:
  AccessChainOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AccessChainOpAdaptor(AccessChainOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value base_ptr();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AccessChainOp : public Op<AccessChainOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AccessChainOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value base_ptr();
  Operation::operand_range indices();
  ::mlir::MutableOperandRange base_ptrMutable();
  ::mlir::MutableOperandRange indicesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value component_ptr();
  static void build(OpBuilder &builder, OperationState &state,
                              Value basePtr, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type component_ptr, Value base_ptr, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value base_ptr, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::AddressOfOp declarations
//===----------------------------------------------------------------------===//

class AddressOfOpAdaptor {
public:
  AddressOfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AddressOfOpAdaptor(AddressOfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  FlatSymbolRefAttr variable();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AddressOfOp : public Op<AddressOfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AddressOfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value pointer();
  FlatSymbolRefAttr variableAttr();
  StringRef variable();
  void variableAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                              spirv::GlobalVariableOp var);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type pointer, FlatSymbolRefAttr variable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, FlatSymbolRefAttr variable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type pointer, StringRef variable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef variable);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::AtomicAndOp declarations
//===----------------------------------------------------------------------===//

class AtomicAndOpAdaptor {
public:
  AtomicAndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicAndOpAdaptor(AtomicAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicAndOp : public Op<AtomicAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicAndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicCompareExchangeWeakOp declarations
//===----------------------------------------------------------------------===//

class AtomicCompareExchangeWeakOpAdaptor {
public:
  AtomicCompareExchangeWeakOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicCompareExchangeWeakOpAdaptor(AtomicCompareExchangeWeakOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  Value comparator();
  IntegerAttr memory_scope();
  IntegerAttr equal_semantics();
  IntegerAttr unequal_semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicCompareExchangeWeakOp : public Op<AtomicCompareExchangeWeakOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicCompareExchangeWeakOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  Value comparator();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange comparatorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr equal_semanticsAttr();
  ::mlir::spirv::MemorySemantics equal_semantics();
  IntegerAttr unequal_semanticsAttr();
  ::mlir::spirv::MemorySemantics unequal_semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void equal_semanticsAttr(IntegerAttr attr);
  void unequal_semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr equal_semantics, IntegerAttr unequal_semantics, Value value, Value comparator);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr equal_semantics, IntegerAttr unequal_semantics, Value value, Value comparator);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, Value value, Value comparator);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics equal_semantics, ::mlir::spirv::MemorySemantics unequal_semantics, Value value, Value comparator);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIAddOp declarations
//===----------------------------------------------------------------------===//

class AtomicIAddOpAdaptor {
public:
  AtomicIAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicIAddOpAdaptor(AtomicIAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicIAddOp : public Op<AtomicIAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicIAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIDecrementOp declarations
//===----------------------------------------------------------------------===//

class AtomicIDecrementOpAdaptor {
public:
  AtomicIDecrementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicIDecrementOpAdaptor(AtomicIDecrementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicIDecrementOp : public Op<AtomicIDecrementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicIDecrementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  ::mlir::MutableOperandRange pointerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicIIncrementOp declarations
//===----------------------------------------------------------------------===//

class AtomicIIncrementOpAdaptor {
public:
  AtomicIIncrementOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicIIncrementOpAdaptor(AtomicIIncrementOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicIIncrementOp : public Op<AtomicIIncrementOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicIIncrementOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  ::mlir::MutableOperandRange pointerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicISubOp declarations
//===----------------------------------------------------------------------===//

class AtomicISubOpAdaptor {
public:
  AtomicISubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicISubOpAdaptor(AtomicISubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicISubOp : public Op<AtomicISubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicISubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicOrOp declarations
//===----------------------------------------------------------------------===//

class AtomicOrOpAdaptor {
public:
  AtomicOrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicOrOpAdaptor(AtomicOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicOrOp : public Op<AtomicOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicOrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicSMaxOp declarations
//===----------------------------------------------------------------------===//

class AtomicSMaxOpAdaptor {
public:
  AtomicSMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicSMaxOpAdaptor(AtomicSMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicSMaxOp : public Op<AtomicSMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicSMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicSMinOp declarations
//===----------------------------------------------------------------------===//

class AtomicSMinOpAdaptor {
public:
  AtomicSMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicSMinOpAdaptor(AtomicSMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicSMinOp : public Op<AtomicSMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicSMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicUMaxOp declarations
//===----------------------------------------------------------------------===//

class AtomicUMaxOpAdaptor {
public:
  AtomicUMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicUMaxOpAdaptor(AtomicUMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicUMaxOp : public Op<AtomicUMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicUMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicUMinOp declarations
//===----------------------------------------------------------------------===//

class AtomicUMinOpAdaptor {
public:
  AtomicUMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicUMinOpAdaptor(AtomicUMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicUMinOp : public Op<AtomicUMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicUMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::AtomicXorOp declarations
//===----------------------------------------------------------------------===//

class AtomicXorOpAdaptor {
public:
  AtomicXorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AtomicXorOpAdaptor(AtomicXorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value value();
  IntegerAttr memory_scope();
  IntegerAttr semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AtomicXorOp : public Op<AtomicXorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AtomicXorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value value();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr semanticsAttr();
  ::mlir::spirv::MemorySemantics semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value pointer,
        ::mlir::spirv::Scope scope, ::mlir::spirv::MemorySemantics memory,
        Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, IntegerAttr memory_scope, IntegerAttr semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics semantics, Value value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::BitCountOp declarations
//===----------------------------------------------------------------------===//

class BitCountOpAdaptor {
public:
  BitCountOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitCountOpAdaptor(BitCountOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitCountOp : public Op<BitCountOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitCountOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldInsertOp declarations
//===----------------------------------------------------------------------===//

class BitFieldInsertOpAdaptor {
public:
  BitFieldInsertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitFieldInsertOpAdaptor(BitFieldInsertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value base();
  Value insert();
  Value offset();
  Value count();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitFieldInsertOp : public Op<BitFieldInsertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitFieldInsertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value base();
  Value insert();
  Value offset();
  Value count();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange insertMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange countMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value base, Value insert, Value offset, Value count);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value base, Value insert, Value offset, Value count);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldSExtractOp declarations
//===----------------------------------------------------------------------===//

class BitFieldSExtractOpAdaptor {
public:
  BitFieldSExtractOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitFieldSExtractOpAdaptor(BitFieldSExtractOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value base();
  Value offset();
  Value count();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitFieldSExtractOp : public Op<BitFieldSExtractOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitFieldSExtractOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value base();
  Value offset();
  Value count();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange countMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value base, Value offset, Value count);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value base, Value offset, Value count);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitFieldUExtractOp declarations
//===----------------------------------------------------------------------===//

class BitFieldUExtractOpAdaptor {
public:
  BitFieldUExtractOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitFieldUExtractOpAdaptor(BitFieldUExtractOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value base();
  Value offset();
  Value count();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitFieldUExtractOp : public Op<BitFieldUExtractOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitFieldUExtractOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value base();
  Value offset();
  Value count();
  ::mlir::MutableOperandRange baseMutable();
  ::mlir::MutableOperandRange offsetMutable();
  ::mlir::MutableOperandRange countMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value base, Value offset, Value count);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value base, Value offset, Value count);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitReverseOp declarations
//===----------------------------------------------------------------------===//

class BitReverseOpAdaptor {
public:
  BitReverseOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitReverseOpAdaptor(BitReverseOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitReverseOp : public Op<BitReverseOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitReverseOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitcastOp declarations
//===----------------------------------------------------------------------===//

class BitcastOpAdaptor {
public:
  BitcastOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitcastOpAdaptor(BitcastOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitcastOp : public Op<BitcastOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitcastOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseAndOp declarations
//===----------------------------------------------------------------------===//

class BitwiseAndOpAdaptor {
public:
  BitwiseAndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitwiseAndOpAdaptor(BitwiseAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitwiseAndOp : public Op<BitwiseAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseAndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseOrOp declarations
//===----------------------------------------------------------------------===//

class BitwiseOrOpAdaptor {
public:
  BitwiseOrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitwiseOrOpAdaptor(BitwiseOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitwiseOrOp : public Op<BitwiseOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseOrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BitwiseXorOp declarations
//===----------------------------------------------------------------------===//

class BitwiseXorOpAdaptor {
public:
  BitwiseXorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BitwiseXorOpAdaptor(BitwiseXorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BitwiseXorOp : public Op<BitwiseXorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BitwiseXorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::BranchConditionalOp declarations
//===----------------------------------------------------------------------===//

class BranchConditionalOpAdaptor {
public:
  BranchConditionalOpAdaptor(ValueRange values, DictionaryAttr attrs);
  BranchConditionalOpAdaptor(BranchConditionalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value condition();
  ValueRange trueTargetOperands();
  ValueRange falseTargetOperands();
  ArrayAttr branch_weights();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BranchConditionalOp : public Op<BranchConditionalOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::NSuccessors<2>::Impl, OpTrait::AtLeastNOperands<1>::Impl, OpTrait::AttrSizedOperandSegments, BranchOpInterface::Trait, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BranchConditionalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value condition();
  Operation::operand_range trueTargetOperands();
  Operation::operand_range falseTargetOperands();
  ::mlir::MutableOperandRange conditionMutable();
  ::mlir::MutableOperandRange trueTargetOperandsMutable();
  ::mlir::MutableOperandRange falseTargetOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Block *trueTarget();
  Block *falseTarget();
  ArrayAttr branch_weightsAttr();
  Optional< ArrayAttr > branch_weights();
  void branch_weightsAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value condition, Block *trueBlock, ValueRange trueArguments, Block *falseBlock, ValueRange falseArguments, Optional<std::pair<uint32_t, uint32_t>> weights = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value condition, ValueRange trueTargetOperands, ValueRange falseTargetOperands, /*optional*/ArrayAttr branch_weights, Block *trueTarget, Block *falseTarget);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, ValueRange trueTargetOperands, ValueRange falseTargetOperands, /*optional*/ArrayAttr branch_weights, Block *trueTarget, Block *falseTarget);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Branch indices into the successor list.
    enum { kTrueIndex = 0, kFalseIndex = 1 };

    /// Returns the target block for the true branch.
    Block *getTrueBlock() { return getOperation()->getSuccessor(kTrueIndex); }

    /// Returns the target block for the false branch.
    Block *getFalseBlock() { return getOperation()->getSuccessor(kFalseIndex); }

    /// Returns the number of arguments to the true target block.
    unsigned getNumTrueBlockArguments() {
      return trueTargetOperands().size();
    }

    /// Returns the number of arguments to the false target block.
    unsigned getNumFalseBlockArguments() {
      return falseTargetOperands().size();
    }

    // Iterator and range support for true target block arguments.
    operand_range getTrueBlockArguments() {
      return trueTargetOperands();
    }

    // Iterator and range support for false target block arguments.
    operand_range getFalseBlockArguments() {
      return falseTargetOperands();
    }

  private:
    /// Gets the index of the first true block argument in the operand list.
    unsigned getTrueBlockArgumentIndex() {
      return 1; // Omit the first argument, which is the condition.
    }

    /// Gets the index of the first false block argument in the operand list.
    unsigned getFalseBlockArgumentIndex() {
      return getTrueBlockArgumentIndex() + getNumTrueBlockArguments();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::BranchOp declarations
//===----------------------------------------------------------------------===//

class BranchOpAdaptor {
public:
  BranchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  BranchOpAdaptor(BranchOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange targetOperands();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class BranchOp : public Op<BranchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::OneSuccessor, OpTrait::VariadicOperands, BranchOpInterface::Trait, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = BranchOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range targetOperands();
  ::mlir::MutableOperandRange targetOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Block *target();
  static void build(OpBuilder &, OperationState &state, Block *successor, ValueRange arguments = {});
  LogicalResult verify();
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Returns the branch target block.
    Block *getTarget() { return target(); }

    /// Returns the block arguments.
    operand_range getBlockArguments() { return targetOperands(); }
  
};

//===----------------------------------------------------------------------===//
// spirv::CompositeConstructOp declarations
//===----------------------------------------------------------------------===//

class CompositeConstructOpAdaptor {
public:
  CompositeConstructOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CompositeConstructOpAdaptor(CompositeConstructOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange constituents();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CompositeConstructOp : public Op<CompositeConstructOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CompositeConstructOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range constituents();
  ::mlir::MutableOperandRange constituentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ValueRange constituents);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange constituents);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CompositeExtractOp declarations
//===----------------------------------------------------------------------===//

class CompositeExtractOpAdaptor {
public:
  CompositeExtractOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CompositeExtractOpAdaptor(CompositeExtractOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value composite();
  ArrayAttr indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CompositeExtractOp : public Op<CompositeExtractOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CompositeExtractOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value composite();
  ::mlir::MutableOperandRange compositeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value component();
  ArrayAttr indicesAttr();
  ArrayAttr indices();
  void indicesAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                Value composite, ArrayRef<int32_t> indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type component, Value composite, ArrayAttr indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value composite, ArrayAttr indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CompositeInsertOp declarations
//===----------------------------------------------------------------------===//

class CompositeInsertOpAdaptor {
public:
  CompositeInsertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CompositeInsertOpAdaptor(CompositeInsertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value object();
  Value composite();
  ArrayAttr indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CompositeInsertOp : public Op<CompositeInsertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CompositeInsertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value object();
  Value composite();
  ::mlir::MutableOperandRange objectMutable();
  ::mlir::MutableOperandRange compositeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  ArrayAttr indicesAttr();
  ArrayAttr indices();
  void indicesAttr(ArrayAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value object, Value composite, ArrayAttr indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value object, Value composite, ArrayAttr indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConstantOp declarations
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
class ConstantOp : public Op<ConstantOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::ConstantLike, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConstantOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value constant();
  Attribute valueAttr();
  Attribute value();
  void valueAttr(Attribute attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type constant, Attribute value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Attribute value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    // Returns true if a constant can be built for the given `type`.
    static bool isBuildableWith(Type type);

    // Creates a constant zero/one of the given `type` at the current insertion
    // point of `builder` and returns it.
    static spirv::ConstantOp getZero(Type type, Location loc,
                                     OpBuilder &builder);
    static spirv::ConstantOp getOne(Type type, Location loc,
                                    OpBuilder &builder);
  
};

//===----------------------------------------------------------------------===//
// spirv::ControlBarrierOp declarations
//===----------------------------------------------------------------------===//

class ControlBarrierOpAdaptor {
public:
  ControlBarrierOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ControlBarrierOpAdaptor(ControlBarrierOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr execution_scope();
  IntegerAttr memory_scope();
  IntegerAttr memory_semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ControlBarrierOp : public Op<ControlBarrierOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ControlBarrierOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr memory_semanticsAttr();
  ::mlir::spirv::MemorySemantics memory_semantics();
  void execution_scopeAttr(IntegerAttr attr);
  void memory_scopeAttr(IntegerAttr attr);
  void memory_semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr execution_scope, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertFToSOp declarations
//===----------------------------------------------------------------------===//

class ConvertFToSOpAdaptor {
public:
  ConvertFToSOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvertFToSOpAdaptor(ConvertFToSOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvertFToSOp : public Op<ConvertFToSOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertFToSOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertFToUOp declarations
//===----------------------------------------------------------------------===//

class ConvertFToUOpAdaptor {
public:
  ConvertFToUOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvertFToUOpAdaptor(ConvertFToUOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvertFToUOp : public Op<ConvertFToUOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertFToUOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertSToFOp declarations
//===----------------------------------------------------------------------===//

class ConvertSToFOpAdaptor {
public:
  ConvertSToFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvertSToFOpAdaptor(ConvertSToFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvertSToFOp : public Op<ConvertSToFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertSToFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ConvertUToFOp declarations
//===----------------------------------------------------------------------===//

class ConvertUToFOpAdaptor {
public:
  ConvertUToFOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ConvertUToFOpAdaptor(ConvertUToFOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ConvertUToFOp : public Op<ConvertUToFOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ConvertUToFOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixLengthNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixLengthNVOpAdaptor {
public:
  CooperativeMatrixLengthNVOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CooperativeMatrixLengthNVOpAdaptor(CooperativeMatrixLengthNVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  TypeAttr type();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CooperativeMatrixLengthNVOp : public Op<CooperativeMatrixLengthNVOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixLengthNVOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  TypeAttr typeAttr();
  Type type();
  void typeAttr(TypeAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, TypeAttr type);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixLoadNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixLoadNVOpAdaptor {
public:
  CooperativeMatrixLoadNVOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CooperativeMatrixLoadNVOpAdaptor(CooperativeMatrixLoadNVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value stride();
  Value columnmajor();
  IntegerAttr memory_access();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CooperativeMatrixLoadNVOp : public Op<CooperativeMatrixLoadNVOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixLoadNVOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value stride();
  Value columnmajor();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange strideMutable();
  ::mlir::MutableOperandRange columnmajorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr memory_accessAttr();
  Optional<::mlir::spirv::MemoryAccess> memory_access();
  void memory_accessAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value pointer, Value stride, Value columnmajor, /*optional*/IntegerAttr memory_access);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, Value stride, Value columnmajor, /*optional*/IntegerAttr memory_access);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixMulAddNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixMulAddNVOpAdaptor {
public:
  CooperativeMatrixMulAddNVOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CooperativeMatrixMulAddNVOpAdaptor(CooperativeMatrixMulAddNVOp& op);
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
class CooperativeMatrixMulAddNVOp : public Op<CooperativeMatrixMulAddNVOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixMulAddNVOpAdaptor;
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
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value a, Value b, Value c);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value a, Value b, Value c);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::CooperativeMatrixStoreNVOp declarations
//===----------------------------------------------------------------------===//

class CooperativeMatrixStoreNVOpAdaptor {
public:
  CooperativeMatrixStoreNVOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  CooperativeMatrixStoreNVOpAdaptor(CooperativeMatrixStoreNVOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value pointer();
  Value object();
  Value stride();
  Value columnmajor();
  IntegerAttr memory_access();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class CooperativeMatrixStoreNVOp : public Op<CooperativeMatrixStoreNVOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<4>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = CooperativeMatrixStoreNVOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value pointer();
  Value object();
  Value stride();
  Value columnmajor();
  ::mlir::MutableOperandRange pointerMutable();
  ::mlir::MutableOperandRange objectMutable();
  ::mlir::MutableOperandRange strideMutable();
  ::mlir::MutableOperandRange columnmajorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr memory_accessAttr();
  Optional<::mlir::spirv::MemoryAccess> memory_access();
  void memory_accessAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value pointer, Value object, Value stride, Value columnmajor, /*optional*/IntegerAttr memory_access);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value pointer, Value object, Value stride, Value columnmajor, /*optional*/IntegerAttr memory_access);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::EntryPointOp declarations
//===----------------------------------------------------------------------===//

class EntryPointOpAdaptor {
public:
  EntryPointOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  EntryPointOpAdaptor(EntryPointOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr execution_model();
  FlatSymbolRefAttr fn();
  ArrayAttr interface();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class EntryPointOp : public Op<EntryPointOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = EntryPointOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr execution_modelAttr();
  ::mlir::spirv::ExecutionModel execution_model();
  FlatSymbolRefAttr fnAttr();
  StringRef fn();
  ArrayAttr interfaceAttr();
  ArrayAttr interface();
  void execution_modelAttr(IntegerAttr attr);
  void fnAttr(FlatSymbolRefAttr attr);
  void interfaceAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                              spirv::ExecutionModel executionModel,
                              spirv::FuncOp function,
                              ArrayRef<Attribute> interfaceVars);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr execution_model, FlatSymbolRefAttr fn, ArrayAttr interface);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_model, FlatSymbolRefAttr fn, ArrayAttr interface);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ::mlir::spirv::ExecutionModel execution_model, StringRef fn, ArrayAttr interface);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::ExecutionModel execution_model, StringRef fn, ArrayAttr interface);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::ExecutionModeOp declarations
//===----------------------------------------------------------------------===//

class ExecutionModeOpAdaptor {
public:
  ExecutionModeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ExecutionModeOpAdaptor(ExecutionModeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  FlatSymbolRefAttr fn();
  IntegerAttr execution_mode();
  ArrayAttr values();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ExecutionModeOp : public Op<ExecutionModeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ExecutionModeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FlatSymbolRefAttr fnAttr();
  StringRef fn();
  IntegerAttr execution_modeAttr();
  ::mlir::spirv::ExecutionMode execution_mode();
  ArrayAttr valuesAttr();
  ArrayAttr values();
  void fnAttr(FlatSymbolRefAttr attr);
  void execution_modeAttr(IntegerAttr attr);
  void valuesAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &state,
                              spirv::FuncOp function,
                              spirv::ExecutionMode executionMode,
                              ArrayRef<int32_t> params);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, FlatSymbolRefAttr fn, IntegerAttr execution_mode, ArrayAttr values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, FlatSymbolRefAttr fn, IntegerAttr execution_mode, ArrayAttr values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ArrayAttr values);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef fn, ::mlir::spirv::ExecutionMode execution_mode, ArrayAttr values);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::FAddOp declarations
//===----------------------------------------------------------------------===//

class FAddOpAdaptor {
public:
  FAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FAddOpAdaptor(FAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FAddOp : public Op<FAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FConvertOp declarations
//===----------------------------------------------------------------------===//

class FConvertOpAdaptor {
public:
  FConvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FConvertOpAdaptor(FConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FConvertOp : public Op<FConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FConvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FDivOp declarations
//===----------------------------------------------------------------------===//

class FDivOpAdaptor {
public:
  FDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FDivOpAdaptor(FDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FDivOp : public Op<FDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FModOp declarations
//===----------------------------------------------------------------------===//

class FModOpAdaptor {
public:
  FModOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FModOpAdaptor(FModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FModOp : public Op<FModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FModOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FMulOp declarations
//===----------------------------------------------------------------------===//

class FMulOpAdaptor {
public:
  FMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FMulOpAdaptor(FMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FMulOp : public Op<FMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FNegateOp declarations
//===----------------------------------------------------------------------===//

class FNegateOpAdaptor {
public:
  FNegateOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FNegateOpAdaptor(FNegateOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FNegateOp : public Op<FNegateOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FNegateOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdEqualOpAdaptor {
public:
  FOrdEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FOrdEqualOpAdaptor(FOrdEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FOrdEqualOp : public Op<FOrdEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdGreaterThanEqualOpAdaptor {
public:
  FOrdGreaterThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FOrdGreaterThanEqualOpAdaptor(FOrdGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FOrdGreaterThanEqualOp : public Op<FOrdGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdGreaterThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class FOrdGreaterThanOpAdaptor {
public:
  FOrdGreaterThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FOrdGreaterThanOpAdaptor(FOrdGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FOrdGreaterThanOp : public Op<FOrdGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdGreaterThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdLessThanEqualOpAdaptor {
public:
  FOrdLessThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FOrdLessThanEqualOpAdaptor(FOrdLessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FOrdLessThanEqualOp : public Op<FOrdLessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdLessThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdLessThanOp declarations
//===----------------------------------------------------------------------===//

class FOrdLessThanOpAdaptor {
public:
  FOrdLessThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FOrdLessThanOpAdaptor(FOrdLessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FOrdLessThanOp : public Op<FOrdLessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdLessThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FOrdNotEqualOp declarations
//===----------------------------------------------------------------------===//

class FOrdNotEqualOpAdaptor {
public:
  FOrdNotEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FOrdNotEqualOpAdaptor(FOrdNotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FOrdNotEqualOp : public Op<FOrdNotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FOrdNotEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FRemOp declarations
//===----------------------------------------------------------------------===//

class FRemOpAdaptor {
public:
  FRemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FRemOpAdaptor(FRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FRemOp : public Op<FRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FRemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FSubOp declarations
//===----------------------------------------------------------------------===//

class FSubOpAdaptor {
public:
  FSubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FSubOpAdaptor(FSubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FSubOp : public Op<FSubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FSubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordEqualOpAdaptor {
public:
  FUnordEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FUnordEqualOpAdaptor(FUnordEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FUnordEqualOp : public Op<FUnordEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordGreaterThanEqualOpAdaptor {
public:
  FUnordGreaterThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FUnordGreaterThanEqualOpAdaptor(FUnordGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FUnordGreaterThanEqualOp : public Op<FUnordGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordGreaterThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class FUnordGreaterThanOpAdaptor {
public:
  FUnordGreaterThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FUnordGreaterThanOpAdaptor(FUnordGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FUnordGreaterThanOp : public Op<FUnordGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordGreaterThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordLessThanEqualOpAdaptor {
public:
  FUnordLessThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FUnordLessThanEqualOpAdaptor(FUnordLessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FUnordLessThanEqualOp : public Op<FUnordLessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordLessThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordLessThanOp declarations
//===----------------------------------------------------------------------===//

class FUnordLessThanOpAdaptor {
public:
  FUnordLessThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FUnordLessThanOpAdaptor(FUnordLessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FUnordLessThanOp : public Op<FUnordLessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordLessThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FUnordNotEqualOp declarations
//===----------------------------------------------------------------------===//

class FUnordNotEqualOpAdaptor {
public:
  FUnordNotEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FUnordNotEqualOpAdaptor(FUnordNotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FUnordNotEqualOp : public Op<FUnordNotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FUnordNotEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::FuncOp declarations
//===----------------------------------------------------------------------===//

class FuncOpAdaptor {
public:
  FuncOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FuncOpAdaptor(FuncOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  TypeAttr type();
  StringAttr sym_name();
  IntegerAttr function_control();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FuncOp : public Op<FuncOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::AutomaticAllocationScope, CallableOpInterface::Trait, OpTrait::FunctionLike, OpTrait::IsIsolatedFromAbove, SymbolOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FuncOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  TypeAttr typeAttr();
  Type type();
  StringAttr sym_nameAttr();
  StringRef sym_name();
  IntegerAttr function_controlAttr();
  ::mlir::spirv::FunctionControl function_control();
  void typeAttr(TypeAttr attr);
  void sym_nameAttr(StringAttr attr);
  void function_controlAttr(IntegerAttr attr);
  static void build(
    OpBuilder &, OperationState &state,
    StringRef name, FunctionType type,
    spirv::FunctionControl control = spirv::FunctionControl::None,
    ArrayRef<NamedAttribute> attrs = {}
  );
  static void build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, StringAttr sym_name, IntegerAttr function_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, StringAttr sym_name, IntegerAttr function_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, StringRef sym_name, ::mlir::spirv::FunctionControl function_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, StringRef sym_name, ::mlir::spirv::FunctionControl function_control);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  Region *getCallableRegion();
  ArrayRef<Type> getCallableResults();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

  private:
    // This trait needs access to the hooks defined below.
    friend class OpTrait::FunctionLike<FuncOp>;

    /// Returns the number of arguments. Hook for OpTrait::FunctionLike.
    unsigned getNumFuncArguments() { return getType().getNumInputs(); }

    /// Returns the number of results. Hook for OpTrait::FunctionLike.
    unsigned getNumFuncResults() { return getType().getNumResults(); }

    /// Hook for OpTrait::FunctionLike, called after verifying that the 'type'
    /// attribute is present and checks if it holds a function type. Ensures
    /// getType, getNumFuncArguments, and getNumFuncResults can be called safely
    LogicalResult verifyType();

    /// Hook for OpTrait::FunctionLike, called after verifying the function
    /// type and the presence of the (potentially empty) function body.
    /// Ensures SPIR-V specific semantics.
    LogicalResult verifyBody();
  
};

//===----------------------------------------------------------------------===//
// spirv::FunctionCallOp declarations
//===----------------------------------------------------------------------===//

class FunctionCallOpAdaptor {
public:
  FunctionCallOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  FunctionCallOpAdaptor(FunctionCallOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange arguments();
  FlatSymbolRefAttr callee();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class FunctionCallOp : public Op<FunctionCallOp, OpTrait::ZeroRegion, OpTrait::VariadicResults, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, CallOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = FunctionCallOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range arguments();
  ::mlir::MutableOperandRange argumentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  FlatSymbolRefAttr calleeAttr();
  StringRef callee();
  void calleeAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, /*optional*/Type result, FlatSymbolRefAttr callee, ValueRange arguments);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, /*optional*/Type result, StringRef callee, ValueRange arguments);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  CallInterfaceCallable getCallableForCallee();
  Operation::operand_range getArgOperands();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLCeilOp declarations
//===----------------------------------------------------------------------===//

class GLSLCeilOpAdaptor {
public:
  GLSLCeilOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLCeilOpAdaptor(GLSLCeilOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLCeilOp : public Op<GLSLCeilOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLCeilOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLCosOp declarations
//===----------------------------------------------------------------------===//

class GLSLCosOpAdaptor {
public:
  GLSLCosOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLCosOpAdaptor(GLSLCosOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLCosOp : public Op<GLSLCosOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLCosOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLExpOp declarations
//===----------------------------------------------------------------------===//

class GLSLExpOpAdaptor {
public:
  GLSLExpOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLExpOpAdaptor(GLSLExpOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLExpOp : public Op<GLSLExpOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLExpOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFAbsOp declarations
//===----------------------------------------------------------------------===//

class GLSLFAbsOpAdaptor {
public:
  GLSLFAbsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLFAbsOpAdaptor(GLSLFAbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLFAbsOp : public Op<GLSLFAbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFAbsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFMaxOp declarations
//===----------------------------------------------------------------------===//

class GLSLFMaxOpAdaptor {
public:
  GLSLFMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLFMaxOpAdaptor(GLSLFMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLFMaxOp : public Op<GLSLFMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFMaxOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFMinOp declarations
//===----------------------------------------------------------------------===//

class GLSLFMinOpAdaptor {
public:
  GLSLFMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLFMinOpAdaptor(GLSLFMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLFMinOp : public Op<GLSLFMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFMinOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFSignOp declarations
//===----------------------------------------------------------------------===//

class GLSLFSignOpAdaptor {
public:
  GLSLFSignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLFSignOpAdaptor(GLSLFSignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLFSignOp : public Op<GLSLFSignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFSignOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLFloorOp declarations
//===----------------------------------------------------------------------===//

class GLSLFloorOpAdaptor {
public:
  GLSLFloorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLFloorOpAdaptor(GLSLFloorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLFloorOp : public Op<GLSLFloorOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLFloorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLInverseSqrtOp declarations
//===----------------------------------------------------------------------===//

class GLSLInverseSqrtOpAdaptor {
public:
  GLSLInverseSqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLInverseSqrtOpAdaptor(GLSLInverseSqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLInverseSqrtOp : public Op<GLSLInverseSqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLInverseSqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLLogOp declarations
//===----------------------------------------------------------------------===//

class GLSLLogOpAdaptor {
public:
  GLSLLogOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLLogOpAdaptor(GLSLLogOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLLogOp : public Op<GLSLLogOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLLogOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSAbsOp declarations
//===----------------------------------------------------------------------===//

class GLSLSAbsOpAdaptor {
public:
  GLSLSAbsOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLSAbsOpAdaptor(GLSLSAbsOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLSAbsOp : public Op<GLSLSAbsOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSAbsOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSMaxOp declarations
//===----------------------------------------------------------------------===//

class GLSLSMaxOpAdaptor {
public:
  GLSLSMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLSMaxOpAdaptor(GLSLSMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLSMaxOp : public Op<GLSLSMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSMaxOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSMinOp declarations
//===----------------------------------------------------------------------===//

class GLSLSMinOpAdaptor {
public:
  GLSLSMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLSMinOpAdaptor(GLSLSMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value lhs();
  Value rhs();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLSMinOp : public Op<GLSLSMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSMinOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value lhs, Value rhs);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value lhs, Value rhs);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSSignOp declarations
//===----------------------------------------------------------------------===//

class GLSLSSignOpAdaptor {
public:
  GLSLSSignOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLSSignOpAdaptor(GLSLSSignOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLSSignOp : public Op<GLSLSSignOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSSignOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSinOp declarations
//===----------------------------------------------------------------------===//

class GLSLSinOpAdaptor {
public:
  GLSLSinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLSinOpAdaptor(GLSLSinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLSinOp : public Op<GLSLSinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLSqrtOp declarations
//===----------------------------------------------------------------------===//

class GLSLSqrtOpAdaptor {
public:
  GLSLSqrtOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLSqrtOpAdaptor(GLSLSqrtOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLSqrtOp : public Op<GLSLSqrtOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLSqrtOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLTanOp declarations
//===----------------------------------------------------------------------===//

class GLSLTanOpAdaptor {
public:
  GLSLTanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLTanOpAdaptor(GLSLTanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLTanOp : public Op<GLSLTanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLTanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GLSLTanhOp declarations
//===----------------------------------------------------------------------===//

class GLSLTanhOpAdaptor {
public:
  GLSLTanhOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GLSLTanhOpAdaptor(GLSLTanhOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GLSLTanhOp : public Op<GLSLTanhOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GLSLTanhOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::GlobalVariableOp declarations
//===----------------------------------------------------------------------===//

class GlobalVariableOpAdaptor {
public:
  GlobalVariableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GlobalVariableOpAdaptor(GlobalVariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  TypeAttr type();
  StringAttr sym_name();
  FlatSymbolRefAttr initializer();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GlobalVariableOp : public Op<GlobalVariableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, SymbolOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GlobalVariableOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  TypeAttr typeAttr();
  Type type();
  StringAttr sym_nameAttr();
  StringRef sym_name();
  FlatSymbolRefAttr initializerAttr();
  Optional< StringRef > initializer();
  void typeAttr(TypeAttr attr);
  void sym_nameAttr(StringAttr attr);
  void initializerAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &builder, OperationState &state, TypeAttr type, ArrayRef<NamedAttribute> namedAttrs);
  static void build(OpBuilder &builder, OperationState &state,
                Type type, StringRef name, unsigned descriptorSet,
                unsigned binding);
  static void build(OpBuilder &builder, OperationState &state,
                Type type, StringRef name, spirv::BuiltIn builtin);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, StringAttr sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, StringAttr sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, TypeAttr type, StringRef sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, TypeAttr type, StringRef sym_name, /*optional*/FlatSymbolRefAttr initializer);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    ::mlir::spirv::StorageClass storageClass() {
      return this->type().cast<::mlir::spirv::PointerType>().getStorageClass();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformBallotOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformBallotOpAdaptor {
public:
  GroupNonUniformBallotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformBallotOpAdaptor(GroupNonUniformBallotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value predicate();
  IntegerAttr execution_scope();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformBallotOp : public Op<GroupNonUniformBallotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformBallotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value predicate();
  ::mlir::MutableOperandRange predicateMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  void execution_scopeAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, Value predicate);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, Value predicate);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, Value predicate);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, Value predicate);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformElectOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformElectOpAdaptor {
public:
  GroupNonUniformElectOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformElectOpAdaptor(GroupNonUniformElectOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr execution_scope();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformElectOp : public Op<GroupNonUniformElectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformElectOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  void execution_scopeAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, spirv::Scope);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFAddOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFAddOpAdaptor {
public:
  GroupNonUniformFAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformFAddOpAdaptor(GroupNonUniformFAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformFAddOp : public Op<GroupNonUniformFAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFMaxOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFMaxOpAdaptor {
public:
  GroupNonUniformFMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformFMaxOpAdaptor(GroupNonUniformFMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformFMaxOp : public Op<GroupNonUniformFMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFMinOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFMinOpAdaptor {
public:
  GroupNonUniformFMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformFMinOpAdaptor(GroupNonUniformFMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformFMinOp : public Op<GroupNonUniformFMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformFMulOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformFMulOpAdaptor {
public:
  GroupNonUniformFMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformFMulOpAdaptor(GroupNonUniformFMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformFMulOp : public Op<GroupNonUniformFMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformFMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformIAddOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformIAddOpAdaptor {
public:
  GroupNonUniformIAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformIAddOpAdaptor(GroupNonUniformIAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformIAddOp : public Op<GroupNonUniformIAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformIAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformIMulOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformIMulOpAdaptor {
public:
  GroupNonUniformIMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformIMulOpAdaptor(GroupNonUniformIMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformIMulOp : public Op<GroupNonUniformIMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformIMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformSMaxOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformSMaxOpAdaptor {
public:
  GroupNonUniformSMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformSMaxOpAdaptor(GroupNonUniformSMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformSMaxOp : public Op<GroupNonUniformSMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformSMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformSMinOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformSMinOpAdaptor {
public:
  GroupNonUniformSMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformSMinOpAdaptor(GroupNonUniformSMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformSMinOp : public Op<GroupNonUniformSMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformSMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformUMaxOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformUMaxOpAdaptor {
public:
  GroupNonUniformUMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformUMaxOpAdaptor(GroupNonUniformUMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformUMaxOp : public Op<GroupNonUniformUMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformUMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::GroupNonUniformUMinOp declarations
//===----------------------------------------------------------------------===//

class GroupNonUniformUMinOpAdaptor {
public:
  GroupNonUniformUMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GroupNonUniformUMinOpAdaptor(GroupNonUniformUMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  IntegerAttr execution_scope();
  IntegerAttr group_operation();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GroupNonUniformUMinOp : public Op<GroupNonUniformUMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = GroupNonUniformUMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value value();
  Value cluster_size();
  ::mlir::MutableOperandRange valueMutable();
  ::mlir::MutableOperandRange cluster_sizeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  IntegerAttr execution_scopeAttr();
  ::mlir::spirv::Scope execution_scope();
  IntegerAttr group_operationAttr();
  ::mlir::spirv::GroupOperation group_operation();
  void execution_scopeAttr(IntegerAttr attr);
  void group_operationAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr execution_scope, IntegerAttr group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope execution_scope, ::mlir::spirv::GroupOperation group_operation, Value value, /*optional*/Value cluster_size);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::IAddOp declarations
//===----------------------------------------------------------------------===//

class IAddOpAdaptor {
public:
  IAddOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IAddOpAdaptor(IAddOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IAddOp : public Op<IAddOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IAddOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::IEqualOp declarations
//===----------------------------------------------------------------------===//

class IEqualOpAdaptor {
public:
  IEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IEqualOpAdaptor(IEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IEqualOp : public Op<IEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::IMulOp declarations
//===----------------------------------------------------------------------===//

class IMulOpAdaptor {
public:
  IMulOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  IMulOpAdaptor(IMulOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class IMulOp : public Op<IMulOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = IMulOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::INotEqualOp declarations
//===----------------------------------------------------------------------===//

class INotEqualOpAdaptor {
public:
  INotEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  INotEqualOpAdaptor(INotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class INotEqualOp : public Op<INotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = INotEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ISubOp declarations
//===----------------------------------------------------------------------===//

class ISubOpAdaptor {
public:
  ISubOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ISubOpAdaptor(ISubOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ISubOp : public Op<ISubOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ISubOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LoadOp declarations
//===----------------------------------------------------------------------===//

class LoadOpAdaptor {
public:
  LoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LoadOpAdaptor(LoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value ptr();
  IntegerAttr memory_access();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LoadOp : public Op<LoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LoadOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value ptr();
  ::mlir::MutableOperandRange ptrMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value value();
  IntegerAttr memory_accessAttr();
  Optional<::mlir::spirv::MemoryAccess> memory_access();
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  void memory_accessAttr(IntegerAttr attr);
  void alignmentAttr(IntegerAttr attr);
  static void build(
      OpBuilder &builder, OperationState &state,
      Value basePtr, IntegerAttr memory_access = {},
      IntegerAttr alignment = {}
    );
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type value, Value ptr, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value ptr, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::LogicalAndOp declarations
//===----------------------------------------------------------------------===//

class LogicalAndOpAdaptor {
public:
  LogicalAndOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalAndOpAdaptor(LogicalAndOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalAndOp : public Op<LogicalAndOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalAndOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalEqualOp declarations
//===----------------------------------------------------------------------===//

class LogicalEqualOpAdaptor {
public:
  LogicalEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalEqualOpAdaptor(LogicalEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalEqualOp : public Op<LogicalEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalNotEqualOp declarations
//===----------------------------------------------------------------------===//

class LogicalNotEqualOpAdaptor {
public:
  LogicalNotEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalNotEqualOpAdaptor(LogicalNotEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalNotEqualOp : public Op<LogicalNotEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalNotEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalNotOp declarations
//===----------------------------------------------------------------------===//

class LogicalNotOpAdaptor {
public:
  LogicalNotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalNotOpAdaptor(LogicalNotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalNotOp : public Op<LogicalNotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalNotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LogicalOrOp declarations
//===----------------------------------------------------------------------===//

class LogicalOrOpAdaptor {
public:
  LogicalOrOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LogicalOrOpAdaptor(LogicalOrOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LogicalOrOp : public Op<LogicalOrOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, OpTrait::IsCommutative, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LogicalOrOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  OpFoldResult fold(ArrayRef<Attribute> operands);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::LoopOp declarations
//===----------------------------------------------------------------------===//

class LoopOpAdaptor {
public:
  LoopOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  LoopOpAdaptor(LoopOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr loop_control();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class LoopOp : public Op<LoopOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = LoopOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr loop_controlAttr();
  ::mlir::spirv::LoopControl loop_control();
  void loop_controlAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr loop_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr loop_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ::mlir::spirv::LoopControl loop_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::LoopControl loop_control);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    // Returns the entry block.
    Block *getEntryBlock();

    // Returns the loop header block.
    Block *getHeaderBlock();

    // Returns the loop continue block.
    Block *getContinueBlock();

    // Returns the loop merge block.
    Block *getMergeBlock();

    // Adds an empty entry block and loop merge block containing one
    // spv._merge op.
    void addEntryAndMergeBlock();
  
};

//===----------------------------------------------------------------------===//
// spirv::MatrixTimesScalarOp declarations
//===----------------------------------------------------------------------===//

class MatrixTimesScalarOpAdaptor {
public:
  MatrixTimesScalarOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MatrixTimesScalarOpAdaptor(MatrixTimesScalarOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value matrix();
  Value scalar();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MatrixTimesScalarOp : public Op<MatrixTimesScalarOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MatrixTimesScalarOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value matrix();
  Value scalar();
  ::mlir::MutableOperandRange matrixMutable();
  ::mlir::MutableOperandRange scalarMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value matrix, Value scalar);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value matrix, Value scalar);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::MemoryBarrierOp declarations
//===----------------------------------------------------------------------===//

class MemoryBarrierOpAdaptor {
public:
  MemoryBarrierOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MemoryBarrierOpAdaptor(MemoryBarrierOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr memory_scope();
  IntegerAttr memory_semantics();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MemoryBarrierOp : public Op<MemoryBarrierOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MemoryBarrierOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr memory_scopeAttr();
  ::mlir::spirv::Scope memory_scope();
  IntegerAttr memory_semanticsAttr();
  ::mlir::spirv::MemorySemantics memory_semantics();
  void memory_scopeAttr(IntegerAttr attr);
  void memory_semanticsAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr memory_scope, IntegerAttr memory_semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::Scope memory_scope, ::mlir::spirv::MemorySemantics memory_semantics);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::MergeOp declarations
//===----------------------------------------------------------------------===//

class MergeOpAdaptor {
public:
  MergeOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  MergeOpAdaptor(MergeOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class MergeOp : public Op<MergeOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = MergeOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ModuleEndOp declarations
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
class ModuleEndOp : public Op<ModuleEndOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
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
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::ModuleOp declarations
//===----------------------------------------------------------------------===//

class ModuleOpAdaptor {
public:
  ModuleOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ModuleOpAdaptor(ModuleOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr addressing_model();
  IntegerAttr memory_model();
  ::mlir::spirv::VerCapExtAttr vce_triple();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ModuleOp : public Op<ModuleOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsIsolatedFromAbove, OpTrait::SingleBlockImplicitTerminator<ModuleEndOp>::Impl, OpTrait::SymbolTable, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ModuleOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr addressing_modelAttr();
  ::mlir::spirv::AddressingModel addressing_model();
  IntegerAttr memory_modelAttr();
  ::mlir::spirv::MemoryModel memory_model();
  ::mlir::spirv::VerCapExtAttr vce_tripleAttr();
  Optional<::mlir::spirv::VerCapExtAttr> vce_triple();
  void addressing_modelAttr(IntegerAttr attr);
  void memory_modelAttr(IntegerAttr attr);
  void vce_tripleAttr(::mlir::spirv::VerCapExtAttr attr);
  static void build(OpBuilder &, OperationState &state);
  static void build(OpBuilder &, OperationState &state,
                spirv::AddressingModel addressing_model,
                spirv::MemoryModel memory_model);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    static StringRef getVCETripleAttrName() { return "vce_triple"; }

    Block& getBlock() {
      return this->getOperation()->getRegion(0).front();
    }
  
};

//===----------------------------------------------------------------------===//
// spirv::NotOp declarations
//===----------------------------------------------------------------------===//

class NotOpAdaptor {
public:
  NotOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  NotOpAdaptor(NotOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class NotOp : public Op<NotOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = NotOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ReferenceOfOp declarations
//===----------------------------------------------------------------------===//

class ReferenceOfOpAdaptor {
public:
  ReferenceOfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReferenceOfOpAdaptor(ReferenceOfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  FlatSymbolRefAttr spec_const();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReferenceOfOp : public Op<ReferenceOfOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReferenceOfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value reference();
  FlatSymbolRefAttr spec_constAttr();
  StringRef spec_const();
  void spec_constAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type reference, FlatSymbolRefAttr spec_const);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, FlatSymbolRefAttr spec_const);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type reference, StringRef spec_const);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef spec_const);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ReturnOp declarations
//===----------------------------------------------------------------------===//

class ReturnOpAdaptor {
public:
  ReturnOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReturnOpAdaptor(ReturnOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReturnOp : public Op<ReturnOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReturnOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ReturnValueOp declarations
//===----------------------------------------------------------------------===//

class ReturnValueOpAdaptor {
public:
  ReturnValueOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ReturnValueOpAdaptor(ReturnValueOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ReturnValueOp : public Op<ReturnValueOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ReturnValueOpAdaptor;
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
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SConvertOp declarations
//===----------------------------------------------------------------------===//

class SConvertOpAdaptor {
public:
  SConvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SConvertOpAdaptor(SConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SConvertOp : public Op<SConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SConvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SDivOp declarations
//===----------------------------------------------------------------------===//

class SDivOpAdaptor {
public:
  SDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SDivOpAdaptor(SDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SDivOp : public Op<SDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class SGreaterThanEqualOpAdaptor {
public:
  SGreaterThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SGreaterThanEqualOpAdaptor(SGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SGreaterThanEqualOp : public Op<SGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SGreaterThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class SGreaterThanOpAdaptor {
public:
  SGreaterThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SGreaterThanOpAdaptor(SGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SGreaterThanOp : public Op<SGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SGreaterThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SLessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class SLessThanEqualOpAdaptor {
public:
  SLessThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SLessThanEqualOpAdaptor(SLessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SLessThanEqualOp : public Op<SLessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SLessThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SLessThanOp declarations
//===----------------------------------------------------------------------===//

class SLessThanOpAdaptor {
public:
  SLessThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SLessThanOpAdaptor(SLessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SLessThanOp : public Op<SLessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SLessThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SModOp declarations
//===----------------------------------------------------------------------===//

class SModOpAdaptor {
public:
  SModOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SModOpAdaptor(SModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SModOp : public Op<SModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SModOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SRemOp declarations
//===----------------------------------------------------------------------===//

class SRemOpAdaptor {
public:
  SRemOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SRemOpAdaptor(SRemOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SRemOp : public Op<SRemOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SRemOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SelectOp declarations
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
class SelectOp : public Op<SelectOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<3>::Impl, MemoryEffectOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
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
  static void build(OpBuilder &builder, OperationState &state,
                              Value cond, Value trueValue,
                              Value falseValue);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value condition, Value true_value, Value false_value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value condition, Value true_value, Value false_value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SelectionOp declarations
//===----------------------------------------------------------------------===//

class SelectionOpAdaptor {
public:
  SelectionOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SelectionOpAdaptor(SelectionOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  IntegerAttr selection_control();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SelectionOp : public Op<SelectionOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SelectionOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &body();
  IntegerAttr selection_controlAttr();
  ::mlir::spirv::SelectionControl selection_control();
  void selection_controlAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, IntegerAttr selection_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr selection_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ::mlir::spirv::SelectionControl selection_control);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::SelectionControl selection_control);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();

    /// Returns the selection header block.
    Block *getHeaderBlock();

    /// Returns the selection merge block.
    Block *getMergeBlock();

    /// Adds a selection merge block containing one spv._merge op.
    void addMergeBlock();

    /// Creates a spv.selection op for `if (<condition>) then { <thenBody> }`
    /// with `builder`. `builder`'s insertion point will remain at after the
    /// newly inserted spv.selection op afterwards.
    static SelectionOp createIfThen(
        Location loc, Value condition,
        function_ref<void(OpBuilder &builder)> thenBody,
        OpBuilder &builder);
  
};

//===----------------------------------------------------------------------===//
// spirv::ShiftLeftLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftLeftLogicalOpAdaptor {
public:
  ShiftLeftLogicalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftLeftLogicalOpAdaptor(ShiftLeftLogicalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftLeftLogicalOp : public Op<ShiftLeftLogicalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftLeftLogicalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ShiftRightArithmeticOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightArithmeticOpAdaptor {
public:
  ShiftRightArithmeticOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftRightArithmeticOpAdaptor(ShiftRightArithmeticOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftRightArithmeticOp : public Op<ShiftRightArithmeticOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftRightArithmeticOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ShiftRightLogicalOp declarations
//===----------------------------------------------------------------------===//

class ShiftRightLogicalOpAdaptor {
public:
  ShiftRightLogicalOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ShiftRightLogicalOpAdaptor(ShiftRightLogicalOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ShiftRightLogicalOp : public Op<ShiftRightLogicalOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ShiftRightLogicalOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::SpecConstantOp declarations
//===----------------------------------------------------------------------===//

class SpecConstantOpAdaptor {
public:
  SpecConstantOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SpecConstantOpAdaptor(SpecConstantOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr sym_name();
  Attribute default_value();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SpecConstantOp : public Op<SpecConstantOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, SymbolOpInterface::Trait, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SpecConstantOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr sym_nameAttr();
  StringRef sym_name();
  Attribute default_valueAttr();
  Attribute default_value();
  void sym_nameAttr(StringAttr attr);
  void default_valueAttr(Attribute attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, StringAttr sym_name, Attribute default_value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr sym_name, Attribute default_value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, StringRef sym_name, Attribute default_value);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef sym_name, Attribute default_value);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::StoreOp declarations
//===----------------------------------------------------------------------===//

class StoreOpAdaptor {
public:
  StoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  StoreOpAdaptor(StoreOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value ptr();
  Value value();
  IntegerAttr memory_access();
  IntegerAttr alignment();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class StoreOp : public Op<StoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = StoreOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value ptr();
  Value value();
  ::mlir::MutableOperandRange ptrMutable();
  ::mlir::MutableOperandRange valueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  IntegerAttr memory_accessAttr();
  Optional<::mlir::spirv::MemoryAccess> memory_access();
  IntegerAttr alignmentAttr();
  Optional< APInt > alignment();
  void memory_accessAttr(IntegerAttr attr);
  void alignmentAttr(IntegerAttr attr);
  static void build(OpBuilder &builder, OperationState &state, Value ptr, Value value, ArrayRef<NamedAttribute> namedAttrs = {});
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value ptr, Value value, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value ptr, Value value, /*optional*/IntegerAttr memory_access, /*optional*/IntegerAttr alignment);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

//===----------------------------------------------------------------------===//
// spirv::SubgroupBallotKHROp declarations
//===----------------------------------------------------------------------===//

class SubgroupBallotKHROpAdaptor {
public:
  SubgroupBallotKHROpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SubgroupBallotKHROpAdaptor(SubgroupBallotKHROp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value predicate();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SubgroupBallotKHROp : public Op<SubgroupBallotKHROp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = SubgroupBallotKHROpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value predicate();
  ::mlir::MutableOperandRange predicateMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value predicate);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value predicate);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::UConvertOp declarations
//===----------------------------------------------------------------------===//

class UConvertOpAdaptor {
public:
  UConvertOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UConvertOpAdaptor(UConvertOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UConvertOp : public Op<UConvertOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::OneOperand, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UConvertOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand();
  ::mlir::MutableOperandRange operandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UDivOp declarations
//===----------------------------------------------------------------------===//

class UDivOpAdaptor {
public:
  UDivOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UDivOpAdaptor(UDivOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UDivOp : public Op<UDivOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UDivOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UGreaterThanEqualOp declarations
//===----------------------------------------------------------------------===//

class UGreaterThanEqualOpAdaptor {
public:
  UGreaterThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UGreaterThanEqualOpAdaptor(UGreaterThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UGreaterThanEqualOp : public Op<UGreaterThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UGreaterThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UGreaterThanOp declarations
//===----------------------------------------------------------------------===//

class UGreaterThanOpAdaptor {
public:
  UGreaterThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UGreaterThanOpAdaptor(UGreaterThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UGreaterThanOp : public Op<UGreaterThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UGreaterThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ULessThanEqualOp declarations
//===----------------------------------------------------------------------===//

class ULessThanEqualOpAdaptor {
public:
  ULessThanEqualOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ULessThanEqualOpAdaptor(ULessThanEqualOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ULessThanEqualOp : public Op<ULessThanEqualOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ULessThanEqualOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::ULessThanOp declarations
//===----------------------------------------------------------------------===//

class ULessThanOpAdaptor {
public:
  ULessThanOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  ULessThanOpAdaptor(ULessThanOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class ULessThanOp : public Op<ULessThanOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameTypeOperands, OpTrait::SameOperandsAndResultShape, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = ULessThanOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UModOp declarations
//===----------------------------------------------------------------------===//

class UModOpAdaptor {
public:
  UModOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  UModOpAdaptor(UModOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class UModOp : public Op<UModOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<2>::Impl, MemoryEffectOpInterface::Trait, OpTrait::SameOperandsAndResultType, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UModOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value operand1();
  Value operand2();
  ::mlir::MutableOperandRange operand1Mutable();
  ::mlir::MutableOperandRange operand2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value result();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value operand1, Value operand2);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value operand1, Value operand2);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// spirv::UndefOp declarations
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
class UndefOp : public Op<UndefOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = UndefOpAdaptor;
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
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::UnreachableOp declarations
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
class UnreachableOp : public Op<UnreachableOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, OpTrait::IsTerminator, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
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
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
};

//===----------------------------------------------------------------------===//
// spirv::VariableOp declarations
//===----------------------------------------------------------------------===//

class VariableOpAdaptor {
public:
  VariableOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  VariableOpAdaptor(VariableOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value initializer();
  IntegerAttr storage_class();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class VariableOp : public Op<VariableOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, QueryMinVersionInterface::Trait, QueryMaxVersionInterface::Trait, QueryExtensionInterface::Trait, QueryCapabilityInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = VariableOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Value initializer();
  ::mlir::MutableOperandRange initializerMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value pointer();
  IntegerAttr storage_classAttr();
  ::mlir::spirv::StorageClass storage_class();
  void storage_classAttr(IntegerAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type pointer, IntegerAttr storage_class, /*optional*/Value initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, IntegerAttr storage_class, /*optional*/Value initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type pointer, ::mlir::spirv::StorageClass storage_class, /*optional*/Value initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, ::mlir::spirv::StorageClass storage_class, /*optional*/Value initializer);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  ::mlir::spirv::Version getMinVersion();
  ::mlir::spirv::Version getMaxVersion();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> getExtensions();
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> getCapabilities();
};

#endif  // GET_OP_CLASSES

