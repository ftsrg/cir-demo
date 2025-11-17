#include "Handlers.h"

#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/Support/Casting.h>

#include <llvm/ADT/StringRef.h>
#include <llvm/ADT/APFloat.h>
#include <optional>
#include <llvm/Support/raw_ostream.h>

// Include generated CIR op declarations and dialect to get full op classes

#include <clang/CIR/Dialect/IR/CIRDialect.h>
#include <clang/CIR/Dialect/IR/CIROpsAttributes.h.inc>
#include "ErrorMessages.h"

using namespace mlir;

namespace xcfa {

namespace {

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

// ============================================================================
// Allocation and basic operations
// ============================================================================

// Typed handlers: each function takes a generated Op class and emits C.

bool handleAlloca(cir::AllocaOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::string varName = extractName(o);
  
  if (varName.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_ALLOCA_NO_NAME << "\n";
      return false;
    }
    out << "  // " << ERR_ALLOCA_NO_NAME << "\n";
    varName = m.freshName("a");
  }

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
    out << "  " << ctype << " " << varName << ";\n";
    for (Value res : o->getResults()) {
      m.setName(res, varName);
      m.markAsDirectAccess(res);
    }
    return true;
  }
  
  // Handle array types specially: !cir.array<!s32i x 5> -> int arr[5]
  if (typeStr.find("!cir.array<") != std::string::npos) {
    // Extract element type and size from array type
    // Format: !cir.array<element_type x size>
    size_t startPos = typeStr.find("<");
    size_t xPos = typeStr.find(" x ", startPos);
    size_t endPos = typeStr.find(">", xPos);
    
    if (startPos != std::string::npos && xPos != std::string::npos && endPos != std::string::npos) {
      std::string elementTypeStr = typeStr.substr(startPos + 1, xPos - startPos - 1);
      std::string sizeStr = typeStr.substr(xPos + 3, endPos - xPos - 3);
      
      // Map element type to C type
      std::string ctype = "int"; // default
      if (elementTypeStr.find("!s32i") != std::string::npos || elementTypeStr.find("!cir.int<s, 32>") != std::string::npos) {
        ctype = "int";
      } else if (elementTypeStr.find("!s64i") != std::string::npos || elementTypeStr.find("!cir.int<s, 64>") != std::string::npos) {
        ctype = "long long";
      } else if (elementTypeStr.find("!cir.float") != std::string::npos) {
        ctype = "float";
      } else if (elementTypeStr.find("!cir.double") != std::string::npos) {
        ctype = "double";
      }
      
      out << "  " << ctype << " " << varName << "[" << sizeStr << "];\n";
      for (Value res : o->getResults()) {
        m.setName(res, varName);
        m.markAsDirectAccess(res);
      }
      return true;
    }
  }
  
  // For non-array, non-struct types, use regular type mapping
  std::string ctype = "int";
  if (allocaTy) {
    ctype = m.mapTypeToC(allocaTy);
  }
  
  out << "  " << ctype << " " << varName << ";\n";
  for (Value res : o->getResults()) {
    m.setName(res, varName);
    m.markAsDirectAccess(res); // Mark alloca results as direct access
  }
  return true;
}

bool handleConst(cir::ConstantOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::optional<std::string> litVal;
  
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
      break;
    }
    // Null/constant pointer
    if (auto cpa = llvm::dyn_cast<cir::ConstPtrAttr>(a.getValue())) {
      litVal = "NULL";
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
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
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
    // If the branch passes operands, map them to the successor block's arguments
    if (o->getNumOperands() > 0 && succ->getNumArguments() > 0) {
      unsigned numArgs = std::min(o->getNumOperands(), (unsigned)succ->getNumArguments());
      for (unsigned i = 0; i < numArgs; ++i) {
        Value branchArg = o->getOperand(i);
        BlockArgument blockArg = succ->getArgument(i);
        
        // Map the block argument to the same name as the branch argument
        std::string argName = m.getOrCreateName(branchArg);
        m.setName(blockArg, argName);
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
  if (o->getNumSuccessors() >= 2) {
    tlabel = m.getOrCreateLabel(o->getSuccessors()[0]);
    flabel = m.getOrCreateLabel(o->getSuccessors()[1]);
  } else {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_BRCOND_NO_SUCCESSORS << "\n";
      return false;
    }
    out << "  // " << ERR_BRCOND_NO_SUCCESSORS << "\n";
    tlabel = "bb_true";
    flabel = "bb_false";
  }
  out << "  if (" << cond << ") goto " << tlabel << "; else goto " << flabel << ";\n";
  return true;
}

bool handleCall(cir::CallOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::string callee;
  if (auto sa = o->getAttrOfType<StringAttr>("callee")) callee = sa.getValue().str();
  else if (auto sa2 = o->getAttrOfType<SymbolRefAttr>("callee")) callee = sa2.getRootReference().str();
  
  if (callee.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_CALL_NO_CALLEE << "\n";
      return false;
    }
    out << "  // " << ERR_CALL_NO_CALLEE << "\n";
    callee = "unknown_fn";
  }
  
  // Map the callee to the chosen output name (demangled when unique).
  std::string outCallee = m.getFunctionOutputName(callee);
  std::string args;
  for (unsigned i = 0; i < o->getNumOperands(); ++i) {
    if (i) args += ", ";
    args += m.getOrCreateName(o->getOperand(i));
  }
  
  if (o->getNumResults() > 0) {
    std::string tmp = m.freshName("r");
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    out << "  " << ctype << " " << tmp << " = " << outCallee << "(" << args << ");\n";
    m.setName(o->getResult(0), tmp);
  } else {
    out << "  " << outCallee << "(" << args << ");\n";
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

// ============================================================================
// Binary operations
// ============================================================================

bool handleBinOp(cir::BinOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value lhs = o->getOperand(0);
  Value rhs = o->getOperand(1);
  std::string l = m.getOrCreateName(lhs);
  std::string r = m.getOrCreateName(rhs);
  std::string opStr;
  bool opFound = false;
  
  if (auto kindAttr = o->getAttrOfType<cir::BinOpKindAttr>("kind")) {
    switch (kindAttr.getValue()) {
      case cir::BinOpKind::Add: opStr = "+"; opFound = true; break;
      case cir::BinOpKind::Sub: opStr = "-"; opFound = true; break;
      case cir::BinOpKind::Mul: opStr = "*"; opFound = true; break;
      case cir::BinOpKind::Div: opStr = "/"; opFound = true; break;
      case cir::BinOpKind::Rem: opStr = "%"; opFound = true; break;
      case cir::BinOpKind::And: opStr = "&"; opFound = true; break;
      case cir::BinOpKind::Or: opStr = "|"; opFound = true; break;
      case cir::BinOpKind::Xor: opStr = "^"; opFound = true; break;
      default: opFound = false; break;
    }
  }
  
  if (!opFound) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_BINOP_NO_KIND << "\n";
      return false;
    }
    out << "  // " << ERR_BINOP_NO_KIND << "\n";
    opStr = "+";
  }
  
  std::string tmp = m.freshName("b");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  out << "  " << ctype << " " << tmp << " = " << l << " " << opStr << " " << r << ";\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

// ============================================================================
// Unary operations
// ============================================================================

bool handleUnaryOp(cir::UnaryOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1) return false;
  Value operand = o->getOperand(0);
  std::string opnd = m.getOrCreateName(operand);
  std::string opStr;
  bool opFound = false;
  bool isPrefix = true;
  
  if (auto kindAttr = o->getAttrOfType<cir::UnaryOpKindAttr>("kind")) {
    switch (kindAttr.getValue()) {
      case cir::UnaryOpKind::Inc: opStr = "++"; opFound = true; isPrefix = true; break;
      case cir::UnaryOpKind::Dec: opStr = "--"; opFound = true; isPrefix = true; break;
      case cir::UnaryOpKind::Plus: opStr = "+"; opFound = true; isPrefix = true; break;
      case cir::UnaryOpKind::Minus: opStr = "-"; opFound = true; isPrefix = true; break;
      case cir::UnaryOpKind::Not: opStr = "!"; opFound = true; isPrefix = true; break;
      default: opFound = false; break;
    }
  }
  
  if (!opFound) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_UNARY_NO_KIND << "\n";
      return false;
    }
    out << "  // " << ERR_UNARY_NO_KIND << "\n";
    opStr = "+";
  }
  
  std::string tmp = m.freshName("u");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  
  if (isPrefix) {
    out << "  " << ctype << " " << tmp << " = " << opStr << opnd << ";\n";
  } else {
    out << "  " << ctype << " " << tmp << " = " << opnd << opStr << ";\n";
  }
  
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
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
  
  // ShiftOp doesn't have a kind attribute in the current CIR - it uses
  // the 'is_left_shift' boolean attribute instead
  std::string opStr = "<<"; // default to left shift
  if (auto isLeftAttr = o->getAttrOfType<mlir::BoolAttr>("is_left_shift")) {
    opStr = isLeftAttr.getValue() ? "<<" : ">>";
  }
  
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
  
  // cir.get_member returns a pointer to the member, so we need to generate base.member or base->member
  // Check if base is marked as direct access (alloca, struct field) - use .
  // Check if baseName contains '->' anywhere - if so, the entire chain uses .
  // Otherwise check if base itself is direct access
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
    // Mark the result as direct access if base is direct access
    if (baseIsDirectAccess || baseNameHasArrow) {
      m.markAsDirectAccess(o->getResult(0));
    }
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

bool handleCopy(cir::CopyOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 2) return false;
  Value src = o->getOperand(0);
  Value dst = o->getOperand(1);
  std::string srcName = m.getOrCreateName(src);
  std::string dstName = m.getOrCreateName(dst);
  
  // Assume copy of entire structure/array - use assignment
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
  
  std::string tmp = m.freshName("g");
  std::string ctype = "int*";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  
  // Check if the result type is a pointer to an array
  // Format: !cir.ptr<!cir.array<...>>
  bool isArrayPointer = false;
  if (o->getNumResults() > 0) {
    mlir::Type resType = o->getResult(0).getType();
    llvm::SmallString<64> typeBuf;
    llvm::raw_svector_ostream typeOS(typeBuf);
    resType.print(typeOS);
    std::string typeStr = typeOS.str().str();
    
    if (typeStr.find("!cir.ptr<!cir.array<") != std::string::npos) {
      isArrayPointer = true;
    }
  }
  
  // For arrays, don't use & because array names decay to pointers
  if (isArrayPointer) {
    out << "  " << ctype << " " << tmp << " = " << globalName << ";\n";
    // Mark the result as direct access since it's an array
    if (o->getNumResults() > 0) {
      m.markAsDirectAccess(o->getResult(0));
    }
  } else {
    out << "  " << ctype << " " << tmp << " = &" << globalName << ";\n";
  }
  
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
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
  m.registerTypedHandler<cir::AllocaOp>("cir.alloca", handleAlloca);
  m.registerTypedHandler<cir::ConstantOp>("cir.const", handleConst);
  m.registerTypedHandler<cir::LoadOp>("cir.load", handleLoad);
  m.registerTypedHandler<cir::StoreOp>("cir.store", handleStore);
  
  // Comparison
  m.registerTypedHandler<cir::CmpOp>("cir.cmp", handleCmp);
  
  // Arithmetic and logic
  m.registerTypedHandler<cir::BinOp>("cir.binop", handleBinOp);
  m.registerTypedHandler<cir::UnaryOp>("cir.unary", handleUnaryOp);
  m.registerTypedHandler<cir::ShiftOp>("cir.shift", handleShiftOp);
  
  // Type conversions
  m.registerTypedHandler<cir::CastOp>("cir.cast", handleCast);
  
  // Control flow
  m.registerTypedHandler<cir::BrOp>("cir.br", handleBr);
  m.registerTypedHandler<cir::BrCondOp>("cir.brcond", handleBrCond);
  m.registerTypedHandler<cir::SwitchOp>("cir.switch", handleSwitch);
  m.registerTypedHandler<cir::SwitchFlatOp>("cir.switch.flat", handleSwitchFlat);
  m.registerTypedHandler<cir::SelectOp>("cir.select", handleSelect);
  
  // Function calls
  m.registerTypedHandler<cir::CallOp>("cir.call", handleCall);
  m.registerTypedHandler<cir::ReturnOp>("cir.return", handleReturn);
  
  // Memory and pointer operations
  m.registerTypedHandler<cir::GetMemberOp>("cir.get_member", handleGetMember);
  m.registerTypedHandler<cir::GetElementOp>("cir.get_element", handleGetElement);
  m.registerTypedHandler<cir::PtrStrideOp>("cir.ptr_stride", handlePtrStride);
  m.registerTypedHandler<cir::PtrDiffOp>("cir.ptr_diff", handlePtrDiff);
  m.registerTypedHandler<cir::CopyOp>("cir.copy", handleCopy);
  m.registerTypedHandler<cir::StackSaveOp>("cir.stack_save", handleStackSave);
  m.registerTypedHandler<cir::StackRestoreOp>("cir.stack_restore", handleStackRestore);
  m.registerTypedHandler<cir::GetBitfieldOp>("cir.get_bitfield", handleGetBitfield);
  m.registerTypedHandler<cir::SetBitfieldOp>("cir.set_bitfield", handleSetBitfield);
  
  // Global variables
  m.registerTypedHandler<cir::GetGlobalOp>("cir.get_global", handleGetGlobal);
  m.registerTypedHandler<cir::GlobalOp>("cir.global", handleGlobal);
}

} // namespace xcfa

