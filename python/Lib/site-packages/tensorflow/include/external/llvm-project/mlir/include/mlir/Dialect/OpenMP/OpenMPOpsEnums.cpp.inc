/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace omp {
llvm::StringRef stringifyClauseDefault(ClauseDefault val) {
  switch (val) {
    case ClauseDefault::defprivate: return "defprivate";
    case ClauseDefault::deffirstprivate: return "deffirstprivate";
    case ClauseDefault::defshared: return "defshared";
    case ClauseDefault::defnone: return "defnone";
  }
  return "";
}

llvm::Optional<ClauseDefault> symbolizeClauseDefault(llvm::StringRef str) {
  return llvm::StringSwitch<llvm::Optional<ClauseDefault>>(str)
      .Case("defprivate", ClauseDefault::defprivate)
      .Case("deffirstprivate", ClauseDefault::deffirstprivate)
      .Case("defshared", ClauseDefault::defshared)
      .Case("defnone", ClauseDefault::defnone)
      .Default(llvm::None);
}
} // namespace omp
} // namespace mlir

namespace mlir {
namespace omp {
llvm::StringRef stringifyClauseProcBind(ClauseProcBind val) {
  switch (val) {
    case ClauseProcBind::master: return "master";
    case ClauseProcBind::close: return "close";
    case ClauseProcBind::spread: return "spread";
  }
  return "";
}

llvm::Optional<ClauseProcBind> symbolizeClauseProcBind(llvm::StringRef str) {
  return llvm::StringSwitch<llvm::Optional<ClauseProcBind>>(str)
      .Case("master", ClauseProcBind::master)
      .Case("close", ClauseProcBind::close)
      .Case("spread", ClauseProcBind::spread)
      .Default(llvm::None);
}
} // namespace omp
} // namespace mlir

