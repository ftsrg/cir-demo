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

std::string Mapper::virtualCallTypeSuffix(const std::string &ctype) {
  std::string raw;
  for (char c : ctype) {
    if (std::isalnum((unsigned char)c) || c == '_') raw += c;
    else if (c == '*') raw += "_ptr";
    else raw += '_';
  }
  // Collapse runs of underscores and strip leading/trailing ones.
  std::string clean;
  bool prevUnderscore = false;
  for (char c : raw) {
    if (c == '_') {
      if (!prevUnderscore && !clean.empty()) { clean += '_'; prevUnderscore = true; }
    } else {
      clean += c;
      prevUnderscore = false;
    }
  }
  while (!clean.empty() && clean.back() == '_') clean.pop_back();
  return clean.empty() ? "any" : clean;
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
      mlir::StringAttr nameAttr = recordTy.getName();
      std::string name = (nameAttr && !nameAttr.getValue().empty())
                             ? sanitizeIdentifier(nameAttr.getValue().str())
                             : "anon_struct";
      if (recordTy.isUnion()) {
        return "union " + name + "*";
      }
      return "struct " + name + "*";
    }

    // Handle pointer to vptr (!cir.ptr<!cir.vptr>) -- vtable pointer
    if (mlir::isa<cir::VPtrType>(pointee)) {
      return "void*";
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
  
  // Handle CIR vptr type (!cir.vptr) -- vtable pointer value
  if (mlir::isa<cir::VPtrType>(t)) {
    return "void*";
  }

  // Handle CIR record types (struct/union)
  if (auto recordTy = mlir::dyn_cast<cir::RecordType>(t)) {
    mlir::StringAttr nameAttr = recordTy.getName();
    std::string name = (nameAttr && !nameAttr.getValue().empty())
                           ? sanitizeIdentifier(nameAttr.getValue().str())
                           : "anon_struct";
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
  if (fty.isVarArg()) {
    if (!params.empty()) params += ", ";
    params += "...";
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
  if (fty.isVarArg()) {
    if (!params.empty()) params += ", ";
    params += "...";
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

// ── Vtable dispatch tracking ───────────────────────────────────────────────

void Mapper::trackVtableDispatch(mlir::Value chainValue, mlir::Value objectValue) {
  vtableDispatchChain[chainValue] = objectValue;
}

bool Mapper::isVtableDispatchValue(mlir::Value v) const {
  return vtableDispatchChain.count(v) > 0;
}

mlir::Value Mapper::getVtableDispatchObject(mlir::Value v) const {
  auto it = vtableDispatchChain.find(v);
  if (it != vtableDispatchChain.end()) return it->second;
  return {};
}

void Mapper::markVirtualFnPtr(mlir::Value v) {
  virtualFnPtrSet.insert(v);
}

bool Mapper::isVirtualFnPtr(mlir::Value v) const {
  return virtualFnPtrSet.count(v) > 0;
}

void Mapper::setHasVirtualCalls() {
  anyVirtualCalls_ = true;
}

void Mapper::setVirtualFnLabel(mlir::Value v, const std::string &label) {
  virtualFnLabels_[v] = label;
}

std::string Mapper::getVirtualFnLabel(mlir::Value v) const {
  auto it = virtualFnLabels_.find(v);
  return it != virtualFnLabels_.end() ? it->second : "";
}

void Mapper::registerVtableGlobalEntries(const std::string &vtable_sym,
                                          std::vector<std::string> entries) {
  vtableGlobalEntries_[vtable_sym] = std::move(entries);
}

void Mapper::registerRecVtableOffset(const std::string &rec_name,
                                      const std::string &vtable_sym, int offset) {
  recToVtableOffset_[rec_name] = {vtable_sym, offset};
}

std::string Mapper::lookupVirtualFnName(const std::string &rec_name, int slot) const {
  auto checkEntry = [](const std::string &e) -> bool {
    // A "real" function entry is non-empty, not a pure-virtual ABI marker,
    // and not a type_info symbol (which starts with _ZTI).
    return !e.empty() && e != "__cxa_pure_virtual" && e.rfind("_ZTI", 0) != 0;
  };

  auto rit = recToVtableOffset_.find(rec_name);
  if (rit != recToVtableOffset_.end()) {
    const auto &[sym, offset] = rit->second;
    auto vit = vtableGlobalEntries_.find(sym);
    if (vit != vtableGlobalEntries_.end()) {
      int idx = offset + slot;
      if (idx >= 0 && idx < static_cast<int>(vit->second.size())) {
        const std::string &entry = vit->second[idx];
        if (checkEntry(entry)) return demangleSymbol(entry);
      }
    }
  }
  // Fallback: search all known vtables for a real function at the same
  // absolute slot (standard Itanium offset = 2).  This handles the case
  // where the static class has a pure-virtual slot.
  int absIdx = 2 + slot;
  for (const auto &[sym, entries] : vtableGlobalEntries_) {
    if (absIdx >= 0 && absIdx < static_cast<int>(entries.size()))
      if (checkEntry(entries[absIdx]))
        return demangleSymbol(entries[absIdx]);
  }
  return "";
}

// ── Global variables ───────────────────────────────────────────────────────

bool Mapper::mapGlobal(mlir::Operation *gop, std::ostream &out) {
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

  auto stripOptionalQuotes = [](std::string s) {
    if (s.size() >= 2 && s.front() == '"' && s.back() == '"') {
      return s.substr(1, s.size() - 2);
    }
    return s;
  };

  auto decodeCirConstArrayBytes = [](const std::string &inner) {
    std::string bytes;
    bytes.reserve(inner.size());
    auto hexVal = [](char c) -> int {
      if (c >= '0' && c <= '9') return c - '0';
      if (c >= 'a' && c <= 'f') return 10 + (c - 'a');
      if (c >= 'A' && c <= 'F') return 10 + (c - 'A');
      return -1;
    };

    for (size_t i = 0; i < inner.size();) {
      if (inner[i] == '\\' && i + 2 < inner.size()) {
        int h1 = hexVal(inner[i + 1]);
        int h2 = hexVal(inner[i + 2]);
        if (h1 >= 0 && h2 >= 0) {
          char byte = static_cast<char>((h1 << 4) | h2);
          bytes.push_back(byte);
          i += 3;
          continue;
        }
      }
      bytes.push_back(inner[i]);
      ++i;
    }
    return bytes;
  };

  auto escapeCStringBytes = [](const std::string &bytes) {
    static const char *hex = "0123456789ABCDEF";
    std::string escaped;
    escaped.reserve(bytes.size() * 2 + 4);

    for (size_t i = 0; i < bytes.size(); ++i) {
      unsigned char c = static_cast<unsigned char>(bytes[i]);
      switch (c) {
      case '\\': escaped += "\\\\"; break;
      case '"': escaped += "\\\""; break;
      case '\n': escaped += "\\n"; break;
      case '\r': escaped += "\\r"; break;
      case '\t': escaped += "\\t"; break;
      case '\0': escaped += "\\0"; break;
      default:
        if (c < 32 || c > 126) {
          escaped += "\\x";
          escaped.push_back(hex[(c >> 4) & 0xF]);
          escaped.push_back(hex[c & 0xF]);
        } else {
          escaped.push_back(static_cast<char>(c));
        }
        break;
      }
    }
    return escaped;
  };

  auto findGlobalTypeBySymbol = [&](const std::string &symbol) -> mlir::Type {
    auto module = gop->getParentOfType<mlir::ModuleOp>();
    if (!module) return mlir::Type();

    for (auto &op : module.getOps()) {
      if (op.getName().getStringRef() != "cir.global") continue;
      auto s = op.getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
      if (!s) continue;
      if (s.getValue().str() != symbol) continue;
      auto targetGlobal = mlir::cast<cir::GlobalOp>(op);
      return targetGlobal.getSymType();
    }
    return mlir::Type();
  };
  
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
              target = stripOptionalQuotes(target);
              std::string targetName = sanitizeIdentifier(target);

              mlir::Type targetType = findGlobalTypeBySymbol(target);
              bool targetIsArray = mlir::isa<cir::ArrayType>(targetType);
              if (targetIsArray) {
                // Array lvalues decay to pointers in this context.
                initExpr = targetName;
              } else {
                initExpr = "&" + targetName;
              }
            }
          }
          // Const char array: #cir.const_array<"..." : !cir.array<!s8i x N>>
          else if (rawInit.rfind("#cir.const_array<", 0) == 0) {
            size_t q1 = rawInit.find('"');
            if (q1 != std::string::npos) {
              size_t q2 = rawInit.find('"', q1+1);
              if (q2 != std::string::npos) {
                std::string inner = rawInit.substr(q1+1, q2 - (q1+1));
                std::string bytes = decodeCirConstArrayBytes(inner);
                if (!bytes.empty() && bytes.back() == '\0') {
                  bytes.pop_back();
                }
                std::string escaped = escapeCStringBytes(bytes);
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
      std::string name = sanitizeIdentifier(irText.substr(pos, end - pos));
      unionRecordNames.insert(name);
      pos = end + 1;
    }
  }

  // Build a map from !rec_<alias> -> sanitized original name for use in the
  // textual fallback path (mapTextualTypeToC).  CIR aliases hex-encode the
  // original C++ name, so we need this map to emit consistent struct names.
  std::map<std::string, std::string> aliasToSanitizedName;
  {
    std::istringstream tmpInput(irText);
    std::string tmpLine;
    while (std::getline(tmpInput, tmpLine)) {
      if (tmpLine.rfind("!rec_", 0) != 0) continue;
      auto eqPos = tmpLine.find(" = ");
      if (eqPos == std::string::npos) continue;
      std::string alias = tmpLine.substr(5, eqPos - 5); // strip leading "!rec_"
      auto recMarker = tmpLine.find("!cir.record<");
      if (recMarker == std::string::npos) continue;
      auto qStart = tmpLine.find('"', recMarker);
      if (qStart == std::string::npos) continue;
      auto qEnd = tmpLine.find('"', qStart + 1);
      if (qEnd == std::string::npos) continue;
      std::string origName = tmpLine.substr(qStart + 1, qEnd - qStart - 1);
      aliasToSanitizedName[alias] = sanitizeIdentifier(origName);
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

  std::function<std::string(const std::string &)> mapTextualTypeToC;
  mapTextualTypeToC = [&](const std::string &token) {
    std::string text = trim(token);
    if (text.rfind("!rec_", 0) == 0) {
      std::string alias = text.substr(5);
      auto it = aliasToSanitizedName.find(alias);
      std::string name = (it != aliasToSanitizedName.end()) ? it->second : sanitizeIdentifier(alias);
      return std::string(unionRecordNames.count(name) ? "union " : "struct ") + name;
    }
    if (text == "!void" || text == "!cir.void") return std::string("void");
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
    if (text.rfind("!cir.ptr<", 0) == 0 && text.back() == '>') {
      std::string inner = text.substr(9, text.size() - 10);
      std::string pointee = mapTextualTypeToC(inner);
      if (pointee.empty()) pointee = "void";
      return pointee + "*";
    }
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
      std::string recordName = sanitizeIdentifier(recordType.getName().getValue().str());

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
      std::string structName = sanitizeIdentifier(recordType.getName().getValue().str());
      
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
          std::string fieldStructName = sanitizeIdentifier(resRecordType.getName().getValue().str());
          
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
            std::string arrayStructName = sanitizeIdentifier(elemRecordType.getName().getValue().str());
            
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

      std::string recordName = sanitizeIdentifier(line.substr(nameStart + 1, nameEnd - nameStart - 1));

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

  // Pre-scan 1: build vtableGlobalEntries_ — parse each #cir.vtable<{...}>
  // global to extract the function names stored in each slot.
  // Pre-scan 2: build recToVtableOffset_ — for each constructor function,
  // see which vtable.address_point (vtable sym + offset) and which
  // vtable.get_vptr (rec class name) co-occur to associate class → vtable.
  {
    // Parse vtable globals.
    for (auto &op : module.getOps()) {
      if (op.getName().getStringRef() != "cir.global") continue;
      std::string printed;
      { llvm::raw_string_ostream rso(printed); op.print(rso); }
      if (printed.find("#cir.vtable<") == std::string::npos) continue;
      auto symAttr = op.getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
      if (!symAttr) continue;
      std::string sym = symAttr.getValue().str();
      // Find the const_array element list inside the vtable attribute.
      size_t arrStart = printed.find("#cir.const_array<[");
      size_t arrEnd   = printed.rfind("]>");
      if (arrStart == std::string::npos || arrEnd == std::string::npos) continue;
      std::string arr = printed.substr(arrStart + 18, arrEnd - arrStart - 18);
      // Walk the entries in order; each entry is either:
      //   #cir.ptr<null>         → empty string (null slot)
      //   #cir.global_view<@NAME ...>  → function/type_info name
      std::vector<std::string> entries;
      size_t cur = 0;
      while (cur < arr.size()) {
        size_t vp = arr.find("#cir.global_view<@", cur);
        size_t np = arr.find("#cir.ptr<null>",     cur);
        if (vp == std::string::npos && np == std::string::npos) break;
        // Pick whichever comes first.
        if (np != std::string::npos && (vp == std::string::npos || np < vp)) {
          entries.push_back("");
          cur = np + 14;
        } else {
          size_t nameStart = vp + 18; // after "@"
          // name ends at ',' or '>' — no array index in vtable fn entries
          size_t nameEnd = arr.find_first_of(",> \t", nameStart);
          if (nameEnd == std::string::npos) nameEnd = arr.size();
          entries.push_back(arr.substr(nameStart, nameEnd - nameStart));
          cur = nameEnd;
        }
      }
      registerVtableGlobalEntries(sym, std::move(entries));
    }

    // Scan function bodies to pair vtable.address_point with vtable.get_vptr.
    std::function<void(mlir::Operation &, std::string &, int &)> scanForVtableInit;
    scanForVtableInit = [&](mlir::Operation &op,
                            std::string &lastVtableSym, int &lastOffset) {
      if (op.getName().getStringRef() == "cir.vtable.address_point") {
        if (auto nameAttr = op.getAttrOfType<FlatSymbolRefAttr>("name"))
          lastVtableSym = nameAttr.getValue().str();
        // Extract offset from address_point attribute (text: "index = N, offset = K")
        {
          std::string attrText;
          llvm::raw_string_ostream rso(attrText);
          if (auto apAttr = op.getAttr("address_point"))
            apAttr.print(rso);
          size_t offPos = attrText.find("offset = ");
          if (offPos != std::string::npos) {
            lastOffset = std::stoi(attrText.substr(offPos + 9));
          }
        }
      } else if (op.getName().getStringRef() == "cir.vtable.get_vptr") {
        if (!lastVtableSym.empty() && op.getNumOperands() > 0) {
          mlir::Type srcTy = op.getOperand(0).getType();
          if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(srcTy)) {
            if (auto recTy = mlir::dyn_cast<cir::RecordType>(ptrTy.getPointee())) {
              if (recTy.getName()) {
                std::string recName = recTy.getName().getValue().str();
                // Only register if not already known (first constructor wins).
                if (recToVtableOffset_.find(recName) == recToVtableOffset_.end())
                  registerRecVtableOffset(recName, lastVtableSym, lastOffset);
              }
            }
          }
        }
      }
      for (auto &region : op.getRegions())
        for (auto &block : region.getBlocks()) {
          // Reset per-function when we descend into a new function body.
          std::string localSym;
          int localOffset = 2; // Itanium default
          for (auto &nestedOp : block.getOperations())
            scanForVtableInit(nestedOp, localSym, localOffset);
        }
    };
    for (auto &op : module.getOps()) {
      if (op.getName().getStringRef() == "cir.func") {
        std::string sym;
        int offset = 2;
        for (auto &region : op.getRegions())
          for (auto &block : region.getBlocks())
            for (auto &nestedOp : block.getOperations())
              scanForVtableInit(nestedOp, sym, offset);
      }
    }
  }

  // Pre-scan: collect the C return types of all virtual calls so we can emit
  // one typed __VERIFIER_virtual_call_<suffix> declaration per distinct return
  // type.  We find these by inspecting the result type of every
  // cir.vtable.get_virtual_fn_addr op: its type is
  //   !cir.ptr<!cir.ptr<!cir.func<(params) -> RetType>>>
  // from which RetType is extracted.
  std::set<std::string> virtualCallRetTypes;
  {
    std::function<void(mlir::Operation &)> scanOp;
    scanOp = [&](mlir::Operation &op) {
      if (op.getName().getStringRef() == "cir.vtable.get_virtual_fn_addr") {
        if (op.getNumResults() > 0) {
          mlir::Type rt = op.getResult(0).getType();
          if (auto outerPtr = mlir::dyn_cast<cir::PointerType>(rt))
            if (auto innerPtr = mlir::dyn_cast<cir::PointerType>(outerPtr.getPointee()))
              if (auto funcTy = mlir::dyn_cast<cir::FuncType>(innerPtr.getPointee()))
                virtualCallRetTypes.insert(mapTypeToC(funcTy.getReturnType()));
        }
      }
      for (auto &region : op.getRegions())
        for (auto &block : region.getBlocks())
          for (auto &nestedOp : block.getOperations())
            scanOp(nestedOp);
    };
    for (auto &op : module.getOps()) scanOp(op);
  }

  // Only emit struct definitions once (for top-level module call)
  if (!structsEmitted && !order.empty()) {
    // Emit one __VERIFIER_virtual_call_<suffix> declaration per needed return
    // type before the struct definitions so it appears near the top.
    if (!virtualCallRetTypes.empty()) {
      out << "// Virtual call intrinsics -- semantics provided by the verification tool\n";
      for (const auto &retType : virtualCallRetTypes) {
        std::string suffix = virtualCallTypeSuffix(retType);
        out << "extern " << retType
            << " __VERIFIER_virtual_call_" << suffix << "(void*, const char*, ...);\n";
      }
      out << "\n";
    }

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
  
  // First pass: emit global variables. Emit non-`global_view` initializers
  // first so references like `@msg = #cir.global_view<@target>` can safely
  // use symbols declared earlier in C.
  std::vector<mlir::Operation *> normalGlobals;
  std::vector<mlir::Operation *> viewGlobals;
  for (auto &op : module.getOps()) {
    if (op.getName().getStringRef() != "cir.global") continue;

    std::string printed;
    llvm::raw_string_ostream rso(printed);
    op.print(rso);
    rso.flush();

    // Skip vtable globals: they contain function pointers that are not
    // representable in verification-friendly C; virtual dispatch is handled
    // via __VERIFIER_virtual_call instead.
    if (printed.find("#cir.vtable<") != std::string::npos) continue;

    // Skip RTTI typeinfo/typestring globals: these are C++ ABI internals
    // (type_info objects and mangled type name strings) not needed for
    // verification of functional properties.
    if (printed.find("#cir.typeinfo<") != std::string::npos) continue;

    if (printed.find("#cir.global_view<@") != std::string::npos)
      viewGlobals.push_back(&op);
    else
      normalGlobals.push_back(&op);
  }

  for (mlir::Operation *gop : normalGlobals) {
    if (!mapGlobal(gop, out) && !isBestEffort()) return false;
  }
  for (mlir::Operation *gop : viewGlobals) {
    if (!mapGlobal(gop, out) && !isBestEffort()) return false;
  }

  // Second pass: emit forward declarations for all functions (including
  // declaration-only externs) so that call sites compile regardless of the
  // order functions appear in the module.
  {
    bool anyDecl = false;
    for (auto &op : module.getOps()) {
      if (op.getName().getStringRef() == "cir.func") {
        if (!emitFuncForwardDecl(&op, out) && !isBestEffort()) return false;
        anyDecl = true;
      }
    }
    if (anyDecl) out << "\n";
  }

  // Third pass: emit function definitions only.
  for (auto &op : module.getOps()) {
    if (llvm::isa<mlir::ModuleOp>(op)) {
      mlir::ModuleOp inner = mlir::cast<mlir::ModuleOp>(op);
      if (!mapModule(inner, out) && !isBestEffort()) return false;
      continue;
    }

    if (op.getName().getStringRef() == "cir.func") {
      bool hasBody = (op.getNumRegions() > 0 && !op.getRegion(0).empty());
      if (hasBody) {
        if (!mapFunc(&op, out) && !isBestEffort()) return false;
      }
    }
    // Skip cir.global (already processed)
  }

  return true;
}

} // namespace xcfa
