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

#include "handlers/HandlerModule.h"
#include "handlers/HandlerSupport.h"
#include "Mapper.h"
#include "ErrorMessages.h"

#include <mlir/IR/Operation.h>
#include <llvm/Support/Casting.h>
#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <optional>
#include <string>

using namespace mlir;

namespace cir2c {

/// Handlers for C++ structured exception handling (cir.try, cir.throw,
/// cir.catch_param, cir.resume, cir.eh.*, cir.begin_catch, cir.end_catch,
/// etc.), mapped to a plain-C EH model via __cir_exc_* globals.
class ExceptionHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Structured exception handling: try
    m.registerTypedHandler<cir::TryOp>(handleTry);

    // Exception handling (modelled via __cir_exc_* global state)
    m.registerTypedHandler<cir::EhInflightOp>(handleEhInflight);
    m.registerTypedHandler<cir::EhTypeIdOp>(handleEhTypeId);
    m.registerTypedHandler<cir::EhSetjmpOp>(handleEhSetjmp);
    m.registerTypedHandler<cir::EhLongjmpOp>(handleEhLongjmp);
    m.registerTypedHandler<cir::EhInitiateOp>(handleEhInitiate);
    m.registerTypedHandler<cir::EhTerminateOp>(handleEhTerminate);
    m.registerTypedHandler<cir::EhDispatchOp>(handleEhDispatch);
    m.registerTypedHandler<cir::BeginCleanupOp>(handleBeginCleanup);
    m.registerTypedHandler<cir::EndCleanupOp>(handleEndCleanup);
    m.registerTypedHandler<cir::BeginCatchOp>(handleBeginCatch);
    m.registerTypedHandler<cir::EndCatchOp>(handleEndCatch);
    m.registerTypedHandler<cir::ThrowOp>(handleThrow);
    m.registerTypedHandler<cir::ResumeOp>(handleResume);
    m.registerTypedHandler<cir::ResumeFlatOp>(handleResumeFlat);
    m.registerTypedHandler<cir::AllocExceptionOp>(handleAllocException);
    m.registerTypedHandler<cir::CatchParamOp>(handleCatchParam);
    m.registerTypedHandler<cir::InitCatchParamOp>(handleInitCatchParam);
    m.registerTypedHandler<cir::ConstructCatchParamOp>(handleConstructCatchParam);
  }

private:
  // ============================================================================
  // Exception handling
  // ============================================================================
  //
  // C++ exceptions are modelled in plain C through a small set of file-scope
  // globals declared by Mapper::mapModule when any EH op is present:
  //
  //   static void       *__cir_exc_ptr;       // in-flight exception object
  //   static const void *__cir_exc_type;      // RTTI tag address (see below)
  //   static unsigned    __cir_exc_type_id;   // numeric tag (address-as-int)
  //   static int         __cir_exc_active;    // 1 while an exception is in flight
  //
  // Each RTTI symbol referenced from a throw or catch list gets a distinct
  // `static const char __cir_eh_type_<sanitized_sym>[]` so that comparing
  // exception types reduces to a pointer comparison.
  //
  // Control-flow rules implemented by the handlers below:
  //   * cir.throw  — store ptr/type into the globals, set active, return from
  //                  the enclosing function with a default value.
  //   * cir.try_call — emit the call, then branch to the unwind successor when
  //                    __cir_exc_active is set, otherwise to the normal one.
  //   * cir.try   — emit the body, then if active, walk the handler list and
  //                 jump into the first matching one (a typed match clears
  //                 __cir_exc_active before running the handler).
  //   * cir.eh.dispatch — same idea but on flat CFGs, branching to one of the
  //                       successor blocks based on __cir_exc_type.
  //   * cir.catch_param / cir.begin_catch — bind the exception pointer to the
  //                                          handler's local and clear active.
  //   * cir.resume(.flat) — re-raise: keep active set and return.

  // Emit the C statement that hands control to whatever should run when the
  // current function is unwinding due to an exception.  If we are inside the
  // body of a structured cir.try, jump to that try's dispatch label so its
  // handlers run.  Otherwise return from the function with a default value of
  // the declared return type, propagating the exception to the caller.
  static void emitExceptionReturn(mlir::Operation *op, Mapper &m,
                                  std::ostream &out) {
    const std::string &pad = m.currentTryLandingPad();
    if (!pad.empty()) {
      out << "  goto " << pad << ";\n";
      return;
    }
    auto func = op->getParentOfType<cir::FuncOp>();
    if (!func) {
      out << "  return;\n";
      return;
    }
    cir::FuncType fty = func.getFunctionType();
    mlir::Type rty = fty.getReturnType();
    if (mlir::isa<mlir::NoneType>(rty) || mlir::isa<cir::VoidType>(rty)) {
      out << "  return;\n";
      return;
    }
    std::string ctype = m.mapTypeToC(rty);
    // A struct/union return type cannot be produced by casting 0; zero-init it.
    std::string init = mlir::isa<cir::RecordType>(rty) ? "{0}"
                                                       : ("(" + ctype + ")0");
    out << "  { " << ctype << " __cir_eh_ret = " << init
        << "; return __cir_eh_ret; }\n";
  }

  // ============================================================================
  // Structured exception handling: try
  // ============================================================================

  // cir.try: emit the try body region, then dispatch to one of the handler
  // regions based on the in-flight exception type.  handler_types is a list
  // parallel to handler_regions; each entry is one of
  //   - #cir.global_view<@RTTI_sym>  (typed catch)
  //   - #cir.all                     (catch-all)
  //   - #cir.unwind                  (unwind continuation, re-raises)
  // Typed handlers run when __cir_exc_type matches; the catch-all runs as a
  // fallback; the unwind handler re-asserts active and returns from the
  // enclosing function so the exception propagates to the caller.
  static bool handleTry(cir::TryOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();

    // Push a landing-pad label so that any cir.throw inside the body jumps
    // here instead of returning straight out of the function.  The label is
    // emitted at the end of the body, right before the dispatch chain.
    std::string padLabel = m.freshName("cir_try_dispatch");
    m.pushTryLandingPad(padLabel);
    bool bodyOk = emitRegionBody(op.getTryRegion(), m, out);
    m.popTryLandingPad();
    if (!bodyOk) return false;

    out << "  " << padLabel << ": ;\n";

    auto handlerRegions = op.getHandlerRegions();
    mlir::ArrayAttr handlerTypes = op.getHandlerTypes();
    if (handlerRegions.empty()) return true;

    out << "  if (__cir_exc_active) {\n";

    // Classify each handler and chain them as if / else if / else so that
    // only the first matching catch executes, mirroring C++ catch semantics.
    enum class Kind { Typed, CatchAll, Unwind };
    bool firstClause = true;
    bool sawTerminalClause = false; // catch-all or unwind reached
    for (unsigned i = 0; i < handlerRegions.size(); ++i) {
      Region &handler = handlerRegions[i];
      if (handler.empty()) continue;
      if (sawTerminalClause) break;

      Kind kind = Kind::CatchAll;
      std::string typeSym;
      if (handlerTypes && i < handlerTypes.size()) {
        auto attr = handlerTypes[i];
        if (auto gv = mlir::dyn_cast<cir::GlobalViewAttr>(attr)) {
          kind = Kind::Typed;
          typeSym = gv.getSymbol().getValue().str();
          m.registerEhTypeSymbol(typeSym);
        } else if (mlir::isa<cir::UnwindAttr>(attr)) {
          kind = Kind::Unwind;
        } else {
          // CatchAllAttr or anything we don't recognise: treat as catch-all.
          kind = Kind::CatchAll;
        }
      }

      const char *keyword = firstClause ? "if" : "else if";
      const char *elseKeyword = firstClause ? "" : "else ";
      firstClause = false;

      if (kind == Kind::Typed) {
        std::string san = Mapper::sanitizeIdentifier(typeSym);
        out << "  " << keyword << " (__cir_exc_type == (const void*)__cir_eh_type_"
            << san << ") {\n";
        if (!emitRegionBody(handler, m, out)) return false;
        out << "  }\n";
      } else if (kind == Kind::CatchAll) {
        out << "  " << elseKeyword << "{\n";
        if (!emitRegionBody(handler, m, out)) return false;
        out << "  }\n";
        sawTerminalClause = true;
      } else { // Unwind
        out << "  " << elseKeyword << "{\n";
        if (!emitRegionBody(handler, m, out)) return false;
        // Re-raise to the enclosing try (or, if none, the caller).  Pad has
        // already been popped above, so emitExceptionReturn looks at any
        // outer try or the function-level return.
        emitExceptionReturn(op.getOperation(), m, out);
        out << "  }\n";
        sawTerminalClause = true;
      }
    }

    // If no catch-all / unwind clause was emitted and the exception was not
    // matched, keep it in flight and propagate it.
    if (!sawTerminalClause) {
      out << "  else {\n";
      emitExceptionReturn(op.getOperation(), m, out);
      out << "  }\n";
    }

    out << "  }\n";
    return true;
  }

  // cir.catch_param: appears inside a cir.try handler region (HasParent<TryOp>)
  // to retrieve the in-flight exception object.  Cast the global exception
  // pointer to the requested type, and mark the exception as caught.
  static bool handleCatchParam(cir::CatchParamOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    if (op->getNumResults() < 1) {
      // Bare `cir.catch_param` (no result): still clear the active flag so
      // the handler runs without re-tripping the dispatch.
      out << "  __cir_exc_active = 0;\n";
      return true;
    }
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    std::string tmp = m.freshName("cp_exn");
    // Clang always generates a pointer result, but guard defensively: if the
    // result is a value type, dereference through a pointer cast rather than
    // producing a pointer-as-integer.
    if (!ctype.empty() && ctype.back() == '*')
      out << "  " << ctype << " " << tmp << " = (" << ctype << ")__cir_exc_ptr;\n";
    else
      out << "  " << ctype << " " << tmp << " = *(" << ctype << "*)__cir_exc_ptr;\n";
    out << "  __cir_exc_active = 0;\n";
    m.setName(op->getResult(0), tmp);
    return true;
  }

  // cir.init_catch_param: binds a catch-clause variable to the in-flight
  // exception object. `param_addr` is the address of the catch variable; the
  // kind attribute determines how the exception object (modelled as the global
  // __cir_exc_ptr) is transferred into it:
  //   reference        catch (T& e)  -> store the object's address
  //   pointer          catch (T* e)  -> copy the thrown pointer value
  //   scalar/triv-copy catch (T  e)  -> copy the object by value
  //   non_trivial_copy catch (T  e)  -> the copy is performed by
  //                                     cir.construct_catch_param; nothing here
  //   objc                           -> Objective-C, not modelled
  static bool handleInitCatchParam(cir::InitCatchParamOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    mlir::Value paramAddr = op.getParamAddr();
    std::string pname = m.getOrCreateName(paramAddr);
    // The catch variable's lvalue: alloca results are direct-access (the name is
    // the variable itself), otherwise the pointer must be dereferenced.
    std::string lvalue = m.isDirectAccess(paramAddr) ? pname : ("*" + pname);
    std::string pointeeCType = "int";
    if (auto pt = mlir::dyn_cast<cir::PointerType>(paramAddr.getType()))
      pointeeCType = m.mapTypeToC(pt.getPointee());

    switch (op.getKind()) {
      case cir::InitCatchKind::Reference:
        out << "  " << lvalue << " = (" << pointeeCType << ")__cir_exc_ptr;\n";
        break;
      case cir::InitCatchKind::Pointer:
      case cir::InitCatchKind::Scalar:
      case cir::InitCatchKind::TrivialCopy:
        out << "  " << lvalue << " = *(" << pointeeCType << "*)__cir_exc_ptr;\n";
        break;
      case cir::InitCatchKind::NonTrivialCopy:
        // Copy-construction handled by cir.construct_catch_param.
        break;
      case cir::InitCatchKind::Objc:
        out << "  // init_catch_param: Objective-C parameter not modelled\n";
        break;
    }
    return true;
  }

  // cir.construct_catch_param: copy-constructs a by-value catch variable with a
  // non-trivial copy constructor from the in-flight exception object. The copy
  // constructor symbol is given by the copy_fn attribute and is invoked as
  // copy_fn(&param, (T*)__cir_exc_ptr).
  static bool handleConstructCatchParam(cir::ConstructCatchParamOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    mlir::Value paramAddr = op.getParamAddr();
    std::string pname = m.getOrCreateName(paramAddr);
    // The copy constructor's destination argument is a pointer to the catch
    // variable: take the address of direct-access allocas, otherwise the value
    // is already a pointer.
    std::string destPtr = m.isDirectAccess(paramAddr) ? ("&" + pname) : pname;
    std::string pointeeCType = "void";
    if (auto pt = mlir::dyn_cast<cir::PointerType>(paramAddr.getType()))
      pointeeCType = m.mapTypeToC(pt.getPointee());

    std::optional<llvm::StringRef> copyFn = op.getCopyFn();
    if (copyFn && !copyFn->empty()) {
      std::string fn = m.getFunctionOutputName(copyFn->str());
      out << "  " << fn << "(" << destPtr << ", (" << pointeeCType
          << "*)__cir_exc_ptr);\n";
    } else {
      // No copy constructor: fall back to a by-value copy.
      std::string lvalue = m.isDirectAccess(paramAddr) ? pname : ("*" + pname);
      out << "  " << lvalue << " = *(" << pointeeCType << "*)__cir_exc_ptr;\n";
    }
    return true;
  }

  // cir.resume.flat: post-CFG-flattening form of cir.resume that propagates an
  // uncaught exception to the caller.  Re-raise by keeping __cir_exc_active
  // set and returning from the current function.
  static bool handleResumeFlat(cir::ResumeFlatOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    out << "  __cir_exc_active = 1;\n";
    emitExceptionReturn(op.getOperation(), m, out);
    return true;
  }

  // cir.eh.inflight_exception is the first op in a try_call unwind block.
  // It produces the (exception_ptr, type_id) pair from the in-flight exception,
  // which we have stored in the global EH state.
  static bool handleEhInflight(cir::EhInflightOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    // Also register every type in the catch list so the type-tag globals exist
    // before any compare against them.
    if (auto types = op.getCatchTypeListAttr()) {
      for (auto attr : types) {
        if (auto sym = mlir::dyn_cast<mlir::FlatSymbolRefAttr>(attr))
          m.registerEhTypeSymbol(sym.getValue().str());
      }
    }
    if (op->getNumResults() >= 1) {
      std::string p = m.freshName("exc_ptr");
      out << "  void *" << p << " = __cir_exc_ptr;\n";
      m.setName(op->getResult(0), p);
    }
    if (op->getNumResults() >= 2) {
      std::string t = m.freshName("exc_tid");
      std::string ctype = m.mapTypeToC(op->getResult(1).getType());
      out << "  " << ctype << " " << t << " = (" << ctype
          << ")__cir_exc_type_id;\n";
      m.setName(op->getResult(1), t);
    }
    return true;
  }

  // cir.eh.typeid maps a global RTTI symbol to the numeric tag we use for
  // dispatch (address of the per-symbol type tag, cast to the result int type).
  static bool handleEhTypeId(cir::EhTypeIdOp op, Mapper &m, std::ostream &out) {
    if (op->getNumResults() < 1) return false;
    m.setHasExceptions();
    std::string sym = op.getTypeSym().str();
    m.registerEhTypeSymbol(sym);
    std::string san = Mapper::sanitizeIdentifier(sym);
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    std::string tmp = m.freshName("type_id");
    out << "  " << ctype << " " << tmp << " = (" << ctype
        << ")(unsigned long)__cir_eh_type_" << san << ";\n";
    m.setName(op->getResult(0), tmp);
    return true;
  }

  static bool handleEhSetjmp(cir::EhSetjmpOp op, Mapper &m, std::ostream &out) {
    // Hard-fail: emitting only a comment left the op's result undeclared, so a
    // later use of it produced uncompilable C ("use of undeclared identifier").
    // MSVC-SEH setjmp cannot be modelled soundly — fail instead of guessing.
    llvm::errs() << ERR_EH_SETJMP_UNSUPPORTED << "\n";
    return false;
  }

  static bool handleEhLongjmp(cir::EhLongjmpOp op, Mapper &m, std::ostream &out) {
    llvm::errs() << ERR_EH_LONGJMP_UNSUPPORTED << "\n";
    return false;
  }

  // cir.eh.initiate appears at the start of an unwind block in flattened CIR.
  // Its result is an opaque !cir.eh_token that downstream ops (begin_catch,
  // begin_cleanup, eh.dispatch) thread through.  Our model keeps the actual
  // exception state in globals, so the token only needs a placeholder name.
  static bool handleEhInitiate(cir::EhInitiateOp op, Mapper &m, std::ostream &out) {
    if (op->getNumResults() < 1) return false;
    m.setHasExceptions();
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    std::string tmp = m.freshName("eh_tok");
    out << "  " << ctype << " " << tmp << " = 0;\n";
    m.setName(op->getResult(0), tmp);
    return true;
  }

  // cir.eh.terminate marks the end of the world: an exception was thrown
  // during cleanup unwinding, which std::terminate()s in C++.  abort() is the
  // closest C equivalent.
  static bool handleEhTerminate(cir::EhTerminateOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    out << "  abort();\n";
    return true;
  }

  // cir.eh.dispatch branches to one of its successor blocks based on the
  // type of the in-flight exception.  catch_types is a parallel array to
  // catch_destinations; the default_destination is taken when no typed entry
  // matches (either as catch-all when default_is_catch_all is set, or as
  // continued unwind).
  static bool handleEhDispatch(cir::EhDispatchOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    m.setHasExceptions();

    // Helper: forward the dispatch op's eh_token operand into a successor block
    // that takes one block-arg (mirrors handleBr's phi forwarding).  The caller
    // provides the indent prefix so the assignment lines up with surrounding
    // statements.
    auto forwardEhToken = [&](mlir::Block *succ, const char *indent) {
      unsigned n = std::min(o->getNumOperands(),
                            (unsigned)succ->getNumArguments());
      for (unsigned i = 0; i < n; ++i) {
        std::string blockArgName  = m.getOrCreateName(succ->getArgument(i));
        std::string branchArgName = m.getOrCreateName(o->getOperand(i));
        out << indent << blockArgName << " = " << branchArgName << ";\n";
      }
    };

    if (o->getNumSuccessors() == 0) {
      out << "  abort();\n";
      return true;
    }

    mlir::ArrayAttr catchTypes = op.getCatchTypesAttr();
    // catch_destinations are successors 1..N; the default is successor 0.
    mlir::SuccessorRange catchDests = op.getCatchDestinations();

    unsigned typedCount = catchTypes ? catchTypes.size() : 0;
    unsigned destCount = catchDests.size();
    unsigned n = std::min(typedCount, destCount);

    // Known limitation: dispatch uses exact pointer equality on the RTTI tag.
    // A `catch (Base &)` block will NOT fire for a `Derived` exception because
    // C++ inheritance is not modelled here.  This is a deliberate approximation
    // for verification: the miss is conservative (the handler is unreachable in
    // the model when it would have been reachable in the real program).
    for (unsigned i = 0; i < n; ++i) {
      auto attr = catchTypes[i];
      auto gv = mlir::dyn_cast<cir::GlobalViewAttr>(attr);
      if (!gv) continue; // catch_all / unwind are encoded by default_destination
      std::string sym = gv.getSymbol().getValue().str();
      m.registerEhTypeSymbol(sym);
      std::string san = Mapper::sanitizeIdentifier(sym);
      mlir::Block *succ = catchDests[i];
      std::string lbl = m.getOrCreateLabel(succ);
      out << "  if (__cir_exc_type == (const void*)__cir_eh_type_" << san
          << ") {\n";
      forwardEhToken(succ, "    ");
      out << "    goto " << lbl << ";\n";
      out << "  }\n";
    }

    mlir::Block *defaultSucc = op.getDefaultDestination();
    // Whether catch-all or continued unwind, we drop into the default block.
    // For catch-all the handler will clear __cir_exc_active; for the unwind
    // path the exception stays in flight and is resumed.
    forwardEhToken(defaultSucc, "  ");
    out << "  goto " << m.getOrCreateLabel(defaultSucc) << ";\n";
    return true;
  }

  static bool handleBeginCleanup(cir::BeginCleanupOp op, Mapper &m, std::ostream &out) {
    if (op->getNumResults() < 1) return false;
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    std::string tmp = m.freshName("cl_tok");
    out << "  " << ctype << " " << tmp << " = 0;\n";
    m.setName(op->getResult(0), tmp);
    return true;
  }

  static bool handleEndCleanup(cir::EndCleanupOp op, Mapper &m, std::ostream &out) {
    return true;
  }

  // cir.begin_catch starts a catch handler.  It returns a catch-token (opaque
  // in our model) and a pointer to the caught exception object, which we
  // produce by casting the global __cir_exc_ptr to the result pointer type.
  // Entering a catch means the exception has been caught: clear the active
  // flag so subsequent calls don't see it as still-in-flight.
  static bool handleBeginCatch(cir::BeginCatchOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    if (op->getNumResults() >= 1) {
      std::string ctype = m.mapTypeToC(op->getResult(0).getType());
      std::string t = m.freshName("ca_tok");
      out << "  " << ctype << " " << t << " = 0;\n";
      m.setName(op->getResult(0), t);
    }
    if (op->getNumResults() >= 2) {
      std::string ctype = m.mapTypeToC(op->getResult(1).getType());
      std::string p = m.freshName("ca_exn");
      if (!ctype.empty() && ctype.back() == '*')
        out << "  " << ctype << " " << p << " = (" << ctype << ")__cir_exc_ptr;\n";
      else
        out << "  " << ctype << " " << p << " = *(" << ctype << "*)__cir_exc_ptr;\n";
      m.setName(op->getResult(1), p);
    }
    out << "  __cir_exc_active = 0;\n";
    return true;
  }

  // cir.end_catch closes a catch handler.  The catch entry already cleared
  // __cir_exc_active; here we destroy the exception object using the destructor
  // recorded by cir.throw (Itanium __cxa_end_catch), then clear it so a nested or
  // subsequent handler does not double-destroy.
  static bool handleEndCatch(cir::EndCatchOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    out << "  if (__cir_exc_dtor) { ((void(*)(void*))__cir_exc_dtor)(__cir_exc_ptr); "
           "__cir_exc_dtor = (void*)0; }\n";
    return true;
  }

  // cir.throw stores the in-flight exception in the global EH state and then
  // transfers control out of the current function by returning.  The enclosing
  // cir.try (or a caller's cir.try_call) is responsible for checking
  // __cir_exc_active to dispatch the matching handler.  Both the typed-throw
  // (`cir.throw %ptr, @rtti[, @dtor]`) and the bare rethrow form
  // (`cir.throw`) are supported -- the latter leaves the EH state untouched
  // and merely re-asserts that the exception is in flight.
  static bool handleThrow(cir::ThrowOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();

    if (!op.rethrows()) {
      if (op.getExceptionPtr()) {
        std::string excName = m.getOrCreateName(op.getExceptionPtr());
        out << "  __cir_exc_ptr = (void*)" << excName << ";\n";
      } else {
        out << "  __cir_exc_ptr = (void*)0;\n";
      }
      // Record the exception object's destructor (if any) so cir.end_catch can
      // destroy the object when the handler finishes (Itanium __cxa_throw stores
      // the dtor; __cxa_end_catch invokes it). A throw with no dtor (trivial type)
      // clears it.
      if (auto dtor = op.getDtorAttr()) {
        std::string dtorName = m.getFunctionOutputName(dtor.getValue().str());
        out << "  __cir_exc_dtor = (void*)&" << dtorName << ";\n";
      } else {
        out << "  __cir_exc_dtor = (void*)0;\n";
      }
      if (auto ti = op.getTypeInfoAttr()) {
        std::string sym = ti.getValue().str();
        m.registerEhTypeSymbol(sym);
        std::string san = Mapper::sanitizeIdentifier(sym);
        out << "  __cir_exc_type = (const void*)__cir_eh_type_" << san << ";\n";
        out << "  __cir_exc_type_id = (unsigned long)__cir_eh_type_" << san << ";\n";
      } else {
        // Untyped throw: clear the type tag so dispatch falls through to
        // catch-all handlers only.
        out << "  __cir_exc_type = (const void*)0;\n";
        out << "  __cir_exc_type_id = 0;\n";
      }
    }
    out << "  __cir_exc_active = 1;\n";
    // Run any RAII cleanup regions that are in scope at the throw site, mirroring
    // what handleReturn does before returning.  CIR-level unwind regions handle
    // destructor calls at the CIR layer, but cleanupStack_ tracks scopes that
    // were pushed by the mapper itself and must always be drained.
    m.emitPendingCleanups(out, 0);
    emitExceptionReturn(op.getOperation(), m, out);
    return true;
  }

  // cir.resume continues unwinding when no catch matches.  The exception
  // remains in flight (__cir_exc_active stays set); we propagate it to the
  // caller by returning from the current function with a default value.
  static bool handleResume(cir::ResumeOp op, Mapper &m, std::ostream &out) {
    m.setHasExceptions();
    out << "  __cir_exc_active = 1;\n";
    emitExceptionReturn(op.getOperation(), m, out);
    return true;
  }

  // cir.alloc.exception conceptually calls __cxa_allocate_exception.  Since the
  // allocated buffer is only ever consumed by the (unreachable) throw path, we
  // hand out a stack buffer of the requested size cast to the result pointer
  // type.  This keeps any in-between cir.store ops well-defined.
  static bool handleAllocException(cir::AllocExceptionOp op, Mapper &m, std::ostream &out) {
    if (op->getNumResults() < 1) return false;
    uint64_t size = 0;
    if (auto sa = op->getAttrOfType<mlir::IntegerAttr>("size"))
      size = static_cast<uint64_t>(sa.getInt());
    if (size == 0) size = 16;  // safety floor for any pathological 0-sized cases
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    std::string buf = m.freshName("exc_buf");
    std::string tmp = m.freshName("exc");
    // Static storage: the address must remain valid after the throwing function
    // returns (the catcher dereferences __cir_exc_ptr in its own frame).
    // freshName guarantees each throw site gets its own uniquely-named static.
    out << "  static char " << buf << "[" << size << "] = {0};\n";
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << buf << ";\n";
    m.setName(op->getResult(0), tmp);
    return true;
  }
};

REGISTER_HANDLER_MODULE(ExceptionHandlers)

} // namespace cir2c
