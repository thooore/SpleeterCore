/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Operation Interface Definitions                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

StringRef SymbolOpInterface::getName() {
      return getImpl()->getName(getOperation());
  }
void SymbolOpInterface::setName(StringRef name) {
      return getImpl()->setName(getOperation(), name);
  }
mlir::SymbolTable::Visibility SymbolOpInterface::getVisibility() {
      return getImpl()->getVisibility(getOperation());
  }
void SymbolOpInterface::setVisibility(mlir::SymbolTable::Visibility vis) {
      return getImpl()->setVisibility(getOperation(), vis);
  }
bool SymbolOpInterface::isNested() {
      return getImpl()->isNested(getOperation());
  }
bool SymbolOpInterface::isPrivate() {
      return getImpl()->isPrivate(getOperation());
  }
bool SymbolOpInterface::isPublic() {
      return getImpl()->isPublic(getOperation());
  }
Optional<::mlir::SymbolTable::UseRange> SymbolOpInterface::getSymbolUses(Operation * from) {
      return getImpl()->getSymbolUses(getOperation(), from);
  }
bool SymbolOpInterface::symbolKnownUseEmpty(Operation * from) {
      return getImpl()->symbolKnownUseEmpty(getOperation(), from);
  }
LogicalResult SymbolOpInterface::replaceAllSymbolUses(StringRef newSymbol, Operation * from) {
      return getImpl()->replaceAllSymbolUses(getOperation(), newSymbol, from);
  }
bool SymbolOpInterface::isOptionalSymbol() {
      return getImpl()->isOptionalSymbol(getOperation());
  }
bool SymbolOpInterface::canDiscardOnUseEmpty() {
      return getImpl()->canDiscardOnUseEmpty(getOperation());
  }
