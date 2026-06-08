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

#include "ConstantEmitter.h"
#include "Mapper.h"
#include "TypeMapper.h"

#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>
#include <mlir/IR/BuiltinAttributes.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <llvm/ADT/APFloat.h>

using namespace mlir;

namespace cir2c {

// Format an APFloat as a C literal, normalising the +Inf/-Inf/+NaN/-NaN spellings
// that APFloat::toString() emits (which are not valid C) into builtins.
/*static*/
std::string ConstantEmitter::formatFpLiteral(const llvm::APFloat &v,
                                             const std::string &ctype) {
  auto pick = [&](const char *f, const char *l, const char *d) -> std::string {
    return ctype == "float" ? f : ctype == "long double" ? l : d;
  };
  if (v.isNaN()) {
    std::string s = pick("__builtin_nanf(\"\")", "__builtin_nanl(\"\")",
                         "__builtin_nan(\"\")");
    return v.isNegative() ? "-" + s : s;
  }
  if (v.isInfinity()) {
    std::string s = pick("__builtin_inff()", "__builtin_infl()", "__builtin_inf()");
    return v.isNegative() ? "-" + s : s;
  }
  // Exact hex float (with f/L suffix) — no decimal rounding, and a value near
  // LDBL_MAX is preserved rather than mis-rendered as +inf.
  char buf[64];
  v.convertToHexString(buf, /*hexDigits=*/0, /*upperCase=*/false,
                       llvm::APFloat::rmNearestTiesToEven);
  return std::string(buf) + pick("f", "L", "");
}

// Escape raw bytes for a C string literal. Uses 3-digit octal for non-printing
// bytes (a \xHH escape greedily eats following hex digits).
/*static*/
std::string ConstantEmitter::escapeCString(const std::string &bytes) {
  std::string escaped;
  escaped.reserve(bytes.size() * 4 + 4);
  for (unsigned char c : bytes) {
    switch (c) {
    case '\\': escaped += "\\\\"; break;
    case '"': escaped += "\\\""; break;
    case '\n': escaped += "\\n"; break;
    case '\r': escaped += "\\r"; break;
    case '\t': escaped += "\\t"; break;
    default:
      if (c < 32 || c > 126) {
        escaped.push_back('\\');
        escaped.push_back(static_cast<char>('0' + ((c >> 6) & 7)));
        escaped.push_back(static_cast<char>('0' + ((c >> 3) & 7)));
        escaped.push_back(static_cast<char>('0' + (c & 7)));
      } else {
        escaped.push_back(static_cast<char>(c));
      }
    }
  }
  return escaped;
}

// Render a constant attribute as a C initializer, recursing through aggregate
// (struct/array) constants. `type` is the CIR type of the value being
// initialised, used for FP literal typing and zero-fill decisions. Previously
// only flat int globals and int/char arrays were handled, so struct/union and
// nested constant globals lost their initializer and defaulted to zero.
std::string ConstantEmitter::formatConstInit(const Mapper &ctx,
                                             mlir::Attribute attr,
                                             mlir::Type type) const {
  if (mlir::isa<cir::ZeroAttr>(attr)) {
    if (type && (mlir::isa<cir::RecordType>(type) || mlir::isa<cir::ArrayType>(type)))
      return "{0}";
    return "0";
  }
  if (auto ia = mlir::dyn_cast<cir::IntAttr>(attr))
    return std::to_string(ia.getValue().getSExtValue());
  if (auto ba = mlir::dyn_cast<cir::BoolAttr>(attr))
    return ba.getValue() ? "1" : "0";
  if (auto fp = mlir::dyn_cast<cir::FPAttr>(attr))
    return formatFpLiteral(fp.getValue(), type ? ctx.mapTypeToC(type) : "double");
  if (auto fa = mlir::dyn_cast<mlir::FloatAttr>(attr))
    return formatFpLiteral(fa.getValue(), type ? ctx.mapTypeToC(type) : "double");
  // Complex constant in a static initializer: there is no brace form for
  // _Complex (GCC silently drops the imaginary part), so build one with
  // __builtin_complex. It needs equal floating args; for integer complex
  // (_Complex char) build a double complex and convert to the target type.
  if (auto cca = mlir::dyn_cast<cir::ConstComplexAttr>(attr)) {
    mlir::Type elemTy;
    if (auto cplxTy = mlir::dyn_cast<cir::ComplexType>(type))
      elemTy = cplxTy.getElementType();
    std::string re = formatConstInit(ctx, cca.getReal(), elemTy);
    std::string im = formatConstInit(ctx, cca.getImag(), elemTy);
    if (mlir::isa<cir::FPAttr, mlir::FloatAttr>(cca.getReal())) {
      std::string et = elemTy ? ctx.mapTypeToC(elemTy) : "double";
      return "__builtin_complex((" + et + ")(" + re + "), (" + et + ")(" + im + "))";
    }
    std::string ctype = type ? ctx.mapTypeToC(type) : "int _Complex";
    return "(" + ctype + ")__builtin_complex((double)(" + re + "), (double)(" + im + "))";
  }
  if (auto gv = mlir::dyn_cast<cir::GlobalViewAttr>(attr)) {
    std::string rawSym = gv.getSymbol().getValue().str();
    // An integer-typed field holding an address is the Itanium member-function
    // pointer encoding (function address as a ptrdiff_t).
    if (!(type && mlir::isa<cir::PointerType>(type)))
      return "(long)&" + ctx.getFunctionOutputName(rawSym);
    // Pointer field: build the addressed lvalue, applying any access indices
    // (`&t.b[5]` is global_view<@t,[1,5]>) by walking the target's type. Use
    // the output name (demangled) for functions so references are consistent.
    // For ABI globals (vtables, RTTI, VTTs — _ZTV/_ZTC/_ZTI/_ZTT/_ZTS) use the
    // raw sanitized name: getFunctionOutputName demangles them to human-readable
    // forms ("vtable for X") that don't match the emitted array name.
    bool isAbiGlobal = rawSym.rfind("_ZTV", 0) == 0 || rawSym.rfind("_ZTC", 0) == 0 ||
                       rawSym.rfind("_ZTI", 0) == 0 || rawSym.rfind("_ZTT", 0) == 0 ||
                       rawSym.rfind("_ZTS", 0) == 0;
    // Vtable/construction-vtable address points: indices [component, element]
    // must be flattened into the void*[] array emitted by mapGlobal.
    bool isVtableRef2 = rawSym.rfind("_ZTV", 0) == 0 || rawSym.rfind("_ZTC", 0) == 0;
    if (isVtableRef2 && gv.getIndices() && !gv.getIndices().empty()) {
      auto idxs2 = gv.getIndices();
      int64_t comp = 0, elem = 0;
      if (!idxs2.empty()) { if (auto i=mlir::dyn_cast<cir::IntAttr>(idxs2[0])) comp=i.getValue().getSExtValue(); else if (auto i=mlir::dyn_cast<mlir::IntegerAttr>(idxs2[0])) comp=i.getInt(); }
      if (idxs2.size()>1) { if (auto i=mlir::dyn_cast<cir::IntAttr>(idxs2[1])) elem=i.getValue().getSExtValue(); else if (auto i=mlir::dyn_cast<mlir::IntegerAttr>(idxs2[1])) elem=i.getInt(); }
      uint64_t flat = static_cast<uint64_t>(elem);
      if (comp > 0)
        flat = ctx.vtableFlatOffset(nullptr, rawSym, static_cast<int>(comp), static_cast<int>(elem));
      std::string ctype = type ? ctx.mapTypeToC(type) : "unsigned char*";
      return "(" + ctype + ")(&" + Mapper::sanitizeIdentifier(rawSym) + "[" + std::to_string(flat) + "])";
    }
    std::string access;
    if (isAbiGlobal) {
      access = Mapper::sanitizeIdentifier(rawSym);
    } else {
      std::string outName = ctx.getFunctionOutputName(rawSym);
      access = outName.empty() ? Mapper::sanitizeIdentifier(rawSym) : outName;
    }
    mlir::Type curType;
    mlir::Type symType = ctx.globalSymbolType(rawSym);
    if (symType) curType = symType;
    bool indexed = false;
    if (auto idxs = gv.getIndices()) {
      for (mlir::Attribute ia : idxs) {
        int64_t idx = 0;
        if (auto i1 = mlir::dyn_cast<cir::IntAttr>(ia)) idx = i1.getValue().getSExtValue();
        else if (auto i2 = mlir::dyn_cast<mlir::IntegerAttr>(ia)) idx = i2.getInt();
        if (auto at = mlir::dyn_cast_if_present<cir::ArrayType>(curType)) {
          access += "[" + std::to_string(idx) + "]";
          curType = at.getElementType();
        } else if (auto rt = mlir::dyn_cast_if_present<cir::RecordType>(curType)) {
          std::string recN = rt.getName() && !rt.getName().getValue().empty()
                                 ? TypeMapper::recordCName(rt.getName()) : ctx.anonRecordCName(rt);
          std::string fn = ctx.lookupFieldName(recN, (int)idx);
          access += "." + (fn.empty() ? ("__field" + std::to_string(idx)) : fn);
          curType = (idx >= 0 && (size_t)idx < rt.getMembers().size())
                        ? rt.getMembers()[idx] : mlir::Type();
        } else break;
        indexed = true;
      }
    }
    bool targetIsArray = !indexed && curType && mlir::isa<cir::ArrayType>(curType);
    std::string e = targetIsArray ? access : ("&" + access);
    return "(" + ctx.mapTypeToC(type) + ")(" + e + ")";
  }
  if (auto ca = mlir::dyn_cast<cir::ConstArrayAttr>(attr)) {
    mlir::Type elemTy;
    if (auto at = mlir::dyn_cast_if_present<cir::ArrayType>(type))
      elemTy = at.getElementType();
    if (auto str = mlir::dyn_cast<mlir::StringAttr>(ca.getElts())) {
      std::string bytes = str.getValue().str();
      if (!bytes.empty() && bytes.back() == '\0') bytes.pop_back();
      return '"' + escapeCString(bytes) + '"';
    }
    if (auto arr = mlir::dyn_cast<mlir::ArrayAttr>(ca.getElts())) {
      std::string s = "{";
      bool first = true;
      for (auto e : arr.getValue()) {
        if (!first) s += ", ";
        first = false;
        s += formatConstInit(ctx, e, elemTy);
      }
      return s + "}"; // C zero-fills any trailing elements
    }
    return "{0}";
  }
  if (auto cr = mlir::dyn_cast<cir::ConstRecordAttr>(attr)) {
    llvm::ArrayRef<mlir::Type> members;
    if (auto rt = mlir::dyn_cast_if_present<cir::RecordType>(type))
      members = rt.getMembers();
    std::string s = "{";
    bool first = true;
    unsigned i = 0;
    for (auto mem : cr.getMembers()) {
      if (!first) s += ", ";
      first = false;
      s += formatConstInit(ctx, mem, i < members.size() ? members[i] : mlir::Type());
      ++i;
    }
    return s + "}";
  }
  return "0"; // unknown constant kind
}

} // namespace cir2c
