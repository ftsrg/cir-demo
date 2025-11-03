#include "Handlers.h"

#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/Support/Casting.h>

#include <llvm/ADT/StringRef.h>
#include <optional>
#include <llvm/Support/raw_ostream.h>

// Include generated CIR op declarations and dialect to get full op classes

#include <clang/CIR/Dialect/IR/CIRDialect.h>
#include <clang/CIR/Dialect/IR/CIROpsAttributes.h.inc>
#include "ErrorMessages.h"

using namespace mlir;

namespace xcfa {

namespace {

// Typed handlers: each function takes a generated Op class and emits C.

bool handleAlloca(cir::AllocaOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  // name extraction similar to before
  std::string varName;
  if (auto aa = o->getAttrOfType<ArrayAttr>("names")) {
    if (!aa.getValue().empty()) if (auto sa = llvm::dyn_cast<StringAttr>(aa.getValue()[0])) varName = sa.getValue().str();
  }
  if (varName.empty()) if (auto aa = o->getAttrOfType<ArrayAttr>("sym_names")) {
    if (!aa.getValue().empty()) if (auto sa = llvm::dyn_cast<StringAttr>(aa.getValue()[0])) varName = sa.getValue().str();
  }
  if (varName.empty()) if (auto sa = o->getAttrOfType<StringAttr>("name")) varName = sa.getValue().str();
  if (varName.empty()) {
    for (NamedAttribute an : o->getAttrs()) {
      if (auto aa = llvm::dyn_cast<ArrayAttr>(an.getValue())) {
        if (!aa.getValue().empty()) if (auto sa = llvm::dyn_cast<StringAttr>(aa.getValue()[0])) { varName = sa.getValue().str(); break; }
      }
    }
  }
  if (varName.empty()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_ALLOCA_NO_NAME << "\n";
      return false;
    }
    // In best-effort mode, also annotate the generated C with the error.
    out << "  // " << ERR_ALLOCA_NO_NAME << "\n";
    varName = m.freshName("a");
  }

  std::string ctype = "int";
  if (o->getNumResults() > 0) {
    Type t = o->getResult(0).getType();
    ctype = m.mapTypeToC(t);
  }
  out << "  " << ctype << " " << varName << ";\n";
  for (Value res : o->getResults()) m.setName(res, varName);
  return true;
}

bool handleConst(cir::ConstantOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  std::optional<int64_t> litVal;
  // Try to find an integer literal. CIR uses its own IntAttr (#cir.int<...>),
  // so check both MLIR IntegerAttr and CIR IntAttr.
  for (NamedAttribute a : o->getAttrs()) {
    if (auto ia = llvm::dyn_cast<mlir::IntegerAttr>(a.getValue())) {
      litVal = ia.getValue().getSExtValue();
      break;
    }
    if (auto cia = llvm::dyn_cast<cir::IntAttr>(a.getValue())) {
      // cir::IntAttr wraps an APInt
      litVal = static_cast<int64_t>(cia.getValue().getSExtValue());
      break;
    }
  }
  if (!litVal.has_value()) {
    if (!m.isBestEffort()) {
      llvm::errs() << ERR_CONSTANT_NO_LITERAL << "\n";
      return false;
    }
    out << "  // " << ERR_CONSTANT_NO_LITERAL << "\n";
  }
  // Choose a C type based on the op result type if available.
  std::string tmp = m.freshName("c");
  std::string literal = litVal.has_value() ? std::to_string(litVal.value()) : std::string("0");
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
  out << "  int " << tmp << " = " << src << ";\n";
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
  out << "  " << pname << " = " << vname << ";\n";
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
  // CIR encodes the comparison kind as a CmpOpKindAttr named "kind".
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
  out << "  int " << tmp << " = (" << l << " " << pred << " " << r << ") ? 1 : 0;\n";
  if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
  return true;
}

bool handleBr(cir::BrOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (!o->getSuccessors().empty()) {
    mlir::Block *succ = o->getSuccessors()[0];
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
  std::string args;
  for (unsigned i = 0; i < o->getNumOperands(); ++i) {
    if (i) args += ", ";
    args += m.getOrCreateName(o->getOperand(i));
  }
  if (o->getNumResults() > 0) {
    std::string tmp = m.freshName("r");
    out << "  int " << tmp << " = " << callee << "(" << args << ");\n";
    m.setName(o->getResult(0), tmp);
  } else {
    out << "  " << callee << "(" << args << ");\n";
  }
  return true;
}

bool handleReturn(cir::ReturnOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() == 0) { out << "  return;\n"; return true; }
  std::string rv = m.getOrCreateName(o->getOperand(0));
  out << "  return " << rv << ";\n";
  return true;
}

} // namespace

void registerBuiltinHandlers(Mapper &m) {
  m.registerTypedHandler<cir::AllocaOp>("cir.alloca", handleAlloca);
  m.registerTypedHandler<cir::ConstantOp>("cir.const", handleConst);
  m.registerTypedHandler<cir::LoadOp>("cir.load", handleLoad);
  m.registerTypedHandler<cir::StoreOp>("cir.store", handleStore);
  m.registerTypedHandler<cir::CmpOp>("cir.cmp", handleCmp);
  m.registerTypedHandler<cir::BrOp>("cir.br", handleBr);
  m.registerTypedHandler<cir::BrCondOp>("cir.brcond", handleBrCond);
  m.registerTypedHandler<cir::CallOp>("cir.call", handleCall);
  m.registerTypedHandler<cir::ReturnOp>("cir.return", handleReturn);
}

} // namespace xcfa

