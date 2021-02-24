/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace omp {
// default clause
enum class ClauseDefault {
  defprivate,
  deffirstprivate,
  defshared,
  defnone,
};

llvm::StringRef stringifyClauseDefault(ClauseDefault);
llvm::Optional<ClauseDefault> symbolizeClauseDefault(llvm::StringRef);

inline llvm::StringRef stringifyEnum(ClauseDefault enumValue) {
  return stringifyClauseDefault(enumValue);
}

template <typename EnumType>
llvm::Optional<EnumType> symbolizeEnum(llvm::StringRef);

template <>
inline llvm::Optional<ClauseDefault> symbolizeEnum<ClauseDefault>(llvm::StringRef str) {
  return symbolizeClauseDefault(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseDefault> {
  using StorageInfo = llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseDefault>::type>;

  static inline ::mlir::omp::ClauseDefault getEmptyKey() {
    return static_cast<::mlir::omp::ClauseDefault>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseDefault getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseDefault>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseDefault &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseDefault>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseDefault &lhs, const ::mlir::omp::ClauseDefault &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace omp {
// procbind clause
enum class ClauseProcBind {
  master,
  close,
  spread,
};

llvm::StringRef stringifyClauseProcBind(ClauseProcBind);
llvm::Optional<ClauseProcBind> symbolizeClauseProcBind(llvm::StringRef);

inline llvm::StringRef stringifyEnum(ClauseProcBind enumValue) {
  return stringifyClauseProcBind(enumValue);
}

template <typename EnumType>
llvm::Optional<EnumType> symbolizeEnum(llvm::StringRef);

template <>
inline llvm::Optional<ClauseProcBind> symbolizeEnum<ClauseProcBind>(llvm::StringRef str) {
  return symbolizeClauseProcBind(str);
}
} // namespace omp
} // namespace mlir

namespace llvm {
template<> struct DenseMapInfo<::mlir::omp::ClauseProcBind> {
  using StorageInfo = llvm::DenseMapInfo<std::underlying_type<::mlir::omp::ClauseProcBind>::type>;

  static inline ::mlir::omp::ClauseProcBind getEmptyKey() {
    return static_cast<::mlir::omp::ClauseProcBind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::omp::ClauseProcBind getTombstoneKey() {
    return static_cast<::mlir::omp::ClauseProcBind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::omp::ClauseProcBind &val) {
    return StorageInfo::getHashValue(static_cast<std::underlying_type<::mlir::omp::ClauseProcBind>::type>(val));
  }

  static bool isEqual(const ::mlir::omp::ClauseProcBind &lhs, const ::mlir::omp::ClauseProcBind &rhs) {
    return lhs == rhs;
  }
};
}

