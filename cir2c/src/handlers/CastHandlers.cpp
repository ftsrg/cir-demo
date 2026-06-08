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
#include <llvm/Support/Casting.h>
#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <string>

using namespace mlir;

namespace cir2c {

/// Handlers for CIR cast operations (cir.cast), mapping type conversions to
/// C casts.
class CastHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Type conversions
    m.registerTypedHandler<cir::CastOp>(handleCast);
  }

private:
  static bool handleCast(cir::CastOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    Value operand = o->getOperand(0);
    std::string opnd = m.getOrCreateName(operand);

    // When the CIR operand is a pointer but our C representation is a
    // direct-access lvalue (e.g. an alloca'd struct or a get_member result),
    // the lvalue itself is not assignment-compatible with a pointer cast.
    // Take its address so `(T*)expr` operates on a real pointer.
    if (m.isDirectAccess(operand) && !opnd.empty() && opnd[0] != '&' &&
        mlir::isa<cir::PointerType>(operand.getType())) {
      opnd = "&(" + opnd + ")";
    }

    // Reinterpreting a pointer as a pointer-to-multidimensional-array: mapTypeToC
    // decays `!cir.ptr<!array<!array<…>>>` to a flat `char*`, but a following
    // cir.get_element chain indexes it as `base[i][j]…`, which is invalid on a
    // char*. When the result actually feeds a get_element, emit a pointer-to-array
    // cast dereferenced to an array lvalue (`(*(char(*)[3][9])p)`) and mark it
    // direct-access so `base[i][j]…` resolves through the real array type. We gate
    // on a get_element user because the flat-pointer form is what other uses (a
    // function argument expecting `int*`, pointer arithmetic, …) require.
    if (o->getNumResults() > 0) {
      if (auto resPtr = mlir::dyn_cast<cir::PointerType>(o->getResult(0).getType()))
        if (auto arrTy = mlir::dyn_cast<cir::ArrayType>(resPtr.getPointee()))
          if (mlir::isa<cir::ArrayType>(arrTy.getElementType())) {
            bool feedsGetElement =
                llvm::any_of(o->getResult(0).getUsers(), [](mlir::Operation *u) {
                  return llvm::isa<cir::GetElementOp>(u);
                });
            if (feedsGetElement) {
              std::string dims;
              std::string baseTy = m.arrayBaseTypeAndDims(arrTy, dims);
              std::string expr = "(*(" + baseTy + "(*)" + dims + ")(" + opnd + "))";
              m.setName(o->getResult(0), expr);
              m.markAsDirectAccess(o->getResult(0));
              return true;
            }
          }
    }

    std::string tmp = m.freshName("cast");
    std::string ctype = "int";
    if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());

    // For most casts, a simple C cast is sufficient
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << opnd << ";\n";
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }
};

REGISTER_HANDLER_MODULE(CastHandlers)

} // namespace cir2c
