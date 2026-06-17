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

/// Handlers for built-in and intrinsic operations: bit-counting, stack-frame
/// address builtins, libc memory helpers, and compile-time constant probes.
class BuiltinHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Bit-counting
    m.registerTypedHandler<cir::BitClzOp>(handleClz);
    m.registerTypedHandler<cir::BitCtzOp>(handleCtz);
    m.registerTypedHandler<cir::BitFfsOp>(handleFfs);
    m.registerTypedHandler<cir::BitPopcountOp>(handlePopcount);
    m.registerTypedHandler<cir::AbsOp>(handleAbs);
    m.registerTypedHandler<cir::ByteSwapOp>(handleByteSwap);
    m.registerTypedHandler<cir::BitReverseOp>(handleBitReverse);
    m.registerTypedHandler<cir::SignBitOp>(handleSignBit);
    m.registerTypedHandler<cir::BitClrsbOp>(handleClrsb);
    m.registerTypedHandler<cir::BitParityOp>(handleParity);
    // Address-of-stack-frame builtins
    m.registerTypedHandler<cir::ReturnAddrOp>(handleReturnAddr);
    m.registerTypedHandler<cir::FrameAddrOp>(handleFrameAddr);
    // libc
    m.registerTypedHandler<cir::MemChrOp>(handleMemChr);
    // libc intrinsics
    m.registerTypedHandler<cir::MemSetOp>(handleMemSet);
    // Compile-time constant probe
    m.registerTypedHandler<cir::IsConstantOp>(handleIsConstant);
  }

private:
  // Helper: bit width of a CIR integer value (defaults to 32).
  static unsigned intWidthOf(mlir::Value v, unsigned dflt = 32) {
    if (auto it = mlir::dyn_cast<cir::IntType>(v.getType())) return it.getWidth();
    return dflt;
  }

  // Extract a compile-time constant level operand (for return/frame address).
  // __builtin_return_address/__builtin_frame_address require a literal argument,
  // so the level must fold to a constant; otherwise we cannot map soundly.
  static bool constantLevel(mlir::Value v, int64_t &out) {
    if (auto c = v.getDefiningOp<cir::ConstantOp>()) {
      if (auto ia = mlir::dyn_cast<cir::IntAttr>(c.getValue())) {
        out = ia.getValue().getSExtValue();
        return true;
      }
    }
    return false;
  }

  // Bit-counting handler: cir.clz
  static bool handleClz(cir::BitClzOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1 || o->getNumResults() < 1) return false;
    Value v = o->getOperand(0);
    std::string opnd = m.getOrCreateName(v);
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string tmp = m.freshName("clz");

    unsigned width = 32;
    if (auto intTy = mlir::dyn_cast<cir::IntType>(v.getType()))
      width = intTy.getWidth();

    // The CIR spec restricts the input width to 16, 32, or 64. Pick the matching
    // GCC builtin; for 16-bit, promote to 32-bit and subtract the extra 16 bits.
    std::string builtin;
    if (width == 64)
      builtin = "__builtin_clzll((unsigned long)" + opnd + ")";
    else if (width == 16)
      builtin = "(__builtin_clz((unsigned int)(unsigned short)" + opnd + ") - 16)";
    else
      builtin = "__builtin_clz((unsigned int)" + opnd + ")";

    // Without poison_zero the input of 0 must not invoke undefined behaviour;
    // return the full width in that case.
    std::string expr;
    if (op.getPoisonZero()) {
      expr = "(" + ctype + ")" + builtin;
    } else {
      expr = "(" + ctype + ")((" + opnd + ") == 0 ? " + std::to_string(width)
           + " : " + builtin + ")";
    }

    out << "  " << ctype << " " << tmp << " = " << expr << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.abs: integer absolute value. Emitted as a conditional so it needs no
  // header. The operand is already a temporary, so evaluating it twice is safe.
  static bool handleAbs(cir::AbsOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getSrc());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string tmp = m.freshName("absv");
    out << "  " << ctype << " " << tmp << " = ((" << opnd << ") < 0) ? -("
        << opnd << ") : (" << opnd << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.byte_swap -> __builtin_bswapN (no header required).
  static bool handleByteSwap(cir::ByteSwapOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    unsigned w = intWidthOf(op.getInput());
    std::string b;
    if (w == 64)      b = "__builtin_bswap64((unsigned long)" + opnd + ")";
    else if (w == 16) b = "__builtin_bswap16((unsigned short)" + opnd + ")";
    else              b = "__builtin_bswap32((unsigned int)" + opnd + ")";
    std::string tmp = m.freshName("bswap");
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << b << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.bitreverse -> __builtin_bitreverseN (no header required).
  static bool handleBitReverse(cir::BitReverseOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    unsigned w = intWidthOf(op.getInput());
    const char *suffix = w == 64 ? "64" : w == 16 ? "16" : w == 8 ? "8" : "32";
    const char *cast = w == 64 ? "(unsigned long)" : w == 16 ? "(unsigned short)"
                     : w == 8 ? "(unsigned char)" : "(unsigned int)";
    std::string tmp = m.freshName("brev");
    out << "  " << ctype << " " << tmp << " = (" << ctype
        << ")__builtin_bitreverse" << suffix << "(" << cast << opnd << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.ctz: count trailing zeros -> __builtin_ctz. Mirrors handleClz: when the
  // input may be zero and poison_zero is not set, a zero input yields the width.
  static bool handleCtz(cir::BitCtzOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    unsigned w = intWidthOf(op.getInput());
    std::string b = (w == 64) ? "__builtin_ctzll((unsigned long)" + opnd + ")"
                              : "__builtin_ctz((unsigned int)" + opnd + ")";
    std::string expr = op.getPoisonZero()
        ? "(" + ctype + ")" + b
        : "(" + ctype + ")((" + opnd + ") == 0 ? " + std::to_string(w) + " : " + b + ")";
    std::string tmp = m.freshName("ctz");
    out << "  " << ctype << " " << tmp << " = " << expr << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.ffs: find first set bit (1-based, 0 if input is zero) -> __builtin_ffs.
  static bool handleFfs(cir::BitFfsOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    unsigned w = intWidthOf(op.getInput());
    std::string b = (w == 64) ? "__builtin_ffsll((long long)" + opnd + ")"
                              : "__builtin_ffs((int)" + opnd + ")";
    std::string tmp = m.freshName("ffs");
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << b << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.popcount -> __builtin_popcount.
  static bool handlePopcount(cir::BitPopcountOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    unsigned w = intWidthOf(op.getInput());
    std::string b = (w == 64) ? "__builtin_popcountll((unsigned long)" + opnd + ")"
                              : "__builtin_popcount((unsigned int)" + opnd + ")";
    std::string tmp = m.freshName("popcnt");
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << b << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.signbit -> __builtin_signbit (nonzero when the value is negative).
  static bool handleSignBit(cir::SignBitOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string tmp = m.freshName("signbit");
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")__builtin_signbit("
        << opnd << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.parity -> __builtin_parity (1 if the number of set bits is odd).
  static bool handleParity(cir::BitParityOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    unsigned w = intWidthOf(op.getInput());
    std::string b = (w == 64) ? "__builtin_parityll((unsigned long)" + opnd + ")"
                              : "__builtin_parity((unsigned int)" + opnd + ")";
    std::string tmp = m.freshName("parity");
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << b << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.clrsb: count leading redundant sign bits -> __builtin_clrsb. For a 16-bit
  // input we sign-extend to int and subtract the 16 extra leading sign bits, the
  // mirror of handleClz's 16-bit promotion.
  static bool handleClrsb(cir::BitClrsbOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    std::string opnd = m.getOrCreateName(op.getInput());
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    unsigned w = intWidthOf(op.getInput());
    std::string b;
    if (w == 64)      b = "__builtin_clrsbll((long long)" + opnd + ")";
    else if (w == 16) b = "(__builtin_clrsb((int)(short)" + opnd + ") - 16)";
    else              b = "__builtin_clrsb((int)" + opnd + ")";
    std::string tmp = m.freshName("clrsb");
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << b << ";\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.return_address -> __builtin_return_address(level). Level must be constant.
  static bool handleReturnAddr(cir::ReturnAddrOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    int64_t lvl;
    if (!constantLevel(op.getLevel(), lvl)) return false;
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string tmp = m.freshName("retaddr");
    out << "  " << ctype << " " << tmp << " = (" << ctype
        << ")__builtin_return_address(" << lvl << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.frame_address -> __builtin_frame_address(level). Level must be constant.
  static bool handleFrameAddr(cir::FrameAddrOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumResults() < 1) return false;
    int64_t lvl;
    if (!constantLevel(op.getLevel(), lvl)) return false;
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string tmp = m.freshName("frameaddr");
    out << "  " << ctype << " " << tmp << " = (" << ctype
        << ")__builtin_frame_address(" << lvl << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.libc.memchr lowers 1:1 to C's memchr(src, pattern, len).
  static bool handleMemChr(cir::MemChrOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 3 || o->getNumResults() < 1) return false;
    std::string src = m.getOrCreateName(o->getOperand(0));
    std::string pat = m.getOrCreateName(o->getOperand(1));
    std::string len = m.getOrCreateName(o->getOperand(2));
    std::string ctype = m.mapTypeToC(o->getResult(0).getType());
    std::string tmp = m.freshName("memchr");
    // Emit the libc name with a forward declaration, not `__builtin_memchr`:
    // SV-COMP verifiers model `memchr` but treat the builtin as an unknown.
    m.ensureMemchrDeclared();
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")memchr("
        << src << ", " << pat << ", " << len << ");\n";
    m.setName(o->getResult(0), tmp);
    return true;
  }

  // cir.libc.memset(dst, val, len) -> memset, declared via ensureMemsetDeclared
  // (libc name, not `__builtin_memset`, so SV-COMP verifiers model it).
  static bool handleMemSet(cir::MemSetOp op, Mapper &m, std::ostream &out) {
    std::string dst = m.getOrCreateName(op.getDst());
    std::string val = m.getOrCreateName(op.getVal());
    std::string len = m.getOrCreateName(op.getLen());
    m.ensureMemsetDeclared();
    out << "  memset(" << dst << ", (int)" << val
        << ", (unsigned long)" << len << ");\n";
    return true;
  }

  // `__builtin_constant_p` returns 1 only for manifest constants, and any code
  // guarded by it must produce the same result on the runtime branch.  Returning
  // 0 is therefore always semantically safe and avoids relying on the host
  // compiler's notion of "manifest constant" matching CIR's.
  static bool handleIsConstant(cir::IsConstantOp op, Mapper &m, std::ostream &out) {
    if (op->getNumResults() < 1) return false;
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    std::string tmp = m.freshName("isconst");
    out << "  " << ctype << " " << tmp << " = 0;\n";
    m.setName(op->getResult(0), tmp);
    return true;
  }
};

REGISTER_HANDLER_MODULE(BuiltinHandlers)

} // namespace cir2c
