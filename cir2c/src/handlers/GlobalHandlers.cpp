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
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/Support/Casting.h>
#include <llvm/Support/raw_ostream.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <string>

using namespace mlir;

namespace cir2c {

/// Handlers for global variable and constant operations:
/// cir.get_global and cir.global.
class GlobalHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Global variables
    m.registerTypedHandler<cir::GetGlobalOp>(handleGetGlobal);
    m.registerTypedHandler<cir::GlobalOp>(handleGlobal);
  }

private:
  static bool handleGetGlobal(cir::GetGlobalOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    std::string globalName;

    if (auto sa = o->getAttrOfType<StringAttr>("name")) {
      globalName = sa.getValue().str();
    } else if (auto sa = o->getAttrOfType<mlir::FlatSymbolRefAttr>("name")) {
      globalName = sa.getValue().str();
    }

    if (globalName.empty()) {
      out << "  // " << ERR_GET_GLOBAL_NO_NAME << "\n";
      globalName = "global_var";
    }

    // Keep the raw name for function-output-name lookup before sanitization.
    std::string rawGlobalName = globalName;

    // Sanitize the global name to be a valid C identifier
    globalName = Mapper::sanitizeIdentifier(globalName);

    // If the result of get_global isn't used, don't emit a temporary.
    if (o->getNumResults() > 0) {
      mlir::Value res = o->getResult(0);
      if (res.use_empty()) {
        // No side effects, safe to elide.
        return true;
      }
    }

    // If no results, nothing to bind.
    if (o->getNumResults() == 0) return true;

    mlir::Type resType = o->getResult(0).getType();
    // Inline get_global by binding SSA names directly to expressions that refer
    // to the global symbol. This avoids unnecessary temporaries such as
    //   void* g118 = &f1;
    // before calls/loads/stores.

    // Pointer-global special case:
    // get_global of a pointer variable returns a pointer-to-pointer (int** for
    // int*). Subsequent stores/loads should target the global lvalue itself.
    if (auto ptrType = mlir::dyn_cast<cir::PointerType>(resType)) {
      mlir::Type pointeeType = ptrType.getPointee();
      if (mlir::isa<cir::PointerType>(pointeeType)) {
        // Pointer-to-pointer from global pointer variable.
        m.setName(o->getResult(0), globalName);
        m.markAsDirectAccess(o->getResult(0)); // treat as lvalue for assignment
        return true;
      }
      if (mlir::isa<cir::ArrayType>(pointeeType)) {
        // Array decay: bind directly, mark direct access
        m.setName(o->getResult(0), globalName);
        m.markAsDirectAccess(o->getResult(0));
        return true;
      }

      // Function-pointer global: use the demangled output name (same as what
      // mapFunc emits for the definition) so the reference resolves correctly.
      if (mlir::isa<cir::FuncType>(pointeeType)) {
        std::string outName = m.getFunctionOutputName(rawGlobalName);
        m.setName(o->getResult(0), "&" + outName);
        return true;
      }

      // Generic pointer-to-object global: use address-of expression directly.
      m.setName(o->getResult(0), "&" + globalName);
      return true;
    }

    // Conservative fallback (unexpected non-pointer result): still bind directly.
    m.setName(o->getResult(0), globalName);
    return true;
  }

  // Note: cir.global is typically handled at module level, not within functions
  // But we can add a stub handler for completeness
  static bool handleGlobal(cir::GlobalOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    std::string name = extractName(o);

    if (name.empty()) {
      if (auto sa = o->getAttrOfType<StringAttr>(mlir::SymbolTable::getSymbolAttrName())) {
        name = sa.getValue().str();
      }
    }

    if (name.empty()) {
      name = "global_var";
    }

    // Get the type using getSymType() instead of a "type" attribute
    mlir::Type symType = op.getSymType();
    std::string ctype = m.mapTypeToC(symType);

    // Check if it's an array type
    std::string typeStr;
    llvm::raw_string_ostream rso(typeStr);
    symType.print(rso);
    rso.flush();

    if (typeStr.find("!cir.array<") != std::string::npos) {
      // Extract array size
      size_t xPos = typeStr.find(" x ");
      size_t endPos = typeStr.find(">", xPos);
      if (xPos != std::string::npos && endPos != std::string::npos) {
        std::string sizeStr = typeStr.substr(xPos + 3, endPos - xPos - 3);
        out << "// Global variable: " << ctype << " " << name << "[" << sizeStr << "];\n";
        return true;
      }
    }

    out << "// Global variable: " << ctype << " " << name << ";\n";
    return true;
  }
};

REGISTER_HANDLER_MODULE(GlobalHandlers)

} // namespace cir2c
