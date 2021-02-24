/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Declarations                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace detail {
struct InferFusibilityOpInterfaceInterfaceTraits {
  class Concept {
  public:
    virtual ~Concept() = default;
    virtual bool isFusibleWithOperand(Operation *tablegen_opaque_op) = 0;
    virtual bool isFusibleWithConsumer(Operation *tablegen_opaque_op) = 0;
    virtual bool inferInputsShapeEquality(Operation *tablegen_opaque_op, int lhs, int rhs) = 0;
    virtual bool inferOutputsShapeEquality(Operation *tablegen_opaque_op, int lhs, int rhs) = 0;
    virtual bool inferInputOutputShapeEquality(Operation *tablegen_opaque_op, int input, int output) = 0;
    virtual llvm::Optional<Value> inferEffectiveWorkloadShape(Operation *tablegen_opaque_op) = 0;
  };
  template<typename ConcreteOp>
  class Model : public Concept {
public:
    bool isFusibleWithOperand(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.isFusibleWithOperand();
    }
    bool isFusibleWithConsumer(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.isFusibleWithConsumer();
    }
    bool inferInputsShapeEquality(Operation *tablegen_opaque_op, int lhs, int rhs) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.inferInputsShapeEquality(lhs, rhs);
    }
    bool inferOutputsShapeEquality(Operation *tablegen_opaque_op, int lhs, int rhs) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.inferOutputsShapeEquality(lhs, rhs);
    }
    bool inferInputOutputShapeEquality(Operation *tablegen_opaque_op, int input, int output) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.inferInputOutputShapeEquality(input, output);
    }
    llvm::Optional<Value> inferEffectiveWorkloadShape(Operation *tablegen_opaque_op) final {
      auto op = llvm::cast<ConcreteOp>(tablegen_opaque_op);
      (void)op;
      return op.inferEffectiveWorkloadShape();
    }
  };
};
} // end namespace detail
class InferFusibilityOpInterface : public OpInterface<InferFusibilityOpInterface, detail::InferFusibilityOpInterfaceInterfaceTraits> {
public:
  using OpInterface<InferFusibilityOpInterface, detail::InferFusibilityOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct InferFusibilityOpInterfaceTrait : public OpInterface<InferFusibilityOpInterface, detail::InferFusibilityOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
  bool isFusibleWithOperand() {

        /// Returns whether this op can be fused with its operands
        return true;
        }
  bool isFusibleWithConsumer() {

        /// Return whether this op can be fused withh its consumers
        return true;
        }
  bool inferInputsShapeEquality(int lhs, int rhs) {

        /// Return whether two inputs have the same shape.
        Operation *op = this->getOperation();
        assert(lhs < op->getNumOperands() && lhs >= 0 &&
               rhs < op->getNumOperands() && rhs >= 0);
        if (lhs == rhs) return true;

        // if both lhs and rhs have static shapes, check them directly
        Type lhs_ty = op->getOperand(lhs).getType();
        Type rhs_ty = op->getOperand(rhs).getType();
        auto lhs_shape_type = lhs_ty.dyn_cast_or_null<RankedTensorType>();
        auto rhs_shape_type = rhs_ty.dyn_cast_or_null<RankedTensorType>();
        if (!lhs_shape_type || !lhs_shape_type.hasStaticShape() ||
            !rhs_shape_type || !rhs_shape_type.hasStaticShape() ||
            lhs_shape_type.getRank() != rhs_shape_type.getRank()) {
          return false;
        }
        return lhs_shape_type.getShape() == rhs_shape_type.getShape();
        }
  bool inferOutputsShapeEquality(int lhs, int rhs) {

        /// Return whether two outputs have the same shape.
        Operation *op = this->getOperation();
        assert(lhs < op->getNumResults() && lhs >= 0 &&
               rhs < op->getNumResults() && rhs >= 0);
        if (lhs == rhs) return true;

        // if both lhs and rhs have static shapes, check them directly
        Type lhs_ty = op->getResult(lhs).getType();
        Type rhs_ty = op->getResult(rhs).getType();
        auto lhs_shape_type = lhs_ty.dyn_cast_or_null<RankedTensorType>();
        auto rhs_shape_type = rhs_ty.dyn_cast_or_null<RankedTensorType>();
        if (!lhs_shape_type || !lhs_shape_type.hasStaticShape() ||
            !rhs_shape_type || !rhs_shape_type.hasStaticShape() ||
            lhs_shape_type.getRank() != rhs_shape_type.getRank()) {
          return false;
        }
        return lhs_shape_type.getShape() == rhs_shape_type.getShape();
        }
  bool inferInputOutputShapeEquality(int input, int output) {

        /// Return whether the input and the output have the same shape.
        Operation *op = this->getOperation();
        assert(input < op->getNumOperands() && input >= 0 &&
               output < op->getNumResults() && output >= 0);

        // if both input and output have static shapes, check them directly
        Type input_ty = op->getOperand(input).getType();
        Type output_ty = op->getResult(output).getType();
        auto input_shape_type = input_ty.dyn_cast_or_null<RankedTensorType>();
        auto output_shape_type = output_ty.dyn_cast_or_null<RankedTensorType>();
        if (!input_shape_type || !input_shape_type.hasStaticShape() ||
            !output_shape_type || !output_shape_type.hasStaticShape() ||
            input_shape_type.getRank() != output_shape_type.getRank()) {
          return false;
        }
        return input_shape_type.getShape() == output_shape_type.getShape();
        }
  llvm::Optional<Value> inferEffectiveWorkloadShape() {

        /// Return effective workload size if possible, otherwise None.
        return {};
        }
  };
    template <typename ConcreteOp>
    struct Trait : public InferFusibilityOpInterfaceTrait<ConcreteOp> {};
  bool isFusibleWithOperand();
  bool isFusibleWithConsumer();
  bool inferInputsShapeEquality(int lhs, int rhs);
  bool inferOutputsShapeEquality(int lhs, int rhs);
  bool inferInputOutputShapeEquality(int input, int output);
  llvm::Optional<Value> inferEffectiveWorkloadShape();
};
