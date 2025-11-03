#include "Mapper.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/ADT/SmallString.h>
#include <llvm/ADT/StringRef.h>
#include <llvm/Support/raw_ostream.h>
#include "ErrorMessages.h"

using namespace mlir;

namespace xcfa {

static std::string mangleLabel(const std::string &s) {
  std::string out;
  out.reserve(s.size());
  for (char c : s) {
    if (std::isalnum((unsigned char)c) || c == '_') out.push_back(c);
    else out.push_back('_');
  }
  if (!out.empty() && std::isdigit((unsigned char)out[0])) out = std::string("_") + out;
  return out;
}

Mapper::Mapper(bool bestEffort) : counter(0), bestEffort(bestEffort) {}

void Mapper::registerHandler(llvm::StringRef opName, std::unique_ptr<OpHandler> handler) {
  handlers[opName.str()] = std::move(handler);
}

std::string Mapper::freshName(llvm::StringRef base) {
  std::string s = (base + llvm::Twine(counter++)).str();
  return s;
}

std::string Mapper::getOrCreateName(Value v) {
  auto it = valueNames.find(v);
  if (it != valueNames.end()) return it->second;
  std::string name = freshName("v");
  valueNames[v] = name;
  return name;
}

std::string Mapper::getOrCreateLabel(mlir::Block *b) {
  auto it = blockLabels.find(b);
  if (it != blockLabels.end()) return it->second;
  std::string name = freshName("bb");
  blockLabels[b] = name;
  return name;
}

void Mapper::setName(mlir::Value v, const std::string &name) {
  valueNames[v] = name;
}

bool Mapper::mapFunc(mlir::Operation *fop, std::ostream &out) {
  // Symbol (function name) is required to emit anything useful.
  auto sym = fop->getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
    if (!sym) {
      out << "// " << ERR_CIRFUNC_NO_SYMBOL << "\n";
      return true;
    }

  // Determine function return type if available. CIR's func may encode a
  // function type as a TypeAttr; try to read it and map common MLIR types
  // to simple C types. Fall back to "int" when unknown but the function
  // returns an integer-like type, or to "void" when no result.
  std::string retType = "int";
  // Try common attribute names that may hold a function type.
  if (auto tattr = fop->getAttrOfType<TypeAttr>("type")) {
      mlir::Type t = tattr.getValue();
      if (auto fty = mlir::dyn_cast<mlir::FunctionType>(t)) {
      if (fty.getNumResults() == 0) retType = "void";
      else {
          mlir::Type rty = fty.getResult(0);
          if (auto it = mlir::dyn_cast<mlir::IntegerType>(rty)) {
          if (it.getWidth() == 32) retType = "int";
          else retType = "long"; // conservative fallback for other widths
          } else {
          // If not integer, prefer int as a conservative default.
          retType = "int";
          }
      }
      }
  } else {
      // As a heuristic, examine attributes for an explicit result type attr
      // printed in the MLIR (e.g., a trailing TypeAttr). Try to find any
      // TypeAttr on the op and treat its first result as the return type.
      for (NamedAttribute na : fop->getAttrs()) {
      if (auto ta = mlir::dyn_cast<mlir::TypeAttr>(na.getValue())) {
          mlir::Type t = ta.getValue();
          if (auto fty = mlir::dyn_cast<mlir::FunctionType>(t)) {
          if (fty.getNumResults() == 0) retType = "void";
          else {
              mlir::Type rty = fty.getResult(0);
              if (auto it = mlir::dyn_cast<mlir::IntegerType>(rty)) {
              if (it.getWidth() == 32) retType = "int";
              else retType = "long";
              } else {
              retType = "int";
              }
          }
          break;
          }
      }
      }
  }

  out << "// function: " << sym.getValue().str() << "\n";
  out << retType << " " << sym.getValue().str() << "()";

  // If there is no region/body then emit a declaration (prototype).
  if (fop->getNumRegions() == 0 || fop->getRegion(0).empty()) {
    out << ";\n\n";
    return true;
  }

  out << " {\n";

  Region &r = fop->getRegion(0);
  for (Block &b : r.getBlocks()) getOrCreateLabel(&b);
  for (Block &b : r.getBlocks()) {
    out << mangleLabel(getOrCreateLabel(&b)) << ":\n";
    for (Operation &bbop : b.getOperations()) {
    auto it = handlers.find(bbop.getName().getStringRef().str());
    if (it != handlers.end()) {
      bool handled = it->second->handle(&bbop, *this, out);
      if (!handled) {
      if (!isBestEffort()) {
        llvm::errs() << ERR_HANDLER_FAILED_PREFIX << bbop.getName().getStringRef().str() << "\n";
        return false;
      }
      // In best-effort mode annotate the C output with the handler failure.
      out << "  // " << ERR_HANDLER_FAILED_PREFIX << bbop.getName().getStringRef().str() << "\n";
      }
      continue;
    }
    for (Value res : bbop.getResults()) {
      std::string nm = getOrCreateName(res);
      out << "  // %" << nm << "  (produced by: " << bbop.getName().getStringRef().str() << ")\n";
    }
    if (!bbop.getAttrs().empty()) {
      out << "  // attrs:\n";
      for (NamedAttribute attr : bbop.getAttrs()) {
      llvm::SmallString<64> buf;
      llvm::raw_svector_ostream ros(buf);
      attr.getValue().print(ros);
      out << "  //   " << attr.getName().getValue().str() << " = " << ros.str().str() << "\n";
      }
    }
    }
  }

  out << "}\n\n";
  return true;
}

bool Mapper::mapModule(ModuleOp module, std::ostream &out) {
  for (auto &op : module.getOps()) {
    if (llvm::isa<mlir::ModuleOp>(op)) {
      mlir::ModuleOp inner = mlir::cast<mlir::ModuleOp>(op);
      if (!mapModule(inner, out) && !isBestEffort()) return false;
      continue;
    }

    if (op.getName().getStringRef() == "cir.func") {
      if (!mapFunc(&op, out) && !isBestEffort()) return false;
    } else {
      out << "// top-level op: " << op.getName().getStringRef().str() << " -- not mapped yet\n";
    }
  }

  return true;
}

} // namespace xcfa
