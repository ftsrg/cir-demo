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

/// Handlers for C variadic argument operations (cir.va_start, cir.va_end,
/// cir.va_arg, cir.va_copy), mapped to the corresponding __builtin_va_*
/// intrinsics.
class VariadicHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    m.registerTypedHandler<cir::VAStartOp>(handleVAStart);
    m.registerTypedHandler<cir::VAEndOp>(handleVAEnd);
    m.registerTypedHandler<cir::VAArgOp>(handleVAArg);
    m.registerTypedHandler<cir::VACopyOp>(handleVACopy);
  }

private:
  static std::string toBuiltinVAList(const std::string &argListPtrExpr) {
    return "*((__builtin_va_list *)(" + argListPtrExpr + "))";
  }

  static bool handleVAStart(cir::VAStartOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    std::string argList = m.getOrCreateName(o->getOperand(0));
    // The second argument to va_start must be the last named parameter before
    // the ellipsis. We recover this from Mapper state set by mapFunc.
    const std::string &lastParam = m.getLastVarargParamName();
    std::string sentinel = lastParam.empty() ? "0" : lastParam;
    out << "  __builtin_va_start(" << toBuiltinVAList(argList) << ", " << sentinel << ");\n";
    return true;
  }

  static bool handleVAEnd(cir::VAEndOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    std::string argList = m.getOrCreateName(o->getOperand(0));
    out << "  __builtin_va_end(" << toBuiltinVAList(argList) << ");\n";
    return true;
  }

  static bool handleVAArg(cir::VAArgOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1 || o->getNumResults() < 1) return false;

    std::string argList = m.getOrCreateName(o->getOperand(0));
    std::string tmp = m.freshName("va");
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());

    out << "  " << ctype << " " << tmp << " = __builtin_va_arg(" << toBuiltinVAList(argList)
        << ", " << ctype << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  static bool handleVACopy(cir::VACopyOp op, Mapper &m, std::ostream &out) {
    std::string dstArgList = m.getOrCreateName(op.getDstList());
    std::string srcArgList = m.getOrCreateName(op.getSrcList());
    out << "  __builtin_va_copy(" << toBuiltinVAList(dstArgList) << ", "
        << toBuiltinVAList(srcArgList) << ");\n";
    return true;
  }
};

REGISTER_HANDLER_MODULE(VariadicHandlers)

} // namespace cir2c
