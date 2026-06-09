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

#include <llvm/ADT/APFloat.h>
#include <optional>

#include <clang/CIR/Dialect/IR/CIRDialect.h>
#include <clang/CIR/Dialect/IR/CIROpsAttributes.h.inc>
#include "ErrorMessages.h"

#include <string>

using namespace mlir;

namespace cir2c {

/// Handler for cir.constant, including the apFloatToCLiteral helper that
/// renders APFloat values as exact C literals (hex-float with f/L suffix).
class ConstantHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Basic operations
    m.registerTypedHandler<cir::ConstantOp>(handleConst);
  }

private:
  // Render an APFloat as an exact C literal. Uses the value's predicates rather
  // than toString string-matching (which can mis-render a finite value near
  // LDBL_MAX as "Inf", turning __LDBL_MAX__ into infinity), and an exact hex-float
  // literal for finite values so there is no decimal rounding or double-overflow.
  // The f/L suffix pins the literal to its C type.
  static std::string apFloatToCLiteral(const llvm::APFloat &v,
                                       const std::string &ctype) {
    auto pick = [&](const char *f, const char *l, const char *d) {
      return std::string(ctype == "float" ? f : ctype == "long double" ? l : d);
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
    char buf[64];
    v.convertToHexString(buf, /*hexDigits=*/0, /*upperCase=*/false,
                         llvm::APFloat::rmNearestTiesToEven);
    return std::string(buf) + pick("f", "L", "");
  }

  static bool handleConst(cir::ConstantOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    std::optional<std::string> litVal;
    std::optional<llvm::APFloat> fpVal; // set for float/FP attrs; rendered post-type
    bool isZeroInit = false;
    mlir::Type resultType = o->getNumResults() > 0 ? o->getResult(0).getType() : mlir::Type();

    // Complex constant (e.g. the imaginary unit 1.0iF, attribute {0,1}). There is
    // no portable single-expression _Complex literal, so emit the __real__/__imag__
    // form; this also covers integer complex (_Complex char) where __builtin_complex
    // is not applicable.
    for (NamedAttribute a : o->getAttrs()) {
      if (auto cca = llvm::dyn_cast<cir::ConstComplexAttr>(a.getValue())) {
        mlir::Type elemTy;
        if (auto cplxTy = mlir::dyn_cast<cir::ComplexType>(resultType))
          elemTy = cplxTy.getElementType();
        std::string ctype = m.mapTypeToC(resultType);
        std::string tmp   = m.freshName("c");
        std::string re    = m.formatConstInit(cca.getReal(), elemTy);
        std::string im    = m.formatConstInit(cca.getImag(), elemTy);
        out << "  " << ctype << " " << tmp << ";\n";
        out << "  __real__ " << tmp << " = " << re << ";\n";
        out << "  __imag__ " << tmp << " = " << im << ";\n";
        if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
        return true;
      }
    }

    // Try to find literals: integers, floats, or bools
    for (NamedAttribute a : o->getAttrs()) {
      // Integer literals
      if (auto ia = llvm::dyn_cast<mlir::IntegerAttr>(a.getValue())) {
        litVal = std::to_string(ia.getValue().getSExtValue());
        break;
      }
      if (auto cia = llvm::dyn_cast<cir::IntAttr>(a.getValue())) {
        litVal = std::to_string(static_cast<int64_t>(cia.getValue().getSExtValue()));
        break;
      }
      // Boolean literals
      if (auto ba = llvm::dyn_cast<cir::BoolAttr>(a.getValue())) {
        litVal = ba.getValue() ? "1" : "0";
        break;
      }
      if (auto ba = llvm::dyn_cast<mlir::BoolAttr>(a.getValue())) {
        litVal = ba.getValue() ? "1" : "0";
        break;
      }
      // Float literals — defer rendering until the C type is known (the literal
      // form depends on float/double/long double).
      if (auto fa = llvm::dyn_cast<mlir::FloatAttr>(a.getValue())) {
        fpVal = fa.getValue();
        litVal = ""; // placeholder; replaced below once ctype is known
        break;
      }
      if (auto fpa = llvm::dyn_cast<cir::FPAttr>(a.getValue())) {
        fpVal = fpa.getValue();
        litVal = "";
        break;
      }
      // Zero attribute (for zero-initialization)
      if (auto za = llvm::dyn_cast<cir::ZeroAttr>(a.getValue())) {
        litVal = "0";
        isZeroInit = true;
        break;
      }
      // Null/constant pointer
      if (auto cpa = llvm::dyn_cast<cir::ConstPtrAttr>(a.getValue())) {
        litVal = "((void*)0)"; // "NULL"; - NULL would need to be included
        break;
      }
      // Struct/array constant: render via the shared recursive formatter, which
      // handles nested aggregates, strings, FP and member-fn-ptr encodings.
      if (mlir::isa<cir::ConstRecordAttr>(a.getValue()) ||
          mlir::isa<cir::ConstArrayAttr>(a.getValue())) {
        litVal = m.formatConstInit(a.getValue(), resultType);
        break;
      }
      if (auto gva = llvm::dyn_cast<cir::GlobalViewAttr>(a.getValue())) {
        std::string symbolName = Mapper::sanitizeIdentifier(gva.getSymbol().getValue().str());
        std::string expr = "&" + symbolName;
        auto indices = gva.getIndices();
        bool hasIndices = indices && !indices.empty();

        if (auto ptrTy = mlir::dyn_cast_if_present<cir::PointerType>(resultType)) {
          mlir::Type pointee = ptrTy.getPointee();
          bool isBytePointer = false;
          if (auto intTy = mlir::dyn_cast<cir::IntType>(pointee)) {
            isBytePointer = intTy.getWidth() == 8;
          } else if (auto builtinIntTy = mlir::dyn_cast<mlir::IntegerType>(pointee)) {
            isBytePointer = builtinIntTy.getWidth() == 8;
          }

          if (isBytePointer && !hasIndices) {
            // Cast explicitly: the symbol may be declared as void*[N] (RTTI stub),
            // which decays to void** — incompatible with char*/unsigned char* without
            // an explicit cast.
            expr = "(" + m.mapTypeToC(ptrTy) + ")" + symbolName;
          }
        }

        litVal = expr;
        break;
      }
    }

    if (!litVal.has_value()) {
      out << "  // " << ERR_CONSTANT_NO_LITERAL << "\n";
      // Use aggregate initializer for struct/array types; plain 0 is not valid.
      if (resultType &&
          (mlir::isa<cir::RecordType>(resultType) || mlir::isa<cir::ArrayType>(resultType)))
        litVal = "{0}";
      else
        litVal = "0";
    }

    std::string tmp = m.freshName("c");
    std::string literal = litVal.value();
    std::string ctype = "int";
    if (o->getNumResults() > 0) {
      ctype = m.mapTypeToC(resultType);
    }

    // Floating constant: now that the C type is known, render exactly from the
    // APFloat — inf/nan via the value's own predicates and an exact hex-float
    // literal (with f/L suffix) for finite values.
    if (fpVal)
      literal = apFloatToCLiteral(*fpVal, ctype);

    if (isZeroInit && resultType &&
        (mlir::isa<cir::RecordType>(resultType) || mlir::isa<cir::ArrayType>(resultType))) {
      literal = "{0}";
    }

    // Array-typed constants must be declared with their full type `T name[N]`; a
    // plain `T* name = {0}` is invalid C (can't initialise a pointer with a braced
    // list). Use the same arrayBaseTypeAndDims helper that alloca/globals use.
    if (resultType && mlir::isa<cir::ArrayType>(resultType)) {
      auto at = mlir::cast<cir::ArrayType>(resultType);
      std::string dims;
      std::string elemCType = m.arrayBaseTypeAndDims(resultType, dims);
      out << "  " << elemCType << " " << tmp << dims << " = " << literal << ";\n";
      if (o->getNumResults() > 0) {
        m.setName(o->getResult(0), tmp);
        m.markAsDirectAccess(o->getResult(0));
      }
      return true;
    }

    out << "  " << ctype << " " << tmp << " = " << literal << ";\n";
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }
};

REGISTER_HANDLER_MODULE(ConstantHandlers)

} // namespace cir2c
