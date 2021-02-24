/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Struct Utility Declarations                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace TF {

// DictionaryAttr with field(s): 'cc_major', 'cc_minor' (each field having its own constraints)
class GpuDeviceMetadata : public mlir::DictionaryAttr {
public:
  using DictionaryAttr::DictionaryAttr;
  static bool classof(mlir::Attribute attr);
  static GpuDeviceMetadata get(
      IntegerAttr cc_major,
      IntegerAttr cc_minor,
      mlir::MLIRContext* context);

  IntegerAttr cc_major() const;
  IntegerAttr cc_minor() const;
};

} // namespace TF
