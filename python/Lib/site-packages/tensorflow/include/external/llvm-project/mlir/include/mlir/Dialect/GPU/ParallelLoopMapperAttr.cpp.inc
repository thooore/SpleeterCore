/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Definitions                                                 *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace gpu {
ParallelLoopDimMapping ParallelLoopDimMapping::get(
    IntegerAttr processor,
    AffineMapAttr map,
    AffineMapAttr bound,
    mlir::MLIRContext* context) {
  llvm::SmallVector<mlir::NamedAttribute, 3> fields;

  assert(processor);
  auto processor_id = mlir::Identifier::get("processor", context);
  fields.emplace_back(processor_id, processor);

  assert(map);
  auto map_id = mlir::Identifier::get("map", context);
  fields.emplace_back(map_id, map);

  assert(bound);
  auto bound_id = mlir::Identifier::get("bound", context);
  fields.emplace_back(bound_id, bound);

  Attribute dict = mlir::DictionaryAttr::get(fields, context);
  return dict.dyn_cast<ParallelLoopDimMapping>();
}

bool ParallelLoopDimMapping::classof(mlir::Attribute attr) {
  if (!attr)
    return false;
  auto derived = attr.dyn_cast<mlir::DictionaryAttr>();
  if (!derived)
    return false;
  int empty_optionals = 0;

  auto processor = derived.get("processor");
  if (!processor || !((((processor.isa<IntegerAttr>())) && ((processor.cast<IntegerAttr>().getType().isSignlessInteger(64)))) && (((processor.cast<IntegerAttr>().getInt() == 0)) || ((processor.cast<IntegerAttr>().getInt() == 1)) || ((processor.cast<IntegerAttr>().getInt() == 2)) || ((processor.cast<IntegerAttr>().getInt() == 3)) || ((processor.cast<IntegerAttr>().getInt() == 4)) || ((processor.cast<IntegerAttr>().getInt() == 5)) || ((processor.cast<IntegerAttr>().getInt() == 6)))))
    return false;

  auto map = derived.get("map");
  if (!map || !((map.isa<AffineMapAttr>())))
    return false;

  auto bound = derived.get("bound");
  if (!bound || !((bound.isa<AffineMapAttr>())))
    return false;

  return derived.size() + empty_optionals == 3;
}

IntegerAttr ParallelLoopDimMapping::processor() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto processor = derived.get("processor");
  assert(processor && "attribute not found.");
  assert(processor.isa<IntegerAttr>() && "incorrect Attribute type found.");
  return processor.cast<IntegerAttr>();
}

AffineMapAttr ParallelLoopDimMapping::map() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto map = derived.get("map");
  assert(map && "attribute not found.");
  assert(map.isa<AffineMapAttr>() && "incorrect Attribute type found.");
  return map.cast<AffineMapAttr>();
}

AffineMapAttr ParallelLoopDimMapping::bound() const {
  auto derived = this->cast<mlir::DictionaryAttr>();
  auto bound = derived.get("bound");
  assert(bound && "attribute not found.");
  assert(bound.isa<AffineMapAttr>() && "incorrect Attribute type found.");
  return bound.cast<AffineMapAttr>();
}
} // namespace gpu
