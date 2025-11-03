#include "Handlers.h"

#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/Support/Casting.h>

#include <llvm/ADT/StringRef.h>
#include <llvm/Support/raw_ostream.h>

using namespace mlir;

namespace xcfa {

namespace {

// Attribute helpers will be used inline; avoid a global Optional helper.

// Basic Alloca handler: declare a local variable and map the result to its name.
struct AllocaHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    // Try to infer a name from attributes (array of strings) if present.
    std::string varName;
    for (NamedAttribute an : op->getAttrs()) {
      if (auto aa = llvm::dyn_cast<ArrayAttr>(an.getValue())) {
        if (!aa.empty()) {
          if (auto sa = llvm::dyn_cast<StringAttr>(aa[0])) {
            varName = sa.getValue().str();
            break;
          }
        }
      }
    }
    if (varName.empty()) varName = m.freshName("a");

    // Choose a C type based on the result type (int32 -> int).
    std::string ctype = "int";
    if (op->getNumResults() > 0) {
      Type t = op->getResult(0).getType();
      if (auto it = llvm::dyn_cast<IntegerType>(t)) {
        if (it.getWidth() == 32) ctype = "int";
      }
    }

    out << "  " << ctype << " " << varName << ";\n";

    // Map the result value to the variable name
    for (Value res : op->getResults()) {
      m.getOrCreateName(res); // ensure a name exists
      m.setName(res, varName); // override with readable name
    }
    return true;
  }
};

// Const handler: create a temp name with a literal initializer.
struct ConstHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    std::string literal = "0";
    for (NamedAttribute a : op->getAttrs()) {
      if (auto ia = llvm::dyn_cast<IntegerAttr>(a.getValue())) {
        literal = std::to_string(ia.getValue().getSExtValue());
        break;
      }
    }

    std::string tmp = m.freshName("c");
    out << "  int " << tmp << " = " << literal << ";\n";
    if (op->getNumResults() > 0) m.setName(op->getResult(0), tmp);
    return true;
  }
};

// Load handler: create a tmp that reads the mapped variable or pointer.
struct LoadHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    if (op->getNumOperands() < 1) return false;
    Value ptr = op->getOperand(0);
    std::string src = m.getOrCreateName(ptr);
    std::string tmp = m.freshName("t");
    out << "  int " << tmp << " = " << src << ";\n";
    if (op->getNumResults() > 0) m.setName(op->getResult(0), tmp);
    return true;
  }
};

// Store handler: emit assignment to destination
struct StoreHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    if (op->getNumOperands() < 2) return false;
    Value val = op->getOperand(0);
    Value ptr = op->getOperand(1);
    std::string vname = m.getOrCreateName(val);
    std::string pname = m.getOrCreateName(ptr);
    out << "  " << pname << " = " << vname << ";\n";
    return true;
  }
};

// Cmp handler: emit a comparison into a tmp bool-int
struct CmpHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    if (op->getNumOperands() < 2) return false;
    Value lhs = op->getOperand(0);
    Value rhs = op->getOperand(1);
    std::string l = m.getOrCreateName(lhs);
    std::string r = m.getOrCreateName(rhs);

    // Try to read a predicate attribute (string) if provided
    std::string pred = "==";
    for (NamedAttribute a : op->getAttrs()) {
      if (auto sa = llvm::dyn_cast<StringAttr>(a.getValue())) {
        auto s = sa.getValue();
        if (s == "lt") pred = "<";
        else if (s == "gt") pred = ">";
        else if (s == "le") pred = "<=";
        else if (s == "ge") pred = ">=";
        else if (s == "ne") pred = "!=";
        else if (s == "eq") pred = "==";
      }
    }

    std::string tmp = m.freshName("c");
    out << "  int " << tmp << " = (" << l << " " << pred << " " << r << ") ? 1 : 0;\n";
  if (op->getNumResults() > 0) m.setName(op->getResult(0), tmp);
    return true;
  }
};

// br and brcond: emit labels and goto
struct BrHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    // Unconditional branch: use successor regions when available
    if (op->getNumOperands() < 1) return false;
    if (!op->getSuccessors().empty()) {
      mlir::Block *succ = op->getSuccessors()[0];
      std::string lbl = m.getOrCreateLabel(succ);
      out << "  goto " << lbl << ";\n";
      return true;
    }
    out << "  // br (no successor info)\n";
    return true;
  }
};

struct BrCondHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    // Expect: cond, trueBlock, falseBlock as operands/successors
    std::string cond = "0";
    if (op->getNumOperands() >= 1) cond = m.getOrCreateName(op->getOperand(0));
    std::string tlabel = "bb_true";
    std::string flabel = "bb_false";
    if (op->getNumSuccessors() >= 2) {
      tlabel = m.getOrCreateLabel(op->getSuccessors()[0]);
      flabel = m.getOrCreateLabel(op->getSuccessors()[1]);
    }
    out << "  if (" << cond << ") goto " << tlabel << "; else goto " << flabel << ";\n";
    return true;
  }
};

// Call handler: emit a function call. Map result if any.
struct CallHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    // Get callee attribute (symbol)
    std::string callee = "unknown_fn";
    if (auto sa = op->getAttrOfType<StringAttr>("callee")) callee = sa.getValue().str();
    else if (auto sa2 = op->getAttrOfType<SymbolRefAttr>("callee")) callee = sa2.getRootReference().str();

    // Build arg list from operands
    std::string args;
    for (unsigned i = 0; i < op->getNumOperands(); ++i) {
      if (i) args += ", ";
      args += m.getOrCreateName(op->getOperand(i));
    }

    if (op->getNumResults() > 0) {
      std::string tmp = m.freshName("r");
      out << "  int " << tmp << " = " << callee << "(" << args << ");\n";
        m.setName(op->getResult(0), tmp);
    } else {
      out << "  " << callee << "(" << args << ");\n";
    }
    return true;
  }
};

// Return handler
struct ReturnHandler : OpHandler {
  bool handle(Operation *op, Mapper &m, std::ostream &out) override {
    if (op->getNumOperands() == 0) {
      out << "  return;\n";
      return true;
    }
    std::string rv = m.getOrCreateName(op->getOperand(0));
    out << "  return " << rv << ";\n";
    return true;
  }
};

} // namespace

void registerBuiltinHandlers(Mapper &m) {
  m.registerHandler("cir.alloca", std::make_unique<AllocaHandler>());
  m.registerHandler("cir.const", std::make_unique<ConstHandler>());
  m.registerHandler("cir.load", std::make_unique<LoadHandler>());
  m.registerHandler("cir.store", std::make_unique<StoreHandler>());
  m.registerHandler("cir.cmp", std::make_unique<CmpHandler>());
  m.registerHandler("cir.br", std::make_unique<BrHandler>());
  m.registerHandler("cir.brcond", std::make_unique<BrCondHandler>());
  m.registerHandler("cir.call", std::make_unique<CallHandler>());
  m.registerHandler("cir.return", std::make_unique<ReturnHandler>());
}

} // namespace xcfa
