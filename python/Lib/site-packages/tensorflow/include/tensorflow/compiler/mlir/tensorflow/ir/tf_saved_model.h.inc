/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class GlobalTensorOp;
class SessionInitializerOp;

//===----------------------------------------------------------------------===//
// tf_saved_model::GlobalTensorOp declarations
//===----------------------------------------------------------------------===//

class GlobalTensorOpAdaptor {
public:
  GlobalTensorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  GlobalTensorOpAdaptor(GlobalTensorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  StringAttr sym_name();
  ElementsAttr value();
  TypeAttr type();
  UnitAttr is_mutable();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class GlobalTensorOp : public Op<GlobalTensorOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = GlobalTensorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  StringAttr sym_nameAttr();
  StringRef sym_name();
  ElementsAttr valueAttr();
  ElementsAttr value();
  TypeAttr typeAttr();
  Type type();
  UnitAttr is_mutableAttr();
  bool is_mutable();
  void sym_nameAttr(StringAttr attr);
  void valueAttr(ElementsAttr attr);
  void typeAttr(TypeAttr attr);
  void is_mutableAttr(UnitAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, StringAttr sym_name, ElementsAttr value, TypeAttr type, /*optional*/UnitAttr is_mutable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringAttr sym_name, ElementsAttr value, TypeAttr type, /*optional*/UnitAttr is_mutable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, StringRef sym_name, ElementsAttr value, TypeAttr type, /*optional*/bool is_mutable);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef sym_name, ElementsAttr value, TypeAttr type, /*optional*/bool is_mutable);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// tf_saved_model::SessionInitializerOp declarations
//===----------------------------------------------------------------------===//

class SessionInitializerOpAdaptor {
public:
  SessionInitializerOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  SessionInitializerOpAdaptor(SessionInitializerOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  FlatSymbolRefAttr initializer();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class SessionInitializerOp : public Op<SessionInitializerOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands> {
public:
  using Op::Op;
  using Adaptor = SessionInitializerOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  FlatSymbolRefAttr initializerAttr();
  StringRef initializer();
  void initializerAttr(FlatSymbolRefAttr attr);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, FlatSymbolRefAttr initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, FlatSymbolRefAttr initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, StringRef initializer);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, StringRef initializer);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
};

#endif  // GET_OP_CLASSES

