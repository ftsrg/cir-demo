#pragma once

#include <mlir/IR/Operation.h>
#include <mlir/IR/BuiltinOps.h>
#include <mlir/IR/Builders.h>

#include <ostream>
#include <memory>
#include <string>

#include <llvm/ADT/DenseMap.h>
#include <llvm/ADT/StringRef.h>

namespace mlir {
class Block;
}

namespace xcfa {

class Mapper;

/// Base class for handling a single MLIR operation and emitting C code.
class OpHandler {
public:
  virtual ~OpHandler() = default;
  /// Handle `op`. Return true if handled and no further generic processing is needed.
  virtual bool handle(mlir::Operation *op, Mapper &m, std::ostream &out) = 0;
};

/// The central Mapper: holds mapping state and dispatches ops to handlers.
class Mapper {
public:
  Mapper();

  /// Register a handler for an operation name, e.g. "cir.alloca".
  void registerHandler(llvm::StringRef opName, std::unique_ptr<OpHandler> handler);

  /// Map an MLIR module to a C program written to `out`.
  bool mapModule(mlir::ModuleOp module, std::ostream &out);

  /// Helpers for handlers
  std::string freshName(llvm::StringRef base = "v");

  /// Map an mlir::Value to a C identifier (creates when missing).
  std::string getOrCreateName(mlir::Value v);
  /// Force-set the C identifier for a Value.
  void setName(mlir::Value v, const std::string &name);

private:
  std::unordered_map<std::string, std::unique_ptr<OpHandler>> handlers;
  llvm::DenseMap<mlir::Value, std::string> valueNames;
  llvm::DenseMap<mlir::Block *, std::string> blockLabels;
  unsigned counter;

public:
  /// Get or create a label name for a block.
  std::string getOrCreateLabel(mlir::Block *b);
};

} // namespace xcfa
