/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace spirv {
EntryPointABIAttr EntryPointABIAttr::get(
    DenseIntElementsAttr local_size,
    mlir::MLIRContext* context) {
  llvm::SmallVector<mlir::NamedAttribute, 1> fields;

  assert(local_size);
  auto local_size_id = mlir::Identifier::get("local_size", context);
  fields.emplace_back(local_size_id, local_size);

  Attribute dict = mlir::DictionaryAttr::get(fields, context);
  return dict.dyn_cast<EntryPointABIAttr>();
}

bool EntryPointABIAttr::classof(mlir::Attribute attr) {
  if (!attr)
    return false;
  auto derived = attr.dyn_cast<mlir::DictionaryAttr>();
  if (!derived)
    return false;
  int empty_optionals = 0;

  auto local_size = derived.get("local_size");
  if (!local_size || !(((local_size.isa<DenseIntElementsAttr>())) && ((local_size.cast<DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(32)))))
    return false;

  return derived.size() + empty_optionals == 1;
}

DenseIntElementsAttr EntryPointABIAttr::local_size() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto local_size = derived.get("local_size");
  assert(local_size && "attribute not found.");
  assert(local_size.isa<DenseIntElementsAttr>() && "incorrect Attribute type found.");
  return local_size.cast<DenseIntElementsAttr>();
}
} // namespace spirv
namespace spirv {
ResourceLimitsAttr ResourceLimitsAttr::get(
    IntegerAttr max_compute_workgroup_invocations,
    DenseIntElementsAttr max_compute_workgroup_size,
    mlir::MLIRContext* context) {
  llvm::SmallVector<mlir::NamedAttribute, 2> fields;

  assert(max_compute_workgroup_invocations);
  auto max_compute_workgroup_invocations_id = mlir::Identifier::get("max_compute_workgroup_invocations", context);
  fields.emplace_back(max_compute_workgroup_invocations_id, max_compute_workgroup_invocations);

  assert(max_compute_workgroup_size);
  auto max_compute_workgroup_size_id = mlir::Identifier::get("max_compute_workgroup_size", context);
  fields.emplace_back(max_compute_workgroup_size_id, max_compute_workgroup_size);

  Attribute dict = mlir::DictionaryAttr::get(fields, context);
  return dict.dyn_cast<ResourceLimitsAttr>();
}

bool ResourceLimitsAttr::classof(mlir::Attribute attr) {
  if (!attr)
    return false;
  auto derived = attr.dyn_cast<mlir::DictionaryAttr>();
  if (!derived)
    return false;
  int empty_optionals = 0;

  auto max_compute_workgroup_invocations = derived.get("max_compute_workgroup_invocations");
  if (!max_compute_workgroup_invocations || !(((max_compute_workgroup_invocations.isa<IntegerAttr>())) && ((max_compute_workgroup_invocations.cast<IntegerAttr>().getType().isSignlessInteger(32)))))
    return false;

  auto max_compute_workgroup_size = derived.get("max_compute_workgroup_size");
  if (!max_compute_workgroup_size || !(((max_compute_workgroup_size.isa<DenseIntElementsAttr>())) && ((max_compute_workgroup_size.cast<DenseIntElementsAttr>().getType().getElementType().isSignlessInteger(32)))))
    return false;

  return derived.size() + empty_optionals == 2;
}

IntegerAttr ResourceLimitsAttr::max_compute_workgroup_invocations() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto max_compute_workgroup_invocations = derived.get("max_compute_workgroup_invocations");
  assert(max_compute_workgroup_invocations && "attribute not found.");
  assert(max_compute_workgroup_invocations.isa<IntegerAttr>() && "incorrect Attribute type found.");
  return max_compute_workgroup_invocations.cast<IntegerAttr>();
}

DenseIntElementsAttr ResourceLimitsAttr::max_compute_workgroup_size() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto max_compute_workgroup_size = derived.get("max_compute_workgroup_size");
  assert(max_compute_workgroup_size && "attribute not found.");
  assert(max_compute_workgroup_size.isa<DenseIntElementsAttr>() && "incorrect Attribute type found.");
  return max_compute_workgroup_size.cast<DenseIntElementsAttr>();
}
} // namespace spirv
