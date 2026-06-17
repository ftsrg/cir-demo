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
#include <llvm/Support/raw_ostream.h>
#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <string>
#include <sstream>
#include <cctype>

using namespace mlir;

namespace cir2c {

/// Handlers for record member access, array element access, pointer arithmetic,
/// pointer difference, base-class address adjustment, and bitfield operations.
class RecordHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Memory and pointer operations
    m.registerTypedHandler<cir::GetMemberOp>(handleGetMember);
    m.registerTypedHandler<cir::ExtractMemberOp>(handleExtractMember);
    m.registerTypedHandler<cir::GetElementOp>(handleGetElement);
    m.registerTypedHandler<cir::PtrStrideOp>(handlePtrStride);
    m.registerTypedHandler<cir::PtrDiffOp>(handlePtrDiff);
    m.registerHandler("cir.base_class_addr", std::make_unique<LambdaOpHandler>(handleBaseClassAddr));
    m.registerTypedHandler<cir::GetBitfieldOp>(handleGetBitfield);
    m.registerTypedHandler<cir::SetBitfieldOp>(handleSetBitfield);
  }

private:
  // Flat element count of a (possibly nested) array type: 41 for int[41],
  // 41*41 for int[41][41]. Used to scale pointer strides over array pointees.
  static uint64_t flatArrayElementCount(cir::ArrayType at) {
    uint64_t n = at.getSize();
    mlir::Type el = at.getElementType();
    while (auto inner = mlir::dyn_cast<cir::ArrayType>(el)) {
      n *= inner.getSize();
      el = inner.getElementType();
    }
    return n;
  }

  // True when the bitfield storage member is a byte array rather than a scalar
  // integer (wide bitfields are laid out over `unsigned char storage[N]`). For
  // array storage, `(unsigned long)(member)` would decay to the address instead
  // of reading the bits, and assigning to the array would not compile — so we
  // load/store the bytes through __builtin_memcpy into an integer instead.
  static bool isArrayBitfieldStorage(mlir::Value addr) {
    if (auto pt = mlir::dyn_cast<cir::PointerType>(addr.getType()))
      return mlir::isa<cir::ArrayType>(pt.getPointee());
    return false;
  }

  // Emit a `unsigned long <name>` holding the bitfield storage bits, loaded from
  // `byteOff` bytes into the storage. For scalar storage this is a plain cast; for
  // array storage it memcpys up to 8 bytes (capped at the bytes remaining after
  // byteOff) so the 64-bit window covers the field. `byteOff` lets a field whose
  // bit offset+width exceeds 64 (wide packed bitfield) be read through a window
  // that starts at its own byte, keeping offset%8+width <= 64.
  static std::string loadBitfieldStorage(const std::string &storageExpr,
                                         bool arrayStorage, uint64_t byteOff,
                                         Mapper &m, std::ostream &out) {
    std::string s = m.freshName("bf_st");
    if (arrayStorage) {
      std::string base  = "((unsigned char*)(" + storageExpr + ") + " + std::to_string(byteOff) + ")";
      std::string avail = "(sizeof(" + storageExpr + ") - " + std::to_string(byteOff) + ")";
      m.ensureMemcpyDeclared();
      out << "  unsigned long " << s << " = 0;\n";
      out << "  memcpy(&" << s << ", " << base
          << ", sizeof(" << s << ") < " << avail << " ? sizeof(" << s << ") : "
          << avail << ");\n";
    } else {
      out << "  unsigned long " << s << " = (unsigned long)(" << storageExpr << ");\n";
    }
    return s;
  }

  // Emit the extraction of `tmp` (typed `ctype`) from storage value `st`.
  static void extractBitfield(const std::string &tmp, const std::string &ctype,
                              const std::string &st, uint64_t offset,
                              uint64_t width, uint64_t mask, bool isSigned,
                              Mapper &m, std::ostream &out) {
    if (!isSigned) {
      out << "  " << ctype << " " << tmp << " = (" << ctype << ")(" << st
          << " >> " << offset << " & " << mask << "ULL);\n";
    } else {
      uint64_t signbit = 1ULL << (width - 1);
      std::string raw = m.freshName("bf_raw");
      out << "  unsigned long " << raw << " = " << st << " >> " << offset
          << " & " << mask << "ULL;\n";
      out << "  " << ctype << " " << tmp << " = (" << ctype << ")((" << raw
          << " ^ " << signbit << "ULL) - " << signbit << "ULL);\n";
    }
  }

  static bool handleGetMember(cir::GetMemberOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    Value base = o->getOperand(0);
    std::string baseName = m.getOrCreateName(base);

    std::string memberName;

    // Prefer the canonical name the struct emitter chose for this member index.
    // Multiple bitfields can share one storage member (same index, different
    // `name` attrs); they must all resolve to the single emitted member name,
    // not their individual bitfield names.
    if (auto recPtr = mlir::dyn_cast<cir::PointerType>(base.getType())) {
      if (auto rec = mlir::dyn_cast<cir::RecordType>(recPtr.getPointee())) {
        // mapTypeToC yields "struct X" / "union X"; strip the keyword to recover
        // the bare record name used as the recordFieldNames_ key.
        std::string recC = m.mapTypeToC(rec);
        auto sp = recC.find(' ');
        std::string bare = (sp == std::string::npos) ? recC : recC.substr(sp + 1);
        memberName = m.lookupFieldName(bare, static_cast<int>(op.getIndex()));
      }
    }

    if (memberName.empty()) {
      if (auto sa = o->getAttrOfType<StringAttr>("name"))
        memberName = sa.getValue().str();
    }

    // Anonymous members (empty name attr) are emitted into the struct definition
    // as `field<N>` by the struct collector in Mapper.cpp (the "_M_local_buf"-
    // bearing anonymous union inside libstdc++ basic_string is the canonical
    // example). Mirror that scheme here using the op's `index_attr` so the
    // access expression resolves to a real field.
    if (memberName.empty()) {
      if (auto ia = o->getAttrOfType<mlir::IntegerAttr>("index_attr"))
        memberName = "field" + std::to_string(ia.getInt());
    }

    if (memberName.empty()) {
      out << "  // " << ERR_GET_MEMBER_NO_NAME << "\n";
      memberName = "field";
    }

    // cir.get_member conceptually returns the address of a member, but the C text
    // we carry forward is already the final lvalue expression (`a.b` or `p->b`).
    // Later load/store handlers must therefore treat every get_member result as a
    // direct-access expression and avoid adding an extra dereference.
    bool baseIsDirectAccess = m.isDirectAccess(base);
    bool baseNameHasArrow = baseName.find("->") != std::string::npos;
    bool useArrow = !baseIsDirectAccess && !baseNameHasArrow;

    // For get_member, set the name mapping to the chained expression
    std::string expr;
    if (useArrow) {
      // If baseName is already address-of (e.g. "&op"), wrap it so that -> binds
      // to the struct value, not to the address: (&op)->field rather than &op->field.
      if (!baseName.empty() && baseName[0] == '&')
        expr = "(" + baseName + ")->" + memberName;
      else
        expr = baseName + "->" + memberName;
    } else {
      expr = baseName + "." + memberName;
    }
    if (o->getNumResults() > 0) {
      m.setName(o->getResult(0), expr);
      m.markAsDirectAccess(o->getResult(0));
    }
    return true;
  }

  // cir.extract_member extracts the value of a field from a struct value
  // (not a pointer). Used e.g. for Itanium member-function-pointer fields.
  static bool handleExtractMember(cir::ExtractMemberOp op, Mapper &m, std::ostream &out) {
    std::string recName = m.getOrCreateName(op.getRecord());
    uint64_t index = op.getIndex();
    std::string tmp = m.freshName("v");
    std::string ctype = m.mapTypeToC(op.getResult().getType());
    out << "  " << ctype << " " << tmp << " = " << recName << ".__field" << index << ";\n";
    m.setName(op.getResult(), tmp);
    return true;
  }

  static bool handleGetElement(cir::GetElementOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 2) return false;
    Value base = o->getOperand(0);
    Value index = o->getOperand(1);
    std::string baseName = m.getOrCreateName(base);
    std::string indexName = m.getOrCreateName(index);

    // Index scaling (mirrors handlePtrStride): when the base is a flat decayed
    // pointer (e.g. the loaded value of a pointer-to-array variable, typed `E*`
    // in C) rather than a real multidimensional array lvalue, `base[index]` strides
    // by the scalar element. If the get_element steps over an array-typed element
    // (`ptr<array<array<E x N> x M>>` -> row), scale by that element's flat count.
    std::string idxExpr = indexName;
    bool baseIsRealArray = false;
    if (m.isDirectAccess(base)) {
      if (auto bpt = mlir::dyn_cast<cir::PointerType>(base.getType()))
        if (mlir::isa<cir::ArrayType>(bpt.getPointee())) baseIsRealArray = true;
      if (auto al = base.getDefiningOp<cir::AllocaOp>())
        baseIsRealArray = baseIsRealArray || al.getDynAllocSize() ||
                          mlir::isa<cir::ArrayType>(al.getAllocaType());
    }
    if (!baseIsRealArray) {
      if (auto bpt = mlir::dyn_cast<cir::PointerType>(base.getType()))
        if (auto at = mlir::dyn_cast<cir::ArrayType>(bpt.getPointee()))
          if (auto elemArr = mlir::dyn_cast<cir::ArrayType>(at.getElementType())) {
            uint64_t mult = flatArrayElementCount(elemArr);
            if (mult > 1) idxExpr = "(" + indexName + ") * " + std::to_string(mult);
          }
    }

    // cir.get_element returns a pointer to the element, so we need to generate base[index]
    // The result will be used by load/store operations
    // For get_element, build up chained array access expression
    std::string expr = baseName + "[" + idxExpr + "]";
    if (o->getNumResults() > 0) {
      m.setName(o->getResult(0), expr);
      // get_element always produces base[index] which is the element lvalue;
      // mark as direct access so load/store don't add an extra dereference.
      m.markAsDirectAccess(o->getResult(0));
    }
    return true;
  }

  static bool handlePtrStride(cir::PtrStrideOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 2) return false;
    Value base = o->getOperand(0);
    Value stride = o->getOperand(1);
    std::string baseName = m.getOrCreateName(base);
    std::string strideName = m.getOrCreateName(stride);

    // A direct-access base has its C name bound to the pointee lvalue rather than
    // a pointer. If that name is a *scalar lvalue* (e.g. a get_element result
    // `s1[c]` is the element), the pointer we stride from is its address, so
    // qualify with '&'; otherwise we'd index a scalar (`&(s1[c])[i]` —
    // "subscripted value is not a pointer"). But a name that already *decays* to
    // a pointer — an array, or an array/VLA alloca declared `T name[...]` — must
    // be used as-is; taking '&' there yields a wrong pointer-to-array.
    bool baseIsRealArray = false; // C name strides by the array's row size for free
    if (m.isDirectAccess(base)) {
      bool decaysAsPointer = false;
      if (auto bpt = mlir::dyn_cast<cir::PointerType>(base.getType()))
        decaysAsPointer = mlir::isa<cir::ArrayType>(bpt.getPointee());
      if (auto al = base.getDefiningOp<cir::AllocaOp>())
        // VLA (dynamic size) or array-typed alloca is declared as a C array.
        decaysAsPointer = decaysAsPointer || al.getDynAllocSize() ||
                          mlir::isa<cir::ArrayType>(al.getAllocaType());
      if (!decaysAsPointer)
        baseName = "&(" + baseName + ")";
      else
        baseIsRealArray = true;
    }

    // Stride scaling for an array pointee `ptr<array<E x N>>`, where a unit stride
    // advances by the whole pointee array. The C form `&base[stride]` strides by
    // base's decayed element, which differs by how `base` is spelled:
    //   * Flat decayed pointer (e.g. a 2-D array param `int a[41][41]` lowered to
    //     `int*`): `base[stride]` strides by the scalar element, so scale by the
    //     pointee's FULL flat element count (product of all dims).
    //   * Direct-access array lvalue (e.g. `a[0][0]` of type `char[28]` from a
    //     get_element): `base[stride]` peels one dimension, so scale by just the
    //     pointee's OUTERMOST dimension size.
    // A scalar pointee (VLA element, ordinary `int*`) needs no scaling.
    std::string strideExpr = strideName;
    if (auto bpt = mlir::dyn_cast<cir::PointerType>(base.getType()))
      if (auto at = mlir::dyn_cast<cir::ArrayType>(bpt.getPointee())) {
        uint64_t mult = baseIsRealArray ? at.getSize() : flatArrayElementCount(at);
        if (mult > 1)
          strideExpr = "(" + strideName + ") * " + std::to_string(mult);
      }

    // Default policy: prefer array-style indexing syntax over raw pointer
    // arithmetic because downstream verifiers generally support indexing better.
    // Keep a conservative fallback to `base + stride` for unsupported pointer
    // categories (e.g., void/function pointers).
    static constexpr bool kPreferIndexedPtrStride = true;

    std::string tmp = m.freshName("ptr");
    std::string ctype = "int*";
    if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());

    bool canUseIndexedForm = false;
    if (auto basePtrTy = llvm::dyn_cast<cir::PointerType>(base.getType())) {
      mlir::Type pointee = basePtrTy.getPointee();
      bool unsupportedIndexedPointee = mlir::isa<cir::VoidType>(pointee) ||
                                       mlir::isa<cir::FuncType>(pointee) ||
                                       mlir::isa<mlir::NoneType>(pointee);
      canUseIndexedForm = !unsupportedIndexedPointee;
    }

    if (kPreferIndexedPtrStride && canUseIndexedForm) {
      out << "  " << ctype << " " << tmp << " = &(" << baseName << ")[" << strideExpr << "];\n";
    } else {
      out << "  " << ctype << " " << tmp << " = " << baseName << " + " << strideExpr << ";\n";
    }
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }

  static bool handlePtrDiff(cir::PtrDiffOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 2) return false;
    Value lhs = o->getOperand(0);
    Value rhs = o->getOperand(1);
    std::string l = m.getOrCreateName(lhs);
    std::string r = m.getOrCreateName(rhs);

    std::string tmp = m.freshName("diff");
    std::string ctype = "long";
    if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());

    out << "  " << ctype << " " << tmp << " = " << l << " - " << r << ";\n";
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }

  static bool handleBaseClassAddr(Operation *o, Mapper &m, std::ostream &out) {
    if (o->getNumOperands() < 1 || o->getNumResults() < 1) return false;

    Value base = o->getOperand(0);
    std::string baseName = m.getOrCreateName(base);
    // Direct-access values are C lvalues (variables, `a.b`, `p->b`, `a[i]`) —
    // to use them in pointer arithmetic we need their address. Wrap in parens
    // so member/index chains stay grouped under the unary &.
    if (m.isDirectAccess(base) && !baseName.empty() && baseName[0] != '&') {
      baseName = "&(" + baseName + ")";
    }
    std::string resultType = m.mapTypeToC(o->getResult(0).getType());

    std::string opText;
    llvm::raw_string_ostream rso(opText);
    o->print(rso);
    rso.flush();

    bool isNonnull = opText.find(" nonnull ") != std::string::npos;
    long long offset = 0;
    size_t openBracket = opText.rfind('[');
    size_t closeBracket = (openBracket == std::string::npos) ? std::string::npos : opText.find(']', openBracket + 1);
    if (openBracket != std::string::npos && closeBracket != std::string::npos && closeBracket > openBracket + 1) {
      std::string offsetText = opText.substr(openBracket + 1, closeBracket - openBracket - 1);
      size_t start = 0;
      while (start < offsetText.size() && std::isspace(static_cast<unsigned char>(offsetText[start]))) ++start;
      size_t end = offsetText.size();
      while (end > start && std::isspace(static_cast<unsigned char>(offsetText[end - 1]))) --end;
      if (end > start) {
        offset = std::stoll(offsetText.substr(start, end - start));
      }
    }

    std::string adjustedExpr = "(" + resultType + ")((char *)" + baseName + " + " + std::to_string(offset) + ")";
    if (!isNonnull) {
      adjustedExpr = "((" + baseName + ") ? " + adjustedExpr + " : (" + resultType + ")0)";
    }

    std::string tmp = m.freshName("base");
    out << "  " << resultType << " " << tmp << " = " << adjustedExpr << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  static bool handleGetBitfield(cir::GetBitfieldOp op, Mapper &m, std::ostream &out) {
    Value addr = op.getAddr();
    std::string addrName = m.getOrCreateName(addr);
    cir::BitfieldInfoAttr info = op.getBitfieldInfo();
    uint64_t offset = info.getOffset();
    uint64_t width = info.getSize();
    bool isSigned = info.getIsSigned();
    std::string ctype = m.mapTypeToC(op.getResult().getType());
    bool arrayStorage = isArrayBitfieldStorage(addr);
    std::string storageExpr = m.isDirectAccess(addr) ? addrName : ("(*" + addrName + ")");
    // A wide packed bitfield over byte-array storage can have offset+width > 64
    // (e.g. #pragma pack(1) field at bit 45, width 25). Read through a 64-bit
    // window that starts at the field's own byte so all its bits are covered.
    uint64_t byteOff = 0, bitOff = offset;
    if (arrayStorage && offset + width > 64) { byteOff = offset / 8; bitOff = offset % 8; }
    // Guard against width==64 to avoid UB in shift (1ULL<<64).
    uint64_t mask = (width >= 64) ? ~0ULL : ((1ULL << width) - 1);
    std::string st = loadBitfieldStorage(storageExpr, arrayStorage, byteOff, m, out);
    std::string tmp = m.freshName("bf");
    extractBitfield(tmp, ctype, st, bitOff, width, mask, isSigned, m, out);
    m.setName(op.getResult(), tmp);
    return true;
  }

  static bool handleSetBitfield(cir::SetBitfieldOp op, Mapper &m, std::ostream &out) {
    Value addr = op.getAddr();
    Value src = op.getSrc();
    std::string addrName = m.getOrCreateName(addr);
    std::string srcName = m.getOrCreateName(src);
    cir::BitfieldInfoAttr info = op.getBitfieldInfo();
    uint64_t offset = info.getOffset();
    uint64_t width = info.getSize();
    bool isSigned = info.getIsSigned();
    std::string ctype = m.mapTypeToC(op.getResult().getType());
    bool arrayStorage = isArrayBitfieldStorage(addr);
    std::string storageExpr = m.isDirectAccess(addr) ? addrName : ("(*" + addrName + ")");
    // Wide packed bitfield (offset+width > 64) over byte-array storage: operate on
    // a 64-bit window starting at the field's own byte (see handleGetBitfield).
    uint64_t byteOff = 0, bitOff = offset;
    if (arrayStorage && offset + width > 64) { byteOff = offset / 8; bitOff = offset % 8; }
    uint64_t mask = (width >= 64) ? ~0ULL : ((1ULL << width) - 1);
    // Load storage. cir.set_bitfield's result is the field's PREVIOUS value (e.g.
    // a post-decrement `s.f--` reads this for its condition), so extract it BEFORE
    // modifying the storage.
    std::string st = loadBitfieldStorage(storageExpr, arrayStorage, byteOff, m, out);
    std::string tmp = m.freshName("bf");
    extractBitfield(tmp, ctype, st, bitOff, width, mask, isSigned, m, out);
    // Clear the field bits, OR in the new value, store back.
    out << "  " << st << " = " << st << " & ~(" << mask << "ULL << " << bitOff
        << ") | ((unsigned long)(" << srcName << ") & " << mask << "ULL) << "
        << bitOff << ";\n";
    if (arrayStorage) {
      std::string base  = "((unsigned char*)(" + storageExpr + ") + " + std::to_string(byteOff) + ")";
      std::string avail = "(sizeof(" + storageExpr + ") - " + std::to_string(byteOff) + ")";
      m.ensureMemcpyDeclared();
      out << "  memcpy(" << base << ", &" << st
          << ", sizeof(unsigned long) < " << avail
          << " ? sizeof(unsigned long) : " << avail << ");\n";
    } else {
      out << "  " << storageExpr << " = " << st << ";\n";
    }
    m.setName(op.getResult(), tmp);
    return true;
  }
};

REGISTER_HANDLER_MODULE(RecordHandlers)

} // namespace cir2c
