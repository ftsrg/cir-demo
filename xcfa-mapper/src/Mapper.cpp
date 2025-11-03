#include "Mapper.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <cxxabi.h>
#include <cstdlib>

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

static std::string demangleSymbol(const std::string &sym) {
  int status = 0;
  char *res = abi::__cxa_demangle(sym.c_str(), nullptr, nullptr, &status);
  std::string out;
  if (status == 0 && res) {
    out = std::string(res);
    std::free(res);
  } else {
    // Not a mangled name or demangle failed: return the original
    out = sym;
  }
  return out;
}

// If a demangled symbol ends with an empty-parameter list '()' (commonly
// produced for function names with no parameters), strip that suffix so the
// sanitized identifier does not carry the parentheses.
static std::string stripEmptyArgList(const std::string &s) {
  // If the demangled symbol ends with a parenthesized parameter list,
  // remove that trailing list so the remaining string is just the
  // function name (possibly with namespaces). For example:
  //   "foo()" -> "foo"
  //   "ns::bar(int, double)" -> "ns::bar"
  if (!s.empty() && s.back() == ')') {
    auto pos = s.rfind('(');
    if (pos != std::string::npos) return s.substr(0, pos);
  }
  return s;
}

Mapper::Mapper(bool bestEffort) : counter(0), bestEffort(bestEffort) {}

void Mapper::prepareFunctionNames(mlir::ModuleOp module) {
  functionOutputNames.clear();
  // Collect candidate pairs (mangled -> demangled-sanitized)
  std::vector<std::pair<std::string,std::string>> list;
  for (auto &op : module.getOps()) {
    if (op.getName().getStringRef() == "cir.func") {
      if (auto sym = op.getAttrOfType<mlir::StringAttr>(mlir::SymbolTable::getSymbolAttrName())) {
        std::string mangled = sym.getValue().str();
        std::string dem = demangleSymbol(mangled);
        dem = stripEmptyArgList(dem);
        std::string san = mangleLabel(dem);
        list.emplace_back(mangled, san);
      }
    }
  }
  // Count usages of each demangled/sanitized name
  std::unordered_map<std::string,int> counts;
  for (auto &p : list) counts[p.second]++;
  // Decide final output name: if demangled name is unique use it, otherwise
  // keep the mangled name to avoid collisions.
  for (auto &p : list) {
    const auto &mangled = p.first;
    const auto &demSan = p.second;
    if (counts[demSan] == 1) functionOutputNames[mangled] = demSan;
    else functionOutputNames[mangled] = mangled;
  }
}

std::string Mapper::getFunctionOutputName(llvm::StringRef mangled) const {
  auto it = functionOutputNames.find(mangled.str());
  if (it != functionOutputNames.end()) return it->second;
  // Fallback: attempt to demangle and sanitize on the fly
  std::string dem = demangleSymbol(mangled.str());
  dem = stripEmptyArgList(dem);
  return mangleLabel(dem);
}

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

std::string Mapper::mapTypeToC(mlir::Type t) const {
  if (auto it = mlir::dyn_cast<mlir::IntegerType>(t)) {
    unsigned w = it.getWidth();
    switch (w) {
    case 8:
      return "int8_t";
    case 16:
      return "int16_t";
    case 32:
      return "int";
    case 64:
      return "long long";
    default:
      return "long";
    }
  }
  if (mlir::isa<mlir::FloatType>(t)) {
    return "double";
  }
  // conservative default for unknown types
  return "int";
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
  // Use the chosen output name (demangled when unique, otherwise mangled).
  std::string outName = getFunctionOutputName(sym.getValue().str());
  out << retType << " " << outName << "()";

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
  // Prepare function names (demangle where possible and unique) before
  // emitting any function declarations/definitions so we can avoid name
  // collisions when demangling.
  prepareFunctionNames(module);
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
