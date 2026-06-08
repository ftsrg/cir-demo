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

#include "handlers/HandlerModule.h"
#include "handlers/HandlerSupport.h"
#include "Mapper.h"
#include "ErrorMessages.h"

#include <mlir/IR/Operation.h>
#include <llvm/Support/Casting.h>
#include <llvm/Support/raw_ostream.h>
#include <clang/CIR/Dialect/IR/CIRDialect.h>
#include <clang/CIR/Dialect/IR/CIROpsAttributes.h.inc>

#include <string>

using namespace mlir;

namespace cir2c {

/// Handlers for arithmetic, comparison, logic, unary, shift, and overflow ops.
class ArithmeticHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
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
    // TODO: remove when cir.binop.overflow is no longer emitted by the compiler
    m.registerHandler("cir.binop.overflow", std::make_unique<LambdaOpHandler>(handleBinOpOverflow));
    m.registerTypedHandler<cir::AddOverflowOp>(handleAddOverflow);
    m.registerTypedHandler<cir::SubOverflowOp>(handleSubOverflow);
    m.registerTypedHandler<cir::MulOverflowOp>(handleMulOverflow);

    // Floating-point arithmetic (separated from integer ops upstream)
    m.registerTypedHandler<cir::FAddOp>(handleFAdd);
    m.registerTypedHandler<cir::FSubOp>(handleFSub);
    m.registerTypedHandler<cir::FMulOp>(handleFMul);
    m.registerTypedHandler<cir::FDivOp>(handleFDiv);
    m.registerTypedHandler<cir::FRemOp>(handleFRem);
    m.registerTypedHandler<cir::FNegOp>(handleFNeg);
  }

private:
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

  static std::string getOverflowBuiltinName(Operation *o) {
    if (llvm::isa<cir::AddOverflowOp>(o)) return "add";
    if (llvm::isa<cir::SubOverflowOp>(o)) return "sub";
    if (llvm::isa<cir::MulOverflowOp>(o)) return "mul";

    // TODO: remove fallback when cir.binop.overflow is no longer emitted by the compiler
    if (o->getName().getStringRef() != "cir.binop.overflow") return std::string();

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

  static bool handleCmp(cir::CmpOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 2) return false;
    Value lhs = o->getOperand(0);
    Value rhs = o->getOperand(1);
    std::string l = pointerOperandExpr(lhs, m);
    std::string r = pointerOperandExpr(rhs, m);
    std::string pred;
    std::string fullExpr;  // set for predicates that aren't a simple binary op
    bool predFound = false;

    if (auto kindAttr = o->getAttrOfType<cir::CmpOpKindAttr>("kind")) {
      switch (kindAttr.getValue()) {
        case cir::CmpOpKind::lt: pred = "<"; predFound = true; break;
        case cir::CmpOpKind::le: pred = "<="; predFound = true; break;
        case cir::CmpOpKind::gt: pred = ">"; predFound = true; break;
        case cir::CmpOpKind::ge: pred = ">="; predFound = true; break;
        case cir::CmpOpKind::eq: pred = "=="; predFound = true; break;
        case cir::CmpOpKind::ne: pred = "!="; predFound = true; break;
        // Floating-point ordered/unordered predicates:
        //   uno = unordered: true iff either operand is NaN.
        //   one = ordered and not equal: false if either is NaN.
        // C's relational operators are already false for unordered operands, so
        // `(a<b)||(a>b)` is exactly the ordered-not-equal test.
        case cir::CmpOpKind::uno:
          fullExpr = "__builtin_isunordered(" + l + ", " + r + ")";
          predFound = true; break;
        case cir::CmpOpKind::one:
          fullExpr = "((" + l + ") < (" + r + ") || (" + l + ") > (" + r + "))";
          predFound = true; break;
      }
    }

    if (!predFound) {
      out << "  // " << ERR_CMP_NO_PRED << "\n";
      pred = "==";
    }
    if (fullExpr.empty())
      fullExpr = "(" + l + " " + pred + " " + r + ")";

    std::string tmp = m.freshName("c");
    std::string ctype = "int";
    if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
    out << "  " << ctype << " " << tmp << " = (" << fullExpr << ") ? 1 : 0;\n";
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }

  static bool handleAdd(cir::AddOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "+"); }
  static bool handleSub(cir::SubOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "-"); }
  static bool handleMul(cir::MulOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "*"); }
  static bool handleDiv(cir::DivOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "/"); }
  static bool handleRem(cir::RemOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "%"); }
  static bool handleAnd(cir::AndOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "&"); }
  static bool handleOr(cir::OrOp  op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "|"); }
  static bool handleXor(cir::XorOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "^"); }

  static bool handleBinOpOverflow(Operation *o, Mapper &m, std::ostream &out) {
    if (o->getNumOperands() < 2 || o->getNumResults() < 2) return false;

    std::string builtinName = getOverflowBuiltinName(o);
    if (builtinName.empty()) {
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

  // Typed wrappers for overflow ops so they can be registered via registerTypedHandler.
  static bool handleAddOverflow(cir::AddOverflowOp op, Mapper &m, std::ostream &out) {
    return handleBinOpOverflow(op.getOperation(), m, out);
  }
  static bool handleSubOverflow(cir::SubOverflowOp op, Mapper &m, std::ostream &out) {
    return handleBinOpOverflow(op.getOperation(), m, out);
  }
  static bool handleMulOverflow(cir::MulOverflowOp op, Mapper &m, std::ostream &out) {
    return handleBinOpOverflow(op.getOperation(), m, out);
  }

  // cir.inc/dec are pure SSA ops: they produce a new value without mutating
  // their operand. Do NOT use ++/-- (which would mutate the C variable that
  // represents the SSA operand and break later uses of that operand).
  static bool handleInc(cir::IncOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    Value operand = o->getOperand(0);
    std::string opnd = m.getOrCreateName(operand);
    std::string tmp = m.freshName("u");
    std::string ctype = o->getNumResults() > 0 ? m.mapTypeToC(o->getResult(0).getType()) : "int";
    out << "  " << ctype << " " << tmp << " = " << opnd << " + 1;\n";
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }
  static bool handleDec(cir::DecOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    Value operand = o->getOperand(0);
    std::string opnd = m.getOrCreateName(operand);
    std::string tmp = m.freshName("u");
    std::string ctype = o->getNumResults() > 0 ? m.mapTypeToC(o->getResult(0).getType()) : "int";
    out << "  " << ctype << " " << tmp << " = " << opnd << " - 1;\n";
    if (o->getNumResults() > 0) m.setName(o->getResult(0), tmp);
    return true;
  }
  static bool handleMinus(cir::MinusOp op, Mapper &m, std::ostream &out) { return handleUnaryOpImpl(op.getOperation(), m, out, "-"); }

  static bool handleNot(cir::NotOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1) return false;
    Value operand = o->getOperand(0);
    // CIR 'not' represents logical not for !cir.bool, bitwise complement otherwise.
    const char *opStr = mlir::isa<cir::BoolType>(operand.getType()) ? "!" : "~";
    return handleUnaryOpImpl(o, m, out, opStr);
  }

  static bool handleShiftOp(cir::ShiftOp op, Mapper &m, std::ostream &out) {
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

  // Floating-point binary arithmetic ops map to the same C operators as their
  // integer counterparts; frem maps to __builtin_fmod (with f/l suffix).
  static bool handleFAdd(cir::FAddOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "+"); }
  static bool handleFSub(cir::FSubOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "-"); }
  static bool handleFMul(cir::FMulOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "*"); }
  static bool handleFDiv(cir::FDivOp op, Mapper &m, std::ostream &out) { return handleBinaryOpImpl(op.getOperation(), m, out, "/"); }

  // cir.frem is IEEE-754 remainder with truncation semantics, equivalent to fmod.
  static bool handleFRem(cir::FRemOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 2 || o->getNumResults() < 1) return false;
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string fname = std::string("__builtin_fmod");
    if (ctype == "float")            fname += "f";
    else if (ctype == "long double") fname += "l";
    std::string lhs = m.getOrCreateName(o->getOperand(0));
    std::string rhs = m.getOrCreateName(o->getOperand(1));
    std::string tmp = m.freshName("frem");
    out << "  " << ctype << " " << tmp << " = " << fname << "(" << lhs << ", " << rhs << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  static bool handleFNeg(cir::FNegOp op, Mapper &m, std::ostream &out) { return handleUnaryOpImpl(op.getOperation(), m, out, "-"); }
};

REGISTER_HANDLER_MODULE(ArithmeticHandlers)

} // namespace cir2c
