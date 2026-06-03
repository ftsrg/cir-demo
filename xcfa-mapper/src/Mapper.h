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
#include <set>
#include <string>
#include <functional>
#include <unordered_map>
#include <unordered_set>
#include <vector>

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
  Mapper();

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

  /// Emit a forward declaration (prototype) for a function definition.
  /// Uses parameter types only; does not assign value names.
  bool emitFuncForwardDecl(mlir::Operation *fop, std::ostream &out);

  /// Emit `extern void *malloc(unsigned long);` and `extern void free(void*);`
  /// at most once. Called before emitting an operator new/delete stub whose
  /// synthesised body calls malloc/free, in case the CIR module itself never
  /// declared them.
  void ensureMallocFreeDeclared(std::ostream &out);

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

  /// Record the canonical C field name chosen for a struct/union member at a
  /// given index (the first name seen wins, matching the struct emitter's
  /// dedup). Used so that bitfields sharing a storage member all resolve to
  /// that member's emitted name.
  void recordFieldName(const std::string &recordName, int index,
                       const std::string &fieldName);

  /// Look up the canonical C field name for (recordName, index). Returns an
  /// empty string when unknown.
  std::string lookupFieldName(const std::string &recordName, int index) const;

  /// Peel off any nested cir::ArrayType layers from `t`, returning the base
  /// (non-array) C type and appending each dimension as "[N]" to `dimsOut`
  /// in outer->inner order. For a scalar type, dimsOut is left empty and the
  /// scalar C type is returned. Example: !cir.array<!cir.array<f64 x 3> x 8>
  /// yields base "double" and dimsOut "[8][3]".
  std::string arrayBaseTypeAndDims(mlir::Type t, std::string &dimsOut) const;

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

  /// Convert a C type string (as returned by mapTypeToC) into a short
  /// identifier suffix suitable for __VERIFIER_virtual_call_<suffix>.
  /// E.g. "int" -> "int", "long long" -> "long_long", "void*" -> "void_ptr".
  static std::string virtualCallTypeSuffix(const std::string &ctype);

private:
  bool structsEmitted = false;
  bool ehPreambleEmitted = false;
  std::unordered_map<std::string, std::unique_ptr<OpHandler>> handlers;
  TraceabilityTracker traceability;
  llvm::DenseMap<mlir::Value, std::string> valueNames;
  llvm::DenseMap<mlir::Block *, std::string> blockLabels;
  llvm::DenseSet<mlir::Value> directAccessValues;
  // Every C identifier handed out (freshName temps + source-derived names from
  // setName). freshName skips anything already here so a generated temp like
  // `c17` cannot collide with a source variable that is literally named `c17`.
  std::unordered_set<std::string> usedNames_;
  unsigned counter;
  // Mapping from original (mangled) symbol -> chosen output name
  std::unordered_map<std::string, std::string> functionOutputNames;

  // Raw symbol names of globals whose every access carries _Atomic / volatile
  // qualifiers (detected by scanning cir.load / cir.store mem_order / is_volatile
  // attributes during the mapModule pre-scan).
  std::set<std::string> atomicGlobalSymbols_;
  std::set<std::string> volatileGlobalSymbols_;
  // Set when at least one cir.trap op is present; triggers emission of
  // `extern void abort(void);` as per SV-COMP conventions.
  bool hasTrap_ = false;
  bool abortDeclEmitted_ = false;
  // Canonical C field name per (record name, member index), so bitfield
  // accesses that share a storage member resolve to the emitted member name.
  std::map<std::string, std::map<int, std::string>> recordFieldNames_;
  // Set once the malloc/free externs needed by synthesised operator
  // new/delete stubs have been emitted, so they appear at most once.
  bool mallocFreeDeclEmitted_ = false;
  // Alloca result Values that are accessed atomically / volatilely.
  llvm::DenseSet<mlir::Value> atomicAllocaValues_;
  llvm::DenseSet<mlir::Value> volatileAllocaValues_;

  // The C name of the last non-variadic parameter of the function currently
  // being mapped.  Set by mapFunc when the function is variadic (isVarArg).
  // Used by handleVAStart to emit the correct second argument to va_start.
  std::string lastVarargParamName_;

  // Vtable dispatch tracking: maps any value in a virtual dispatch chain
  // (result of get_vptr, loaded vptr, get_virtual_fn_addr result, loaded
  // fn ptr) back to the original object pointer operand.
  llvm::DenseMap<mlir::Value, mlir::Value> vtableDispatchChain;
  // Set of SSA values that are final virtual function pointers (loaded from
  // get_virtual_fn_addr result) and should trigger __VERIFIER_virtual_call
  // when used as a callee in cir.call.
  llvm::DenseSet<mlir::Value> virtualFnPtrSet;
  bool anyVirtualCalls_ = false;
  // Maps a virtual fn-ptr SSA value to a human-readable label that identifies
  // which virtual function slot is being called (e.g. "ClassName::method(args)").
  llvm::DenseMap<mlir::Value, std::string> virtualFnLabels_;

  // ── Vtable layout dump data (populated from --vtlayout file) ─────────────
  // class_name → [slot0_label, slot1_label, ...]
  // Labels are "ClassName::method(args)" matching __VERIFIER_virtual_call labels.
  // TODO(multi-TU): currently populated from a single TU's layout dump; when
  //   extending to multi-TU builds, all TU dumps must be merged before
  //   populating this map.
  std::map<std::string, std::vector<std::string>> vtableIndexMap_;

  // class_name → [direct_base_class_names, ...]
  // Derived from "-- (Base, offset) vtable address --" lines in the dump.
  std::map<std::string, std::vector<std::string>> classHierarchy_;

  // Exception handling: set if any cir.try / cir.throw / cir.try_call /
  // cir.eh.* op was seen in the module.  Drives emission of the EH state
  // preamble (`__cir_exc_*` globals + per-type-info string literals).
  bool hasExceptions_ = false;
  // Set of RTTI symbols referenced from throws and catches.  We emit one
  // distinct `static const char __cir_eh_type_<sym>[]` per symbol so the
  // generated C can compare exception types by address.
  std::set<std::string> ehTypeSymbols_;
  // Stack of landing-pad labels for the currently open structured cir.try
  // bodies (innermost on top).  When a cir.throw fires inside a try body it
  // jumps to the top-of-stack label instead of returning, so the enclosing
  // try's dispatch can run.  Empty when no try is open in the current
  // function; in that case throw / resume must propagate via return.
  std::vector<std::string> tryLandingPadStack_;

  // ── Cleanup (RAII destructor) stack ────────────────────────────────────
  // Each entry is the cleanup region (region 1) of an enclosing
  // cir.cleanup.scope whose body is currently being emitted.  The innermost
  // (most recently pushed) entry is at the back.  Also stores the loop
  // nesting depth at the time of the push so break/continue know which
  // cleanups they cross.
  struct CleanupEntry {
    mlir::Region *region;  // region 1 of the cir.cleanup.scope
    int loopDepth;         // loop nesting depth when this cleanup was pushed
  };
  std::vector<CleanupEntry> cleanupStack_;
  // Cleanup regions that have already been emitted by emitPendingCleanups
  // (e.g. from handleGoto).  handleCleanupScope checks this to avoid emitting
  // the same destructor calls twice when a scope is exited via goto.
  std::set<mlir::Region *> consumedCleanups_;
  // Current loop nesting depth (incremented on for/while/do entry, decremented
  // on exit).  Used to populate CleanupEntry::loopDepth.
  int loopDepth_ = 0;

  // ── For-loop step label stack ───────────────────────────────────────────
  // Each entry is the step label name for an active cir.for loop (innermost
  // on top).  An empty string is pushed for cir.while / cir.do so that
  // handleContinue can distinguish "for" from "while/do" by checking the top.
  std::vector<std::string> forStepLabelStack_;

public:
  /// Get or create a label name for a block.
  std::string getOrCreateLabel(mlir::Block *b);

  /// Query whether a global symbol (raw, unsanitized) was detected as _Atomic.
  bool isAtomicGlobal(const std::string &sym) const { return atomicGlobalSymbols_.count(sym) > 0; }
  /// Query whether a global symbol (raw, unsanitized) was detected as volatile.
  bool isVolatileGlobal(const std::string &sym) const { return volatileGlobalSymbols_.count(sym) > 0; }
  /// Query whether an alloca result Value is accessed atomically (_Atomic).
  bool isAtomicAlloca(mlir::Value v) const { return atomicAllocaValues_.count(v) > 0; }
  /// Query whether an alloca result Value is accessed with volatile semantics.
  bool isVolatileAlloca(mlir::Value v) const { return volatileAllocaValues_.count(v) > 0; }
  
  /// Returns the C name of the last named (non-variadic) parameter of the
  /// function body currently being mapped. Empty if the current function is
  /// not variadic or has no named parameters. Used by handleVAStart to emit
  /// the correct last-named-parameter sentinel.
  const std::string &getLastVarargParamName() const { return lastVarargParamName_; }

  // ── Vtable / virtual dispatch helpers ───────────────────────────────────

  /// Record that `chainValue` is part of a vtable virtual-dispatch chain
  /// originating from `objectValue` (the object pointer on which the virtual
  /// call will be made).  All intermediate SSA values produced by
  /// cir.vtable.get_vptr, the subsequent vptr load, cir.vtable.get_virtual_fn_addr,
  /// and the final function-pointer load are registered here so that when
  /// we encounter cir.call through the function pointer we know the object.
  void trackVtableDispatch(mlir::Value chainValue, mlir::Value objectValue);

  /// Return true when `v` is a tracked vtable dispatch chain value.
  bool isVtableDispatchValue(mlir::Value v) const;

  /// Return the original object pointer associated with a dispatch chain value.
  mlir::Value getVtableDispatchObject(mlir::Value v) const;

  /// Mark `v` as the final virtual function pointer in a dispatch chain
  /// (loaded from the result of cir.vtable.get_virtual_fn_addr).
  void markVirtualFnPtr(mlir::Value v);

  /// Return true when `v` is the final virtual function pointer in a chain.
  bool isVirtualFnPtr(mlir::Value v) const;

  /// Record that at least one virtual call has been emitted (used to decide
  /// whether to emit the __VERIFIER_virtual_call declaration).
  void setHasVirtualCalls();

  /// Associate a virtual-function label string with the fn-ptr SSA value.
  void setVirtualFnLabel(mlir::Value v, const std::string &label);
  /// Return the label for a virtual fn-ptr value, or "" if unknown.
  std::string getVirtualFnLabel(mlir::Value v) const;

  // ── Exception handling helpers ─────────────────────────────────────────
  /// Record that the module uses exception handling.
  void setHasExceptions() { hasExceptions_ = true; }
  /// True if any EH op was registered for this module.
  bool hasExceptions() const { return hasExceptions_; }
  /// Register an RTTI symbol referenced by a throw or catch handler.
  void registerEhTypeSymbol(const std::string &sym) {
    if (!sym.empty()) ehTypeSymbols_.insert(sym);
    hasExceptions_ = true;
  }
  /// The set of RTTI symbols that need per-type address tags emitted.
  const std::set<std::string> &getEhTypeSymbols() const { return ehTypeSymbols_; }
  /// Push a landing-pad label for the currently-open structured cir.try body.
  void pushTryLandingPad(const std::string &label) {
    tryLandingPadStack_.push_back(label);
  }
  /// Pop the innermost landing-pad label.
  void popTryLandingPad() {
    if (!tryLandingPadStack_.empty()) tryLandingPadStack_.pop_back();
  }
  /// Return the innermost landing-pad label, or empty string if none.
  const std::string &currentTryLandingPad() const {
    static const std::string empty;
    return tryLandingPadStack_.empty() ? empty : tryLandingPadStack_.back();
  }

  // ── Cleanup stack helpers ──────────────────────────────────────────────

  /// Push a cleanup region (region 1 of a cir.cleanup.scope) onto the stack.
  void pushCleanup(mlir::Region *region) {
    cleanupStack_.push_back({region, loopDepth_});
  }
  /// Pop the innermost cleanup region.
  void popCleanup() {
    if (!cleanupStack_.empty()) cleanupStack_.pop_back();
  }
  /// Emit all cleanup regions that are inside the current loop nesting depth
  /// (i.e. whose loopDepth >= fromDepth), innermost first, each wrapped in
  /// its own braces block.  Used by handleReturn (fromDepth=0 → all),
  /// handleBreak/handleContinue (fromDepth=loopDepth_ → only the cleanups
  /// inside the current loop iteration).
  void emitPendingCleanups(std::ostream &out, int fromDepth = 0);
  /// Returns true if the given cleanup region was already emitted by a
  /// previous emitPendingCleanups call (e.g. from handleGoto).
  bool isCleanupConsumed(mlir::Region *r) const {
    return consumedCleanups_.count(r) > 0;
  }
  /// Returns the current loop nesting depth.
  int getLoopDepth() const { return loopDepth_; }
  /// Returns true when the cleanup stack is empty (no pending RAII dtors).
  bool cleanupStackEmpty() const { return cleanupStack_.empty(); }
  /// Increment/decrement the loop nesting depth.
  void enterLoop() { ++loopDepth_; }
  void exitLoop()  { if (loopDepth_ > 0) --loopDepth_; }

  // ── For-loop step label stack helpers ─────────────────────────────────
  /// Push a step label for a cir.for loop (or empty string for while/do).
  void pushForStepLabel(const std::string &label) {
    forStepLabelStack_.push_back(label);
  }
  /// Pop the innermost step label.
  void popForStepLabel() {
    if (!forStepLabelStack_.empty()) forStepLabelStack_.pop_back();
  }
  /// Return the innermost step label (empty if none or if it is a while/do).
  const std::string &currentForStepLabel() const {
    static const std::string empty;
    return forStepLabelStack_.empty() ? empty : forStepLabelStack_.back();
  }

  /// Load the vtable layout dump produced by
  /// `clang++ -Xclang -fdump-vtable-layouts`. Populates vtableIndexMap_ and
  /// classHierarchy_. Returns false on error (diagnostic printed to stderr).
  bool loadVtableLayoutDump(const std::string &filename);

  /// Look up the correct __VERIFIER_virtual_call label for the given static
  /// type name and virtual slot index. Uses vtableIndexMap_ when available;
  /// falls back to a deterministic "RecName_virtual_N" label with a warning.
  std::string getVtableSlotLabel(const std::string &rec_name, int slot) const;
};

} // namespace xcfa
