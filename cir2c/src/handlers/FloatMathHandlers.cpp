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

#include <mlir/IR/Operation.h>
#include <llvm/Support/Casting.h>
#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <string>

using namespace mlir;

namespace cir2c {

/// Handlers for floating-point math intrinsics (cir.sqrt, cir.sin, cir.pow, ...),
/// mapped to the matching libc <math.h> function with the correct f/l suffix.
class FloatMathHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Unary FP->FP
    m.registerTypedHandler<cir::SqrtOp>(handleSqrt);
    m.registerTypedHandler<cir::ACosOp>(handleACos);
    m.registerTypedHandler<cir::ASinOp>(handleASin);
    m.registerTypedHandler<cir::ATanOp>(handleATan);
    m.registerTypedHandler<cir::CeilOp>(handleCeil);
    m.registerTypedHandler<cir::CosOp>(handleCos);
    m.registerTypedHandler<cir::ExpOp>(handleExp);
    m.registerTypedHandler<cir::Exp2Op>(handleExp2);
    m.registerTypedHandler<cir::LogOp>(handleLog);
    m.registerTypedHandler<cir::Log10Op>(handleLog10);
    m.registerTypedHandler<cir::Log2Op>(handleLog2);
    m.registerTypedHandler<cir::NearbyintOp>(handleNearbyint);
    m.registerTypedHandler<cir::RintOp>(handleRint);
    m.registerTypedHandler<cir::RoundOp>(handleRound);
    m.registerTypedHandler<cir::RoundEvenOp>(handleRoundEven);
    m.registerTypedHandler<cir::SinOp>(handleSin);
    m.registerTypedHandler<cir::TanOp>(handleTan);
    m.registerTypedHandler<cir::TruncOp>(handleFTrunc);
    m.registerTypedHandler<cir::FAbsOp>(handleFAbs);
    m.registerTypedHandler<cir::FloorOp>(handleFloor);
    // Unary FP->Int
    m.registerTypedHandler<cir::LroundOp>(handleLround);
    m.registerTypedHandler<cir::LlroundOp>(handleLlround);
    m.registerTypedHandler<cir::LrintOp>(handleLrint);
    m.registerTypedHandler<cir::LlrintOp>(handleLlrint);
    // Binary FP->FP
    m.registerTypedHandler<cir::CopysignOp>(handleCopysign);
    m.registerTypedHandler<cir::FMaxNumOp>(handleFMaxNum);
    m.registerTypedHandler<cir::FMaximumOp>(handleFMaximum);
    m.registerTypedHandler<cir::FMinNumOp>(handleFMinNum);
    m.registerTypedHandler<cir::FMinimumOp>(handleFMinimum);
    m.registerTypedHandler<cir::FModOp>(handleFMod);
    m.registerTypedHandler<cir::PowOp>(handlePow);
    m.registerTypedHandler<cir::ATan2Op>(handleATan2);
  }

private:
  // Choose the correct C math function name by appending a suffix for
  // float ("f") or long double ("l") variants.
  static std::string fpMathFuncName(const char *base, const std::string &ctype) {
    // Use the __builtin_ form so the generated C needs no <math.h>: clang/gcc
    // recognise __builtin_fabs/__builtin_copysignf/etc. with correct semantics
    // and no implicit-declaration error. These ops come from CIR math intrinsics
    // for which clang emits no function declaration (so no extern is generated).
    std::string name = std::string("__builtin_") + base;
    if (ctype == "float")            name += "f";
    else if (ctype == "long double") name += "l";
    return name;
  }

  // Unary floating-point op: result type = operand type (FP->FP).
  static bool handleUnaryFPOp(const char *base, Operation *o, Mapper &m, std::ostream &out) {
    if (o->getNumOperands() < 1 || o->getNumResults() < 1) return false;
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string fname = fpMathFuncName(base, ctype);
    std::string opnd  = m.getOrCreateName(o->getOperand(0));
    std::string tmp   = m.freshName(base);
    out << "  " << ctype << " " << tmp << " = " << fname << "(" << opnd << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // Unary FP->Int op: result is an integer, function suffix determined by the
  // float input type (e.g., lroundf for float input, lround for double).
  static bool handleFPToIntOp(const char *base, Operation *o, Mapper &m, std::ostream &out) {
    if (o->getNumOperands() < 1 || o->getNumResults() < 1) return false;
    std::string inCtype = m.mapTypeToC(o->getOperand(0).getType());
    std::string fname   = fpMathFuncName(base, inCtype);
    std::string opnd    = m.getOrCreateName(o->getOperand(0));
    std::string ctype   = m.mapTypeToC(o->getResult(0).getType());
    std::string tmp     = m.freshName(base);
    out << "  " << ctype << " " << tmp << " = " << fname << "(" << opnd << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // Binary FP->FP op.
  static bool handleBinaryFPOp(const char *base, Operation *o, Mapper &m, std::ostream &out) {
    if (o->getNumOperands() < 2 || o->getNumResults() < 1) return false;
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string fname = fpMathFuncName(base, ctype);
    std::string lhs   = m.getOrCreateName(o->getOperand(0));
    std::string rhs   = m.getOrCreateName(o->getOperand(1));
    std::string tmp   = m.freshName(base);
    out << "  " << ctype << " " << tmp << " = " << fname << "(" << lhs << ", " << rhs << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // ---- Unary FP->FP handlers ----
  static bool handleSqrt(cir::SqrtOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("sqrt",      op.getOperation(), m, out); }
  static bool handleACos(cir::ACosOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("acos",      op.getOperation(), m, out); }
  static bool handleASin(cir::ASinOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("asin",      op.getOperation(), m, out); }
  static bool handleATan(cir::ATanOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("atan",      op.getOperation(), m, out); }
  static bool handleCeil(cir::CeilOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("ceil",      op.getOperation(), m, out); }
  static bool handleCos(cir::CosOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("cos",       op.getOperation(), m, out); }
  static bool handleExp(cir::ExpOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("exp",       op.getOperation(), m, out); }
  static bool handleExp2(cir::Exp2Op op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("exp2",      op.getOperation(), m, out); }
  static bool handleLog(cir::LogOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("log",       op.getOperation(), m, out); }
  static bool handleLog10(cir::Log10Op op, Mapper &m, std::ostream &out)         { return handleUnaryFPOp("log10",     op.getOperation(), m, out); }
  static bool handleLog2(cir::Log2Op op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("log2",      op.getOperation(), m, out); }
  static bool handleNearbyint(cir::NearbyintOp op, Mapper &m, std::ostream &out) { return handleUnaryFPOp("nearbyint", op.getOperation(), m, out); }
  static bool handleRint(cir::RintOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("rint",      op.getOperation(), m, out); }
  static bool handleRound(cir::RoundOp op, Mapper &m, std::ostream &out)         { return handleUnaryFPOp("round",     op.getOperation(), m, out); }
  static bool handleRoundEven(cir::RoundEvenOp op, Mapper &m, std::ostream &out) { return handleUnaryFPOp("nearbyint", op.getOperation(), m, out); }
  static bool handleSin(cir::SinOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("sin",       op.getOperation(), m, out); }
  static bool handleTan(cir::TanOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("tan",       op.getOperation(), m, out); }
  static bool handleFTrunc(cir::TruncOp op, Mapper &m, std::ostream &out)        { return handleUnaryFPOp("trunc",     op.getOperation(), m, out); }
  static bool handleFAbs(cir::FAbsOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("fabs",      op.getOperation(), m, out); }
  static bool handleFloor(cir::FloorOp op, Mapper &m, std::ostream &out)         { return handleUnaryFPOp("floor",     op.getOperation(), m, out); }

  // ---- Unary FP->Int handlers ----
  static bool handleLround(cir::LroundOp op, Mapper &m, std::ostream &out)       { return handleFPToIntOp("lround",    op.getOperation(), m, out); }
  static bool handleLlround(cir::LlroundOp op, Mapper &m, std::ostream &out)     { return handleFPToIntOp("llround",   op.getOperation(), m, out); }
  static bool handleLrint(cir::LrintOp op, Mapper &m, std::ostream &out)         { return handleFPToIntOp("lrint",     op.getOperation(), m, out); }
  static bool handleLlrint(cir::LlrintOp op, Mapper &m, std::ostream &out)       { return handleFPToIntOp("llrint",    op.getOperation(), m, out); }

  // ---- Binary FP->FP handlers ----
  static bool handleCopysign(cir::CopysignOp op, Mapper &m, std::ostream &out)   { return handleBinaryFPOp("copysign", op.getOperation(), m, out); }
  static bool handleFMaxNum(cir::FMaxNumOp op, Mapper &m, std::ostream &out)     { return handleBinaryFPOp("fmax",     op.getOperation(), m, out); }
  static bool handleFMaximum(cir::FMaximumOp op, Mapper &m, std::ostream &out)   { return handleBinaryFPOp("fmax",     op.getOperation(), m, out); }
  static bool handleFMinNum(cir::FMinNumOp op, Mapper &m, std::ostream &out)     { return handleBinaryFPOp("fmin",     op.getOperation(), m, out); }
  static bool handleFMinimum(cir::FMinimumOp op, Mapper &m, std::ostream &out)   { return handleBinaryFPOp("fmin",     op.getOperation(), m, out); }
  static bool handleFMod(cir::FModOp op, Mapper &m, std::ostream &out)           { return handleBinaryFPOp("fmod",     op.getOperation(), m, out); }
  static bool handlePow(cir::PowOp op, Mapper &m, std::ostream &out)             { return handleBinaryFPOp("pow",      op.getOperation(), m, out); }
  static bool handleATan2(cir::ATan2Op op, Mapper &m, std::ostream &out)         { return handleBinaryFPOp("atan2",    op.getOperation(), m, out); }
};

REGISTER_HANDLER_MODULE(FloatMathHandlers)

} // namespace cir2c
