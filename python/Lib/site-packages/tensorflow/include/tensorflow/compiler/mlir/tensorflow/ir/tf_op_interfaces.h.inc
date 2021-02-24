/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Declarations                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct FoldOperandsTransposeInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual SmallVector<unsigned, 4> GetLayoutDependentArgs(Operation *tablegen_opaque_op) = 0;
    virtual SmallVector<unsigned, 4> GetLayoutDependentResults(Operation *tablegen_opaque_op) = 0;
    virtual LogicalResult FoldOperandsPermutation(Operation *tablegen_opaque_op, ArrayRef<int64_t> permutation) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    SmallVector<unsigned, 4> GetLayoutDependentArgs(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.GetLayoutDependentArgs();
    }
    SmallVector<unsigned, 4> GetLayoutDependentResults(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.GetLayoutDependentResults();
    }
    LogicalResult FoldOperandsPermutation(Operation *tablegen_opaque_op, ArrayRef<int64_t> permutation) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.FoldOperandsPermutation(permutation);
    }
  };
};
} // end namespace detail
class FoldOperandsTransposeInterface : public OpInterface<FoldOperandsTransposeInterface, detail::FoldOperandsTransposeInterfaceInterfaceTraits> {
public:
  using OpInterface<FoldOperandsTransposeInterface, detail::FoldOperandsTransposeInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct FoldOperandsTransposeInterfaceTrait : public OpInterface<FoldOperandsTransposeInterface, detail::FoldOperandsTransposeInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    static LogicalResult verifyTrait(Operation* op) {

    return VerifyFoldOperandsTransposeInterface(op);
  
  }
  };
    template <typename ConcreteOp>
    struct Trait : public FoldOperandsTransposeInterfaceTrait<ConcreteOp> {};
  SmallVector<unsigned, 4> GetLayoutDependentArgs();
  SmallVector<unsigned, 4> GetLayoutDependentResults();
  LogicalResult FoldOperandsPermutation(ArrayRef<int64_t> permutation);
};
namespace detail {
struct LayoutSensitiveInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual StringRef data_format(Operation *tablegen_opaque_op) = 0;
    virtual SmallVector<unsigned, 4> GetLayoutDependentArgs(Operation *tablegen_opaque_op) = 0;
    virtual SmallVector<unsigned, 4> GetLayoutDependentResults(Operation *tablegen_opaque_op) = 0;
    virtual StringRef GetOptimalLayout(Operation *tablegen_opaque_op, const RuntimeDevices& devices) = 0;
    virtual LogicalResult UpdateDataFormat(Operation *tablegen_opaque_op, StringRef data_format) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    StringRef data_format(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.data_format();
    }
    SmallVector<unsigned, 4> GetLayoutDependentArgs(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.GetLayoutDependentArgs();
    }
    SmallVector<unsigned, 4> GetLayoutDependentResults(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.GetLayoutDependentResults();
    }
    StringRef GetOptimalLayout(Operation *tablegen_opaque_op, const RuntimeDevices& devices) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.GetOptimalLayout(devices);
    }
    LogicalResult UpdateDataFormat(Operation *tablegen_opaque_op, StringRef data_format) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.UpdateDataFormat(data_format);
    }
  };
};
} // end namespace detail
class LayoutSensitiveInterface : public OpInterface<LayoutSensitiveInterface, detail::LayoutSensitiveInterfaceInterfaceTraits> {
public:
  using OpInterface<LayoutSensitiveInterface, detail::LayoutSensitiveInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct LayoutSensitiveInterfaceTrait : public OpInterface<LayoutSensitiveInterface, detail::LayoutSensitiveInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    static LogicalResult verifyTrait(Operation* op) {

    return VerifyLayoutSensitiveInterface(op);
  
  }
  };
    template <typename ConcreteOp>
    struct Trait : public LayoutSensitiveInterfaceTrait<ConcreteOp> {};
  StringRef data_format();
  SmallVector<unsigned, 4> GetLayoutDependentArgs();
  SmallVector<unsigned, 4> GetLayoutDependentResults();
  StringRef GetOptimalLayout(const RuntimeDevices& devices);
  LogicalResult UpdateDataFormat(StringRef data_format);
};
