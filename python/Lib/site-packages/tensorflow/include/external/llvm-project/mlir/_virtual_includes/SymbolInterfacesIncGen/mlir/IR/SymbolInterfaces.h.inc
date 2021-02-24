/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Declarations                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct SymbolOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual StringRef getName(Operation *tablegen_opaque_op) = 0;
    virtual void setName(Operation *tablegen_opaque_op, StringRef name) = 0;
    virtual mlir::SymbolTable::Visibility getVisibility(Operation *tablegen_opaque_op) = 0;
    virtual void setVisibility(Operation *tablegen_opaque_op, mlir::SymbolTable::Visibility vis) = 0;
    virtual bool isNested(Operation *tablegen_opaque_op) = 0;
    virtual bool isPrivate(Operation *tablegen_opaque_op) = 0;
    virtual bool isPublic(Operation *tablegen_opaque_op) = 0;
    virtual Optional<::mlir::SymbolTable::UseRange> getSymbolUses(Operation *tablegen_opaque_op, Operation * from) = 0;
    virtual bool symbolKnownUseEmpty(Operation *tablegen_opaque_op, Operation * from) = 0;
    virtual LogicalResult replaceAllSymbolUses(Operation *tablegen_opaque_op, StringRef newSymbol, Operation * from) = 0;
    virtual bool isOptionalSymbol(Operation *tablegen_opaque_op) = 0;
    virtual bool canDiscardOnUseEmpty(Operation *tablegen_opaque_op) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    StringRef getName(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;

        // Don't rely on the trait implementation as optional symbol operations
        // may override this.
        return mlir::SymbolTable::getSymbolName(op);
      
    }
    void setName(Operation *tablegen_opaque_op, StringRef name) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.setName(name);
    }
    mlir::SymbolTable::Visibility getVisibility(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getVisibility();
    }
    void setVisibility(Operation *tablegen_opaque_op, mlir::SymbolTable::Visibility vis) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.setVisibility(vis);
    }
    bool isNested(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.isNested();
    }
    bool isPrivate(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.isPrivate();
    }
    bool isPublic(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.isPublic();
    }
    Optional<::mlir::SymbolTable::UseRange> getSymbolUses(Operation *tablegen_opaque_op, Operation * from) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.getSymbolUses(from);
    }
    bool symbolKnownUseEmpty(Operation *tablegen_opaque_op, Operation * from) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.symbolKnownUseEmpty(from);
    }
    LogicalResult replaceAllSymbolUses(Operation *tablegen_opaque_op, StringRef newSymbol, Operation * from) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.replaceAllSymbolUses(newSymbol, from);
    }
    bool isOptionalSymbol(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.isOptionalSymbol();
    }
    bool canDiscardOnUseEmpty(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.canDiscardOnUseEmpty();
    }
  };
};
} // end namespace detail
class SymbolOpInterface : public OpInterface<SymbolOpInterface, detail::SymbolOpInterfaceInterfaceTraits> {
public:
  using OpInterface<SymbolOpInterface, detail::SymbolOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct SymbolOpInterfaceTrait : public OpInterface<SymbolOpInterface, detail::SymbolOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  StringRef getName() {

        return mlir::SymbolTable::getSymbolName(this->getOperation());
        }
  void setName(StringRef name) {

        this->getOperation()->setAttr(
            mlir::SymbolTable::getSymbolAttrName(),
            StringAttr::get(name, this->getOperation()->getContext()));
        }
  mlir::SymbolTable::Visibility getVisibility() {

        return mlir::SymbolTable::getSymbolVisibility(this->getOperation());
        }
  void setVisibility(mlir::SymbolTable::Visibility vis) {

        mlir::SymbolTable::setSymbolVisibility(this->getOperation(), vis);
        }
  bool isNested() {

        return getVisibility() == mlir::SymbolTable::Visibility::Nested;
        }
  bool isPrivate() {

        return getVisibility() == mlir::SymbolTable::Visibility::Private;
        }
  bool isPublic() {

        return getVisibility() == mlir::SymbolTable::Visibility::Public;
        }
  Optional<::mlir::SymbolTable::UseRange> getSymbolUses(Operation * from) {

        return ::mlir::SymbolTable::getSymbolUses(this->getOperation(), from);
        }
  bool symbolKnownUseEmpty(Operation * from) {

        return ::mlir::SymbolTable::symbolKnownUseEmpty(this->getOperation(),
                                                        from);
        }
  LogicalResult replaceAllSymbolUses(StringRef newSymbol, Operation * from) {

        return ::mlir::SymbolTable::replaceAllSymbolUses(this->getOperation(),
                                                         newSymbol, from);
        }
  bool isOptionalSymbol() {
 return false;   }
  bool canDiscardOnUseEmpty() {

        // By default, base this on the visibility alone. A symbol can be
        // discarded as long as it is not public. Only public symbols may be
        // visible from outside of the IR.
        return getVisibility() != ::mlir::SymbolTable::Visibility::Public;
        }
    static LogicalResult verifyTrait(Operation* op) {

    // If this is an optional symbol, bail out early if possible.
    auto concreteOp = cast<ConcreteOp>(op);
    if (concreteOp.isOptionalSymbol()) {
      if(!concreteOp.getAttr(::mlir::SymbolTable::getSymbolAttrName()))
        return success();
    }
    return ::mlir::detail::verifySymbol(op);
  
  }

    using Visibility = mlir::SymbolTable::Visibility;
  
  };
    template <typename ConcreteOp>
    struct Trait : public SymbolOpInterfaceTrait<ConcreteOp> {};
  StringRef getName();
  void setName(StringRef name);
  mlir::SymbolTable::Visibility getVisibility();
  void setVisibility(mlir::SymbolTable::Visibility vis);
  bool isNested();
  bool isPrivate();
  bool isPublic();
  Optional<::mlir::SymbolTable::UseRange> getSymbolUses(Operation * from);
  bool symbolKnownUseEmpty(Operation * from);
  LogicalResult replaceAllSymbolUses(StringRef newSymbol, Operation * from);
  bool isOptionalSymbol();
  bool canDiscardOnUseEmpty();

    /// Custom classof that handles the case where the symbol is optional.
    static bool classof(Operation *op) {
      return Base::classof(op)
        && op->getAttr(::mlir::SymbolTable::getSymbolAttrName());
    }
  
};
