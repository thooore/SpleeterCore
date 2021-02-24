/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


class LLVMDialect : public ::mlir::Dialect {
public:
  explicit LLVMDialect(::mlir::MLIRContext *context);
  static ::llvm::StringRef getDialectNamespace() { return "llvm"; }

  /// Parse a type registered to this dialect.
  ::mlir::Type parseType(::mlir::DialectAsmParser &parser) const override;

  /// Print a type registered to this dialect.
  void printType(::mlir::Type type,
                 ::mlir::DialectAsmPrinter &os) const override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op's region argument.
    ::mlir::LogicalResult verifyRegionArgAttribute(
        ::mlir::Operation *op, unsigned regionIndex, unsigned argIndex,
        ::mlir::NamedAttribute attribute) override;

    ~LLVMDialect();
    llvm::LLVMContext &getLLVMContext();
    llvm::Module &getLLVMModule();
    llvm::sys::SmartMutex<true> &getLLVMContextMutex();

  private:
    friend LLVMType;

    std::unique_ptr<detail::LLVMDialectImpl> impl;
  };
