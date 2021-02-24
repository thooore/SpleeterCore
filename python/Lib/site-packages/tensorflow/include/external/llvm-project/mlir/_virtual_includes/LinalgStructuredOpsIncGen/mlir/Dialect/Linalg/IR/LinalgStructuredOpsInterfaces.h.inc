/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Declarations                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct LinalgOpInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual unsigned getNumParallelLoops(Operation *tablegen_opaque_op) = 0;
    virtual unsigned getNumReductionLoops(Operation *tablegen_opaque_op) = 0;
    virtual unsigned getNumWindowLoops(Operation *tablegen_opaque_op) = 0;
    virtual unsigned getNumLoops(Operation *tablegen_opaque_op) = 0;
    virtual bool hasSingleReductionLoop(Operation *tablegen_opaque_op) = 0;
    virtual unsigned getNumInputs(Operation *tablegen_opaque_op) = 0;
    virtual Value getInput(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual llvm::Optional<unsigned> getIndexOfInput(Operation *tablegen_opaque_op, Value v) = 0;
    virtual Operation::operand_range getInputs(Operation *tablegen_opaque_op) = 0;
    virtual ShapedType getInputShapedType(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual SmallVector<RankedTensorType, 4> getInputTensorTypes(Operation *tablegen_opaque_op) = 0;
    virtual unsigned getNumOutputs(Operation *tablegen_opaque_op) = 0;
    virtual Value getOutputBuffer(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual llvm::Optional<unsigned> getIndexOfOutputBuffer(Operation *tablegen_opaque_op, Value view) = 0;
    virtual MemRefType getOutputBufferType(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual ShapedType getOutputShapedType(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual SmallVector<RankedTensorType, 4> getOutputTensorTypes(Operation *tablegen_opaque_op) = 0;
    virtual Operation::operand_range getOutputBuffers(Operation *tablegen_opaque_op) = 0;
    virtual Value getBuffer(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual unsigned getNumInputsAndOutputs(Operation *tablegen_opaque_op) = 0;
    virtual unsigned getNumInputsAndOutputBuffers(Operation *tablegen_opaque_op) = 0;
    virtual Operation::operand_range getInputsAndOutputBuffers(Operation *tablegen_opaque_op) = 0;
    virtual SmallVector<ShapedType, 4> getInputOutputShapedTypes(Operation *tablegen_opaque_op) = 0;
    virtual llvm::Optional<SmallVector<StringRef, 8>> referenceIterators(Operation *tablegen_opaque_op) = 0;
    virtual llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps(Operation *tablegen_opaque_op) = 0;
    virtual ArrayAttr iterator_types(Operation *tablegen_opaque_op) = 0;
    virtual ArrayAttr indexing_maps(Operation *tablegen_opaque_op) = 0;
    virtual SmallVector<AffineMap, 4> getIndexingMaps(Operation *tablegen_opaque_op) = 0;
    virtual AffineMap getIndexingMap(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual AffineMap getInputIndexingMap(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual AffineMap getOutputIndexingMap(Operation *tablegen_opaque_op, unsigned i) = 0;
    virtual bool hasBufferSemantics(Operation *tablegen_opaque_op) = 0;
    virtual bool hasTensorSemantics(Operation *tablegen_opaque_op) = 0;
    virtual Operation * create(OpBuilder & builder, Location loc, ValueRange operands, ArrayRef<NamedAttribute> attributes) = 0;
    virtual Operation * clone(Operation *tablegen_opaque_op, OpBuilder & b, Location loc, ValueRange operands) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    unsigned getNumParallelLoops(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumParallelLoops();
    }
    unsigned getNumReductionLoops(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumReductionLoops();
    }
    unsigned getNumWindowLoops(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumWindowLoops();
    }
    unsigned getNumLoops(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumLoops();
    }
    bool hasSingleReductionLoop(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.hasSingleReductionLoop();
    }
    unsigned getNumInputs(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumInputs();
    }
    Value getInput(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getInput(i);
    }
    llvm::Optional<unsigned> getIndexOfInput(Operation *tablegen_opaque_op, Value v) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getIndexOfInput(v);
    }
    Operation::operand_range getInputs(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getInputs();
    }
    ShapedType getInputShapedType(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getInputShapedType(i);
    }
    SmallVector<RankedTensorType, 4> getInputTensorTypes(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getInputTensorTypes();
    }
    unsigned getNumOutputs(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumOutputs();
    }
    Value getOutputBuffer(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getOutputBuffer(i);
    }
    llvm::Optional<unsigned> getIndexOfOutputBuffer(Operation *tablegen_opaque_op, Value view) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getIndexOfOutputBuffer(view);
    }
    MemRefType getOutputBufferType(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getOutputBufferType(i);
    }
    ShapedType getOutputShapedType(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getOutputShapedType(i);
    }
    SmallVector<RankedTensorType, 4> getOutputTensorTypes(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getOutputTensorTypes();
    }
    Operation::operand_range getOutputBuffers(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getOutputBuffers();
    }
    Value getBuffer(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getBuffer(i);
    }
    unsigned getNumInputsAndOutputs(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumInputsAndOutputs();
    }
    unsigned getNumInputsAndOutputBuffers(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getNumInputsAndOutputBuffers();
    }
    Operation::operand_range getInputsAndOutputBuffers(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getInputsAndOutputBuffers();
    }
    SmallVector<ShapedType, 4> getInputOutputShapedTypes(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getInputOutputShapedTypes();
    }
    llvm::Optional<SmallVector<StringRef, 8>> referenceIterators(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.referenceIterators();
    }
    llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.referenceIndexingMaps();
    }
    ArrayAttr iterator_types(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.iterator_types();
    }
    ArrayAttr indexing_maps(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.indexing_maps();
    }
    SmallVector<AffineMap, 4> getIndexingMaps(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getIndexingMaps();
    }
    AffineMap getIndexingMap(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getIndexingMap(i);
    }
    AffineMap getInputIndexingMap(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getInputIndexingMap(i);
    }
    AffineMap getOutputIndexingMap(Operation *tablegen_opaque_op, unsigned i) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getOutputIndexingMap(i);
    }
    bool hasBufferSemantics(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.hasBufferSemantics();
    }
    bool hasTensorSemantics(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.hasTensorSemantics();
    }
    Operation * create(OpBuilder & builder, Location loc, ValueRange operands, ArrayRef<NamedAttribute> attributes) final {

        return builder.create<ConcreteOp>(loc, ArrayRef<Type>{}, operands,
                                          attributes);
      
    }
    Operation * clone(Operation *tablegen_opaque_op, OpBuilder & b, Location loc, ValueRange operands) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;

        BlockAndValueMapping map;
        unsigned numRegions = op.getOperation()->getNumRegions();
        Operation *res = create(b, loc, operands, op.getAttrs());
        assert(res->getNumRegions() == numRegions && "inconsistent # regions");
        for (unsigned ridx = 0; ridx < numRegions; ++ridx)
          op.getOperation()->getRegion(ridx).cloneInto(
            &res->getRegion(ridx), map);
        return res;
      
    }
  };
};
} // end namespace detail
class LinalgOp : public OpInterface<LinalgOp, detail::LinalgOpInterfaceTraits> {
public:
  using OpInterface<LinalgOp, detail::LinalgOpInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct LinalgOpTrait : public OpInterface<LinalgOp, detail::LinalgOpInterfaceTraits>::Trait<ConcreteOp> {
  };
    template <typename ConcreteOp>
    struct Trait : public LinalgOpTrait<ConcreteOp> {};
  unsigned getNumParallelLoops();
  unsigned getNumReductionLoops();
  unsigned getNumWindowLoops();
  unsigned getNumLoops();
  bool hasSingleReductionLoop();
  unsigned getNumInputs();
  Value getInput(unsigned i);
  llvm::Optional<unsigned> getIndexOfInput(Value v);
  Operation::operand_range getInputs();
  ShapedType getInputShapedType(unsigned i);
  SmallVector<RankedTensorType, 4> getInputTensorTypes();
  unsigned getNumOutputs();
  Value getOutputBuffer(unsigned i);
  llvm::Optional<unsigned> getIndexOfOutputBuffer(Value view);
  MemRefType getOutputBufferType(unsigned i);
  ShapedType getOutputShapedType(unsigned i);
  SmallVector<RankedTensorType, 4> getOutputTensorTypes();
  Operation::operand_range getOutputBuffers();
  Value getBuffer(unsigned i);
  unsigned getNumInputsAndOutputs();
  unsigned getNumInputsAndOutputBuffers();
  Operation::operand_range getInputsAndOutputBuffers();
  SmallVector<ShapedType, 4> getInputOutputShapedTypes();
  llvm::Optional<SmallVector<StringRef, 8>> referenceIterators();
  llvm::Optional<SmallVector<AffineMap, 8>> referenceIndexingMaps();
  ArrayAttr iterator_types();
  ArrayAttr indexing_maps();
  SmallVector<AffineMap, 4> getIndexingMaps();
  AffineMap getIndexingMap(unsigned i);
  AffineMap getInputIndexingMap(unsigned i);
  AffineMap getOutputIndexingMap(unsigned i);
  bool hasBufferSemantics();
  bool hasTensorSemantics();
  Operation * create(OpBuilder & builder, Location loc, ValueRange operands, ArrayRef<NamedAttribute> attributes);
  Operation * clone(OpBuilder & b, Location loc, ValueRange operands);
};
