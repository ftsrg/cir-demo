/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "Traceability.h"

#include <mlir/IR/Operation.h>
#include <mlir/IR/BuiltinOps.h>
#include <mlir/IR/Builders.h>

#include <ostream>
#include <memory>
#include <string>
#include <functional>
#include <unordered_map>

#include <llvm/ADT/DenseMap.h>
#include <llvm/ADT/DenseSet.h>
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
  /// The operation name is derived automatically from OpTy::getOperationName().
  template <typename OpTy, typename Fn>
  void registerTypedHandler(Fn &&fn) {
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

    registerHandler(OpTy::getOperationName(), std::make_unique<Wrapper>(std::move(wrapperFn)));
  }

  /// Map a single function. Returns true on success, false on unrecoverable error.
  bool mapFunc(mlir::Operation *fop, std::ostream &out);

  /// Map a single operation using the registered handlers.
  bool mapOperation(mlir::Operation *op, std::ostream &out);

  /// Map a global variable. Returns true on success, false on unrecoverable error.
  bool mapGlobal(mlir::Operation *gop, std::ostream &out);

  /// Map an MLIR module to a C program written to `out`.
  bool mapModule(mlir::ModuleOp module, std::ostream &out);

  /// Print operation monitoring report.
  /// "Ignored" means the operation was not handled during mapping,
  /// or it was registered but never visited.
  void printMonitorReport(std::ostream &out) const;

  /// Emit operation trace as JSON for machine consumption.
  void writeMonitorJson(std::ostream &out) const;

  /// Compute per-entry MLIR/C line mappings using generated texts.
  void computeTraceLineMappings(llvm::StringRef mlirText, llvm::StringRef cText);

  /// Helpers for handlers
  std::string freshName(llvm::StringRef base = "v");

  /// Map an mlir::Value to a C identifier (creates when missing).
  std::string getOrCreateName(mlir::Value v);
  /// Force-set the C identifier for a Value.
  void setName(mlir::Value v, const std::string &name);
  
  /// Mark a value as being a "direct access" pointer (from alloca).
  /// These don't need dereferencing in load/store.
  void markAsDirectAccess(mlir::Value v);
  /// Check if a value is marked as direct access.
  bool isDirectAccess(mlir::Value v) const;

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
  
  /// Sanitize a string to be a valid C identifier by replacing invalid
  /// characters with underscores.
  static std::string sanitizeIdentifier(const std::string &s);

private:
  bool bestEffort;
  std::unordered_map<std::string, std::unique_ptr<OpHandler>> handlers;
  TraceabilityTracker traceability;
  llvm::DenseMap<mlir::Value, std::string> valueNames;
  llvm::DenseMap<mlir::Block *, std::string> blockLabels;
  llvm::DenseSet<mlir::Value> directAccessValues;
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
