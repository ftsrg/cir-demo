#pragma once

#include <mlir/IR/Operation.h>
#include <mlir/IR/BuiltinOps.h>
#include <mlir/IR/Builders.h>

#include <ostream>
#include <memory>
#include <string>
#include <functional>

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
  Mapper(bool bestEffort = false);

  /// Register a handler for an operation name, e.g. "cir.alloca".
  void registerHandler(llvm::StringRef opName, std::unique_ptr<OpHandler> handler);

  /// Register a typed handler for a generated op class. The provided callable
  /// should accept (OpTy op, Mapper &m, std::ostream &out) and return bool.
  /// This convenience wraps the typed handler into an OpHandler that performs
  /// a dyn_cast and forwards the call.
  template <typename OpTy, typename Fn>
  void registerTypedHandler(llvm::StringRef opName, Fn &&fn) {
    struct Wrapper : OpHandler {
      std::function<bool(mlir::Operation *, Mapper &, std::ostream &)> f;
      Wrapper(std::function<bool(mlir::Operation *, Mapper &, std::ostream &)> &&f) : f(std::move(f)) {}
      bool handle(mlir::Operation *op, Mapper &m, std::ostream &out) override { return f(op, m, out); }
    };

    auto wrapperFn = [fn = std::forward<Fn>(fn)](mlir::Operation *op, Mapper &m, std::ostream &out) -> bool {
      if (auto specific = llvm::dyn_cast<OpTy>(op)) {
        return fn(specific, m, out);
      }
      return false;
    };

    registerHandler(opName, std::make_unique<Wrapper>(std::move(wrapperFn)));
  }

  /// Map a single function. Returns true on success, false on unrecoverable error.
  bool mapFunc(mlir::Operation *fop, std::ostream &out);

  /// Map an MLIR module to a C program written to `out`.
  bool mapModule(mlir::ModuleOp module, std::ostream &out);

  /// Helpers for handlers
  std::string freshName(llvm::StringRef base = "v");

  /// Map an mlir::Value to a C identifier (creates when missing).
  std::string getOrCreateName(mlir::Value v);
  /// Force-set the C identifier for a Value.
  void setName(mlir::Value v, const std::string &name);

  /// Map an MLIR type to a C type string. This provides a central place for
  /// converting common MLIR types (e.g., integer widths and floats) into
  /// simple C declarations used by handlers.
  std::string mapTypeToC(mlir::Type t) const;

  /// Prepare function output names for the module: attempt to demangle
  /// symbol names and pick a demangled name when it is unique. If multiple
  /// symbols demangle to the same identifier, the mangled names are kept to
  /// avoid collisions.
  void prepareFunctionNames(mlir::ModuleOp module);

  /// Get the chosen output name for a mangled symbol (after prepareFunctionNames).
  std::string getFunctionOutputName(llvm::StringRef mangled) const;

private:
  bool bestEffort;
  std::unordered_map<std::string, std::unique_ptr<OpHandler>> handlers;
  llvm::DenseMap<mlir::Value, std::string> valueNames;
  llvm::DenseMap<mlir::Block *, std::string> blockLabels;
  unsigned counter;
  // Mapping from original (mangled) symbol -> chosen output name
  std::unordered_map<std::string, std::string> functionOutputNames;

public:
  /// Get or create a label name for a block.
  std::string getOrCreateLabel(mlir::Block *b);
  
  /// When true, tolerate missing/exact matches and continue mapping with
  /// generated fallbacks; when false mapping will fail on missing exact data.
  bool isBestEffort() const { return bestEffort; }

  void setBestEffort(bool v) { bestEffort = v; }
};

} // namespace xcfa
