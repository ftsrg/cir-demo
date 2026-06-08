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

/// Handlers for C99 _Complex numbers (cir.complex.*), mapped to C99 _Complex
/// using the __real__/__imag__ GNU lvalue operators and native C99 arithmetic.
class ComplexHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Complex numbers (C99 _Complex)
    m.registerTypedHandler<cir::ComplexCreateOp>(handleComplexCreate);
    m.registerTypedHandler<cir::ComplexRealOp>(handleComplexReal);
    m.registerTypedHandler<cir::ComplexImagOp>(handleComplexImag);
    m.registerTypedHandler<cir::ComplexRealPtrOp>(handleComplexRealPtr);
    m.registerTypedHandler<cir::ComplexImagPtrOp>(handleComplexImagPtr);
    m.registerTypedHandler<cir::ComplexAddOp>(handleComplexAdd);
    m.registerTypedHandler<cir::ComplexSubOp>(handleComplexSub);
    m.registerTypedHandler<cir::ComplexMulOp>(handleComplexMul);
    m.registerTypedHandler<cir::ComplexDivOp>(handleComplexDiv);
  }

private:
  // cir.complex.create %re, %im : build a complex value from its real and
  // imaginary parts. Assign the components through the __real__/__imag__
  // lvalue operators: unlike __builtin_complex (floating-point only) this also
  // works for integer _Complex (a GNU extension that clang emits), and needs no
  // <complex.h>.
  static bool handleComplexCreate(cir::ComplexCreateOp op, Mapper &m, std::ostream &out) {
    mlir::Value res = op.getOperation()->getResult(0);
    std::string ctype = m.mapTypeToC(res.getType());
    std::string re = m.getOrCreateName(op.getReal());
    std::string im = m.getOrCreateName(op.getImag());
    std::string nm = m.freshName("cplx");
    out << "  " << ctype << " " << nm << ";\n";
    out << "  __real__ " << nm << " = " << re << ";\n";
    out << "  __imag__ " << nm << " = " << im << ";\n";
    m.setName(res, nm);
    return true;
  }

  // cir.complex.real / cir.complex.imag : extract a component using the
  // __real__ / __imag__ operators (no header required).
  static bool emitComplexComponent(mlir::Operation *o, Mapper &m, std::ostream &out,
                                   const char *unaryOp, const char *prefix) {
    mlir::Value res = o->getResult(0);
    std::string ctype = m.mapTypeToC(res.getType());
    std::string operand = m.getOrCreateName(o->getOperand(0));
    std::string nm = m.freshName(prefix);
    out << "  " << ctype << " " << nm << " = " << unaryOp << " " << operand << ";\n";
    m.setName(res, nm);
    return true;
  }
  static bool handleComplexReal(cir::ComplexRealOp op, Mapper &m, std::ostream &out) {
    return emitComplexComponent(op.getOperation(), m, out, "__real__", "creal");
  }
  static bool handleComplexImag(cir::ComplexImagOp op, Mapper &m, std::ostream &out) {
    return emitComplexComponent(op.getOperation(), m, out, "__imag__", "cimag");
  }

  // cir.complex.real_ptr / cir.complex.imag_ptr : address of a component of a
  // complex lvalue. &(__real__ lvalue) yields the pointer.
  static bool emitComplexComponentPtr(mlir::Operation *o, Mapper &m, std::ostream &out,
                                      const char *unaryOp, const char *prefix) {
    mlir::Value res = o->getResult(0);
    mlir::Value operand = o->getOperand(0);
    std::string ctype = m.mapTypeToC(res.getType());
    std::string oname = m.getOrCreateName(operand);
    std::string lval = m.isDirectAccess(operand) ? oname : ("*" + oname);
    std::string nm = m.freshName(prefix);
    out << "  " << ctype << " " << nm << " = &(" << unaryOp << " (" << lval << "));\n";
    m.setName(res, nm);
    return true;
  }
  static bool handleComplexRealPtr(cir::ComplexRealPtrOp op, Mapper &m, std::ostream &out) {
    return emitComplexComponentPtr(op.getOperation(), m, out, "__real__", "crealp");
  }
  static bool handleComplexImagPtr(cir::ComplexImagPtrOp op, Mapper &m, std::ostream &out) {
    return emitComplexComponentPtr(op.getOperation(), m, out, "__imag__", "cimagp");
  }

  // cir.complex.{add,sub,mul,div} : C99 _Complex supports these operators
  // directly.
  static bool emitComplexBinop(mlir::Operation *o, Mapper &m, std::ostream &out,
                               const char *binOp) {
    mlir::Value res = o->getResult(0);
    std::string ctype = m.mapTypeToC(res.getType());
    std::string l = m.getOrCreateName(o->getOperand(0));
    std::string r = m.getOrCreateName(o->getOperand(1));
    std::string nm = m.freshName("cplx");
    out << "  " << ctype << " " << nm << " = " << l << " " << binOp << " " << r << ";\n";
    m.setName(res, nm);
    return true;
  }
  static bool handleComplexAdd(cir::ComplexAddOp op, Mapper &m, std::ostream &out) {
    return emitComplexBinop(op.getOperation(), m, out, "+");
  }
  static bool handleComplexSub(cir::ComplexSubOp op, Mapper &m, std::ostream &out) {
    return emitComplexBinop(op.getOperation(), m, out, "-");
  }
  static bool handleComplexMul(cir::ComplexMulOp op, Mapper &m, std::ostream &out) {
    return emitComplexBinop(op.getOperation(), m, out, "*");
  }
  static bool handleComplexDiv(cir::ComplexDivOp op, Mapper &m, std::ostream &out) {
    return emitComplexBinop(op.getOperation(), m, out, "/");
  }
};

REGISTER_HANDLER_MODULE(ComplexHandlers)

} // namespace cir2c
