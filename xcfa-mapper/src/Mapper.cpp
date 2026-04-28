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

#include "Mapper.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <cxxabi.h>
#include <cctype>
#include <cstdlib>

#include <algorithm>
#include <map>
#include <sstream>
#include <set>
#include <vector>

#include <llvm/ADT/SmallString.h>
#include <llvm/ADT/StringRef.h>
#include <llvm/Support/raw_ostream.h>
#include "ErrorMessages.h"

using namespace mlir;

namespace xcfa {

std::string Mapper::sanitizeIdentifier(const std::string &s) {
  std::string out;
  out.reserve(s.size());
  for (char c : s) {
    if (std::isalnum((unsigned char)c) || c == '_') out.push_back(c);
    else out.push_back('_');
  }
  if (!out.empty() && std::isdigit((unsigned char)out[0])) out = std::string("_") + out;
  return out;
}

static std::string mangleLabel(const std::string &s) {
  return Mapper::sanitizeIdentifier(s);
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

static std::string oneLineOperationText(mlir::Operation &op) {
  std::string text;
  llvm::raw_string_ostream rso(text);
  op.print(rso);
  rso.flush();

  std::replace(text.begin(), text.end(), '\n', ' ');
  std::replace(text.begin(), text.end(), '\r', ' ');

  // collapse repeated spaces
  std::string compact;
  compact.reserve(text.size());
  bool prevSpace = false;
  for (char c : text) {
    bool isSpace = std::isspace(static_cast<unsigned char>(c));
    if (isSpace) {
      if (!prevSpace) compact.push_back(' ');
    } else {
      compact.push_back(c);
    }
    prevSpace = isSpace;
  }

  // trim
  size_t start = compact.find_first_not_of(' ');
  if (start == std::string::npos) return std::string();
  size_t end = compact.find_last_not_of(' ');
  return compact.substr(start, end - start + 1);
}

void Mapper::printMonitorReport(std::ostream &out) const {
  traceability.printReport(out);
}

void Mapper::writeMonitorJson(std::ostream &out) const {
  traceability.writeJson(out);
}

void Mapper::computeTraceLineMappings(llvm::StringRef mlirText, llvm::StringRef cText) {
  traceability.computeLineMappings(mlirText, cText);
}

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
  traceability.registerOperation(opName);
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
  
  // Handle MLIR NoneType (sometimes used for void)
  if (mlir::isa<mlir::NoneType>(t)) {
    return "void";
  }
  
  // Handle CIR void type
  if (mlir::isa<cir::VoidType>(t)) {
    return "void";
  }
  
  // Handle CIR bool type
  if (mlir::isa<cir::BoolType>(t)) {
    return "_Bool";
  }
  
  // Handle CIR integer types
  if (auto intTy = mlir::dyn_cast<cir::IntType>(t)) {
    unsigned width = intTy.getWidth();
    bool isSigned = intTy.isSigned();
    
    if (width == 8) {
      return isSigned ? "char" : "unsigned char";
    } else if (width == 16) {
      return isSigned ? "short" : "unsigned short";
    } else if (width == 32) {
      return isSigned ? "int" : "unsigned int";
    } else if (width == 64) {
      return isSigned ? "long long" : "unsigned long long";
    }
    return "int"; // fallback
  }
  
  // Handle CIR floating-point types
  if (mlir::isa<cir::SingleType>(t)) {
    return "float";
  }
  if (mlir::isa<cir::DoubleType>(t)) {
    return "double";
  }
  if (mlir::isa<cir::LongDoubleType>(t)) {
    return "long double";
  }
  if (mlir::isa<cir::FP80Type>(t)) {
    return "long double";
  }
  
  // Handle CIR pointer types
  if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(t)) {
    mlir::Type pointee = ptrTy.getPointee();
    
    // Handle pointer to function
    if (mlir::isa<cir::FuncType>(pointee)) {
      return "void*"; // Simplify function pointers to void*
    }
    
    // Handle pointer to record (struct/union)
    if (auto recordTy = mlir::dyn_cast<cir::RecordType>(pointee)) {
      llvm::StringRef typeName = recordTy.getName().getValue();
      std::string name = typeName.str();
      std::replace(name.begin(), name.end(), '.', '_');
      
      if (recordTy.isUnion()) {
        return "union " + name + "*";
      }
      return "struct " + name + "*";
    }
    
    // Handle pointer to array (decays to pointer to element)
    if (auto arrayTy = mlir::dyn_cast<cir::ArrayType>(pointee)) {
      mlir::Type elemType = arrayTy.getElementType();
      std::string elemCType = mapTypeToC(elemType);
      return elemCType + "*";
    }
    
    // For other pointer types, recursively map the pointee and add *
    std::string pointeeType = mapTypeToC(pointee);
    return pointeeType + "*";
  }
  
  // Handle CIR record types (struct/union)
  if (auto recordTy = mlir::dyn_cast<cir::RecordType>(t)) {
    llvm::StringRef typeName = recordTy.getName().getValue();
    std::string name = typeName.str();
    std::replace(name.begin(), name.end(), '.', '_');
    
    if (recordTy.isUnion()) {
      return "union " + name;
    }
    return "struct " + name;
  }
  
  // Handle CIR array types
  if (auto arrayTy = mlir::dyn_cast<cir::ArrayType>(t)) {
    // Arrays in C declarations require the element type, not the full array type
    // This should only be called when we need the base element type
    // Proper array handling should be done at the declaration site where we can
    // properly format "type name[size]"
    mlir::Type elemType = arrayTy.getElementType();
    return mapTypeToC(elemType);
  }
  
  // Conservative default for unknown types
  return "int";
}

bool Mapper::emitFuncForwardDecl(mlir::Operation *fop, std::ostream &out) {
  auto sym = fop->getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
  if (!sym) return true;

  auto cirFuncOp = mlir::cast<cir::FuncOp>(fop);
  cir::FuncType fty = cirFuncOp.getFunctionType();
  mlir::Type rty = fty.getReturnType();

  std::string retType;
  if (mlir::isa<mlir::NoneType>(rty) || mlir::isa<cir::VoidType>(rty))
    retType = "void";
  else
    retType = mapTypeToC(rty);

  std::string outName = getFunctionOutputName(sym.getValue().str());

  // Emit parameter types only (no names) to avoid interfering with value-name
  // assignments that happen during the real mapFunc pass later.
  std::string params;
  bool first = true;
  for (mlir::Type paramType : fty.getInputs()) {
    if (!first) params += ", ";
    first = false;
    params += mapTypeToC(paramType);
  }

  out << retType << " " << outName << "(" << params << ");\n";
  return true;
}

bool Mapper::mapFunc(mlir::Operation *fop, std::ostream &out) {
  std::string funcInputText = oneLineOperationText(*fop);
  // Symbol (function name) is required to emit anything useful.
  auto sym = fop->getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
    if (!sym) {
      out << "// " << ERR_CIRFUNC_NO_SYMBOL << "\n";
      return true;
    }

  // Get function return type from cir::FuncOp
  auto cirFuncOp = mlir::cast<cir::FuncOp>(fop);
  cir::FuncType fty = cirFuncOp.getFunctionType();
  mlir::Type rty = fty.getReturnType();
  
  std::string retType;
  if (mlir::isa<mlir::NoneType>(rty) || mlir::isa<cir::VoidType>(rty)) {
    retType = "void";
  } else {
    retType = mapTypeToC(rty);
  }

  out << "// function: " << sym.getValue().str() << "\n";
  // Use the chosen output name (demangled when unique, otherwise mangled).
  std::string outName = getFunctionOutputName(sym.getValue().str());
  
  // Extract function parameters from cir::FuncOp
  std::string params = "";
  bool hasBody = (fop->getNumRegions() > 0 && !fop->getRegion(0).empty());
  llvm::ArrayRef<mlir::Type> inputs = fty.getInputs();
  
  if (hasBody) {
    // If function has a body, use block arguments to get parameter names
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
        // Only mark non-pointer parameters as direct access
        // Pointer parameters are already pointer values, not lvalues that need &
        if (!mlir::isa<cir::PointerType>(arg.getType())) {
          markAsDirectAccess(arg);
        }
      
      params += paramType + " " + paramName;
    }
  } else {
    // For declarations without body, use types from function signature
    bool first = true;
    for (mlir::Type paramType : inputs) {
      if (!first) params += ", ";
      first = false;
      
      // Map parameter type to C type  
      std::string cParamType = mapTypeToC(paramType);
      params += cParamType;
    }
  }
  
  out << retType << " " << outName << "(" << params << ")";
  std::string funcHeaderText = retType + " " + outName + "(" + params + ")";

  // If there is no region/body then emit a declaration (prototype).
  if (fop->getNumRegions() == 0 || fop->getRegion(0).empty()) {
    out << ";\n\n";
    traceability.recordOperationTrace(fop->getName().getStringRef(), funcInputText, funcHeaderText + ";\n", true);
    return true;
  }

  out << " {\n";
  traceability.recordOperationTrace(fop->getName().getStringRef(), funcInputText, funcHeaderText + " {\n", true);

  Region &r = fop->getRegion(0);
  
  // Declare all block arguments upfront (these act like phi nodes in SSA form)
  // We need to collect all block arguments from all blocks (except entry block which uses function params)
  bool isFirstBlock = true;
  for (Block &b : r.getBlocks()) {
    if (isFirstBlock) {
      isFirstBlock = false;
      continue; // Skip entry block - its arguments are function parameters
    }
    
    for (BlockArgument arg : b.getArguments()) {
      std::string argName = getOrCreateName(arg);
      std::string ctype = mapTypeToC(arg.getType());
      out << "  " << ctype << " " << argName << ";\n";
    }
  }
  
  for (Block &b : r.getBlocks()) getOrCreateLabel(&b);
  for (Block &b : r.getBlocks()) {
    out << mangleLabel(getOrCreateLabel(&b)) << ":\n";
    for (Operation &bbop : b.getOperations()) {
      if (!mapOperation(&bbop, out)) return false;
    }
  }

  out << "}\n\n";
  return true;
}

bool Mapper::mapOperation(mlir::Operation *op, std::ostream &out) {
  auto opName = op->getName().getStringRef();
  std::string inputText = oneLineOperationText(*op);
  traceability.recordOperationVisit(opName);

  auto it = handlers.find(opName.str());
  std::ostringstream opOut;
  bool mapped = false;

  if (it != handlers.end()) {
    bool handled = it->second->handle(op, *this, opOut);
    if (handled) {
      traceability.recordOperationHandled(opName);
      mapped = true;
    }
    if (!handled) {
      if (!isBestEffort()) {
        llvm::errs() << ERR_HANDLER_FAILED_PREFIX << opName.str() << "\n";
        return false;
      }
      opOut << "  // " << ERR_HANDLER_FAILED_PREFIX << opName.str() << "\n";
    }
    out << opOut.str();
    traceability.recordOperationTrace(opName, inputText, opOut.str(), mapped);
    return true;
  }

  if (isBestEffort()) {
    for (Value res : op->getResults()) {
      std::string nm = getOrCreateName(res);
      opOut << "  // %" << nm << "  (produced by: " << opName.str() << ")\n";
    }
    if (!op->getAttrs().empty()) {
      opOut << "  // attrs:\n";
      for (NamedAttribute attr : op->getAttrs()) {
        llvm::SmallString<64> buf;
        llvm::raw_svector_ostream ros(buf);
        attr.getValue().print(ros);
        opOut << "  //   " << attr.getName().getValue().str() << " = " << ros.str().str() << "\n";
      }
    }
    out << opOut.str();
    traceability.recordOperationTrace(opName, inputText, opOut.str(), false);
    return true;
  }

  llvm::errs() << ERR_NO_HANDLER_PREFIX << opName.str() << "\n";
  return false;
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
  
  // Sanitize the name to be a valid C identifier (replace dots, etc. with underscores)
  std::string name = sanitizeIdentifier(sym.getValue().str());
  
  // Cast to GlobalOp to access getSymType()
  auto globalOp = mlir::cast<cir::GlobalOp>(gop);
  mlir::Type symType = globalOp.getSymType();
  
  // Try to recover initializer by printing op (no string-based type recognition, only value patterns)
  std::string initExpr; // empty means no initializer
  {
    std::string printed;
    llvm::raw_string_ostream rso(printed);
    gop->print(rso);
    rso.flush();
    // Find '=' up to ':' (before type)
    size_t eqPos = printed.find('=');
    if (eqPos != std::string::npos) {
      size_t colonPos = printed.find(':', eqPos + 1);
      if (colonPos != std::string::npos) {
        std::string rawInit = printed.substr(eqPos + 1, colonPos - (eqPos + 1));
        // Trim whitespace
        auto trim = [](std::string s){ size_t a=s.find_first_not_of(" \t\n"); size_t b=s.find_last_not_of(" \t\n"); return (a==std::string::npos)?std::string():s.substr(a,b-a+1); };        
        rawInit = trim(rawInit);
        if (!rawInit.empty()) {
          // Integer constant: #cir.int<42>
          if (rawInit.rfind("#cir.int<", 0) == 0) {
            size_t lt = rawInit.find('<');
            size_t gt = rawInit.find('>');
            if (lt != std::string::npos && gt != std::string::npos && gt > lt+1) {
              initExpr = rawInit.substr(lt+1, gt-lt-1); // number
            }
          }
          // Global view: #cir.global_view<@a>
          else if (rawInit.rfind("#cir.global_view<@", 0) == 0) {
            size_t at = rawInit.find('@');
            size_t gt = rawInit.find('>');
            if (at != std::string::npos && gt != std::string::npos && gt > at+1) {
              std::string target = rawInit.substr(at+1, gt-at-1);
              initExpr = "&" + sanitizeIdentifier(target);
            }
          }
          // Const char array: #cir.const_array<"..." : !cir.array<!s8i x N>>
          else if (rawInit.rfind("#cir.const_array<", 0) == 0) {
            size_t q1 = rawInit.find('"');
            if (q1 != std::string::npos) {
              size_t q2 = rawInit.find('"', q1+1);
              if (q2 != std::string::npos) {
                std::string inner = rawInit.substr(q1+1, q2 - (q1+1));
                // Remove trailing \00 if present (C string literal implicit)
                // Replace escaped sequence \00 occurrences at end
                if (inner.size() >= 3 && inner.substr(inner.size()-3) == "\\00") {
                  inner = inner.substr(0, inner.size()-3);
                }
                // Escape embedded quotes/backslashes minimally
                std::string escaped; escaped.reserve(inner.size()+4);
                for (char c : inner) {
                  if (c == '"' || c == '\\') escaped.push_back('\\');
                  escaped.push_back(c);
                }
                initExpr = '"' + escaped + '"';
              }
            }
          }
        }
      }
    }
  }

  // Array type
  if (auto arrayTy = mlir::dyn_cast<cir::ArrayType>(symType)) {
    mlir::Type elemType = arrayTy.getElementType();
    uint64_t size = arrayTy.getSize();
    std::string elemCType = mapTypeToC(elemType);
    out << elemCType << " " << name << "[" << size << "]";
    if (!initExpr.empty()) {
      // If string literal for char array
      if (!elemCType.empty() && elemCType == "char" && initExpr.size() > 0 && initExpr.front()=='"') {
        out << " = " << initExpr;        
      }
      // Could extend for brace-enclosed initializers later
    }
    out << ";\n";
    return true;
  }

  // Non-array types
  std::string ctype = mapTypeToC(symType);
  out << ctype << " " << name;
  if (!initExpr.empty()) {
    out << " = " << initExpr;
  }
  out << ";\n";
  return true;
}

bool Mapper::mapModule(ModuleOp module, std::ostream &out) {
  // Prepare function names (demangle where possible and unique) before
  // emitting any function declarations/definitions so we can avoid name
  // collisions when demangling.
  prepareFunctionNames(module);

  std::string irText;
  {
    llvm::raw_string_ostream rso(irText);
    module.print(rso);
    rso.flush();
  }
  
  // Discover union record names from the textual IR so aliases (!rec_*)
  // that denote unions can be recognized without heuristics.
  std::set<std::string> unionRecordNames;
  {
    const std::string needle = "!cir.record<union \"";
    std::size_t pos = 0;
    while ((pos = irText.find(needle, pos)) != std::string::npos) {
      pos += needle.size();
      auto end = irText.find("\"", pos);
      if (end == std::string::npos) break;
      std::string name = irText.substr(pos, end - pos);
      std::replace(name.begin(), name.end(), '.', '_');
      unionRecordNames.insert(name);
      pos = end + 1;
    }
  }
  
  // Auto-parse struct definitions by scanning member accesses.
  struct FieldInfo {
    std::string name;        // field name
    std::string baseType;    // base C type (without array declarators or struct keyword repetition)
    bool isStruct = false;   // whether baseType already includes 'struct X'
    bool isArray = false;    // whether field is an array
    std::vector<std::string> dims; // array dimensions outer->inner
  };
  std::map<std::string, std::vector<FieldInfo>> structFields; // recordName -> fields
  std::map<std::string, bool> isUnionContainer; // recordName -> isUnion

  auto trim = [](const std::string &text) {
    size_t start = text.find_first_not_of(" \t\n\r");
    if (start == std::string::npos) return std::string();
    size_t end = text.find_last_not_of(" \t\n\r");
    return text.substr(start, end - start + 1);
  };

  auto splitTopLevelFields = [&](const std::string &body) {
    std::vector<std::string> parts;
    std::string current;
    int angleDepth = 0;
    int braceDepth = 0;
    int parenDepth = 0;

    for (char ch : body) {
      switch (ch) {
      case '<':
        ++angleDepth;
        current.push_back(ch);
        break;
      case '>':
        if (angleDepth > 0) --angleDepth;
        current.push_back(ch);
        break;
      case '{':
        ++braceDepth;
        current.push_back(ch);
        break;
      case '}':
        if (braceDepth > 0) --braceDepth;
        current.push_back(ch);
        break;
      case '(':
        ++parenDepth;
        current.push_back(ch);
        break;
      case ')':
        if (parenDepth > 0) --parenDepth;
        current.push_back(ch);
        break;
      case ',':
        if (angleDepth == 0 && braceDepth == 0 && parenDepth == 0) {
          std::string piece = trim(current);
          if (!piece.empty()) parts.push_back(piece);
          current.clear();
        } else {
          current.push_back(ch);
        }
        break;
      default:
        current.push_back(ch);
        break;
      }
    }

    std::string piece = trim(current);
    if (!piece.empty()) parts.push_back(piece);
    return parts;
  };

  auto mapTextualTypeToC = [&](const std::string &token) {
    std::string text = trim(token);
    if (text.rfind("!rec_", 0) == 0) {
      std::string name = text.substr(5);
      std::replace(name.begin(), name.end(), '.', '_');
      return std::string(unionRecordNames.count(name) ? "union " : "struct ") + name;
    }
    if (text == "!cir.bool") return std::string("_Bool");
    if (text == "!s8i") return std::string("char");
    if (text == "!u8i") return std::string("unsigned char");
    if (text == "!s16i") return std::string("short");
    if (text == "!u16i") return std::string("unsigned short");
    if (text == "!s32i") return std::string("int");
    if (text == "!u32i") return std::string("unsigned int");
    if (text == "!s64i") return std::string("long long");
    if (text == "!u64i") return std::string("unsigned long long");
    if (text == "!cir.float") return std::string("float");
    if (text == "!cir.double") return std::string("double");
    return std::string();
  };
  
  // Use static flag to only emit struct definitions once (for top-level module)
  static bool structsEmitted = false;

  // Ensure every referenced record type is tracked, even when there are no
  // explicit cir.get_member operations (e.g. empty/simple classes).
  std::function<void(mlir::Type)> collectRecordTypesFromType;
  collectRecordTypesFromType = [&](mlir::Type t) {
    if (!t) return;

    if (auto recordType = mlir::dyn_cast<cir::RecordType>(t)) {
      std::string recordName = recordType.getName().getValue().str();
      std::replace(recordName.begin(), recordName.end(), '.', '_');

      // Keep an entry even if there are no discovered fields yet.
      (void)structFields[recordName];

      if (recordType.isUnion() || unionRecordNames.count(recordName)) {
        isUnionContainer[recordName] = true;
      }
      return;
    }

    if (auto ptrType = mlir::dyn_cast<cir::PointerType>(t)) {
      collectRecordTypesFromType(ptrType.getPointee());
      return;
    }

    if (auto arrayType = mlir::dyn_cast<cir::ArrayType>(t)) {
      collectRecordTypesFromType(arrayType.getElementType());
      return;
    }
  };

  // Helper to recursively collect from operations
  std::function<void(mlir::Operation &)> collectFromOp;
  collectFromOp = [&](mlir::Operation &genericOp) {
    // Track record types from operands/results so we also emit records that
    // are allocated/passed around but never accessed via get_member.
    for (mlir::Value operand : genericOp.getOperands()) {
      collectRecordTypesFromType(operand.getType());
    }
    for (mlir::Value result : genericOp.getResults()) {
      collectRecordTypesFromType(result.getType());
    }

    // Recurse into nested regions/blocks/ops
    for (auto &region : genericOp.getRegions()) {
      for (auto &block : region.getBlocks()) {
        for (mlir::BlockArgument arg : block.getArguments()) {
          collectRecordTypesFromType(arg.getType());
        }
        for (auto &op : block.getOperations()) collectFromOp(op);
      }
    }

    // Collect struct/union field info from cir.get_member
  if (auto gm = llvm::dyn_cast<cir::GetMemberOp>(genericOp)) {
      // Base is pointer to struct; extract struct name using API
      mlir::Type baseType = gm.getOperation()->getOperand(0).getType();
      
      // Check if base is a pointer type
      auto ptrType = mlir::dyn_cast<cir::PointerType>(baseType);
      if (!ptrType) return; // Not a pointer, skip
      
      // Check if pointee is a record type
      auto recordType = mlir::dyn_cast<cir::RecordType>(ptrType.getPointee());
      if (!recordType) return; // Not pointing to a record, skip
      
      // Get struct name using API
      std::string structName = recordType.getName().getValue().str();
      std::replace(structName.begin(), structName.end(), '.', '_');
      
      // Track unions
      if (recordType.isUnion()) {
        isUnionContainer[structName] = true;
      }

      // Result type is pointer to field type
      mlir::Type resType = gm.getOperation()->getResult(0).getType();
      FieldInfo info;

      // Check if result is pointer to struct
      if (auto resPtrType = mlir::dyn_cast<cir::PointerType>(resType)) {
        mlir::Type resPointee = resPtrType.getPointee();
        
        if (auto resRecordType = mlir::dyn_cast<cir::RecordType>(resPointee)) {
          std::string fieldStructName = resRecordType.getName().getValue().str();
          std::replace(fieldStructName.begin(), fieldStructName.end(), '.', '_');
          
          if (resRecordType.isUnion()) {
            info.baseType = "union " + fieldStructName;
          } else {
            info.baseType = "struct " + fieldStructName;
          }
          info.isStruct = true;
        }
        // Check if result is pointer to array(s)
        else if (auto resArrayType = mlir::dyn_cast<cir::ArrayType>(resPointee)) {
          info.isArray = true;
          
          // Handle nested arrays
          mlir::Type currentType = resPointee;
          while (auto arrayType = mlir::dyn_cast<cir::ArrayType>(currentType)) {
            info.dims.push_back(std::to_string(arrayType.getSize()));
            currentType = arrayType.getElementType();
          }
          
          // Get the final element type
          if (auto elemRecordType = mlir::dyn_cast<cir::RecordType>(currentType)) {
            std::string arrayStructName = elemRecordType.getName().getValue().str();
            std::replace(arrayStructName.begin(), arrayStructName.end(), '.', '_');
            
            if (elemRecordType.isUnion()) {
              info.baseType = "union " + arrayStructName;
            } else {
              info.baseType = "struct " + arrayStructName;
            }
            info.isStruct = true;
          } else {
            // Use mapTypeToC for primitive types
            info.baseType = mapTypeToC(currentType);
          }
        }
      }

      // Primitive types (non-array, non-struct) fallback
      if (info.baseType.empty() && !info.isArray) {
        std::string mapped = mapTypeToC(resType);
        if (!mapped.empty() && mapped.back() == '*') mapped.pop_back();
        info.baseType = mapped.empty() ? "int" : mapped;
      }

      // Field name from attribute (fallback to synthetic)
      std::string fname;
      if (auto sa = gm.getOperation()->getAttrOfType<StringAttr>("name")) fname = sa.getValue().str();
      if (fname.empty()) {
        size_t idx = structFields[structName].size();
        fname = "field" + std::to_string(idx);
      }
      info.name = fname;

      // Note: union detection is driven by IR-declared unions, not field names.

      // Avoid duplicate entries for the same field name
  auto &vec = structFields[structName];
  bool exists = false;
  for (auto &fi : vec) if (fi.name == info.name) { exists = true; break; }
  if (!exists) vec.push_back(info);
    }
  };

  // Kick off collection for top-level operations
  for (auto &op : module.getOps()) collectFromOp(op);

  // Fall back to textual CIR record layouts when a record has no directly
  // discovered members of its own (for example, derived records that are only
  // accessed through cir.base_class_addr casts).
  {
    std::istringstream input(irText);
    std::string line;
    while (std::getline(input, line)) {
      if (line.rfind("!rec_", 0) != 0) continue;
      auto recordMarker = line.find("!cir.record<");
      if (recordMarker == std::string::npos) continue;

      auto nameStart = line.find('"', recordMarker);
      if (nameStart == std::string::npos) continue;
      auto nameEnd = line.find('"', nameStart + 1);
      if (nameEnd == std::string::npos) continue;

      auto bodyStart = line.find('{', nameEnd + 1);
      auto bodyEnd = line.rfind('}');
      if (bodyStart == std::string::npos || bodyEnd == std::string::npos || bodyEnd <= bodyStart) continue;

      std::string recordName = line.substr(nameStart + 1, nameEnd - nameStart - 1);
      std::replace(recordName.begin(), recordName.end(), '.', '_');

      auto &existingFields = structFields[recordName];
      if (!existingFields.empty()) continue;

      std::vector<FieldInfo> layoutFields;
      std::vector<std::string> fieldTokens = splitTopLevelFields(line.substr(bodyStart + 1, bodyEnd - bodyStart - 1));
      for (size_t index = 0; index < fieldTokens.size(); ++index) {
        std::string baseType = mapTextualTypeToC(fieldTokens[index]);
        if (baseType.empty()) continue;

        FieldInfo info;
        info.name = "__field" + std::to_string(index);
        info.baseType = baseType;
        info.isStruct = baseType.rfind("struct ", 0) == 0 || baseType.rfind("union ", 0) == 0;
        layoutFields.push_back(info);
      }

      if (!layoutFields.empty()) {
        existingFields = std::move(layoutFields);
      }
    }
  }

  // Mark union containers based on discovered union record names.
  for (auto &kv : structFields) {
    const auto &recName = kv.first;
    if (unionRecordNames.count(recName)) {
      isUnionContainer[recName] = true;
    }
  }

  // Order structs to satisfy dependencies: if a struct references another
  // struct in its fields, emit the dependency first. Simple fixed-point topo.
  auto getDeps = [&](const std::string &sname){
    std::set<std::string> deps;
    auto it = structFields.find(sname);
    if (it != structFields.end()) {
      for (auto &fi : it->second) {
        if (fi.baseType.rfind("struct ", 0) == 0) {
          std::string dep = fi.baseType.substr(7);
          if (dep != sname) deps.insert(dep);
        }
      }
    }
    return deps;
  };

  std::vector<std::string> order;
  std::set<std::string> remaining;
  for (auto &kv : structFields) remaining.insert(kv.first);
  bool progressed = true;
  while (progressed && !remaining.empty()) {
    progressed = false;
    for (auto it = remaining.begin(); it != remaining.end();) {
      auto deps = getDeps(*it);
      bool ok = true;
      for (auto &d : deps) if (structFields.count(d) && std::find(order.begin(), order.end(), d) == order.end()) { ok = false; break; }
      if (ok) {
        order.push_back(*it);
        it = remaining.erase(it);
        progressed = true;
      } else {
        ++it;
      }
    }
  }
  // Append any leftovers (cycles/self-deps) deterministically
  for (auto &s : remaining) order.push_back(s);

  // Only emit struct definitions once (for top-level module call)
  if (!structsEmitted && !order.empty()) {
    out << "// Struct definitions (auto-parsed)\n";
    for (auto &sname : order) {
      bool isU = false;
      auto itk = isUnionContainer.find(sname);
      if (itk != isUnionContainer.end()) isU = itk->second;
      out << (isU ? "union " : "struct ") << sname << " { ";
      auto &vec = structFields[sname];
      if (vec.empty()) {
        // Keep records complete in C even when CIR does not expose fields.
        // This avoids "incomplete type" errors for local object allocations.
        out << "unsigned char __placeholder;";
      }
      for (size_t i = 0; i < vec.size(); ++i) {
        const FieldInfo &fi = vec[i];
        out << fi.baseType << " " << fi.name;
        if (fi.isArray) {
          for (auto &dim : fi.dims) out << "[" << dim << "]";
        }
        out << ";";
        if (i + 1 < vec.size()) out << " ";
      }
      out << " };\n";
    }
    out << "\n";
    structsEmitted = true;
  }
  
  // First pass: emit global variables
  for (auto &op : module.getOps()) {
    if (op.getName().getStringRef() == "cir.global") {
      if (!mapGlobal(&op, out) && !isBestEffort()) return false;
    }
  }

  // Second pass: emit forward declarations for all function definitions so
  // that call sites compile regardless of the order functions appear in the
  // module.
  {
    bool anyDecl = false;
    for (auto &op : module.getOps()) {
      if (op.getName().getStringRef() == "cir.func") {
        bool hasBody = (op.getNumRegions() > 0 && !op.getRegion(0).empty());
        if (hasBody) {
          if (!emitFuncForwardDecl(&op, out) && !isBestEffort()) return false;
          anyDecl = true;
        }
      }
    }
    if (anyDecl) out << "\n";
  }

  // Third pass: emit function definitions
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
