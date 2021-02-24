/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES

class AffineApplyOp;
class AffineForOp;
class AffineIfOp;
class AffineLoadOp;
class AffineMaxOp;
class AffineMinOp;
class AffineParallelOp;
class AffinePrefetchOp;
class AffineStoreOp;
class AffineTerminatorOp;
class AffineVectorLoadOp;
class AffineVectorStoreOp;

//===----------------------------------------------------------------------===//
// AffineApplyOp declarations
//===----------------------------------------------------------------------===//

class AffineApplyOpAdaptor {
public:
  AffineApplyOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineApplyOpAdaptor(AffineApplyOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange mapOperands();
  AffineMapAttr map();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineApplyOp : public Op<AffineApplyOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineApplyOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range mapOperands();
  ::mlir::MutableOperandRange mapOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr mapAttr();
  AffineMap map();
  void mapAttr(AffineMapAttr attr);
  static void build(OpBuilder &builder, OperationState &result, AffineMap map, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMapAttr map, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMap map, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap map, ValueRange mapOperands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Returns the affine map to be applied by this operation.
    AffineMap getAffineMap() { return map(); }

    /// Returns the affine value map computed from this operation.
    AffineValueMap getAffineValueMap();

    /// Returns true if the result of this operation can be used as dimension id
    /// in the region of the closest surrounding op with trait AffineScope.
    bool isValidDim();

    /// Returns true if the result of this operation can be used as dimension id
    /// within 'region', i.e., for all its uses with `region`.
    bool isValidDim(Region *region);

    /// Returns true if the result of this operation is a symbol in the region
    /// of the closest surrounding op that has the trait AffineScope.
    bool isValidSymbol();

    /// Returns true if the result of this operation is a symbol for all its
    /// uses in `region`.
    bool isValidSymbol(Region *region);

    operand_range getMapOperands() { return getOperands(); }
  
};

//===----------------------------------------------------------------------===//
// AffineForOp declarations
//===----------------------------------------------------------------------===//

class AffineForOpAdaptor {
public:
  AffineForOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineForOpAdaptor(AffineForOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineForOp : public Op<AffineForOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<AffineTerminatorOp>::Impl, OpTrait::HasRecursiveSideEffects, LoopLikeOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineForOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &region();
  static void build(OpBuilder &builder, OperationState &result, int64_t lowerBound, int64_t upperBound, int64_t step = 1, function_ref<void(OpBuilder &, Location, Value)> bodyBuilder     = nullptr);
  static void build(OpBuilder &builder, OperationState &result, ValueRange lbOperands, AffineMap lbMap, ValueRange ubOperands, AffineMap ubMap, int64_t step = 1, function_ref<void(OpBuilder &, Location, Value)> bodyBuilder     = nullptr);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  bool isDefinedOutsideOfLoop(Value  value);
  Region &getLoopBody();
  LogicalResult moveOutOfLoop(ArrayRef<Operation *> ops);

    static StringRef getStepAttrName() { return "step"; }
    static StringRef getLowerBoundAttrName() { return "lower_bound"; }
    static StringRef getUpperBoundAttrName() { return "upper_bound"; }

    Value getInductionVar() { return getBody()->getArgument(0); }

    // TODO: provide iterators for the lower and upper bound operands
    // if the current access via getLowerBound(), getUpperBound() is too slow.

    /// Returns operands for the lower bound map.
    operand_range getLowerBoundOperands();

    /// Returns operands for the upper bound map.
    operand_range getUpperBoundOperands();

    /// Returns information about the lower bound as a single object.
    AffineBound getLowerBound();

    /// Returns information about the upper bound as a single object.
    AffineBound getUpperBound();

    /// Returns loop step.
    int64_t getStep() {
      return getAttr(getStepAttrName()).cast<IntegerAttr>().getInt();
    }

    /// Returns affine map for the lower bound.
    AffineMap getLowerBoundMap() { return getLowerBoundMapAttr().getValue(); }
    AffineMapAttr getLowerBoundMapAttr() {
      return getAttr(getLowerBoundAttrName()).cast<AffineMapAttr>();
    }
    /// Returns affine map for the upper bound. The upper bound is exclusive.
    AffineMap getUpperBoundMap() { return getUpperBoundMapAttr().getValue(); }
    AffineMapAttr getUpperBoundMapAttr() {
      return getAttr(getUpperBoundAttrName()).cast<AffineMapAttr>();
    }

    /// Set lower bound. The new bound must have the same number of operands as
    /// the current bound map. Otherwise, 'replaceForLowerBound' should be used.
    void setLowerBound(ValueRange operands, AffineMap map);
    /// Set upper bound. The new bound must not have more operands than the
    /// current bound map. Otherwise, 'replaceForUpperBound' should be used.
    void setUpperBound(ValueRange operands, AffineMap map);

    /// Set the lower bound map without changing operands.
    void setLowerBoundMap(AffineMap map);

    /// Set the upper bound map without changing operands.
    void setUpperBoundMap(AffineMap map);

    /// Set loop step.
    void setStep(int64_t step) {
      assert(step > 0 && "step has to be a positive integer constant");
      auto *context = getLowerBoundMap().getContext();
      setAttr(Identifier::get(getStepAttrName(), context),
              IntegerAttr::get(IndexType::get(context), step));
    }

    /// Returns true if the lower bound is constant.
    bool hasConstantLowerBound();
    /// Returns true if the upper bound is constant.
    bool hasConstantUpperBound();
    /// Returns true if both bounds are constant.
    bool hasConstantBounds() {
      return hasConstantLowerBound() && hasConstantUpperBound();
    }
    /// Returns the value of the constant lower bound.
    /// Fails assertion if the bound is non-constant.
    int64_t getConstantLowerBound();
    /// Returns the value of the constant upper bound. The upper bound is
    /// exclusive. Fails assertion if the bound is non-constant.
    int64_t getConstantUpperBound();
    /// Sets the lower bound to the given constant value.
    void setConstantLowerBound(int64_t value);
    /// Sets the upper bound to the given constant value.
    void setConstantUpperBound(int64_t value);

    /// Returns true if both the lower and upper bound have the same operand
    /// lists (same operands in the same order).
    bool matchingBoundOperandList();
  
};

//===----------------------------------------------------------------------===//
// AffineIfOp declarations
//===----------------------------------------------------------------------===//

class AffineIfOpAdaptor {
public:
  AffineIfOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineIfOpAdaptor(AffineIfOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineIfOp : public Op<AffineIfOp, OpTrait::NRegions<2>::Impl, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<AffineTerminatorOp>::Impl, OpTrait::HasRecursiveSideEffects> {
public:
  using Op::Op;
  using Adaptor = AffineIfOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &thenRegion();
  Region &elseRegion();
  static void build(OpBuilder &builder, OperationState &result, IntegerSet set, ValueRange args, bool withElseRegion);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    static StringRef getConditionAttrName() { return "condition"; }

    IntegerSet getIntegerSet();
    void setIntegerSet(IntegerSet newSet);

    /// Sets the integer set with its operands.
    void setConditional(IntegerSet set, ValueRange operands);

    /// Returns true if an else block exists.
    bool hasElse() { return !elseRegion().empty(); }

    Block *getThenBlock() {
      assert(!thenRegion().empty() && "Unexpected empty 'then' region.");
      return &thenRegion().front();
    }

    Block *getElseBlock() {
      assert(hasElse() && "Empty 'else' region.");
      return &elseRegion().front();
    }

    OpBuilder getThenBodyBuilder() {
      assert(!thenRegion().empty() && "Unexpected empty 'then' region.");
      Block &body = thenRegion().front();
      return OpBuilder(&body, std::prev(body.end()));
    }
    OpBuilder getElseBodyBuilder() {
      assert(hasElse() && "No 'else' block");
      Block &body = elseRegion().front();
      return OpBuilder(&body, std::prev(body.end()));
    }
  
};

//===----------------------------------------------------------------------===//
// AffineLoadOp declarations
//===----------------------------------------------------------------------===//

class AffineLoadOpAdaptor {
public:
  AffineLoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineLoadOpAdaptor(AffineLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineLoadOp : public Op<AffineLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, AffineReadOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineLoadOpAdaptor;
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
  static void build(OpBuilder &builder, OperationState &result, AffineMap map, ValueRange operands);
  static void build(OpBuilder &builder, OperationState &result, Value memref, ValueRange indices = {});
  static void build(OpBuilder &builder, OperationState &result, Value memref, AffineMap map, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Returns the operand index of the memref.
    unsigned getMemRefOperandIndex() { return 0; }

    void setMemRef(Value value) { setOperand(getMemRefOperandIndex(), value); }

    /// Returns the affine map used to index the memref for this operation.
    AffineMapAttr getAffineMapAttr() {
      return getAttr(getMapAttrName()).cast<AffineMapAttr>();
    }

    static StringRef getMapAttrName() { return "map"; }
  
};

//===----------------------------------------------------------------------===//
// AffineMaxOp declarations
//===----------------------------------------------------------------------===//

class AffineMaxOpAdaptor {
public:
  AffineMaxOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineMaxOpAdaptor(AffineMaxOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  AffineMapAttr map();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineMaxOp : public Op<AffineMaxOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineMaxOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr mapAttr();
  AffineMap map();
  void mapAttr(AffineMapAttr attr);
  static void build(OpBuilder &builder, OperationState &result, AffineMap affineMap, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMapAttr map, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMap map, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap map, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getMapAttrName() { return "map"; }
    AffineMap getAffineMap() { return map(); }
    ValueRange getMapOperands() { return operands(); }
    ValueRange getDimOperands() {
      return OperandRange{operands().begin(),
                        operands().begin() + map().getNumDims()};
    }
    ValueRange getSymbolOperands() {
      return OperandRange{operands().begin() + map().getNumDims(),
                        operands().end()};
    }
  
};

//===----------------------------------------------------------------------===//
// AffineMinOp declarations
//===----------------------------------------------------------------------===//

class AffineMinOpAdaptor {
public:
  AffineMinOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineMinOpAdaptor(AffineMinOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange operands();
  AffineMapAttr map();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineMinOp : public Op<AffineMinOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineMinOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range operands();
  ::mlir::MutableOperandRange operandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  AffineMapAttr mapAttr();
  AffineMap map();
  void mapAttr(AffineMapAttr attr);
  static void build(OpBuilder &builder, OperationState &result, AffineMap affineMap, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMapAttr map, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr map, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type resultType0, AffineMap map, ValueRange operands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap map, ValueRange operands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  OpFoldResult fold(ArrayRef<Attribute> operands);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    static StringRef getMapAttrName() { return "map"; }
    AffineMap getAffineMap() { return map(); }
    ValueRange getMapOperands() { return operands(); }
    ValueRange getDimOperands() {
      return OperandRange{operands().begin(),
                        operands().begin() + map().getNumDims()};
    }
    ValueRange getSymbolOperands() {
      return OperandRange{operands().begin() + map().getNumDims(),
                        operands().end()};
    }
  
};

//===----------------------------------------------------------------------===//
// AffineParallelOp declarations
//===----------------------------------------------------------------------===//

class AffineParallelOpAdaptor {
public:
  AffineParallelOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineParallelOpAdaptor(AffineParallelOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  ValueRange mapOperands();
  AffineMapAttr lowerBoundsMap();
  AffineMapAttr upperBoundsMap();
  ArrayAttr steps();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineParallelOp : public Op<AffineParallelOp, OpTrait::OneRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::VariadicOperands, OpTrait::SingleBlockImplicitTerminator<AffineTerminatorOp>::Impl> {
public:
  using Op::Op;
  using Adaptor = AffineParallelOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  Operation::operand_range mapOperands();
  ::mlir::MutableOperandRange mapOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  Region &region();
  AffineMapAttr lowerBoundsMapAttr();
  AffineMap lowerBoundsMap();
  AffineMapAttr upperBoundsMapAttr();
  AffineMap upperBoundsMap();
  ArrayAttr stepsAttr();
  ArrayAttr steps();
  void lowerBoundsMapAttr(AffineMapAttr attr);
  void upperBoundsMapAttr(AffineMapAttr attr);
  void stepsAttr(ArrayAttr attr);
  static void build(OpBuilder &builder, OperationState &result,ArrayRef<int64_t> ranges);
  static void build(OpBuilder &builder, OperationState &result, AffineMap lbMap,ValueRange lbArgs, AffineMap ubMap, ValueRange ubArgs);
  static void build(OpBuilder &builder, OperationState &result, AffineMap lbMap,ValueRange lbArgs, AffineMap ubMap, ValueRange ubArgs,ArrayRef<int64_t> steps);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, AffineMapAttr lowerBoundsMap, AffineMapAttr upperBoundsMap, ArrayAttr steps, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMapAttr lowerBoundsMap, AffineMapAttr upperBoundsMap, ArrayAttr steps, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, AffineMap lowerBoundsMap, AffineMap upperBoundsMap, ArrayAttr steps, ValueRange mapOperands);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, AffineMap lowerBoundsMap, AffineMap upperBoundsMap, ArrayAttr steps, ValueRange mapOperands);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();

    /// Get the number of dimensions.
    unsigned getNumDims();

    operand_range getLowerBoundsOperands();
    operand_range getUpperBoundsOperands();

    AffineValueMap getLowerBoundsValueMap();
    AffineValueMap getUpperBoundsValueMap();
    AffineValueMap getRangesValueMap();

    /// Get ranges as constants, may fail in dynamic case.
    Optional<SmallVector<int64_t, 8>> getConstantRanges();

    Block *getBody();
    OpBuilder getBodyBuilder();
    MutableArrayRef<BlockArgument> getIVs() {
      return getBody()->getArguments();
    }
    void setSteps(ArrayRef<int64_t> newSteps);

    static StringRef getLowerBoundsMapAttrName() { return "lowerBoundsMap"; }
    static StringRef getUpperBoundsMapAttrName() { return "upperBoundsMap"; }
    static StringRef getStepsAttrName() { return "steps"; }
  
};

//===----------------------------------------------------------------------===//
// AffinePrefetchOp declarations
//===----------------------------------------------------------------------===//

class AffinePrefetchOpAdaptor {
public:
  AffinePrefetchOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffinePrefetchOpAdaptor(AffinePrefetchOp& op);
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
class AffinePrefetchOp : public Op<AffinePrefetchOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl> {
public:
  using Op::Op;
  using Adaptor = AffinePrefetchOpAdaptor;
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
  static void build(OpBuilder &builder, OperationState &result, Value memref,AffineMap map, ArrayRef<Value> mapOperands, bool isWrite,unsigned localityHint, bool isDataCache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, BoolAttr isWrite, IntegerAttr localityHint, BoolAttr isDataCache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices, bool isWrite, APInt localityHint, bool isDataCache);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);

    MemRefType getMemRefType() {
      return memref().getType().cast<MemRefType>();
    }

    /// Returns the affine map used to index the memref for this operation.
    AffineMap getAffineMap() { return getAffineMapAttr().getValue(); }
    AffineMapAttr getAffineMapAttr() {
      return getAttr(getMapAttrName()).cast<AffineMapAttr>();
    }

    /// Returns the AffineMapAttr associated with 'memref'.
    NamedAttribute getAffineMapAttrForMemRef(Value mref) {
      assert(mref == memref());
      return {Identifier::get(getMapAttrName(), getContext()),
        getAffineMapAttr()};
    }

    /// Get affine map operands.
    operand_range getMapOperands() {
      return {operand_begin() + 1, operand_end()};
    }

    static StringRef getMapAttrName() { return "map"; }
    static StringRef getLocalityHintAttrName() { return "localityHint"; }
    static StringRef getIsWriteAttrName() { return "isWrite"; }
    static StringRef getIsDataCacheAttrName() { return "isDataCache"; }
  
};

//===----------------------------------------------------------------------===//
// AffineStoreOp declarations
//===----------------------------------------------------------------------===//

class AffineStoreOpAdaptor {
public:
  AffineStoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineStoreOpAdaptor(AffineStoreOp& op);
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
class AffineStoreOp : public Op<AffineStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, AffineWriteOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineStoreOpAdaptor;
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
  static void build(OpBuilder &builder, OperationState &result, Value valueToStore, Value memref, ValueRange indices);
  static void build(OpBuilder &builder, OperationState &result, Value valueToStore, Value memref, AffineMap map, ValueRange mapOperands);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  static void getCanonicalizationPatterns(OwningRewritePatternList &results, MLIRContext *context);
  LogicalResult fold(ArrayRef<Attribute> operands, SmallVectorImpl<OpFoldResult> &results);
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Get value to be stored by store operation.
    Value getValueToStore() { return getOperand(0); }

    /// Returns the operand index of the memref.
    unsigned getMemRefOperandIndex() { return 1; }

    void setMemRef(Value value) { setOperand(getMemRefOperandIndex(), value); }

    /// Returns the affine map used to index the memref for this operation.
    AffineMapAttr getAffineMapAttr() {
      return getAttr(getMapAttrName()).cast<AffineMapAttr>();
    }

    /// Returns the AffineMapAttr associated with 'memref'.
    NamedAttribute getAffineMapAttrForMemRef(Value memref) {
      assert(memref == getMemRef());
      return {Identifier::get(getMapAttrName(), getContext()),
              getAffineMapAttr()};
    }

    static StringRef getMapAttrName() { return "map"; }
  
};

//===----------------------------------------------------------------------===//
// AffineTerminatorOp declarations
//===----------------------------------------------------------------------===//

class AffineTerminatorOpAdaptor {
public:
  AffineTerminatorOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineTerminatorOpAdaptor(AffineTerminatorOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineTerminatorOp : public Op<AffineTerminatorOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::ZeroOperands, MemoryEffectOpInterface::Trait, OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Adaptor = AffineTerminatorOpAdaptor;
  static StringRef getOperationName();
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  Operation::result_range getODSResults(unsigned index);
  static void build(OpBuilder &odsBuilder, OperationState &odsState);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);
};

//===----------------------------------------------------------------------===//
// AffineVectorLoadOp declarations
//===----------------------------------------------------------------------===//

class AffineVectorLoadOpAdaptor {
public:
  AffineVectorLoadOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineVectorLoadOpAdaptor(AffineVectorLoadOp& op);
  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ValueRange getODSOperands(unsigned index);
  Value memref();
  ValueRange indices();
  LogicalResult verify(Location loc);

private:
  ValueRange odsOperands;
  DictionaryAttr odsAttrs;
};
class AffineVectorLoadOp : public Op<AffineVectorLoadOp, OpTrait::ZeroRegion, OpTrait::OneResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<1>::Impl, AffineReadOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineVectorLoadOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Type result, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value memref, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Returns the operand index of the memref.
    unsigned getMemRefOperandIndex() { return 0; }

    void setMemRef(Value value) { setOperand(getMemRefOperandIndex(), value); }

    /// Returns the affine map used to index the memref for this operation.
    AffineMapAttr getAffineMapAttr() {
      return getAttr(getMapAttrName()).cast<AffineMapAttr>();
    }

    static StringRef getMapAttrName() { return "map"; }
  
    VectorType getVectorType() {
      return result().getType().cast<VectorType>();
    }
  
};

//===----------------------------------------------------------------------===//
// AffineVectorStoreOp declarations
//===----------------------------------------------------------------------===//

class AffineVectorStoreOpAdaptor {
public:
  AffineVectorStoreOpAdaptor(ValueRange values, DictionaryAttr attrs = nullptr);
  AffineVectorStoreOpAdaptor(AffineVectorStoreOp& op);
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
class AffineVectorStoreOp : public Op<AffineVectorStoreOp, OpTrait::ZeroRegion, OpTrait::ZeroResult, OpTrait::ZeroSuccessor, OpTrait::AtLeastNOperands<2>::Impl, AffineWriteOpInterface::Trait, MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Adaptor = AffineVectorStoreOpAdaptor;
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
  static void build(OpBuilder &odsBuilder, OperationState &odsState, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &odsBuilder, OperationState &odsState, ArrayRef<Type> resultTypes, Value value, Value memref, ValueRange indices);
  static void build(OpBuilder &, OperationState &odsState, ArrayRef<Type> resultTypes, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  static ParseResult parse(OpAsmParser &parser, OperationState &result);
  void print(OpAsmPrinter &p);
  LogicalResult verify();
  void getEffects(SmallVectorImpl<SideEffects::EffectInstance<MemoryEffects::Effect>> &effects);

    /// Get value to be stored by store operation.
    Value getValueToStore() { return getOperand(0); }

    /// Returns the operand index of the memref.
    unsigned getMemRefOperandIndex() { return 1; }

    void setMemRef(Value value) { setOperand(getMemRefOperandIndex(), value); }

    /// Returns the affine map used to index the memref for this operation.
    AffineMapAttr getAffineMapAttr() {
      return getAttr(getMapAttrName()).cast<AffineMapAttr>();
    }

    /// Returns the AffineMapAttr associated with 'memref'.
    NamedAttribute getAffineMapAttrForMemRef(Value memref) {
      assert(memref == getMemRef());
      return {Identifier::get(getMapAttrName(), getContext()),
              getAffineMapAttr()};
    }

    static StringRef getMapAttrName() { return "map"; }
  
    VectorType getVectorType() {
      return value().getType().cast<VectorType>();
    }
  
};

#endif  // GET_OP_CLASSES

