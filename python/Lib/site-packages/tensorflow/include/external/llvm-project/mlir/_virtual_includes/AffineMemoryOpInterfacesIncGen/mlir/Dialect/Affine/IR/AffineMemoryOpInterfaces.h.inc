/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Declarations                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct AffineReadOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual Value getMemRef(Operation *tablegen_opaque_op) = 0;
    virtual MemRefType getMemRefType(Operation *tablegen_opaque_op) = 0;
    virtual Operation::operand_range getMapOperands(Operation *tablegen_opaque_op) = 0;
    virtual AffineMap getAffineMap(Operation *tablegen_opaque_op) = 0;
    virtual NamedAttribute getAffineMapAttrForMemRef(Operation *tablegen_opaque_op, Value memref) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    Value getMemRef(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getMemRef();
    }
    MemRefType getMemRefType(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getMemRefType();
    }
    Operation::operand_range getMapOperands(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getMapOperands();
    }
    AffineMap getAffineMap(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getAffineMap();
    }
    NamedAttribute getAffineMapAttrForMemRef(Operation *tablegen_opaque_op, Value memref) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getAffineMapAttrForMemRef(memref);
    }
  };
};
} // end namespace detail
class AffineReadOpInterface : public OpInterface<AffineReadOpInterface, detail::AffineReadOpInterfaceInterfaceTraits> {
public:
  using OpInterface<AffineReadOpInterface, detail::AffineReadOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct AffineReadOpInterfaceTrait : public OpInterface<AffineReadOpInterface, detail::AffineReadOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  Value getMemRef() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getOperand(op.getMemRefOperandIndex());
        }
  MemRefType getMemRefType() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getMemRef().getType().template cast<MemRefType>();
        }
  Operation::operand_range getMapOperands() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return llvm::drop_begin(op.getOperands(), 1);
        }
  AffineMap getAffineMap() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getAffineMapAttr().getValue();
        }
  NamedAttribute getAffineMapAttrForMemRef(Value memref) {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        assert(memref == getMemRef());
        return {Identifier::get(op.getMapAttrName(), op.getContext()),
                op.getAffineMapAttr()};
        }
  };
    template <typename ConcreteOp>
    struct Trait : public AffineReadOpInterfaceTrait<ConcreteOp> {};
  Value getMemRef();
  MemRefType getMemRefType();
  Operation::operand_range getMapOperands();
  AffineMap getAffineMap();
  NamedAttribute getAffineMapAttrForMemRef(Value memref);
};
namespace detail {
struct AffineWriteOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual Value getMemRef(Operation *tablegen_opaque_op) = 0;
    virtual MemRefType getMemRefType(Operation *tablegen_opaque_op) = 0;
    virtual Operation::operand_range getMapOperands(Operation *tablegen_opaque_op) = 0;
    virtual AffineMap getAffineMap(Operation *tablegen_opaque_op) = 0;
    virtual NamedAttribute getAffineMapAttrForMemRef(Operation *tablegen_opaque_op, Value memref) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    Value getMemRef(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getMemRef();
    }
    MemRefType getMemRefType(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getMemRefType();
    }
    Operation::operand_range getMapOperands(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getMapOperands();
    }
    AffineMap getAffineMap(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getAffineMap();
    }
    NamedAttribute getAffineMapAttrForMemRef(Operation *tablegen_opaque_op, Value memref) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getAffineMapAttrForMemRef(memref);
    }
  };
};
} // end namespace detail
class AffineWriteOpInterface : public OpInterface<AffineWriteOpInterface, detail::AffineWriteOpInterfaceInterfaceTraits> {
public:
  using OpInterface<AffineWriteOpInterface, detail::AffineWriteOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct AffineWriteOpInterfaceTrait : public OpInterface<AffineWriteOpInterface, detail::AffineWriteOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  Value getMemRef() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getOperand(op.getMemRefOperandIndex());
        }
  MemRefType getMemRefType() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getMemRef().getType().template cast<MemRefType>();
        }
  Operation::operand_range getMapOperands() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return llvm::drop_begin(op.getOperands(), 2);
        }
  AffineMap getAffineMap() {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getAffineMapAttr().getValue();
        }
  NamedAttribute getAffineMapAttrForMemRef(Value memref) {

        ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        assert(memref == getMemRef());
        return {Identifier::get(op.getMapAttrName(), op.getContext()),
                op.getAffineMapAttr()};
        }
  };
    template <typename ConcreteOp>
    struct Trait : public AffineWriteOpInterfaceTrait<ConcreteOp> {};
  Value getMemRef();
  MemRefType getMemRefType();
  Operation::operand_range getMapOperands();
  AffineMap getAffineMap();
  NamedAttribute getAffineMapAttrForMemRef(Value memref);
};
