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

#include "ConstantEmitter.h"
#include "Traceability.h"
#include "TypeMapper.h"

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

namespace cir2c {

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

  // ── STD/STL externalization options (issue #7) ──────────────────────────
  /// When enabled (default), calls to std::ostream's operator<< are modelled
  /// as __VERIFIER_log(value) calls instead of emitting the real I/O.
  void setExternalizeIO(bool v) { externalizeIO_ = v; }
  bool externalizeIO() const { return externalizeIO_; }
  /// When enabled (default off), calls to common STL container methods become
  /// no-ops (void result) or nondeterministic values (non-void result).
  void setExternalizeContainers(bool v) { externalizeContainers_ = v; }
  bool externalizeContainers() const { return externalizeContainers_; }

  /// Set by the call handler when a call was replaced by an externalized model
  /// (e.g. __VERIFIER_log); lets the caller skip the post-call unwind guard.
  void setLastCallExternalized(bool v) { lastCallExternalized_ = v; }
  bool lastCallExternalized() const { return lastCallExternalized_; }

  /// Demangle an Itanium C++ symbol (returns the input unchanged when it is not
  /// a mangled C++ name).
  std::string demangle(llvm::StringRef mangled) const;

  /// Name-based predicates for STD/STL externalization, shared by the call
  /// handler and the dead-code elision pass so both agree on which calls are
  /// modelled away. Operate on a *demangled* symbol name.
  static bool isIoInsertionName(const std::string &demangled);
  static bool isStlContainerMethodName(const std::string &demangled,
                                       std::string &method);

  /// Compute which function definitions are reachable, so unreachable inline /
  /// weak definitions (e.g. the std I/O machinery left dead after I/O
  /// externalization) can be elided from the output. Computed once.
  void computeReachableDefs(mlir::ModuleOp module);
  /// True when a function definition should be dropped: it is an inline/weak
  /// definition that is not reachable from any retained root.
  bool funcDefElided(llvm::StringRef sym) const;

  /// Emit `extern void __VERIFIER_log();` at most once.
  void ensureVerifierLogDeclared(std::ostream &out);
  /// Emit `extern <ctype> __VERIFIER_nondet_<suffix>(void);` once per suffix.
  void ensureVerifierNondetDeclared(std::ostream &out, const std::string &ctype,
                                    const std::string &suffix);

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

  /// Stable unique C struct/union tag for an anonymous record type.
  std::string anonRecordCName(mlir::Type recordType) const;

  /// Render a constant attribute as a C initializer, recursing through nested
  /// array/struct/union constants (int/fp/string/pointer/member-fn-ptr leaves).
  std::string formatConstInit(mlir::Attribute attr, mlir::Type type) const;

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

  /// Look up the declared CIR type for a global symbol (raw, unsanitized name).
  /// Returns a null (default-constructed) mlir::Type when the symbol is unknown.
  /// Used by ConstantEmitter to resolve GlobalViewAttr access indices.
  mlir::Type globalSymbolType(const std::string &sym) const {
    auto it = globalSymbolTypes_.find(sym);
    return it == globalSymbolTypes_.end() ? mlir::Type() : it->second;
  }
  
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
  // CIR->C type mapping service (owns anonRecordNames_ state).
  mutable TypeMapper typeMapper_;
  // Constant-to-C-initializer rendering service.
  ConstantEmitter constantEmitter_;
  // Symbol -> declared type for each global, so GlobalViewAttr access indices
  // (`&g[i].field`) can be resolved while formatting constant initializers.
  std::unordered_map<std::string, mlir::Type> globalSymbolTypes_;
  // Set once the malloc/free externs needed by synthesised operator
  // new/delete stubs have been emitted, so they appear at most once.
  bool mallocFreeDeclEmitted_ = false;
  // STD/STL externalization (issue #7). IO on by default; containers off.
  bool externalizeIO_ = true;
  bool externalizeContainers_ = false;
  bool lastCallExternalized_ = false;
  bool verifierLogDeclEmitted_ = false;
  std::set<std::string> verifierNondetDeclared_;
  // Dead-code elision state (issue #7 follow-up).
  bool reachabilityComputed_ = false;
  std::set<std::string> reachableDefs_;   // function symbols to retain
  std::set<std::string> droppableDefs_;   // inline/weak defs eligible to drop
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
  // Maps a virtual fn-ptr SSA value (and the chain it flows through) to the
  // vtable slot index, passed to __VERIFIER_virtual_call_<sig> at the call site.
  llvm::DenseMap<mlir::Value, int> virtualFnSlots_;
  // All distinct virtual-call wrapper signatures: suffix -> (retCtype, argCtypes).
  // Drives emission of one default __VERIFIER_virtual_call_<suffix> per signature.
  std::map<std::string, std::pair<std::string, std::vector<std::string>>> virtualCallSigs_;

  // Set when the module dispatches through a pointer-to-member-function (the
  // Itanium {ptr,adj} encoding casts an integer to a function pointer via
  // cir.cast int_to_ptr). That encoding distinguishes virtual from non-virtual
  // by `ptr & 1`, which requires every function address to be even — so when
  // set, every emitted function is force-aligned (GCC otherwise packs functions
  // onto odd addresses, misreading a non-virtual member pointer as virtual).
  bool usesMemberFnPtr_ = false;
  mlir::ModuleOp currentModule_;  // set at the start of mapModule for use in helpers

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

  /// Associate the vtable slot index of a virtual dispatch with an SSA value
  /// (the get_virtual_fn_addr result and any value it flows into). The slot is
  /// passed as the second argument to __VERIFIER_virtual_call_<sig>.
  void setVirtualFnSlot(mlir::Value v, int slot) { virtualFnSlots_[v] = slot; }
  /// Return the slot for a virtual fn-ptr value, or -1 if unknown.
  int getVirtualFnSlot(mlir::Value v) const {
    auto it = virtualFnSlots_.find(v);
    return it == virtualFnSlots_.end() ? -1 : it->second;
  }

  /// Derive the C signature of a virtual-call wrapper from the vtable function
  /// type. `ft` is the `cir.func<(this, args...) -> ret>` stored in the vtable.
  /// Returns a unique suffix and outputs the wrapper's return C type and the
  /// argument C types (the callee's params minus the leading `this`). Also
  /// records the signature so a default __VERIFIER_virtual_call_<suffix>
  /// implementation is emitted.
  std::string registerVirtualCallSig(mlir::Type funcType, std::string &retOut,
                                     std::vector<std::string> &argsOut);
  /// All distinct virtual-call signatures seen: suffix -> (retCtype, argCtypes).
  const std::map<std::string, std::pair<std::string, std::vector<std::string>>> &
  virtualCallSigs() const { return virtualCallSigs_; }

  /// Flat element offset of a vtable address point into the emitted
  /// `void* <sym>[]` array: the sizes of sub-vtable components [0, index) plus
  /// `offset`. `op` is any op in the module (used to find the vtable global).
  uint64_t vtableFlatOffset(mlir::Operation *op, const std::string &symbol,
                            int index, int offset) const;

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
  /// `consume` controls whether the emitted regions are marked so that
  /// handleCleanupScope won't re-emit them on normal fall-through. Pass true
  /// for UNCONDITIONAL exits (return/break/continue/goto — control leaves for
  /// good). Pass false for a CONDITIONAL emission such as the `if
  /// (__cir_exc_active)` EH guard, where the normal (no-exception) path still
  /// falls through and must run the cleanup itself.
  void emitPendingCleanups(std::ostream &out, int fromDepth = 0,
                           bool consume = true);
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

};

} // namespace cir2c
