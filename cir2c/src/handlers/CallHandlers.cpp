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
#include <mlir/IR/BuiltinTypes.h>
#include <llvm/Support/Casting.h>
#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <sstream>
#include <string>

using namespace mlir;

namespace cir2c {

// std::ostream / STL method recognition lives on Mapper so the call handler and
// the dead-code elision pass agree (Mapper::isIoInsertionName / ...).
static bool isFuncPtrType(mlir::Type t) {
  if (auto pt = llvm::dyn_cast<cir::PointerType>(t))
    return llvm::isa<cir::FuncType>(pt.getPointee());
  return false;
}

/// Handlers for function call, return, and termination ops (cir.call,
/// cir.try_call, cir.return, cir.unreachable, cir.trap).
class CallHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Function calls
    m.registerTypedHandler<cir::CallOp>(handleCall);
    m.registerTypedHandler<cir::TryCallOp>(handleTryCall);
    m.registerTypedHandler<cir::ReturnOp>(handleReturn);
    m.registerTypedHandler<cir::UnreachableOp>(handleUnreachable);
    m.registerTypedHandler<cir::TrapOp>(handleTrap);
  }

private:
  // Common implementation shared by cir.call and cir.try_call. Both ops have the
  // same operand/attribute structure; the only difference is that cir.try_call
  // is a terminator with two successor blocks (normal/unwind). We treat the
  // unwind path as unreachable in our model (no exceptions).
  static bool handleCallLikeOp(Operation *o, Mapper &m, std::ostream &out) {
    std::string callee;
    bool isIndirectCall = false;
    m.setLastCallExternalized(false);

    // ── Virtual dispatch: check BEFORE the generic indirect-call path ────────
    // If the first operand is a tracked virtual function pointer (produced by
    // the cir.vtable.get_vptr → load → get_virtual_fn_addr → load chain), emit
    // __VERIFIER_virtual_call(object, args...) instead of a function-pointer
    // call.  The verifier tool itself gives the semantics of this intrinsic.
    //
    // The `this` pointer is already present as operand 1 of the CIR call, so we
    // simply skip operand 0 (the fn pointer itself) and forward all remaining
    // operands as arguments.
    if (o->getNumOperands() > 0 && m.isVirtualFnPtr(o->getOperand(0))) {
      Value fnptr = o->getOperand(0);
      int slot = m.getVirtualFnSlot(fnptr);
      if (slot < 0) {
        llvm::errs() << "xcfa-mapper: error: virtual call without a resolved "
                        "vtable slot.\n";
        return false;
      }
      // The callee signature lives in the fn-ptr type: ptr<func<(this,args)->ret>>.
      cir::FuncType ft;
      if (auto pt = mlir::dyn_cast<cir::PointerType>(fnptr.getType()))
        ft = mlir::dyn_cast<cir::FuncType>(pt.getPointee());
      if (!ft) {
        llvm::errs() << "xcfa-mapper: error: virtual call fn-ptr is not a function "
                        "pointer.\n";
        return false;
      }
      std::string retType;
      std::vector<std::string> argTypes;
      std::string suffix = m.registerVirtualCallSig(ft, retType, argTypes);
      std::string intrinsic = "__VERIFIER_virtual_call_" + suffix;
      m.setHasVirtualCalls();

      // Argument list: this-ptr, slot index, then the remaining call arguments.
      std::string args = pointerOperandExpr(o->getOperand(1), m) + ", " +
                         std::to_string(slot);
      for (unsigned i = 2; i < o->getNumOperands(); ++i)
        args += ", " + pointerOperandExpr(o->getOperand(i), m);

      if (o->getNumResults() > 0) {
        std::string tmp = m.freshName("vcall");
        out << "  " << retType << " " << tmp
            << " = (" << retType << ")" << intrinsic << "(" << args << ");\n";
        m.setName(o->getResult(0), tmp);
      } else {
        out << "  " << intrinsic << "(" << args << ");\n";
      }
      return true;
    }
    // ─────────────────────────────────────────────────────────────────────────


    if (auto sa = o->getAttrOfType<StringAttr>("callee")) {
      callee = sa.getValue().str();
    } else if (auto sa2 = o->getAttrOfType<SymbolRefAttr>("callee")) {
      callee = sa2.getRootReference().str();
    }

    // Check if this is an indirect call (callee is an operand, typically a function pointer)
    if (callee.empty() && o->getNumOperands() > 0) {
      // First operand might be the function pointer for indirect calls
      Value firstOperand = o->getOperand(0);
      if (auto funcPtrType = llvm::dyn_cast<cir::PointerType>(firstOperand.getType())) {
        if (llvm::isa<cir::FuncType>(funcPtrType.getPointee())) {
          // This is an indirect call through a function pointer
          isIndirectCall = true;
          callee = m.getOrCreateName(firstOperand);
        }
      }
    }

    if (callee.empty()) {
      out << "  // " << ERR_CALL_NO_CALLEE << "\n";
      callee = "unknown_fn";
    }

    // ── STD externalization (issue #7) ──────────────────────────────────────
    // Any call whose demangled name starts with "std::" is modelled away:
    // value-returning calls become __VERIFIER_nondet_*(), void calls are no-ops.
    if (!isIndirectCall && m.externalizeStd()) {
      std::string dem = m.demangle(callee);
      if (Mapper::isStdCallName(callee, dem)) {
        if (o->getNumResults() > 0) {
          mlir::Type t = o->getResult(0).getType();
          std::string ctype = m.mapTypeToC(t);
          std::string tmp = m.freshName("std");
          bool isSimple = mlir::isa<cir::IntType>(t) ||
                          mlir::isa<cir::SingleType>(t) ||
                          mlir::isa<cir::DoubleType>(t) ||
                          mlir::isa<cir::LongDoubleType>(t) ||
                          mlir::isa<cir::FP80Type>(t) ||
                          mlir::isa<mlir::FloatType>(t);
          if (isSimple) {
            std::string suffix = Mapper::virtualCallTypeSuffix(ctype);
            m.ensureVerifierNondetDeclared(ctype, suffix);
            out << "  " << ctype << " " << tmp << " = __VERIFIER_nondet_"
                << suffix << "();\n";
          } else {
            m.ensureVerifierNondetMemoryDeclared();
            out << "  " << ctype << " " << tmp << ";\n";
            out << "  __VERIFIER_nondet_memory(&" << tmp
                << ", sizeof(" << tmp << "));\n";
          }
          m.setName(o->getResult(0), tmp);
        } else {
          // Void std:: call: emit a comment, then model potential side effects
          // on every pointer arg whose pointee type is known-complete.
          out << "  // externalized std:: op: " << dem << "\n";
          for (unsigned i = 0; i < o->getNumOperands(); ++i) {
            Value argV = o->getOperand(i);
            auto pt = mlir::dyn_cast<cir::PointerType>(argV.getType());
            if (!pt) continue;
            mlir::Type pointee = pt.getPointee();
            // Skip: function pointers (don't nondeterminize code), void*
            // (unknown size), and incomplete record types (sizeof invalid).
            if (mlir::isa<cir::FuncType>(pointee)) continue;
            if (mlir::isa<cir::VoidType>(pointee)) continue;
            if (auto rt = mlir::dyn_cast<cir::RecordType>(pointee))
              if (!rt.isComplete()) continue;
            m.ensureVerifierNondetMemoryDeclared();
            std::string name = m.getOrCreateName(argV);
            if (m.isDirectAccess(argV))
              out << "  __VERIFIER_nondet_memory(&" << name
                  << ", sizeof(" << name << "));\n";
            else
              out << "  __VERIFIER_nondet_memory(" << name
                  << ", sizeof(*" << name << "));\n";
          }
        }
        m.setLastCallExternalized(true);
        return true;
      }
    }

    // Map the callee to the chosen output name (demangled when unique) for direct calls
    std::string outCallee = isIndirectCall ? callee : m.getFunctionOutputName(callee);

    // Build argument list with address-of adjustment for direct access allocas
    std::string args;
    unsigned startIdx = isIndirectCall ? 1 : 0; // Skip first operand if it's the function pointer
    for (unsigned i = startIdx; i < o->getNumOperands(); ++i) {
      if (i > startIdx) args += ", ";
      Value argV = o->getOperand(i);
      // pointerOperandExpr takes the address of a direct-access scalar lvalue but
      // leaves an array/VLA name to decay (a VLA alloca is CIR ptr<scalar>, so a
      // naive pointee-array check would wrongly emit `&v` = pointer-to-VLA).
      args += pointerOperandExpr(argV, m);
    }

    // For indirect calls, we need to cast the void* back to a function pointer
    // Use a typedef-style cast for function pointers
    std::string callExpr;
    if (isIndirectCall) {
      std::string retType = "void";
      if (o->getNumResults() > 0)
        retType = m.mapTypeToC(o->getResult(0).getType());
      // Build parameter types from the actual arguments passed, not from the
      // function pointer's declared type.  For Itanium member-function-pointer
      // dispatch, the declared type includes extra ABI parameters (e.g. the
      // original class pointer) that are not actually passed at the call site.
      // Using the operand types ensures the cast matches the actual call.
      std::string paramTypes;
      bool firstParam = true;
      bool isFuncVarArg = false;
      if (o->getNumOperands() > 0) {
        // Check vararg flag from the callee's function type (still needed).
        Value fnPtrVal = o->getOperand(0);
        if (auto ptrTy = llvm::dyn_cast<cir::PointerType>(fnPtrVal.getType()))
          if (auto funcTy = mlir::dyn_cast<cir::FuncType>(ptrTy.getPointee()))
            isFuncVarArg = funcTy.isVarArg();
        // Arguments are operands 1..N (operand 0 is the callee).
        for (unsigned i = 1; i < o->getNumOperands(); ++i) {
          if (!firstParam) paramTypes += ", ";
          firstParam = false;
          paramTypes += m.mapTypeToC(o->getOperand(i).getType());
        }
      }
      if (isFuncVarArg) {
        if (!firstParam) paramTypes += ", ";
        paramTypes += "...";
      }
      callExpr = "((" + retType + " (*)(" + paramTypes + "))" + outCallee + ")";
    } else {
      callExpr = outCallee;
    }

    if (o->getNumResults() > 0) {
      std::string tmp = m.freshName("r");
      std::string ctype = m.mapTypeToC(o->getResult(0).getType());
      out << "  " << ctype << " " << tmp << " = " << callExpr << "(" << args << ");\n";
      m.setName(o->getResult(0), tmp);
    } else {
      out << "  " << callExpr << "(" << args << ");\n";
    }
    return true;
  }

  static bool handleCall(cir::CallOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (!handleCallLikeOp(o, m, out)) return false;

    // A regular cir.call without the `nothrow` attribute may have left an
    // exception in flight in the callee.  C has no implicit unwind, so we
    // model the unwind edge explicitly: if __cir_exc_active is set, either
    // jump to the enclosing structured try's dispatch label (so its handlers
    // run) or return from the current function, propagating the exception
    // to the caller.  cir.try_call already has explicit successors for this
    // and is handled separately.
    //
    // Only emit the guard when the module actually uses EH ops: if no
    // cir.throw / cir.try / cir.try_call / etc. exist then __cir_exc_active
    // is never declared and the reference would produce a compile error.
    if (!op.getNothrow() && m.hasExceptions() && !m.lastCallExternalized()) {
      out << "  if (__cir_exc_active) {\n";
      // Run any pending RAII destructors before propagating the exception.
      // emitPendingCleanups writes to `out` with its own indentation; we wrap
      // the whole guard in a block so the cleanup statements are scoped.
      // consume=false: this is the CONDITIONAL exceptional path; the normal
      // (no-exception) fall-through still needs handleCleanupScope to emit the
      // same destructors at scope exit.
      std::ostringstream cleanupOut;
      m.emitPendingCleanups(cleanupOut, 0, /*consume=*/false);
      // Re-indent: the cleanups were produced at "  " indent; inside the if-block
      // we want one extra level.
      {
        std::istringstream lines(cleanupOut.str());
        std::string line;
        while (std::getline(lines, line)) {
          if (!line.empty()) out << "  ";
          out << line << "\n";
        }
      }
      const std::string &pad = m.currentTryLandingPad();
      if (!pad.empty()) {
        out << "    goto " << pad << ";\n";
      } else {
        auto func = o->getParentOfType<cir::FuncOp>();
        mlir::Type rty = func ? func.getFunctionType().getReturnType()
                              : mlir::Type();
        if (!func || mlir::isa<mlir::NoneType>(rty) ||
            mlir::isa<cir::VoidType>(rty)) {
          out << "    return;\n";
        } else {
          std::string ctype = m.mapTypeToC(rty);
          // A struct/union return type cannot be produced by casting 0
          // (`(struct X)0` is invalid C); zero-initialise it instead.
          std::string init = mlir::isa<cir::RecordType>(rty) ? "{0}"
                                                             : ("(" + ctype + ")0");
          out << "    " << ctype << " __cir_eh_ret = " << init << ";\n";
          out << "    return __cir_eh_ret;\n";
        }
      }
      out << "  }\n";
    }
    return true;
  }

  static bool handleTryCall(cir::TryCallOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (!handleCallLikeOp(o, m, out)) return false;
    m.setHasExceptions();

    // cir.try_call is a terminator with two successors: normal and unwind.
    // Branch to unwind when the callee left an exception in flight.
    if (o->getNumSuccessors() >= 2) {
      mlir::Block *normal = op.getNormalDest();
      mlir::Block *unwind = op.getUnwindDest();
      out << "  if (__cir_exc_active) goto " << m.getOrCreateLabel(unwind)
          << "; else goto " << m.getOrCreateLabel(normal) << ";\n";
    } else if (o->getNumSuccessors() == 1) {
      out << "  goto " << m.getOrCreateLabel(o->getSuccessor(0)) << ";\n";
    }
    return true;
  }

  static bool handleReturn(cir::ReturnOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    // Destructor order: evaluate return value FIRST, then run dtors, then return.
    // C++ standard: destructors of locals run after the return expression is
    // evaluated but before control leaves the function.
    if (o->getNumOperands() == 0) {
      // No return value — emit cleanups then return.
      m.emitPendingCleanups(out, 0);
      out << "  return;\n";
      return true;
    }
    // With a return value: capture it into a temp, run cleanups, return temp.
    std::string rv = m.getOrCreateName(o->getOperand(0));
    // Only introduce a temp when the pending cleanups could shadow the name.
    if (m.getLoopDepth() > 0 || !m.currentForStepLabel().empty() ||
        !m.cleanupStackEmpty()) {
      // Use a stable temp name that won't collide (freshName gives a new name).
      std::string retTmp = m.freshName("ret_val");
      std::string ctype = m.mapTypeToC(o->getOperand(0).getType());
      out << "  " << ctype << " " << retTmp << " = " << rv << ";\n";
      m.emitPendingCleanups(out, 0);
      out << "  return " << retTmp << ";\n";
    } else {
      // No cleanups pending — direct return.
      m.emitPendingCleanups(out, 0);
      out << "  return " << rv << ";\n";
    }
    return true;
  }

  static bool handleUnreachable(cir::UnreachableOp op, Mapper &m, std::ostream &out) {
    out << "  __builtin_unreachable();\n";
    return true;
  }

  static bool handleTrap(cir::TrapOp op, Mapper &m, std::ostream &out) {
    out << "  abort();\n";
    return true;
  }
};

REGISTER_HANDLER_MODULE(CallHandlers)

} // namespace cir2c
