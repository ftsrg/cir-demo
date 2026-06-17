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

#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/Support/Casting.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>
#include <clang/CIR/Dialect/IR/CIROpsAttributes.h.inc>
#include "ErrorMessages.h"

#include <string>

using namespace mlir;

namespace cir2c {

/// Handlers for memory allocation and basic load/store/copy operations:
/// cir.alloca, cir.load, cir.store, cir.copy, cir.stack_save, cir.stack_restore.
class MemoryHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Basic operations
    m.registerTypedHandler<cir::AllocaOp>(handleAlloca);
    m.registerTypedHandler<cir::LoadOp>(handleLoad);
    m.registerTypedHandler<cir::StoreOp>(handleStore);
    // Memory and pointer operations
    m.registerTypedHandler<cir::CopyOp>(handleCopy);
    m.registerTypedHandler<cir::StackSaveOp>(handleStackSave);
    m.registerTypedHandler<cir::StackRestoreOp>(handleStackRestore);
  }

private:
  static bool handleAlloca(cir::AllocaOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();

    // Try the typed property accessor first (modern CIR).
    std::string varName = op.getName().str();

    // Fallback 1: inherent attribute accessible via the generic MLIR interface.
    if (varName.empty()) {
      if (auto attr = o->getInherentAttr("name"))
        if (auto sa = llvm::dyn_cast<StringAttr>(*attr))
          varName = sa.getValue().str();
    }

    // Fallback 2: legacy regular-attribute storage (older compiled libraries
    // stored the name as a plain dict attribute rather than a property).
    if (varName.empty())
      varName = extractName(o);

    // An empty name is valid: Clang emits unnamed allocas for unused or
    // compiler-generated parameter slots (e.g. `const void* __hint` in
    // std::__new_allocator::allocate).  Just assign a synthetic name.
    if (varName.empty())
      varName = "unnamed";

    // Make variable name unique by appending suffix if it's already been used
    // This handles cases where MLIR has multiple allocas with the same name (e.g., in nested scopes)
    // Sanitize first so dots/dashes in CIR names don't produce invalid C identifiers.
    std::string uniqueVarName = m.freshName(m.sanitizeIdentifier(varName));

    // Determine qualifier prefix (_Atomic / volatile) based on access patterns
    // detected during the mapModule pre-scan.  We check the first (and only)
    // result of the alloca against the sets recorded by the pre-scan.
    std::string qualPrefix;
    if (o->getNumResults() > 0) {
      mlir::Value allocaResult = o->getResult(0);
      if (m.isAtomicAlloca(allocaResult))   qualPrefix += "_Atomic ";
      if (m.isVolatileAlloca(allocaResult)) qualPrefix += "volatile ";
    }

    // Get the allocated type (first operand type in the operation signature)
    // cir.alloca returns a pointer, but we want to declare the variable as the pointed-to type
    Type allocaTy = op.getAllocaType();

    // Variable-length array: a dynamic alloc-size operand makes this a VLA.
    // Map it to a C99 VLA `T name[n]` so its lifetime is managed by the
    // enclosing C block scope (matching the cir.scope it lives in). The result
    // is direct-access like other arrays; it decays to a pointer where used.
    if (mlir::Value dynSize = op.getDynAllocSize()) {
      std::string sizeName = m.getOrCreateName(dynSize);
      std::string dims;
      std::string elemCType = m.arrayBaseTypeAndDims(allocaTy, dims);
      out << "  " << qualPrefix << elemCType << " " << uniqueVarName
          << "[" << sizeName << "]" << dims << ";\n";
      for (Value res : o->getResults()) {
        m.setName(res, uniqueVarName);
        m.markAsDirectAccess(res);
      }
      return true;
    }

    // Handle struct types first: use typed API instead of textual type string inspection.
    // This needs to come before array check since some struct names might contain "array"
    if (mlir::isa<cir::RecordType>(allocaTy)) {
      std::string ctype = m.mapTypeToC(allocaTy);
      out << "  " << qualPrefix << ctype << " " << uniqueVarName << ";\n";
      for (Value res : o->getResults()) {
        m.setName(res, uniqueVarName);
        m.markAsDirectAccess(res);
      }
      return true;
    }

    // Handle array types specially: !cir.array<!s32i x 5> -> int arr[5]
    // Multi-dimensional arrays emit every dimension: int arr[8][3].
    if (auto arrayTy = llvm::dyn_cast<cir::ArrayType>(allocaTy)) {
      std::string dims;
      std::string elemCType = m.arrayBaseTypeAndDims(arrayTy, dims);
      out << "  " << qualPrefix << elemCType << " " << uniqueVarName << dims << ";\n";
      for (Value res : o->getResults()) {
        m.setName(res, uniqueVarName);
        m.markAsDirectAccess(res);
      }
      return true;
    }

    // For non-array, non-struct types, use regular type mapping
    std::string ctype = "int";
    if (allocaTy) {
      ctype = m.mapTypeToC(allocaTy);
    }

    out << "  " << qualPrefix << ctype << " " << uniqueVarName << ";\n";
    for (Value res : o->getResults()) {
      m.setName(res, uniqueVarName);
      m.markAsDirectAccess(res); // Mark alloca results as direct access
    }
    return true;
  }

  static bool handleLoad(cir::LoadOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    Value ptr = o->getOperand(0);

    // Vtable dispatch chain: if loading from a tracked chain value, propagate
    // the chain and emit a C declaration when the loaded value will be referenced
    // by downstream ops (e.g. virtual-base offset computation).
    if (m.isVtableDispatchValue(ptr)) {
      if (o->getNumResults() > 0) {
        Value result    = o->getResult(0);
        mlir::Value obj = m.getVtableDispatchObject(ptr);
        m.trackVtableDispatch(result, obj);
        bool isFnPtr = false;
        // If the result is a pointer to a function type this is the final
        // function-pointer load -- mark it so that handleCall can emit the
        // __VERIFIER_virtual_call intrinsic.
        if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(result.getType()))
          if (mlir::isa<cir::FuncType>(ptrTy.getPointee())) {
            isFnPtr = true;
            m.markVirtualFnPtr(result);
            // Propagate the vtable slot from the ptr-to-fn-ptr value.
            int slot = m.getVirtualFnSlot(ptr);
            if (slot >= 0) m.setVirtualFnSlot(result, slot);
          }
        std::string name = m.getOrCreateName(result);
        if (!isFnPtr) {
          // Non-function-pointer vtable load (e.g. the vtable pointer itself for
          // virtual-base-offset computation): emit a declaration so that
          // downstream casts/arithmetic that reference this name compile.
          // The source has type void* (ptr-to-vptr mapped to void*), so cast to
          // void** before dereferencing to produce the void* vtable pointer.
          std::string srcName = m.getOrCreateName(ptr);
          out << "  void* " << name << " = *((void**)" << srcName << ");\n";
        }
      }
      return true;
    }


    std::string src = m.getOrCreateName(ptr);
    std::string tmp = m.freshName("t");
    std::string ctype = "int";
    if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
    // Check if source is marked as direct access (alloca, array, struct)
    // Never dereference direct access values
    bool shouldDereference = !m.isDirectAccess(ptr);
    if (shouldDereference) {
      if (src.size() > 1 && src[0] == '&') {
        out << "  " << ctype << " " << tmp << " = " << src.substr(1) << ";\n";
      } else {
        out << "  " << ctype << " " << tmp << " = *" << src << ";\n";
      }
    } else {
      out << "  " << ctype << " " << tmp << " = " << src << ";\n";
    }
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }

  static bool handleStore(cir::StoreOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 2) return false;
    Value val = o->getOperand(0);
    Value ptr = o->getOperand(1);

    // Vtable-pointer install: a constructor stores a !cir.vptr (from
    // cir.vtable.address_point, i.e. `&_ZTV[k]`) into the object's __vptr slot at
    // offset 0. We now emit a real vtable array and install the pointer so virtual
    // dispatch (and member-function-pointer-to-virtual) works at runtime: the slot
    // address `ptr` is the get_vptr result (a void**), so store the vptr value
    // through it.
    if (mlir::isa<cir::VPtrType>(val.getType())) {
      std::string vn = m.getOrCreateName(val);
      std::string pn = m.getOrCreateName(ptr);
      out << "  *(void**)(" << pn << ") = (void*)" << vn << ";\n";
      return true;
    }

    // Array-typed value: C does not allow array assignment; use memcpy.
    if (mlir::isa<cir::ArrayType>(val.getType())) {
      std::string vn = m.getOrCreateName(val);
      std::string pn = m.getOrCreateName(ptr);
      // pn is a pointer to the array; vn is the array lvalue (direct access).
      std::string src = (m.isDirectAccess(val) && !vn.empty() && vn[0] != '&')
                            ? ("&(" + vn + ")") : vn;
      m.ensureMemcpyDeclared();
      out << "  memcpy(" << pn << ", " << src
          << ", sizeof(*" << pn << "));\n";
      return true;
    }

    std::string vname = m.getOrCreateName(val);
    std::string pname = m.getOrCreateName(ptr);

    // Determine if we need to take the address of val when storing
    // We need & if:
    // 1. val is a direct access lvalue (variable from alloca, array element from get_element)
    // 2. ptr expects a pointer value (ptr's pointed-to type is a pointer)
    bool needAddressOf = false;
    if (m.isDirectAccess(val) && ptr.getType()) {
      // val is a direct-access lvalue. We need & when the destination slot holds
      // a pointer AND the value itself is a scalar lvalue (not a pointer type).
      // Exception: when val is a ptr-to-array alloca (e.g. char[6]), the C name
      // is declared as `T name[N]` and decays to `T*` — adding & would give
      // `T(*)[N]` (pointer-to-array), the wrong type for a `T**` destination.
      // Only skip & for this specific case; all other pointer types still need it.
      bool valIsArrayPtr = false;
      if (auto al = val.getDefiningOp<cir::AllocaOp>())
        valIsArrayPtr = mlir::isa<cir::ArrayType>(al.getAllocaType());
      if (!valIsArrayPtr) {
        Type ptrType = ptr.getType();
        if (auto ptrTy = llvm::dyn_cast<cir::PointerType>(ptrType)) {
          Type pointee = ptrTy.getPointee();
          std::string pointeeCType = m.mapTypeToC(pointee);
          bool pointeeIsPointer = !pointeeCType.empty() && pointeeCType.back() == '*';
          if (pointeeIsPointer) {
            needAddressOf = true;
          }
        }
      }
    }
    if (needAddressOf) {
      vname = "&" + vname;
    }
    // Check if destination is marked as direct access (alloca, array, struct)
    // Never dereference direct access destinations
    bool shouldDereference = !m.isDirectAccess(ptr);
    if (shouldDereference) {
      out << "  *" << pname << " = " << vname << ";\n";
    } else {
      out << "  " << pname << " = " << vname << ";\n";
    }
    return true;
  }

  static bool handleCopy(cir::CopyOp op, Mapper &m, std::ostream &out) {
    // NOTE: cir.copy is spelled as "cir.copy %src to %dst", but in the
    // generated op API operand(0) is the destination and operand(1) is the
    // source. Use typed accessors to avoid accidental reversal.
    Value src = op.getSrc();
    Value dst = op.getDst();
    std::string srcName = m.getOrCreateName(src);
    std::string dstName = m.getOrCreateName(dst);
    // Determine if this is an array copy (both operands pointer to array)
    auto srcPtrTy = llvm::dyn_cast<cir::PointerType>(src.getType());
    auto dstPtrTy = llvm::dyn_cast<cir::PointerType>(dst.getType());
    if (srcPtrTy && dstPtrTy) {
      auto srcArrTy = llvm::dyn_cast<cir::ArrayType>(srcPtrTy.getPointee());
      auto dstArrTy = llvm::dyn_cast<cir::ArrayType>(dstPtrTy.getPointee());
      if (srcArrTy && dstArrTy && srcArrTy.getSize() == dstArrTy.getSize() && srcArrTy.getElementType() == dstArrTy.getElementType()) {
        uint64_t size = srcArrTy.getSize();
        // Copy via memcpy rather than an element-wise loop: when the element
        // type is itself an array (multi-dimensional), `dst[i] = src[i]` is an
        // array assignment, which C rejects. memcpy works for any element type.
        // Length = outer count * sizeof(one element); subscripting works whether
        // the operand is a direct-access array or a pointer. Standard `memcpy`
        // (not `__builtin_memcpy`) so SV-COMP verifiers model the copy.
        m.ensureMemcpyDeclared();
        out << "  // array copy\n";
        out << "  memcpy(" << dstName << ", " << srcName << ", "
            << "(unsigned long)" << size << " * sizeof(" << srcName << "[0]));\n";
        return true;
      }
    }
    // Struct/scalar copy. cir.copy semantically does `*dst = *src` — both
    // operands are pointers. In C, a direct-access value's name *is* the
    // lvalue (no deref needed); a non-direct-access name is a pointer and
    // needs `*`. Adjust each side accordingly so the assignment types match.
    std::string dstExpr = m.isDirectAccess(dst) ? dstName : ("*" + dstName);
    std::string srcExpr = m.isDirectAccess(src) ? srcName : ("*" + srcName);
    out << "  " << dstExpr << " = " << srcExpr << "; // copy\n";
    return true;
  }

  static bool handleStackSave(cir::StackSaveOp op, Mapper &m, std::ostream &out) {
    // VLA stack bookkeeping. VLAs are mapped to C99 VLAs (see handleAlloca)
    // whose storage is freed at the end of their enclosing block scope, so the
    // save/restore are not needed for correctness. The result may be stored into
    // a variable and read by StackRestore, so it must still be declared — emit a
    // null placeholder rather than leaving the name undefined.
    Operation *o = op.getOperation();
    if (o->getNumResults() > 0) {
      mlir::Value res = o->getResult(0);
      std::string ctype = m.mapTypeToC(res.getType());
      std::string nm = m.freshName("stack_save");
      out << "  " << ctype << " " << nm << " = 0;\n";
      m.setName(res, nm);
    }
    return true;
  }

  static bool handleStackRestore(cir::StackRestoreOp op, Mapper &m, std::ostream &out) {
    // No-op: VLA storage is reclaimed by C block scope. Modelling this with
    // __builtin_stack_restore would risk freeing the C99 VLA prematurely.
    return true;
  }
};

REGISTER_HANDLER_MODULE(MemoryHandlers)

} // namespace cir2c
