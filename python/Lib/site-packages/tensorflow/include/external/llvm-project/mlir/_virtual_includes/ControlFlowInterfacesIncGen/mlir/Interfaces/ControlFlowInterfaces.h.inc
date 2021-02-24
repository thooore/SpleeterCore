/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Declarations                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct BranchOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual Optional<MutableOperandRange> getMutableSuccessorOperands(Operation *tablegen_opaque_op, unsigned index) = 0;
    virtual Optional<OperandRange> getSuccessorOperands(Operation *tablegen_opaque_op, unsigned index) = 0;
    virtual Optional<BlockArgument> getSuccessorBlockArgument(Operation *tablegen_opaque_op, unsigned operandIndex) = 0;
    virtual Block * getSuccessorForOperands(Operation *tablegen_opaque_op, ArrayRef<Attribute> operands) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    Optional<MutableOperandRange> getMutableSuccessorOperands(Operation *tablegen_opaque_op, unsigned index) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getMutableSuccessorOperands(index);
    }
    Optional<OperandRange> getSuccessorOperands(Operation *tablegen_opaque_op, unsigned index) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getSuccessorOperands(index);
    }
    Optional<BlockArgument> getSuccessorBlockArgument(Operation *tablegen_opaque_op, unsigned operandIndex) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;

        Operation *opaqueOp = op;
        for (unsigned i = 0, e = opaqueOp->getNumSuccessors(); i != e; ++i) {
          if (Optional<BlockArgument> arg = detail::getBranchSuccessorArgument(
                op.getSuccessorOperands(i), operandIndex,
                opaqueOp->getSuccessor(i)))
            return arg;
        }
        return llvm::None;
      
    }
    Block * getSuccessorForOperands(Operation *tablegen_opaque_op, ArrayRef<Attribute> operands) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getSuccessorForOperands(operands);
    }
  };
};
} // end namespace detail
class BranchOpInterface : public OpInterface<BranchOpInterface, detail::BranchOpInterfaceInterfaceTraits> {
public:
  using OpInterface<BranchOpInterface, detail::BranchOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct BranchOpInterfaceTrait : public OpInterface<BranchOpInterface, detail::BranchOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  Optional<OperandRange> getSuccessorOperands(unsigned index) {

        ConcreteOp *op = static_cast<ConcreteOp *>(this);
        auto operands = op->getMutableSuccessorOperands(index);
        return operands ? Optional<OperandRange>(*operands) : llvm::None;
        }
  Block * getSuccessorForOperands(ArrayRef<Attribute> operands) {
 return nullptr;   }
    static LogicalResult verifyTrait(Operation* op) {

    auto concreteOp = cast<ConcreteOpType>(op);
    for (unsigned i = 0, e = op->getNumSuccessors(); i != e; ++i) {
      Optional<OperandRange> operands = concreteOp.getSuccessorOperands(i);
      if (failed(detail::verifyBranchSuccessorOperands(op, i, operands)))
        return failure();
    }
    return success();
  
  }
  };
    template <typename ConcreteOp>
    struct Trait : public BranchOpInterfaceTrait<ConcreteOp> {};
  Optional<MutableOperandRange> getMutableSuccessorOperands(unsigned index);
  Optional<OperandRange> getSuccessorOperands(unsigned index);
  Optional<BlockArgument> getSuccessorBlockArgument(unsigned operandIndex);
  Block * getSuccessorForOperands(ArrayRef<Attribute> operands);
};
namespace detail {
struct RegionBranchOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual OperandRange getSuccessorEntryOperands(Operation *tablegen_opaque_op, unsigned index) = 0;
    virtual void getSuccessorRegions(Operation *tablegen_opaque_op, Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    OperandRange getSuccessorEntryOperands(Operation *tablegen_opaque_op, unsigned index) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getSuccessorEntryOperands(index);
    }
    void getSuccessorRegions(Operation *tablegen_opaque_op, Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getSuccessorRegions(index, operands, regions);
    }
  };
};
} // end namespace detail
class RegionBranchOpInterface : public OpInterface<RegionBranchOpInterface, detail::RegionBranchOpInterfaceInterfaceTraits> {
public:
  using OpInterface<RegionBranchOpInterface, detail::RegionBranchOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct RegionBranchOpInterfaceTrait : public OpInterface<RegionBranchOpInterface, detail::RegionBranchOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  OperandRange getSuccessorEntryOperands(unsigned index) {

        auto operandEnd = this->getOperation()->operand_end();
        return OperandRange(operandEnd, operandEnd);
        }
  };
    template <typename ConcreteOp>
    struct Trait : public RegionBranchOpInterfaceTrait<ConcreteOp> {};
  OperandRange getSuccessorEntryOperands(unsigned index);
  void getSuccessorRegions(Optional<unsigned> index, ArrayRef<Attribute> operands, SmallVectorImpl<RegionSuccessor> & regions);
};
