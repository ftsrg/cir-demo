#include "Mapper.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>

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

void Mapper::markAsDirectAccess(mlir::Value v) {
  directAccessValues.insert(v);
}

bool Mapper::isDirectAccess(mlir::Value v) const {
  return directAccessValues.count(v) > 0;
}

std::string Mapper::mapTypeToC(mlir::Type t) const {
  // Handle MLIR built-in integer types
  if (auto it = mlir::dyn_cast<mlir::IntegerType>(t)) {
    unsigned w = it.getWidth();
    switch (w) {
    case 1:
      return "bool";
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
  
  // Handle MLIR built-in float types
  if (auto ft = mlir::dyn_cast<mlir::FloatType>(t)) {
    unsigned w = ft.getWidth();
    switch (w) {
    case 16:
      return "float"; // half precision, approximate as float
    case 32:
      return "float";
    case 64:
      return "double";
    case 80:
      return "long double"; // x87 extended precision
    case 128:
      return "long double"; // quad precision, approximate as long double
    default:
      return "double";
    }
  }
  
  // Handle CIR-specific types (need to check dialect)
  // Note: Type aliases like !rec_Point may not have a dialect, so check string first
  
  // Try to extract type name from the type string representation
  llvm::SmallString<64> buf;
  llvm::raw_svector_ostream os(buf);
  t.print(os);
  std::string typeStr = os.str().str();
  
  // Check for type alias first: !rec_StructName
  if (typeStr.find("!rec_") == 0) {
    // Type alias: !rec_Point -> struct Point
    std::string structName = typeStr.substr(5); // Skip "!rec_"
    // Remove any trailing characters that aren't part of the name
    size_t end = structName.find_first_of(" ,>)");
    if (end != std::string::npos) {
      structName = structName.substr(0, end);
    }
    return "struct " + structName;
  }
  
  std::string dialectName = t.getDialect().getNamespace().str();
  if (dialectName == "cir") {
    
    // Check for CIR pointer types
    if (typeStr.find("!cir.ptr") != std::string::npos) {
      return "int*"; // Simplified pointer mapping
    }
    
    // Check for CIR bool type
    if (typeStr.find("!cir.bool") != std::string::npos) {
      return "int"; // C89 compatible, or "bool" for C99+
    }
    
    // Check for CIR integer types
    if (typeStr.find("!cir.int") != std::string::npos) {
      return "int";
    }
    
    // Check for CIR float types
    if (typeStr.find("!cir.float") != std::string::npos) {
      return "float";
    }
    if (typeStr.find("!cir.double") != std::string::npos) {
      return "double";
    }
    if (typeStr.find("!cir.long_double") != std::string::npos) {
      return "long double";
    }
    if (typeStr.find("!cir.f80") != std::string::npos) {
      return "long double";
    }
    
    // Check for CIR array types
    if (typeStr.find("!cir.array") != std::string::npos) {
      return "int*"; // Simplified array mapping
    }
    
    // Check for CIR struct/record types
    if (typeStr.find("!cir.record") != std::string::npos || typeStr.find("!rec_") != std::string::npos) {
      // Try to extract struct name from the type
      // Format: !cir.record<struct "Name" {...}> or !rec_Name
      if (typeStr.find("!rec_") != std::string::npos) {
        // Type alias: !rec_Point
        size_t pos = typeStr.find("!rec_");
        if (pos != std::string::npos) {
          size_t end = typeStr.find_first_of(" ,>)", pos);
          if (end == std::string::npos) end = typeStr.length();
          std::string structName = typeStr.substr(pos + 5, end - pos - 5);
          return "struct " + structName;
        }
      } else if (typeStr.find("struct \"") != std::string::npos) {
        // Inline definition: !cir.record<struct "Point" {...}>
        size_t start = typeStr.find("struct \"") + 8;
        size_t end = typeStr.find("\"", start);
        if (end != std::string::npos) {
          std::string structName = typeStr.substr(start, end - start);
          return "struct " + structName;
        }
      }
      return "struct"; // Fallback for unnamed structs
    }
    
    // Check for void type
    if (typeStr.find("!cir.void") != std::string::npos) {
      return "void";
    }
  }
  
  // Check for MLIR NoneType (sometimes used for void)
  if (mlir::isa<mlir::NoneType>(t)) {
    return "void";
  }
  
  // Conservative default for unknown types
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
  
  // Extract function parameters from the entry block arguments
  std::string params = "";
  if (fop->getNumRegions() > 0 && !fop->getRegion(0).empty()) {
    Block &entryBlock = fop->getRegion(0).front();
    bool first = true;
    for (BlockArgument arg : entryBlock.getArguments()) {
      if (!first) params += ", ";
      first = false;
      
      // Map parameter type to C type
      std::string paramType = mapTypeToC(arg.getType());
      
      // Generate parameter name
      std::string paramName = freshName("v");
      setName(arg, paramName);
      markAsDirectAccess(arg); // Function parameters are direct access like alloca
      
      params += paramType + " " + paramName;
    }
  }
  
  out << retType << " " << outName << "(" << params << ")";

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
    if(isBestEffort()) {
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
    } else {
      llvm::errs() << ERR_NO_HANDLER_PREFIX << bbop.getName().getStringRef().str() << "\n";
      return false;
    }
    }
  }

  out << "}\n\n";
  return true;
}

bool Mapper::mapGlobal(mlir::Operation *gop, std::ostream &out) {
  // Extract global variable name
  auto sym = gop->getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
  if (!sym) {
    if (!isBestEffort()) {
      llvm::errs() << "Global op missing symbol name\n";
      return false;
    }
    out << "// Global variable with missing name\n";
    return true;
  }
  
  std::string name = sym.getValue().str();
  
  // Cast to GlobalOp to access getSymType()
  auto globalOp = mlir::cast<cir::GlobalOp>(gop);
  mlir::Type symType = globalOp.getSymType();
  
  // Get type string
  std::string typeStr;
  llvm::raw_string_ostream rso(typeStr);
  symType.print(rso);
  rso.flush();
  
  std::string ctype = mapTypeToC(symType);
  
  // Check if it's an array type
  if (typeStr.find("!cir.array<") != std::string::npos) {
    // Extract array size from type string like "!cir.array<!s32i x 5>"
    size_t xPos = typeStr.find(" x ");
    size_t endPos = typeStr.find(">", xPos);
    
    if (xPos != std::string::npos && endPos != std::string::npos) {
      std::string sizeStr = typeStr.substr(xPos + 3, endPos - xPos - 3);
      out << ctype << " " << name << "[" << sizeStr << "];\n";
      return true;
    }
  }
  
  // For non-array types
  out << ctype << " " << name << ";\n";
  return true;
}

bool Mapper::mapModule(ModuleOp module, std::ostream &out) {
  // Prepare function names (demangle where possible and unique) before
  // emitting any function declarations/definitions so we can avoid name
  // collisions when demangling.
  prepareFunctionNames(module);
  
  // First pass: emit global variables
  for (auto &op : module.getOps()) {
    if (op.getName().getStringRef() == "cir.global") {
      if (!mapGlobal(&op, out) && !isBestEffort()) return false;
    }
  }
  
  // Second pass: emit functions
  for (auto &op : module.getOps()) {
    if (llvm::isa<mlir::ModuleOp>(op)) {
      mlir::ModuleOp inner = mlir::cast<mlir::ModuleOp>(op);
      if (!mapModule(inner, out) && !isBestEffort()) return false;
      continue;
    }

    if (op.getName().getStringRef() == "cir.func") {
      if (!mapFunc(&op, out) && !isBestEffort()) return false;
    }
    // Skip cir.global (already processed)
  }

  return true;
}

} // namespace xcfa
