/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Declarations                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace spirv {

// DictionaryAttr with field(s): 'local_size' (each field having its own constraints)
class EntryPointABIAttr : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static EntryPointABIAttr get(
      DenseIntElementsAttr local_size,
      mlir::MLIRContext* context);

  DenseIntElementsAttr local_size() const;
};

} // namespace spirv
namespace spirv {

// DictionaryAttr with field(s): 'max_compute_workgroup_invocations', 'max_compute_workgroup_size' (each field having its own constraints)
class ResourceLimitsAttr : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static ResourceLimitsAttr get(
      IntegerAttr max_compute_workgroup_invocations,
      DenseIntElementsAttr max_compute_workgroup_size,
      mlir::MLIRContext* context);

  IntegerAttr max_compute_workgroup_invocations() const;
  DenseIntElementsAttr max_compute_workgroup_size() const;
};

} // namespace spirv
