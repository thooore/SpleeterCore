/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Declarations                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace gpu {

// DictionaryAttr with field(s): 'processor', 'map', 'bound' (each field having its own constraints)
class ParallelLoopDimMapping : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static ParallelLoopDimMapping get(
      IntegerAttr processor,
      AffineMapAttr map,
      AffineMapAttr bound,
      mlir::MLIRContext* context);

  IntegerAttr processor() const;
  AffineMapAttr map() const;
  AffineMapAttr bound() const;
};

} // namespace gpu
