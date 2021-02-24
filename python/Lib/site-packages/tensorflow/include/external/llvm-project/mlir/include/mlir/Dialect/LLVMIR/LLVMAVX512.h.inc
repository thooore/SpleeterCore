/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class x86_avx512_mask_rndscale_pd_512;
class x86_avx512_mask_rndscale_ps_512;
class x86_avx512_mask_scalef_pd_512;
class x86_avx512_mask_scalef_ps_512;

//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_rndscale_pd_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_rndscale_pd_512Adaptor {
public:
  x86_avx512_mask_rndscale_pd_512Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  x86_avx512_mask_rndscale_pd_512Adaptor(x86_avx512_mask_rndscale_pd_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class x86_avx512_mask_rndscale_pd_512 : public Op<x86_avx512_mask_rndscale_pd_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_rndscale_pd_512Adaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_rndscale_ps_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_rndscale_ps_512Adaptor {
public:
  x86_avx512_mask_rndscale_ps_512Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  x86_avx512_mask_rndscale_ps_512Adaptor(x86_avx512_mask_rndscale_ps_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class x86_avx512_mask_rndscale_ps_512 : public Op<x86_avx512_mask_rndscale_ps_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_rndscale_ps_512Adaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_scalef_pd_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_scalef_pd_512Adaptor {
public:
  x86_avx512_mask_scalef_pd_512Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  x86_avx512_mask_scalef_pd_512Adaptor(x86_avx512_mask_scalef_pd_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class x86_avx512_mask_scalef_pd_512 : public Op<x86_avx512_mask_scalef_pd_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_scalef_pd_512Adaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

//===----------------------------------------------------------------------===//
// LLVM::x86_avx512_mask_scalef_ps_512 declarations
//===----------------------------------------------------------------------===//

class x86_avx512_mask_scalef_ps_512Adaptor {
public:
  x86_avx512_mask_scalef_ps_512Adaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  x86_avx512_mask_scalef_ps_512Adaptor(x86_avx512_mask_scalef_ps_512& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class x86_avx512_mask_scalef_ps_512 : public Op<x86_avx512_mask_scalef_ps_512, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::NOperands<5>::Impl> {
public:
  using Op::Op;
  using Adaptor = x86_avx512_mask_scalef_ps_512Adaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Value res();
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type res, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value odsArg_0, Value odsArg_1, Value odsArg_2, Value odsArg_3, Value odsArg_4);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
};

#endif  // GET_OP_CLASSES

