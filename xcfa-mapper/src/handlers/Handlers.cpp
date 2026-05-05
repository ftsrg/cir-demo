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

#include "Handlers.h"

#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/Support/Casting.h>

#include <llvm/ADT/StringRef.h>
#include <llvm/ADT/APFloat.h>
#include <optional>
#include <cctype>
#include <sstream>
#include <llvm/Support/raw_ostream.h>

// Include generated CIR op declarations and dialect to get full op classes

#include <clang/CIR/Dialect/IR/CIRDialect.h>
#include <clang/CIR/Dialect/IR/CIROpsAttributes.h.inc>
#include "ErrorMessages.h"

using namespace mlir;

namespace xcfa {

namespace {

class LambdaOpHandler : public OpHandler {
public:
  explicit LambdaOpHandler(std::function<bool(Operation *, Mapper &, std::ostream &)> fn)
      : fn(std::move(fn)) {}

  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    return fn(op, m, out);
  }

private:
  std::function<bool(Operation *, Mapper &, std::ostream &)> fn;
};

// ============================================================================
// Helper functions
// ============================================================================

// Extract a name from various attributes (names, sym_names, name, etc.)
std::string extractName(Operation *o, const std::string &fallback = "") {
  std::string varName;
  if (auto aa = o->getAttrOfType<ArrayAttr>("names")) {
    if (!aa.getValue().empty()) 
      if (auto sa = llvm::dyn_cast<StringAttr>(aa.getValue()[0])) 
        varName = sa.getValue().str();
  }
  if (varName.empty()) 
    if (auto aa = o->getAttrOfType<ArrayAttr>("sym_names")) {
      if (!aa.getValue().empty()) 
        if (auto sa = llvm::dyn_cast<StringAttr>(aa.getValue()[0])) 
          varName = sa.getValue().str();
    }
  if (varName.empty()) 
    if (auto sa = o->getAttrOfType<StringAttr>("name")) 
      varName = sa.getValue().str();
  if (varName.empty()) {
    for (NamedAttribute an : o->getAttrs()) {
      if (auto aa = llvm::dyn_cast<ArrayAttr>(an.getValue())) {
        if (!aa.getValue().empty()) 
          if (auto sa = llvm::dyn_cast<StringAttr>(aa.getValue()[0])) { 
            varName = sa.getValue().str(); 
            break; 
          }
      }
    }
  }
  if (varName.empty()) varName = fallback;
  return varName;
}

std::string indentText(const std::string &text, llvm::StringRef indent = "  ") {
  if (text.empty()) return text;

  std::ostringstream indented;
  std::istringstream input(text);
  std::string line;
  while (std::getline(input, line)) {
    if (!line.empty()) indented << indent.str();
    indented << line << "\n";
  }
  return indented.str();
}

bool emitRegionBody(Region &region, Mapper &m, std::ostream &out,
                    std::vector<Value> *yieldedValues = nullptr) {
  if (region.empty()) return true;

  Block &block = region.front();
  std::ostringstream regionOut;

  for (Operation &nestedOp : block.getOperations()) {
    if (auto yieldOp = llvm::dyn_cast<cir::YieldOp>(&nestedOp)) {
      if (yieldedValues) {
        yieldedValues->assign(yieldOp->operand_begin(), yieldOp->operand_end());
      }
      break;
    }

    if (!m.mapOperation(&nestedOp, regionOut)) return false;
  }

  out << indentText(regionOut.str());
  return true;
}

// ============================================================================
// Allocation and basic operations
// ============================================================================

// Typed handlers: each function takes a generated Op class and emits C.

bool handleAlloca(cir::AllocaOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();

  // Try the typed property accessor first (modern CIR).
  std::string varName = op.getName().str();

  // Fallback 1: inherent attribute accessible via the generic MLIR interface.
  if (varName.empty()) {
    if (auto attr = o->getInherentAttr("name"))
      if (auto sa = llvm::dyn_cast<StringAttr>(*attr))
        varName = sa.getValue().str();
  }

  // Fallback 2: legacy regular-attribute storage (older compiled libraries
  // stored the name as a plain dict attribute rather than a property).
  if (varName.empty())
    varName = extractName(o);

  if (varName.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_ALLOCA_NO_NAME << "\n";
      return false;
    }
    out << "  // " << ERR_ALLOCA_NO_NAME << "\n";
    varName = m.freshName("a");
  }
  
  // Make variable name unique by appending suffix if it's already been used
  // This handles cases where MLIR has multiple allocas with the same name (e.g., in nested scopes)
  std::string uniqueVarName = m.freshName(varName);

  // Get the allocated type (first operand type in the operation signature)
  // cir.alloca returns a pointer, but we want to declare the variable as the pointed-to type
  Type allocaTy = op.getAllocaType();
  
  // Check if this is an array or struct type by examining type string
  llvm::SmallString<128> buf;
  llvm::raw_svector_ostream os(buf);
  allocaTy.print(os);
  std::string typeStr = os.str().str();
  
  // Handle struct types first: !rec_Point or !cir.record<struct "Point" {...}>
  // This needs to come before array check since some struct names might contain "array"
  if (typeStr.find("!rec_") == 0 || typeStr.find("!cir.record") == 0) {
    std::string ctype = m.mapTypeToC(allocaTy);
    out << "  " << ctype << " " << uniqueVarName << ";\n";
    for (Value res : o->getResults()) {
      m.setName(res, uniqueVarName);
      m.markAsDirectAccess(res);
    }
    return true;
  }
  
  // Handle array types specially: !cir.array<!s32i x 5> -> int arr[5]
  if (auto arrayTy = llvm::dyn_cast<cir::ArrayType>(allocaTy)) {
    std::string elemCType = m.mapTypeToC(arrayTy.getElementType());
    out << "  " << elemCType << " " << uniqueVarName << "[" << arrayTy.getSize() << "];\n";
    for (Value res : o->getResults()) {
      m.setName(res, uniqueVarName);
      m.markAsDirectAccess(res);
    }
    return true;
  }
  
  // For non-array, non-struct types, use regular type mapping
  std::string ctype = "int";
  if (allocaTy) {
    ctype = m.mapTypeToC(allocaTy);
  }
  
  out << "  " << ctype << " " << uniqueVarName << ";\n";
  for (Value res : o->getResults()) {
    m.setName(res, uniqueVarName);
    m.markAsDirectAccess(res); // Mark alloca results as direct access
  }
  return true;
}

bool handleConst(cir::ConstantOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::optional<std::string> litVal;
  bool isZeroInit = false;
  mlir::Type resultType = o->getNumResults() > 0 ? o->getResult(0).getType() : mlir::Type();
  
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
    // Float literals
    if (auto fa = llvm::dyn_cast<mlir::FloatAttr>(a.getValue())) {
      llvm::SmallString<32> buf;
      fa.getValue().toString(buf);
      litVal = buf.str().str();
      break;
    }
    if (auto fpa = llvm::dyn_cast<cir::FPAttr>(a.getValue())) {
      llvm::SmallString<32> buf;
      fpa.getValue().toString(buf);
      litVal = buf.str().str();
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
      litVal = "NULL";
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
          expr = symbolName;
        }
      }

      litVal = expr;
      break;
    }
  }
  
  if (!litVal.has_value()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_CONSTANT_NO_LITERAL << "\n";
      return false;
    }
    out << "  // " << ERR_CONSTANT_NO_LITERAL << "\n";
    litVal = "0";
  }
  
  std::string tmp = m.freshName("c");
  std::string literal = litVal.value();
  std::string ctype = "int";
  if (o->getNumResults() > 0) {
    ctype = m.mapTypeToC(resultType);
  }

  if (isZeroInit && resultType &&
      (mlir::isa<cir::RecordType>(resultType) || mlir::isa<cir::ArrayType>(resultType))) {
    literal = "{0}";
  }

  out << "  " << ctype << " " << tmp << " = " << literal << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleLoad(cir::LoadOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value ptr = o->getOperand(0);
  std::string src = m.getOrCreateName(ptr);
  std::string tmp = m.freshName("t");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  // Check if source is marked as direct access (alloca, array, struct)
  // Never dereference direct access values
  bool shouldDereference = !m.isDirectAccess(ptr);
  if (shouldDereference) {
    out << "  " << ctype << " " << tmp << " = *" << src << ";\n";
  } else {
    out << "  " << ctype << " " << tmp << " = " << src << ";\n";
  }
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleStore(cir::StoreOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value val = o->getOperand(0);
  Value ptr = o->getOperand(1);
  std::string vname = m.getOrCreateName(val);
  std::string pname = m.getOrCreateName(ptr);
  
  // Determine if we need to take the address of val when storing
  // We need & if:
  // 1. val is a direct access lvalue (variable from alloca, array element from get_element)
  // 2. ptr expects a pointer value (ptr's pointed-to type is a pointer)
  bool needAddressOf = false;
  if (m.isDirectAccess(val) && ptr.getType()) {
    // val is direct access (a variable or lvalue)
    // Check if we're storing into a pointer variable
    Type ptrType = ptr.getType();
    if (auto ptrTy = llvm::dyn_cast<cir::PointerType>(ptrType)) {
      Type pointee = ptrTy.getPointee();
      std::string pointeeCType = m.mapTypeToC(pointee);
      bool pointeeIsPointer = !pointeeCType.empty() && pointeeCType.back() == '*';
      if (pointeeIsPointer) {
        // Storing into a pointer variable
        // Exception: if val is already a pointer expression (like from ptr_stride)
        // we don't need &. Check if vname contains operators like + or - at top level
        // or if it's a cast result (contains "cast")
        bool isPointerExpr = (vname.find(" + ") != std::string::npos || 
                              vname.find(" - ") != std::string::npos ||
                              vname.find("cast") != std::string::npos);
        if (!isPointerExpr) {
          needAddressOf = true;
        }
      }
    }
  }
  if (needAddressOf) {
    vname = "&" + vname;
  }
  // Check if destination is marked as direct access (alloca, array, struct)
  // Never dereference direct access destinations
  bool shouldDereference = !m.isDirectAccess(ptr);
  if (shouldDereference) {
    out << "  *" << pname << " = " << vname << ";\n";
  } else {
    out << "  " << pname << " = " << vname << ";\n";
  }
  return true;
}

bool handleCmp(cir::CmpOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value lhs = o->getOperand(0);
  Value rhs = o->getOperand(1);
  std::string l = m.getOrCreateName(lhs);
  std::string r = m.getOrCreateName(rhs);
  std::string pred;
  bool predFound = false;
  
  if (auto kindAttr = o->getAttrOfType<cir::CmpOpKindAttr>("kind")) {
    switch (kindAttr.getValue()) {
      case cir::CmpOpKind::lt: pred = "<"; predFound = true; break;
      case cir::CmpOpKind::le: pred = "<="; predFound = true; break;
      case cir::CmpOpKind::gt: pred = ">"; predFound = true; break;
      case cir::CmpOpKind::ge: pred = ">="; predFound = true; break;
      case cir::CmpOpKind::eq: pred = "=="; predFound = true; break;
      case cir::CmpOpKind::ne: pred = "!="; predFound = true; break;
      default: predFound = false; break;
    }
  }
  
  if (!predFound) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_CMP_NO_PRED << "\n";
      return false;
    }
    out << "  // " << ERR_CMP_NO_PRED << "\n";
    pred = "==";
  }
  
  std::string tmp = m.freshName("c");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  out << "  " << ctype << " " << tmp << " = (" << l << " " << pred << " " << r << ") ? 1 : 0;\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleBr(cir::BrOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (!o->getSuccessors().empty()) {
    mlir::Block *succ = o->getSuccessors()[0];
    
    // Handle block arguments (phi nodes in SSA form)
    // If the branch passes operands, emit assignments to successor block's arguments
    if (o->getNumOperands() > 0 && succ->getNumArguments() > 0) {
      unsigned numArgs = std::min(o->getNumOperands(), (unsigned)succ->getNumArguments());
      for (unsigned i = 0; i < numArgs; ++i) {
        Value branchArg = o->getOperand(i);
        BlockArgument blockArg = succ->getArgument(i);
        
        // Get or create name for the block argument (destination)
        std::string blockArgName = m.getOrCreateName(blockArg);
        // Get the value being passed (source)
        std::string branchArgName = m.getOrCreateName(branchArg);
        
        // Get the type for proper C declaration
        std::string ctype = m.mapTypeToC(blockArg.getType());
        
        // Emit assignment: block_arg = branch_arg;
        out << "  " << blockArgName << " = " << branchArgName << ";\n";
      }
    }
    
    std::string lbl = m.getOrCreateLabel(succ);
    out << "  goto " << lbl << ";\n";
    return true;
  }
  out << "  // br (no successor info)\n";
  return true;
}

bool handleBrCond(cir::BrCondOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::string cond = "0";
  if (o->getNumOperands() >= 1) cond = m.getOrCreateName(o->getOperand(0));
  std::string tlabel;
  std::string flabel;
  
  if (o->getNumSuccessors() < 2) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_BRCOND_NO_SUCCESSORS << "\n";
      return false;
    }
    out << "  // " << ERR_BRCOND_NO_SUCCESSORS << "\n";
    out << "  if (" << cond << ") goto bb_true; else goto bb_false;\n";
    return true;
  }
  
  mlir::Block *trueSucc = o->getSuccessors()[0];
  mlir::Block *falseSucc = o->getSuccessors()[1];
  tlabel = m.getOrCreateLabel(trueSucc);
  flabel = m.getOrCreateLabel(falseSucc);
  
  // Check if we need to handle block arguments
  // BrCondOp can pass different arguments to true and false successors
  // Operand 0 is the condition, operands 1+ go to true branch, then false branch operands
  
  // Get the number of arguments for each successor
  unsigned trueNumArgs = trueSucc->getNumArguments();
  unsigned falseNumArgs = falseSucc->getNumArguments();
  
  // Simple case: no block arguments
  if (trueNumArgs == 0 && falseNumArgs == 0) {
    out << "  if (" << cond << ") goto " << tlabel << "; else goto " << flabel << ";\n";
    return true;
  }
  
  // Complex case: need to handle block arguments
  // We need to emit assignments before the goto, but we can't do both branches inline
  // Solution: use a temporary variable or emit the branches separately with assignments
  
  // For conditional branches with block arguments, we need to:
  // 1. Declare all block argument variables at the start of the block (if not already)
  // 2. Emit if-else with assignments before goto
  
  // Check if true branch has arguments
  bool hasTrueArgs = (trueNumArgs > 0);
  // The operands after the condition are split: first trueNumArgs go to true branch
  unsigned trueArgStartIdx = 1; // After condition
  
  // Check if false branch has arguments  
  bool hasFalseArgs = (falseNumArgs > 0);
  unsigned falseArgStartIdx = 1 + trueNumArgs; // After condition and true args
  
  if (hasTrueArgs || hasFalseArgs) {
    out << "  if (" << cond << ") {\n";
    
    // Emit assignments for true branch
    if (hasTrueArgs) {
      for (unsigned i = 0; i < trueNumArgs; ++i) {
        if (trueArgStartIdx + i < o->getNumOperands()) {
          Value branchArg = o->getOperand(trueArgStartIdx + i);
          BlockArgument blockArg = trueSucc->getArgument(i);
          std::string blockArgName = m.getOrCreateName(blockArg);
          std::string branchArgName = m.getOrCreateName(branchArg);
          out << "    " << blockArgName << " = " << branchArgName << ";\n";
        }
      }
    }
    
    out << "    goto " << tlabel << ";\n";
    out << "  } else {\n";
    
    // Emit assignments for false branch
    if (hasFalseArgs) {
      for (unsigned i = 0; i < falseNumArgs; ++i) {
        if (falseArgStartIdx + i < o->getNumOperands()) {
          Value branchArg = o->getOperand(falseArgStartIdx + i);
          BlockArgument blockArg = falseSucc->getArgument(i);
          std::string blockArgName = m.getOrCreateName(blockArg);
          std::string branchArgName = m.getOrCreateName(branchArg);
          out << "    " << blockArgName << " = " << branchArgName << ";\n";
        }
      }
    }
    
    out << "    goto " << flabel << ";\n";
    out << "  }\n";
  } else {
    out << "  if (" << cond << ") goto " << tlabel << "; else goto " << flabel << ";\n";
  }
  
  return true;
}

bool handleGoto(cir::GotoOp op, Mapper &m, std::ostream &out) {
  out << "  goto " << op.getLabel().str() << ";\n";
  return true;
}

bool handleLabel(cir::LabelOp op, Mapper &m, std::ostream &out) {
  out << op.getLabel().str() << ": ;\n";
  return true;
}

bool handleCall(cir::CallOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::string callee;
  bool isIndirectCall = false;
  
  // Try to get callee from attributes (direct call)
  if (auto sa = o->getAttrOfType<StringAttr>("callee")) {
    callee = sa.getValue().str();
  } else if (auto sa2 = o->getAttrOfType<SymbolRefAttr>("callee")) {
    callee = sa2.getRootReference().str();
  }
  
  // Check if this is an indirect call (callee is an operand, typically a function pointer)
  if (callee.empty() && o->getNumOperands() > 0) {
    // First operand might be the function pointer for indirect calls
    Value firstOperand = o->getOperand(0);
    if (auto funcPtrType = llvm::dyn_cast<cir::PointerType>(firstOperand.getType())) {
      if (llvm::isa<cir::FuncType>(funcPtrType.getPointee())) {
        // This is an indirect call through a function pointer
        isIndirectCall = true;
        callee = m.getOrCreateName(firstOperand);
      }
    }
  }
  
  if (callee.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_CALL_NO_CALLEE << "\n";
      return false;
    }
    out << "  // " << ERR_CALL_NO_CALLEE << "\n";
    callee = "unknown_fn";
  }
  
  // Map the callee to the chosen output name (demangled when unique) for direct calls
  std::string outCallee = isIndirectCall ? callee : m.getFunctionOutputName(callee);
  
  // Build argument list with address-of adjustment for direct access allocas
  std::string args;
  unsigned startIdx = isIndirectCall ? 1 : 0; // Skip first operand if it's the function pointer
  for (unsigned i = startIdx; i < o->getNumOperands(); ++i) {
    if (i > startIdx) args += ", ";
    Value argV = o->getOperand(i);
    std::string argName = m.getOrCreateName(argV);
    // If argument type is a pointer AND the value is a direct-access variable representing
    // the memory cell (alloca of base type, struct, or pointer), we must take its address
    // unless the pointee is an array (which decays automatically).
    if (auto ptrTy = llvm::dyn_cast<cir::PointerType>(argV.getType())) {
      mlir::Type pointee = ptrTy.getPointee();
      bool pointeeIsArray = llvm::isa<cir::ArrayType>(pointee);
      if (m.isDirectAccess(argV) && !pointeeIsArray) {
        argName = "&" + argName;
      }
    }
    args += argName;
  }
  
  // For indirect calls, we need to cast the void* back to a function pointer
  // Use a typedef-style cast for function pointers
  std::string callExpr;
  if (isIndirectCall) {
    // Generate return type for function pointer cast
    std::string retType = "void";
    if (o->getNumResults() > 0) {
      retType = m.mapTypeToC(o->getResult(0).getType());
    }
    // Cast void* to function pointer and call: ((retType (*)())ptr)()
    callExpr = "((" + retType + " (*)())" + outCallee + ")";
  } else {
    callExpr = outCallee;
  }
  
  if (o->getNumResults() > 0) {
    std::string tmp = m.freshName("r");
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    out << "  " << ctype << " " << tmp << " = " << callExpr << "(" << args << ");\n";
    m.setName(o->getResult(0), tmp);
  } else {
    out << "  " << callExpr << "(" << args << ");\n";
  }
  return true;
}

bool handleReturn(cir::ReturnOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() == 0) { 
    out << "  return;\n"; 
    return true; 
  }
  std::string rv = m.getOrCreateName(o->getOperand(0));
  out << "  return " << rv << ";\n";
  return true;
}

bool handleUnreachable(cir::UnreachableOp op, Mapper &m, std::ostream &out) {
  out << "  __builtin_unreachable();\n";
  return true;
}

// ============================================================================
// Binary operations
// ============================================================================

static bool handleBinaryOpImpl(Operation *o, Mapper &m, std::ostream &out, const char *opStr) {
  if (o->getNumOperands() < 2) return false;
  Value lhs = o->getOperand(0);
  Value rhs = o->getOperand(1);
  std::string l = m.getOrCreateName(lhs);
  std::string r = m.getOrCreateName(rhs);
  std::string tmp = m.freshName("b");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  out << "  " << ctype << " " << tmp << " = " << l << " " << opStr << " " << r << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleAdd(cir::AddOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "+"); }
bool handleSub(cir::SubOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "-"); }
bool handleMul(cir::MulOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "*"); }
bool handleDiv(cir::DivOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "/"); }
bool handleRem(cir::RemOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "%"); }
bool handleAnd(cir::AndOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "&"); }
bool handleOr(cir::OrOp  op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "|"); }
bool handleXor(cir::XorOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "^"); }

static std::string getOverflowBuiltinName(Operation *o) {
  llvm::StringRef opName = o->getName().getStringRef();
  if (opName == "cir.add.overflow") return "add";
  if (opName == "cir.sub.overflow") return "sub";
  if (opName == "cir.mul.overflow") return "mul";

  if (opName != "cir.binop.overflow") return std::string();

  auto kindAttr = o->getAttr("kind");
  if (!kindAttr) return std::string();

  std::string kindText;
  llvm::raw_string_ostream rso(kindText);
  kindAttr.print(rso);
  rso.flush();

  if (kindText.find("add") != std::string::npos) return "add";
  if (kindText.find("sub") != std::string::npos) return "sub";
  if (kindText.find("mul") != std::string::npos) return "mul";
  return std::string();
}

bool handleBinOpOverflow(Operation *o, Mapper &m, std::ostream &out) {
  if (o->getNumOperands() < 2 || o->getNumResults() < 2) return false;

  std::string builtinName = getOverflowBuiltinName(o);
  if (builtinName.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_BINOP_NO_KIND << "\n";
      return false;
    }
    out << "  // " << ERR_BINOP_NO_KIND << "\n";
    return true;
  }

  Value lhs = o->getOperand(0);
  Value rhs = o->getOperand(1);
  Value result = o->getResult(0);
  Value overflow = o->getResult(1);

  std::string lhsName = m.getOrCreateName(lhs);
  std::string rhsName = m.getOrCreateName(rhs);
  std::string resultName = m.freshName("ovr");
  std::string overflowName = m.freshName("ovf");
  std::string resultType = m.mapTypeToC(result.getType());
  std::string overflowType = m.mapTypeToC(overflow.getType());

  out << "  " << resultType << " " << resultName << ";\n";
  out << "  " << overflowType << " " << overflowName
      << " = __builtin_" << builtinName << "_overflow("
      << lhsName << ", " << rhsName << ", &" << resultName << ");\n";

  m.setName(result, resultName);
  m.setName(overflow, overflowName);
  return true;
}

// ============================================================================
// Unary operations
// ============================================================================

static bool handleUnaryOpImpl(Operation *o, Mapper &m, std::ostream &out, const char *opStr) {
  if (o->getNumOperands() < 1) return false;
  Value operand = o->getOperand(0);
  std::string opnd = m.getOrCreateName(operand);
  std::string tmp = m.freshName("u");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  out << "  " << ctype << " " << tmp << " = " << opStr << opnd << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleInc(cir::IncOp op, Mapper &m, std::ostream &out) { return handleUnaryOpImpl(op.getOperation(), m, out, "++"); }
bool handleDec(cir::DecOp op, Mapper &m, std::ostream &out) { return handleUnaryOpImpl(op.getOperation(), m, out, "--"); }
bool handleMinus(cir::MinusOp op, Mapper &m, std::ostream &out) { return handleUnaryOpImpl(op.getOperation(), m, out, "-"); }

bool handleNot(cir::NotOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value operand = o->getOperand(0);
  // CIR 'not' may represent logical not when applied to !cir.bool,
  // and bitwise complement otherwise. Inspect operand type.
  llvm::SmallString<64> tbuf;
  llvm::raw_svector_ostream tos(tbuf);
  operand.getType().print(tos);
  const char *opStr = (tos.str().contains("!cir.bool")) ? "!" : "~";
  return handleUnaryOpImpl(o, m, out, opStr);
}

// ============================================================================
// Shift operations
// ============================================================================

bool handleShiftOp(cir::ShiftOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value lhs = o->getOperand(0);
  Value rhs = o->getOperand(1);
  std::string l = m.getOrCreateName(lhs);
  std::string r = m.getOrCreateName(rhs);

  const char *opStr = op.getIsShiftleft() ? "<<" : ">>";
  
  std::string tmp = m.freshName("s");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  out << "  " << ctype << " " << tmp << " = " << l << " " << opStr << " " << r << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

// ============================================================================
// Cast operations
// ============================================================================

bool handleCast(cir::CastOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value operand = o->getOperand(0);
  std::string opnd = m.getOrCreateName(operand);
  
  std::string tmp = m.freshName("cast");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  
  // For most casts, a simple C cast is sufficient
  out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << opnd << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

static std::string toBuiltinVAList(const std::string &argListPtrExpr) {
  return "*((__builtin_va_list *)(" + argListPtrExpr + "))";
}

bool handleVAStart(cir::VAStartOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  std::string argList = m.getOrCreateName(o->getOperand(0));
  out << "  __builtin_va_start(" << toBuiltinVAList(argList) << ", 0);\n";
  return true;
}

bool handleVAEnd(cir::VAEndOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  std::string argList = m.getOrCreateName(o->getOperand(0));
  out << "  __builtin_va_end(" << toBuiltinVAList(argList) << ");\n";
  return true;
}

bool handleVAArg(cir::VAArgOp op, Mapper &m, std::ostream &out) {
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

bool handleVACopy(Operation *o, Mapper &m, std::ostream &out) {
  if (o->getNumOperands() < 2) return false;
  std::string srcArgList = m.getOrCreateName(o->getOperand(0));
  std::string dstArgList = m.getOrCreateName(o->getOperand(1));
  out << "  __builtin_va_copy(" << toBuiltinVAList(dstArgList) << ", "
      << toBuiltinVAList(srcArgList) << ");\n";
  return true;
}

// ============================================================================
// Control flow: switch and select
// ============================================================================

bool handleSwitch(cir::SwitchOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value cond = o->getOperand(0);
  std::string condName = m.getOrCreateName(cond);
  
  out << "  switch (" << condName << ") {\n";
  
  // Extract case values and destinations from attributes
  if (auto caseVals = o->getAttrOfType<mlir::ArrayAttr>("case_values")) {
    unsigned numCases = caseVals.size();
    for (unsigned i = 0; i < numCases && i + 1 < o->getNumSuccessors(); ++i) {
      if (auto intAttr = llvm::dyn_cast<mlir::IntegerAttr>(caseVals[i])) {
        std::string label = m.getOrCreateLabel(o->getSuccessors()[i + 1]);
        out << "    case " << intAttr.getValue().getSExtValue() << ": goto " << label << ";\n";
      }
    }
  }
  
  // Default case
  if (o->getNumSuccessors() > 0) {
    std::string defLabel = m.getOrCreateLabel(o->getSuccessors()[0]);
    out << "    default: goto " << defLabel << ";\n";
  }
  
  out << "  }\n";
  return true;
}

bool handleSwitchFlat(cir::SwitchFlatOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value cond = o->getOperand(0);
  std::string condName = m.getOrCreateName(cond);
  
  out << "  switch (" << condName << ") {\n";
  
  // Extract case values and destinations from attributes
  if (auto caseVals = o->getAttrOfType<mlir::ArrayAttr>("case_values")) {
    unsigned numCases = caseVals.size();
    for (unsigned i = 0; i < numCases && i + 1 < o->getNumSuccessors(); ++i) {
      if (auto intAttr = llvm::dyn_cast<mlir::IntegerAttr>(caseVals[i])) {
        std::string label = m.getOrCreateLabel(o->getSuccessors()[i + 1]);
        out << "    case " << intAttr.getValue().getSExtValue() << ": goto " << label << ";\n";
      }
    }
  }
  
  // Default case
  if (o->getNumSuccessors() > 0) {
    std::string defLabel = m.getOrCreateLabel(o->getSuccessors()[0]);
    out << "    default: goto " << defLabel << ";\n";
  }
  
  out << "  }\n";
  return true;
}

bool handleSelect(cir::SelectOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 3) return false;
  Value cond = o->getOperand(0);
  Value trueVal = o->getOperand(1);
  Value falseVal = o->getOperand(2);
  
  std::string c = m.getOrCreateName(cond);
  std::string t = m.getOrCreateName(trueVal);
  std::string f = m.getOrCreateName(falseVal);
  
  std::string tmp = m.freshName("sel");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  
  out << "  " << ctype << " " << tmp << " = " << c << " ? " << t << " : " << f << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleTernary(cir::TernaryOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1 || o->getNumRegions() != 2) return false;

  std::string condName = m.getOrCreateName(o->getOperand(0));
  std::vector<std::string> resultNames;
  resultNames.reserve(o->getNumResults());

  for (Value result : o->getResults()) {
    std::string tmp = m.freshName("ternary");
    out << "  " << m.mapTypeToC(result.getType()) << " " << tmp << ";\n";
    resultNames.push_back(tmp);
    m.setName(result, tmp);
  }

  std::vector<Value> trueYieldedValues;
  std::vector<Value> falseYieldedValues;

  out << "  if (" << condName << ") {\n";
  if (!emitRegionBody(o->getRegion(0), m, out,
                      o->getNumResults() > 0 ? &trueYieldedValues : nullptr)) {
    return false;
  }
  if (!resultNames.empty()) {
    if (trueYieldedValues.size() != resultNames.size()) return false;
    for (size_t i = 0; i < resultNames.size(); ++i) {
      out << "    " << resultNames[i] << " = " << m.getOrCreateName(trueYieldedValues[i]) << ";\n";
    }
  }
  out << "  } else {\n";
  if (!emitRegionBody(o->getRegion(1), m, out,
                      o->getNumResults() > 0 ? &falseYieldedValues : nullptr)) {
    return false;
  }
  if (!resultNames.empty()) {
    if (falseYieldedValues.size() != resultNames.size()) return false;
    for (size_t i = 0; i < resultNames.size(); ++i) {
      out << "    " << resultNames[i] << " = " << m.getOrCreateName(falseYieldedValues[i]) << ";\n";
    }
  }
  out << "  }\n";
  return true;
}

// ============================================================================
// Memory and pointer operations
// ============================================================================

bool handleGetMember(cir::GetMemberOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value base = o->getOperand(0);
  std::string baseName = m.getOrCreateName(base);
  
  std::string memberName;
  if (auto sa = o->getAttrOfType<StringAttr>("name")) {
    memberName = sa.getValue().str();
  }
  
  if (memberName.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_GET_MEMBER_NO_NAME << "\n";
      return false;
    }
    out << "  // " << ERR_GET_MEMBER_NO_NAME << "\n";
    memberName = "field";
  }
  
  // cir.get_member conceptually returns the address of a member, but the C text
  // we carry forward is already the final lvalue expression (`a.b` or `p->b`).
  // Later load/store handlers must therefore treat every get_member result as a
  // direct-access expression and avoid adding an extra dereference.
  bool baseIsDirectAccess = m.isDirectAccess(base);
  bool baseNameHasArrow = baseName.find("->") != std::string::npos;
  bool useArrow = !baseIsDirectAccess && !baseNameHasArrow;
  
  // For get_member, set the name mapping to the chained expression
  std::string expr;
  if (useArrow) {
    expr = baseName + "->" + memberName;
  } else {
    expr = baseName + "." + memberName;
  }
  if (o->getNumResults() > 0) {
    m.setName(o->getResult(0), expr);
    m.markAsDirectAccess(o->getResult(0));
  }
  return true;
}

bool handleGetElement(cir::GetElementOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value base = o->getOperand(0);
  Value index = o->getOperand(1);
  std::string baseName = m.getOrCreateName(base);
  std::string indexName = m.getOrCreateName(index);
  
  // cir.get_element returns a pointer to the element, so we need to generate base[index]
  // The result will be used by load/store operations
  // For get_element, build up chained array access expression
  std::string expr = baseName + "[" + indexName + "]";
  if (o->getNumResults() > 0) {
    m.setName(o->getResult(0), expr);
    // Mark the result as direct access if base is direct access (array element)
    if (m.isDirectAccess(base)) {
      m.markAsDirectAccess(o->getResult(0));
    }
  }
  return true;
}

bool handlePtrStride(cir::PtrStrideOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value base = o->getOperand(0);
  Value stride = o->getOperand(1);
  std::string baseName = m.getOrCreateName(base);
  std::string strideName = m.getOrCreateName(stride);
  
  std::string tmp = m.freshName("ptr");
  std::string ctype = "int*";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  
  out << "  " << ctype << " " << tmp << " = " << baseName << " + " << strideName << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handlePtrDiff(cir::PtrDiffOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value lhs = o->getOperand(0);
  Value rhs = o->getOperand(1);
  std::string l = m.getOrCreateName(lhs);
  std::string r = m.getOrCreateName(rhs);
  
  std::string tmp = m.freshName("diff");
  std::string ctype = "long";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  
  out << "  " << ctype << " " << tmp << " = " << l << " - " << r << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleBaseClassAddr(Operation *o, Mapper &m, std::ostream &out) {
  if (o->getNumOperands() < 1 || o->getNumResults() < 1) return false;

  Value base = o->getOperand(0);
  std::string baseName = m.getOrCreateName(base);
  if (m.isDirectAccess(base) && baseName.find('[') == std::string::npos &&
      baseName.find("->") == std::string::npos && baseName.find('&') != 0) {
    baseName = "&" + baseName;
  }
  std::string resultType = m.mapTypeToC(o->getResult(0).getType());

  std::string opText;
  llvm::raw_string_ostream rso(opText);
  o->print(rso);
  rso.flush();

  bool isNonnull = opText.find(" nonnull ") != std::string::npos;
  long long offset = 0;
  size_t openBracket = opText.rfind('[');
  size_t closeBracket = (openBracket == std::string::npos) ? std::string::npos : opText.find(']', openBracket + 1);
  if (openBracket != std::string::npos && closeBracket != std::string::npos && closeBracket > openBracket + 1) {
    std::string offsetText = opText.substr(openBracket + 1, closeBracket - openBracket - 1);
    size_t start = 0;
    while (start < offsetText.size() && std::isspace(static_cast<unsigned char>(offsetText[start]))) ++start;
    size_t end = offsetText.size();
    while (end > start && std::isspace(static_cast<unsigned char>(offsetText[end - 1]))) --end;
    if (end > start) {
      offset = std::stoll(offsetText.substr(start, end - start));
    }
  }

  std::string adjustedExpr = "(" + resultType + ")((char *)" + baseName + " + " + std::to_string(offset) + ")";
  if (!isNonnull) {
    adjustedExpr = "((" + baseName + ") ? " + adjustedExpr + " : (" + resultType + ")0)";
  }

  std::string tmp = m.freshName("base");
  out << "  " << resultType << " " << tmp << " = " << adjustedExpr << ";\n";
  m.setName(o->getResult(0), tmp);
  return true;
}

bool handleCopy(cir::CopyOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value src = o->getOperand(0);
  Value dst = o->getOperand(1);
  std::string srcName = m.getOrCreateName(src);
  std::string dstName = m.getOrCreateName(dst);
  // Determine if this is an array copy (both operands pointer to array)
  auto srcPtrTy = llvm::dyn_cast<cir::PointerType>(src.getType());
  auto dstPtrTy = llvm::dyn_cast<cir::PointerType>(dst.getType());
  if (srcPtrTy && dstPtrTy) {
    auto srcArrTy = llvm::dyn_cast<cir::ArrayType>(srcPtrTy.getPointee());
    auto dstArrTy = llvm::dyn_cast<cir::ArrayType>(dstPtrTy.getPointee());
    if (srcArrTy && dstArrTy && srcArrTy.getSize() == dstArrTy.getSize() && srcArrTy.getElementType() == dstArrTy.getElementType()) {
      uint64_t size = srcArrTy.getSize();
      out << "  // array copy\n";
      out << "  for (int i = 0; i < " << size << "; ++i) { " << dstName << "[i] = " << srcName << "[i]; }\n";
      return true;
    }
  }
  // Fallback: simple assignment (structs / scalars)
  out << "  " << dstName << " = " << srcName << "; // copy\n";
  return true;
}

bool handleStackSave(cir::StackSaveOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::string tmp = m.freshName("stack");
  out << "  void* " << tmp << " = __builtin_stack_save();\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleStackRestore(cir::StackRestoreOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value ptr = o->getOperand(0);
  std::string ptrName = m.getOrCreateName(ptr);
  out << "  __builtin_stack_restore(" << ptrName << ");\n";
  return true;
}

bool handleGetBitfield(cir::GetBitfieldOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value base = o->getOperand(0);
  std::string baseName = m.getOrCreateName(base);
  
  std::string tmp = m.freshName("bf");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  
  // Simplified bitfield access
  out << "  " << ctype << " " << tmp << " = " << baseName << "; // bitfield get\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleSetBitfield(cir::SetBitfieldOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value base = o->getOperand(0);
  Value value = o->getOperand(1);
  std::string baseName = m.getOrCreateName(base);
  std::string valueName = m.getOrCreateName(value);
  
  // Simplified bitfield assignment
  out << "  " << baseName << " = " << valueName << "; // bitfield set\n";
  return true;
}

// ============================================================================
// Global variables and constants
// ============================================================================

bool handleGetGlobal(cir::GetGlobalOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::string globalName;
  
  if (auto sa = o->getAttrOfType<StringAttr>("name")) {
    globalName = sa.getValue().str();
  } else if (auto sa = o->getAttrOfType<mlir::FlatSymbolRefAttr>("name")) {
    globalName = sa.getValue().str();
  }
  
  if (globalName.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_GET_GLOBAL_NO_NAME << "\n";
      return false;
    }
    out << "  // " << ERR_GET_GLOBAL_NO_NAME << "\n";
    globalName = "global_var";
  }
  
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
  std::string ctype = m.mapTypeToC(resType);

  // Pointer global special case:
  // get_global of a pointer variable returns a pointer-to-pointer (int** for int*).
  // We do not want to introduce a temporary; we want subsequent stores to write
  // directly 'pa = value' and loads to read 'pa'. So we simply bind the SSA value
  // to the global name without emitting a declaration.
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
  }

  // Non-pointer-global cases: emit a temporary holding address-of global.
  std::string tmp = m.freshName("g");
  // For arrays (pointer to array), we want decay: tmp = globalName;
  bool isPtrToArray = false;
  if (auto ptrT = mlir::dyn_cast<cir::PointerType>(resType)) {
    isPtrToArray = mlir::isa<cir::ArrayType>(ptrT.getPointee());
  }
  if (isPtrToArray) {
    out << "  " << ctype << " " << tmp << " = " << globalName << ";\n";
    m.setName(o->getResult(0), tmp);
    // Do NOT mark as direct access; we want loads/stores to treat it as pointer value
  } else {
    out << "  " << ctype << " " << tmp << " = &" << globalName << ";\n";
    m.setName(o->getResult(0), tmp);
  }
  return true;
}

// Note: cir.global is typically handled at module level, not within functions
// But we can add a stub handler for completeness
bool handleGlobal(cir::GlobalOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::string name = extractName(o);
  
  if (name.empty()) {
    if (auto sa = o->getAttrOfType<StringAttr>(mlir::SymbolTable::getSymbolAttrName())) {
      name = sa.getValue().str();
    }
  }
  
  if (name.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_GLOBAL_NO_NAME << "\n";
      return false;
    }
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

} // namespace

void registerBuiltinHandlers(Mapper &m) {
  // Basic operations
  m.registerTypedHandler<cir::AllocaOp>(handleAlloca);
  m.registerTypedHandler<cir::ConstantOp>(handleConst);
  m.registerTypedHandler<cir::LoadOp>(handleLoad);
  m.registerTypedHandler<cir::StoreOp>(handleStore);
  
  // Comparison
  m.registerTypedHandler<cir::CmpOp>(handleCmp);
  
  // Arithmetic and logic
  m.registerTypedHandler<cir::AddOp>(handleAdd);
  m.registerTypedHandler<cir::SubOp>(handleSub);
  m.registerTypedHandler<cir::MulOp>(handleMul);
  m.registerTypedHandler<cir::DivOp>(handleDiv);
  m.registerTypedHandler<cir::RemOp>(handleRem);
  m.registerTypedHandler<cir::AndOp>(handleAnd);
  m.registerTypedHandler<cir::OrOp>(handleOr);
  m.registerTypedHandler<cir::XorOp>(handleXor);
  m.registerTypedHandler<cir::IncOp>(handleInc);
  m.registerTypedHandler<cir::DecOp>(handleDec);
  m.registerTypedHandler<cir::MinusOp>(handleMinus);
  m.registerTypedHandler<cir::NotOp>(handleNot);
  m.registerTypedHandler<cir::ShiftOp>(handleShiftOp);
  m.registerHandler("cir.binop.overflow", std::make_unique<LambdaOpHandler>(handleBinOpOverflow));
  m.registerHandler("cir.add.overflow", std::make_unique<LambdaOpHandler>(handleBinOpOverflow));
  m.registerHandler("cir.sub.overflow", std::make_unique<LambdaOpHandler>(handleBinOpOverflow));
  m.registerHandler("cir.mul.overflow", std::make_unique<LambdaOpHandler>(handleBinOpOverflow));
  
  // Type conversions
  m.registerTypedHandler<cir::CastOp>(handleCast);
  m.registerTypedHandler<cir::VAStartOp>(handleVAStart);
  m.registerTypedHandler<cir::VAEndOp>(handleVAEnd);
  m.registerTypedHandler<cir::VAArgOp>(handleVAArg);
  m.registerHandler("cir.va_copy", std::make_unique<LambdaOpHandler>(handleVACopy));
  
  // Control flow
  m.registerTypedHandler<cir::BrOp>(handleBr);
  m.registerTypedHandler<cir::BrCondOp>(handleBrCond);
  m.registerTypedHandler<cir::GotoOp>(handleGoto);
  m.registerTypedHandler<cir::LabelOp>(handleLabel);
  m.registerTypedHandler<cir::SwitchOp>(handleSwitch);
  m.registerTypedHandler<cir::SwitchFlatOp>(handleSwitchFlat);
  m.registerTypedHandler<cir::SelectOp>(handleSelect);
  m.registerTypedHandler<cir::TernaryOp>(handleTernary);
  
  // Function calls
  m.registerTypedHandler<cir::CallOp>(handleCall);
  m.registerTypedHandler<cir::ReturnOp>(handleReturn);
  m.registerTypedHandler<cir::UnreachableOp>(handleUnreachable);
  
  // Memory and pointer operations
  m.registerTypedHandler<cir::GetMemberOp>(handleGetMember);
  m.registerTypedHandler<cir::GetElementOp>(handleGetElement);
  m.registerTypedHandler<cir::PtrStrideOp>(handlePtrStride);
  m.registerTypedHandler<cir::PtrDiffOp>(handlePtrDiff);
  m.registerHandler("cir.base_class_addr", std::make_unique<LambdaOpHandler>(handleBaseClassAddr));
  m.registerTypedHandler<cir::CopyOp>(handleCopy);
  m.registerTypedHandler<cir::StackSaveOp>(handleStackSave);
  m.registerTypedHandler<cir::StackRestoreOp>(handleStackRestore);
  m.registerTypedHandler<cir::GetBitfieldOp>(handleGetBitfield);
  m.registerTypedHandler<cir::SetBitfieldOp>(handleSetBitfield);
  
  // Global variables
  m.registerTypedHandler<cir::GetGlobalOp>(handleGetGlobal);
  m.registerTypedHandler<cir::GlobalOp>(handleGlobal);
}

} // namespace xcfa

