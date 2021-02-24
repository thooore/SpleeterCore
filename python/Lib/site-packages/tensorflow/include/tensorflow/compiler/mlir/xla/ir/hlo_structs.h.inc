/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Declarations                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace xla_hlo {

// Structure of dimension information for conv op
class ConvDimensionNumbers : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static ConvDimensionNumbers get(
      IntegerAttr input_batch_dimension,
      IntegerAttr input_feature_dimension,
      DenseIntElementsAttr input_spatial_dimensions,
      IntegerAttr kernel_input_feature_dimension,
      IntegerAttr kernel_output_feature_dimension,
      DenseIntElementsAttr kernel_spatial_dimensions,
      IntegerAttr output_batch_dimension,
      IntegerAttr output_feature_dimension,
      DenseIntElementsAttr output_spatial_dimensions,
      mlir::MLIRContext* context);

  IntegerAttr input_batch_dimension() const;
  IntegerAttr input_feature_dimension() const;
  DenseIntElementsAttr input_spatial_dimensions() const;
  IntegerAttr kernel_input_feature_dimension() const;
  IntegerAttr kernel_output_feature_dimension() const;
  DenseIntElementsAttr kernel_spatial_dimensions() const;
  IntegerAttr output_batch_dimension() const;
  IntegerAttr output_feature_dimension() const;
  DenseIntElementsAttr output_spatial_dimensions() const;
};

} // namespace xla_hlo
namespace xla_hlo {

// Structure of dimension information for dot product
class DotDimensionNumbers : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static DotDimensionNumbers get(
      DenseIntElementsAttr lhs_batching_dimensions,
      DenseIntElementsAttr rhs_batching_dimensions,
      DenseIntElementsAttr lhs_contracting_dimensions,
      DenseIntElementsAttr rhs_contracting_dimensions,
      mlir::MLIRContext* context);

  DenseIntElementsAttr lhs_batching_dimensions() const;
  DenseIntElementsAttr rhs_batching_dimensions() const;
  DenseIntElementsAttr lhs_contracting_dimensions() const;
  DenseIntElementsAttr rhs_contracting_dimensions() const;
};

} // namespace xla_hlo
namespace xla_hlo {

// Structure of dimension information for gather
class GatherDimensionNumbers : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static GatherDimensionNumbers get(
      DenseIntElementsAttr offset_dims,
      DenseIntElementsAttr collapsed_slice_dims,
      DenseIntElementsAttr start_index_map,
      IntegerAttr index_vector_dim,
      mlir::MLIRContext* context);

  DenseIntElementsAttr offset_dims() const;
  DenseIntElementsAttr collapsed_slice_dims() const;
  DenseIntElementsAttr start_index_map() const;
  IntegerAttr index_vector_dim() const;
};

} // namespace xla_hlo
namespace xla_hlo {

// two 64-bit integers 'handle' and 'type'
class ChannelHandle : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static ChannelHandle get(
      IntegerAttr handle,
      IntegerAttr type,
      mlir::MLIRContext* context);

  IntegerAttr handle() const;
  IntegerAttr type() const;
};

} // namespace xla_hlo
namespace xla_hlo {

// Structure of dimension information for scatter
class ScatterDimensionNumbers : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static ScatterDimensionNumbers get(
      DenseIntElementsAttr update_window_dims,
      DenseIntElementsAttr inserted_window_dims,
      DenseIntElementsAttr scatter_dims_to_operand_dims,
      IntegerAttr index_vector_dim,
      mlir::MLIRContext* context);

  DenseIntElementsAttr update_window_dims() const;
  DenseIntElementsAttr inserted_window_dims() const;
  DenseIntElementsAttr scatter_dims_to_operand_dims() const;
  IntegerAttr index_vector_dim() const;
};

} // namespace xla_hlo
