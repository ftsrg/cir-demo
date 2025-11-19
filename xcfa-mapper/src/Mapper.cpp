#include "Mapper.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <cxxabi.h>
#include <cstdlib>

#include <map>
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
    
    // For other pointer types, recursively map the pointee and add *
    std::string pointeeType = mapTypeToC(pointee);
    if (!pointeeType.empty() && pointeeType.back() == '*') {
      // Already a pointer type, just return it
      return pointeeType;
    }
    return pointeeType + "*";
  }
  
  // For complex types (structs, arrays, etc.), we need to use string representation
  // since the CIR dialect may not expose all necessary API methods
  llvm::SmallString<128> buf;
  llvm::raw_svector_ostream os(buf);
  t.print(os);
  std::string typeStr = os.str().str();
  
  // Handle struct/record types
  // Check for inline struct definition: !cir.struct<struct "Name" ...>
  if (typeStr.find("!cir.struct<struct \"") != std::string::npos) {
    size_t start = typeStr.find("struct \"") + 8;
    size_t end = typeStr.find("\"", start);
    if (end != std::string::npos) {
      std::string structName = typeStr.substr(start, end - start);
      std::replace(structName.begin(), structName.end(), '.', '_');
      return "struct " + structName;
    }
  }
  
  // Check for inline union definition: !cir.struct<union "Name" ...>
  if (typeStr.find("!cir.struct<union \"") != std::string::npos) {
    size_t start = typeStr.find("union \"") + 7;
    size_t end = typeStr.find("\"", start);
    if (end != std::string::npos) {
      std::string unionName = typeStr.substr(start, end - start);
      std::replace(unionName.begin(), unionName.end(), '.', '_');
      return "union " + unionName;
    }
  }
  
  // Handle array types: !cir.array<element_type x size>
  // Arrays in C declarations require the element type, not the full array type
  // This should only be called when we need the base element type
  if (typeStr.find("!cir.array<") != std::string::npos) {
    // For now, return int as a fallback - proper array handling should be done
    // at the declaration site where we can properly format "type name[size]"
    return "int";
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
      markAsDirectAccess(arg); // Function parameters are direct access like alloca
      
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

  // If there is no region/body then emit a declaration (prototype).
  if (fop->getNumRegions() == 0 || fop->getRegion(0).empty()) {
    out << ";\n\n";
    return true;
  }

  out << " {\n";

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
  
  // Sanitize the name to be a valid C identifier (replace dots, etc. with underscores)
  std::string name = sanitizeIdentifier(sym.getValue().str());
  
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
  
  // Discover union record names from the textual IR so aliases (!rec_*)
  // that denote unions can be recognized without heuristics.
  std::set<std::string> unionRecordNames;
  {
    std::string irText;
    llvm::raw_string_ostream rso(irText);
    module.print(rso);
    rso.flush();
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
  
  // Use static flag to only emit struct definitions once (for top-level module)
  static bool structsEmitted = false;

  // Helper to recursively collect from operations
  std::function<void(mlir::Operation &)> collectFromOp;
  collectFromOp = [&](mlir::Operation &genericOp) {
    // Recurse into nested regions/blocks/ops
    for (auto &region : genericOp.getRegions()) {
      for (auto &block : region.getBlocks()) {
        for (auto &op : block.getOperations()) collectFromOp(op);
      }
    }

    // Collect struct/union field info from cir.get_member
  if (auto gm = llvm::dyn_cast<cir::GetMemberOp>(genericOp)) {
      // Base is pointer to struct; extract struct name from base type string
      mlir::Type baseType = gm.getOperation()->getOperand(0).getType();
      llvm::SmallString<64> bbuf; llvm::raw_svector_ostream bos(bbuf); baseType.print(bos);
      std::string baseTypeStr = bos.str().str();
      std::string structName;
      if (baseTypeStr.find("!cir.ptr<!cir.record<struct ") != std::string::npos) {
        size_t start = baseTypeStr.find("struct \"") + 8;
        size_t end = baseTypeStr.find("\"", start);
        if (end != std::string::npos) structName = baseTypeStr.substr(start, end - start);
      } else if (baseTypeStr.find("!cir.ptr<!rec_") != std::string::npos) {
        size_t start = baseTypeStr.find("!rec_") + 5;
        size_t end = baseTypeStr.find(">", start);
        if (end != std::string::npos) structName = baseTypeStr.substr(start, end - start);
      } else if (baseTypeStr.find("!cir.ptr<!cir.record<union ") != std::string::npos) {
        size_t start = baseTypeStr.find("union \"") + 7;
        size_t end = baseTypeStr.find("\"", start);
        if (end != std::string::npos) structName = baseTypeStr.substr(start, end - start);
        if (!structName.empty()) isUnionContainer[structName] = true;
      }
      if (structName.empty()) return; // Not a struct base
      
      // Sanitize struct name: replace dots with underscores (e.g., anon.0 -> anon_0)
      std::replace(structName.begin(), structName.end(), '.', '_');

      // Result type is pointer to field type. We can reuse mapTypeToC and drop '*'
      mlir::Type resType = gm.getOperation()->getResult(0).getType();
      llvm::SmallString<64> rbuf; llvm::raw_svector_ostream ros(rbuf); resType.print(ros);
      std::string resTypeStr = ros.str().str();

      FieldInfo info; // we'll populate name later

      // Detect pointer-to-struct (already handled by mapTypeToC but we want base type without *)
      if (resTypeStr.find("!cir.ptr<!cir.record<struct ") != std::string::npos) {
        size_t s = resTypeStr.find("struct \"") + 8;
        size_t e = resTypeStr.find("\"", s);
        if (e != std::string::npos) {
          std::string fieldStructName = resTypeStr.substr(s, e - s);
          std::replace(fieldStructName.begin(), fieldStructName.end(), '.', '_');
          info.baseType = "struct " + fieldStructName;
          info.isStruct = true;
        }
      } else if (resTypeStr.find("!cir.ptr<!rec_") != std::string::npos) {
        size_t s = resTypeStr.find("!rec_") + 5;
        size_t e = resTypeStr.find(">", s);
        if (e != std::string::npos) {
          std::string fieldStructName = resTypeStr.substr(s, e - s);
          std::replace(fieldStructName.begin(), fieldStructName.end(), '.', '_');
          info.baseType = "struct " + fieldStructName;
          info.isStruct = true;
        }
      }

      // Array field detection: pointer to array(s)
      if (resTypeStr.find("!cir.ptr<!cir.array<") != std::string::npos) {
        info.isArray = true;
        // Strip leading !cir.ptr< and trailing >
        std::string inner = resTypeStr;
        // remove leading !cir.ptr<
        size_t ptrStart = inner.find("!cir.ptr<");
        if (ptrStart != std::string::npos) {
          inner = inner.substr(ptrStart + 9); // after !cir.ptr<
          if (!inner.empty() && inner.back() == '>') inner.pop_back();
        }
        // Parse nested arrays
        while (inner.find("!cir.array<") == 0) {
          // Find the matching closing '>' for this array level
          // We need to count nested < and > to find the right one
          int depth = 0;
          size_t pos = 11; // start after "!cir.array<"
          size_t xPos = std::string::npos;
          size_t endPos = std::string::npos;
          
          for (; pos < inner.size(); ++pos) {
            if (inner[pos] == '<') {
              depth++;
            } else if (inner[pos] == '>') {
              if (depth == 0) {
                endPos = pos;
                break;
              }
              depth--;
            } else if (depth == 0 && pos + 2 < inner.size() && 
                       inner[pos] == ' ' && inner[pos+1] == 'x' && inner[pos+2] == ' ') {
              xPos = pos;
            }
          }
          
          if (xPos != std::string::npos && endPos != std::string::npos) {
            std::string sizeStr = inner.substr(xPos + 3, endPos - xPos - 3);
            info.dims.push_back(sizeStr);
            // Next inner base type (between '!cir.array<' and ' x ')
            inner = inner.substr(11, xPos - 11); // 11 = strlen("!cir.array<")
            // If the extracted inner is another !cir.array< it will loop again
          } else {
            break; // malformed; stop parsing further
          }
        }
        // inner now holds final base token like !s32i, !cir.int<s, 8>, or !rec_StructName
        // Check for struct type
        if (inner.find("!rec_") == 0) {
          std::string arrayStructName = inner.substr(5);
          std::replace(arrayStructName.begin(), arrayStructName.end(), '.', '_');
          info.baseType = "struct " + arrayStructName;
          info.isStruct = true;
        } else if (inner.find("!cir.record<struct \"") != std::string::npos) {
          size_t s = inner.find("struct \"") + 8;
          size_t e = inner.find("\"", s);
          if (e != std::string::npos) {
            std::string arrayStructName = inner.substr(s, e - s);
            std::replace(arrayStructName.begin(), arrayStructName.end(), '.', '_');
            info.baseType = "struct " + arrayStructName;
            info.isStruct = true;
          }
        } else if (inner.find("int<s, 8>") != std::string::npos) {
          info.baseType = "char";
        } else if (inner.find("int<s, 32>") != std::string::npos) {
          info.baseType = "int";
        } else if (inner.find("int<s, 64>") != std::string::npos) {
          info.baseType = "long long";
        } else if (inner.find("float") != std::string::npos) {
          info.baseType = "float";
        } else if (inner.find("double") != std::string::npos) {
          info.baseType = "double";
        } else if (inner.find("long_double") != std::string::npos) {
          info.baseType = "long double";
        } else if (info.baseType.empty()) {
          info.baseType = "int"; // fallback
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
