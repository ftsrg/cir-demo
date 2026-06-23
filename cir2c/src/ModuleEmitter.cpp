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

// Module-level emission methods of `Mapper` (split out of Mapper.cpp to keep
// that file small): top-level module/function/global emission, prototype
// emission, and the pre-scans + preamble.

#include "Mapper.h"
#include "ConstantEmitter.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>
#include <mlir/IR/SymbolTable.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>
#include <clang/CIR/Dialect/IR/CIROpsEnums.h>

#include <cxxabi.h>
#include <cctype>
#include <cstdlib>

#include <algorithm>
#include <map>
#include <set>
#include <sstream>
#include <vector>

#include <llvm/ADT/SmallString.h>
#include <llvm/ADT/StringRef.h>
#include <llvm/Support/raw_ostream.h>
#include "ErrorMessages.h"

using namespace mlir;

namespace cir2c {

static std::string mangleLabel(const std::string &s) {
  return Mapper::sanitizeIdentifier(s);
}

static std::string demangleSymbol(const std::string &sym) {
  // Only attempt C++ demangling for Itanium-ABI mangled names (starting with
  // "_Z").  Plain C names like "f", "fp", "i" must NOT be passed to
  // __cxa_demangle because the ABI uses single letters as type-code
  // abbreviations (e.g. "f" → "float", "i" → "int"), producing bogus output.
  // The "_R" prefix guard for Rust symbols is intentionally kept: __cxa_demangle
  // cannot demangle Rust symbols, but the guard prevents passing them through.
  if (sym.size() < 2 || sym[0] != '_' || (sym[1] != 'Z' && sym[1] != 'R')) {
    return sym;
  }
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

// Render a C parameter declaration type.
// When `name` is empty, returns a type-only parameter fragment.
//
// NOTE: Function pointer types (!cir.ptr<!cir.func<...>>) are simplified to
// `void *` here for consistency with mapTypeToC. The concrete function pointer
// type is recovered at each call site via an explicit cast in handleCallLikeOp
// so this simplification is safe for verification purposes.
static std::string mapParamTypeToC(const Mapper &m, mlir::Type t,
                                   const std::string &name = "") {
  std::string base = m.mapTypeToC(t);
  if (name.empty()) return base;
  return base + " " + name;
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

// Needed by mapFunc (same logic as in Mapper.cpp; static in each TU so no ODR
// violation — the two copies are identical).
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

void Mapper::prepareFunctionNames(mlir::ModuleOp module) {
  functionOutputNames.clear();
  // Collect candidate pairs (mangled -> demangled-sanitized).
  // Walk recursively so that nested modules (e.g. the named inner module
  // wrapping the actual translation unit) are also scanned.
  std::vector<std::pair<std::string,std::string>> list;
  module.walk([&](cir::FuncOp funcOp) {
    if (auto sym = funcOp->getAttrOfType<mlir::StringAttr>(
            mlir::SymbolTable::getSymbolAttrName())) {
      std::string mangled = sym.getValue().str();
      std::string dem = demangleSymbol(mangled);
      dem = stripEmptyArgList(dem);
      std::string san = mangleLabel(dem);
      list.emplace_back(mangled, san);
    }
  });
  // Assign a unique, readable output name to every symbol. A demangled name
  // that does not clash is used verbatim. When several distinct symbols
  // demangle to the same identifier — e.g. a class' default, copy and move
  // constructors (which all demangle to `Class::Class`) or overloaded
  // functions whose argument lists were stripped — a deterministic numeric
  // suffix is appended so each function keeps a readable *and* unique name
  // instead of reverting to the raw mangled symbol. Names are assigned in
  // sorted mangled-name order so the result is stable across runs.
  std::sort(list.begin(), list.end());
  std::set<std::string> used;
  for (auto &p : list) {
    const std::string &mangled = p.first;
    std::string base = p.second.empty() ? mangleLabel(mangled) : p.second;
    std::string chosen = base;
    for (unsigned n = 2; used.count(chosen); ++n)
      chosen = base + "_" + std::to_string(n);
    used.insert(chosen);
    functionOutputNames[mangled] = chosen;
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

void Mapper::ensureMallocFreeDeclared(std::ostream &out) {
  if (mallocFreeDeclEmitted_) return;
  out << "extern void *malloc(unsigned long);\n";
  out << "extern void free(void*);\n";
  mallocFreeDeclEmitted_ = true;
}

std::string Mapper::demangle(llvm::StringRef mangled) const {
  return demangleSymbol(mangled.str());
}

void Mapper::ensureVerifierNondetDeclared(const std::string &ctype,
                                          const std::string &suffix) {
  if (!verifierNondetDeclared_.insert(suffix).second) return;
  verifierDeclsBuf_ << "extern " << ctype << " __VERIFIER_nondet_" << suffix << "(void);\n";
}

void Mapper::ensureVerifierNondetMemoryDeclared() {
  if (verifierNondetMemoryDeclared_) return;
  verifierNondetMemoryDeclared_ = true;
  verifierDeclsBuf_ << "extern void __VERIFIER_nondet_memory(void*, unsigned long);\n";
}

void Mapper::ensureMemcpyDeclared() {
  if (memcpyDeclared_) return;
  memcpyDeclared_ = true;
  // If the program already references memcpy, emitFuncForwardDecl has emitted a
  // prototype for it (non-const, derived from the CIR type — CIR drops the
  // const). Emitting our const-correct one too would be a conflicting
  // redeclaration, so defer to the existing one.
  if (forwardDeclaredFuncNames_.count("memcpy")) return;
  verifierDeclsBuf_ << "extern void *memcpy(void*, const void*, unsigned long);\n";
}

void Mapper::ensureMemsetDeclared() {
  if (memsetDeclared_) return;
  memsetDeclared_ = true;
  if (forwardDeclaredFuncNames_.count("memset")) return;
  verifierDeclsBuf_ << "extern void *memset(void*, int, unsigned long);\n";
}

void Mapper::ensureMemchrDeclared() {
  if (memchrDeclared_) return;
  memchrDeclared_ = true;
  if (forwardDeclaredFuncNames_.count("memchr")) return;
  verifierDeclsBuf_ << "extern void *memchr(const void*, int, unsigned long);\n";
}

void Mapper::ensureAbortDeclared(std::ostream &out) {
  if (abortDeclEmitted_) return;
  abortDeclEmitted_ = true;
  out << "extern void abort(void);\n";
}

void Mapper::emitAbiAttrNote(std::ostream &out) {
  if (abiAttrNoteEmitted_) return;
  if (!usesPackedStruct_ && !usesMemberFnPtr_) return;
  abiAttrNoteEmitted_ = true;
  out << "// WARNING: this output relies on non-ISO ABI attribute(s) below.\n"
         "// A verifier/compiler that ignores them produces UNSOUND results:\n";
  if (usesPackedStruct_)
    out << "//   __attribute__((packed))     - exact struct byte layout (no padding)\n";
  if (usesMemberFnPtr_)
    out << "//   __attribute__((aligned(2))) - even function addresses, required by\n"
           "//                                 pointer-to-member dispatch (low-bit tag)\n";
  out << "\n";
}

void Mapper::emitFileHeader(std::ostream &out, mlir::ModuleOp module) {
  // ── Detect op-based C constructs by scanning the module ──────────────────
  // These mirror what the handlers translate, so the manifest reflects what is
  // actually emitted (e.g. a struct that is declared but never accessed does
  // not count; only real member access trips `structAccess`).
  struct Feat {
    bool pointers = false;          // pointer values / variables manipulated
    bool arrayIndexing = false;     // a[i] value (PtrStride/GetElement deref'd)
    bool arrayElemAddr = false;     // &a[i] interior/end pointer
    bool ptrDiff = false;           // p - q
    bool ptrReinterpret = false;    // (T*)ptr  pointer-to-pointer cast
    bool intPtrCast = false;        // (T*)int / (int)ptr
    bool structAccess = false;      // .field / ->field
    bool bitfields = false;
    bool unions = false;
    bool functionPtr = false;       // indirect call through a function pointer
    bool virtualCalls = false;      // vtable dispatch
    bool rtti = false;              // typeid / dynamic_cast
    bool variadic = false;          // va_list
    bool fpArith = false;           // floating-point arithmetic
    bool libm = false;              // sqrt/sin/pow/... named libm calls
    bool complex = false;           // _Complex
    bool overflow = false;          // __builtin_*_overflow
    bool bitBuiltins = false;       // popcount/clz/ctz/...
    bool frameAddr = false;         // __builtin_{frame,return}_address
    bool setjmp = false;            // setjmp/longjmp
    bool gotoLabel = false;         // goto / labels
  } feat;

  auto isLibmName = [](const std::string &n) -> bool {
    static const std::set<std::string> base = {
        "sqrt", "cbrt", "sin", "cos", "tan", "asin", "acos", "atan", "atan2",
        "sinh", "cosh", "tanh", "asinh", "acosh", "atanh", "exp", "exp2",
        "expm1", "log", "log2", "log10", "log1p", "pow", "hypot", "fmod",
        "remainder", "fdim", "fma", "ceil", "floor", "round", "trunc", "rint",
        "nearbyint", "lround", "llround", "lrint", "llrint", "copysign", "fabs",
        "fmax", "fmin", "erf", "erfc", "tgamma", "lgamma", "ldexp", "scalbn",
        "scalbln", "nextafter"};
    if (base.count(n)) return true;
    // float / long-double variants: strip a single trailing 'f' or 'l'.
    if (n.size() > 1 && (n.back() == 'f' || n.back() == 'l'))
      return base.count(n.substr(0, n.size() - 1)) > 0;
    return false;
  };

  auto classifyOffset = [&](mlir::Value res) {
    if (res.use_empty()) {
      // A computed pointer that is never dereferenced here (e.g. an end
      // iterator passed onward) — the address itself escapes.
      feat.arrayElemAddr = true;
      return;
    }
    for (mlir::OpOperand &use : res.getUses()) {
      mlir::Operation *u = use.getOwner();
      bool derefHere = false;
      if (auto ld = mlir::dyn_cast<cir::LoadOp>(u))
        derefHere = (ld.getAddr() == res);
      else if (auto st = mlir::dyn_cast<cir::StoreOp>(u))
        derefHere = (st.getAddr() == res);
      if (derefHere) feat.arrayIndexing = true;   // a[i]
      else           feat.arrayElemAddr = true;   // &a[i]
    }
  };

  auto scanOp = [&](mlir::Operation *op) {
    // Pointer offsetting: always emitted as subscript (&base[i] / base[i]),
    // never as additive pointer arithmetic. Distinguish from p - q.
    if (mlir::isa<cir::PtrStrideOp, cir::GetElementOp>(op)) {
      feat.pointers = true;
      classifyOffset(op->getResult(0));
    } else if (mlir::isa<cir::PtrDiffOp>(op)) {
      feat.pointers = true;
      feat.ptrDiff = true;
    } else if (auto c = mlir::dyn_cast<cir::CastOp>(op)) {
      mlir::Type st = c->getOperand(0).getType();
      mlir::Type rt = c->getResult(0).getType();
      bool sp = mlir::isa<cir::PointerType>(st);
      bool rp = mlir::isa<cir::PointerType>(rt);
      bool si = mlir::isa<cir::IntType>(st);
      bool ri = mlir::isa<cir::IntType>(rt);
      if ((sp && ri) || (si && rp)) { feat.intPtrCast = true; feat.pointers = true; }
      else if (sp && rp)            { feat.ptrReinterpret = true; feat.pointers = true; }
      else if (rp)                  { feat.pointers = true; } // e.g. array decay
    } else if (mlir::isa<cir::GetMemberOp, cir::ExtractMemberOp>(op)) {
      feat.structAccess = true;
    } else if (mlir::isa<cir::GetBitfieldOp, cir::SetBitfieldOp>(op)) {
      feat.bitfields = true;
    } else if (mlir::isa<cir::VTableGetVirtualFnAddrOp>(op)) {
      feat.virtualCalls = true;
    } else if (mlir::isa<cir::VTableGetTypeInfoOp>(op)) {
      feat.rtti = true;
    } else if (mlir::isa<cir::VAStartOp, cir::VAArgOp, cir::VACopyOp,
                         cir::VAEndOp>(op)) {
      feat.variadic = true;
    } else if (mlir::isa<cir::FAddOp, cir::FSubOp, cir::FMulOp, cir::FDivOp,
                         cir::FRemOp, cir::FNegOp>(op)) {
      feat.fpArith = true;
    } else if (mlir::isa<cir::SqrtOp, cir::SinOp, cir::CosOp, cir::TanOp,
                         cir::ACosOp, cir::ASinOp, cir::ATanOp, cir::ATan2Op,
                         cir::ExpOp, cir::Exp2Op, cir::LogOp, cir::Log2Op,
                         cir::Log10Op, cir::PowOp, cir::FModOp, cir::CeilOp,
                         cir::FloorOp, cir::RoundOp, cir::RoundEvenOp,
                         cir::RintOp, cir::NearbyintOp, cir::CopysignOp,
                         cir::FMaxNumOp, cir::FMinNumOp, cir::FMaximumOp,
                         cir::FMinimumOp, cir::LroundOp, cir::LlroundOp,
                         cir::LrintOp, cir::LlrintOp>(op)) {
      feat.libm = true;
    } else if (mlir::isa<cir::ComplexCreateOp, cir::ComplexAddOp,
                         cir::ComplexSubOp, cir::ComplexMulOp, cir::ComplexDivOp,
                         cir::ComplexRealOp, cir::ComplexImagOp,
                         cir::ComplexRealPtrOp, cir::ComplexImagPtrOp>(op)) {
      feat.complex = true;
    } else if (mlir::isa<cir::AddOverflowOp, cir::SubOverflowOp,
                         cir::MulOverflowOp>(op)) {
      feat.overflow = true;
    } else if (mlir::isa<cir::BitClzOp, cir::BitCtzOp, cir::BitFfsOp,
                         cir::BitParityOp, cir::BitPopcountOp,
                         cir::BitReverseOp, cir::BitClrsbOp, cir::ByteSwapOp>(op)) {
      feat.bitBuiltins = true;
    } else if (mlir::isa<cir::FrameAddrOp, cir::ReturnAddrOp>(op)) {
      feat.frameAddr = true;
    } else if (mlir::isa<cir::EhSetjmpOp, cir::EhLongjmpOp>(op)) {
      feat.setjmp = true;
    } else if (mlir::isa<cir::GotoOp>(op)) {
      feat.gotoLabel = true;
    } else if (mlir::isa<cir::CallOp>(op)) {
      // Resolve the callee symbol (when direct). Many libm functions reach the
      // output as a plain `cir.call @sqrt` (clang lowers __builtin_sqrt to a
      // libcall, not a cir.sqrt op), so detect libm by callee name as well as
      // by the cir math ops handled above.
      std::string callee;
      if (auto sa = op->getAttrOfType<mlir::StringAttr>("callee"))
        callee = sa.getValue().str();
      else if (auto sr = op->getAttrOfType<mlir::SymbolRefAttr>("callee"))
        callee = sr.getRootReference().str();
      if (!callee.empty()) {
        if (isLibmName(callee)) feat.libm = true;
      } else if (op->getNumOperands() > 0) {
        // Indirect call: callee is a function-pointer operand, no symbol attr.
        if (auto pt = mlir::dyn_cast<cir::PointerType>(op->getOperand(0).getType()))
          if (mlir::isa<cir::FuncType>(pt.getPointee()))
            feat.functionPtr = true;
      }
    }
    // Unions: any value whose type is a union record.
    if (!feat.unions) {
      auto isUnionTy = [](mlir::Type t) {
        if (auto rt = mlir::dyn_cast<cir::RecordType>(t)) return rt.isUnion();
        return false;
      };
      for (mlir::Value r : op->getResults())
        if (isUnionTy(r.getType())) { feat.unions = true; break; }
      if (!feat.unions)
        for (mlir::Value o : op->getOperands())
          if (auto pt = mlir::dyn_cast<cir::PointerType>(o.getType())) {
            if (isUnionTy(pt.getPointee())) { feat.unions = true; break; }
          }
    }
  };

  // Scan only the function bodies that are actually emitted: skip
  // declaration-only and elided (unreachable / dead std::) definitions, so dead
  // instantiations don't contribute constructs that never reach the output
  // (e.g. an indirect comparator call inside a std:: body that gets havoced
  // away). This mirrors the elision condition in the third emission pass.
  module->walk([&](cir::FuncOp f) {
    mlir::Operation *fop = f.getOperation();
    if (fop->getNumRegions() == 0 || fop->getRegion(0).empty()) return;
    if (auto sym = fop->getAttrOfType<mlir::StringAttr>(
            mlir::SymbolTable::getSymbolAttrName()))
      if (funcDefElided(sym.getValue())) return;
    fop->walk([&](mlir::Operation *op) { scanOp(op); });
  });

  // ── Build the ordered token list ─────────────────────────────────────────
  // Combine op-based detection with the declaration-driven flags set during
  // body emission. Trivially-supported constructs (plain control flow, scalar
  // arithmetic, function calls, abort) are intentionally omitted.
  std::vector<std::string> tokens;
  auto add = [&](bool cond, const char *tok) { if (cond) tokens.push_back(tok); };

  add(feat.pointers,        "pointers");
  add(feat.arrayIndexing,   "array indexing (a[i])");
  add(feat.arrayElemAddr,   "array element address (&a[i])");
  add(feat.ptrDiff,         "pointer difference (p - q)");
  add(feat.ptrReinterpret,  "pointer reinterpretation casts");
  add(feat.intPtrCast,      "integer<->pointer casts");
  add(feat.structAccess,    "structs");
  add(feat.bitfields,       "bitfields");
  add(feat.unions,          "unions");
  add(usesPackedStruct_,    "__attribute__((packed))");
  add(feat.functionPtr,     "function pointers");
  add(usesMemberFnPtr_,     "pointer-to-member functions");
  add(usesMemberFnPtr_,     "__attribute__((aligned(2)))");
  add(feat.virtualCalls,    "virtual calls (vtables)");
  add(feat.rtti,            "RTTI (typeid/dynamic_cast)");
  add(memcpyDeclared_,      "memcpy");
  add(memsetDeclared_,      "memset");
  add(memchrDeclared_,      "memchr");
  add(mallocFreeDeclEmitted_, "heap allocation (malloc/free)");
  add(feat.variadic,        "variadic functions (va_list)");
  add(feat.fpArith,         "floating-point arithmetic");
  add(feat.libm,            "libm math functions");
  add(feat.complex,         "complex numbers (_Complex)");
  add(feat.overflow,        "integer overflow builtins");
  add(feat.bitBuiltins,     "bit builtins (popcount/clz/ctz/...)");
  add(feat.frameAddr,       "frame/return address builtins");
  add(feat.setjmp,          "setjmp/longjmp");
  add(feat.gotoLabel,       "goto/labels");
  add(hasExceptions_,       "C++ exceptions");

  // ── Emit the banner + manifest ───────────────────────────────────────────
  out << "// Generated by cir2c - CIR (ClangIR) lowered to verifier-friendly C.\n";
  if (!tokens.empty()) {
    // Word-wrap the comma-separated list at ~76 columns for readability.
    const std::string lead = "// Verifier should support: ";
    const std::string cont = "//   ";
    std::string line = lead;
    bool first = true, lineStarted = true;
    for (size_t i = 0; i < tokens.size(); ++i) {
      std::string piece = tokens[i] + (i + 1 < tokens.size() ? "," : ".");
      if (!lineStarted && line.size() + 1 + piece.size() > 76) {
        out << line << "\n";
        line = cont + piece;
      } else {
        line += (lineStarted ? "" : " ") + piece;
      }
      lineStarted = false;
      (void)first;
    }
    out << line << "\n";
  }

  // Over-approximation note: __VERIFIER_nondet_memory is the std-/library-call
  // externalization havoc — the result is replaced by an unconstrained value,
  // which is unsound for code whose correctness depends on that result.
  if (verifierNondetMemoryDeclared_) {
    out << "// Over-approximated (may be unsound): library/std:: calls replaced "
           "by\n"
           "//   __VERIFIER_nondet_memory havoc (results are nondeterministic).\n";
  }
  out << "\n";
}

bool Mapper::isStdCallName(const std::string &mangled,
                            const std::string &demangled) {
  // Use the Itanium mangled name when available: the prefix unambiguously
  // identifies the namespace without needing to strip a return-type prefix from
  // the demangled form (which would fail for e.g. "void (*std::for_each<…>)(…)"
  // or "myclass std::for_each<…>(…)").
  if (mangled.size() >= 4 && mangled[0] == '_' && mangled[1] == 'Z') {
    size_t pos = 2;
    // _ZSt* = free function directly in std:: (e.g. std::for_each, std::endl)
    if (pos + 1 < mangled.size() && mangled[pos] == 'S' && mangled[pos+1] == 't')
      return true;
    // _ZN[K[V[r]...]]* = nested name; skip optional CV/ref qualifiers
    if (mangled[pos] == 'N') {
      ++pos;
      while (pos < mangled.size() &&
             (mangled[pos] == 'K' || mangled[pos] == 'V' || mangled[pos] == 'r'))
        ++pos;
      auto rest = mangled.substr(pos);
      if (rest.rfind("St", 0) == 0) return true;          // std::
      if (rest.rfind("9__gnu_cxx", 0) == 0) return true;  // __gnu_cxx::
      if (rest.rfind("11__gnu_debug", 0) == 0) return true; // __gnu_debug::
    }
  }
  // Fallback for non-Itanium or non-mangled names: check demangled prefix.
  auto paren = demangled.find('(');
  std::string head = paren == std::string::npos ? demangled : demangled.substr(0, paren);
  return head.find("std::") == 0;
}

bool Mapper::funcDefElided(llvm::StringRef sym) const {
  std::string s = sym.str();
  if (reachableDefs_.count(s)) return false;
  // Unreachable inline/weak definitions, and declaration-only functions that
  // nothing emitted references (dead prototypes), are both elided.
  return droppableDefs_.count(s) || declOnlyFuncs_.count(s);
}

void Mapper::computeReachableDefs(mlir::ModuleOp module) {
  if (reachabilityComputed_) return;
  reachabilityComputed_ = true;

  std::unordered_map<std::string, std::set<std::string>> edges; // caller -> callees
  std::vector<std::string> work;                                // reachable frontier

  auto symOf = [](cir::FuncOp f) -> std::string {
    auto s = f->getAttrOfType<mlir::StringAttr>(
        mlir::SymbolTable::getSymbolAttrName());
    return s ? s.getValue().str() : std::string();
  };
  auto markRoot = [&](const std::string &s) {
    if (!s.empty() && reachableDefs_.insert(s).second) work.push_back(s);
  };

  auto calleeOf = [](mlir::Operation *op) -> std::string {
    if (auto sa = op->getAttrOfType<mlir::StringAttr>("callee"))
      return sa.getValue().str();
    if (auto sa2 = op->getAttrOfType<mlir::SymbolRefAttr>("callee"))
      return sa2.getRootReference().str();
    return std::string();
  };

  // A call edge is dropped when the call is externalized (issue #7), because
  // the emitted code no longer references the callee.
  auto callIsExternalized = [&](mlir::Operation *user, const std::string &sym) {
    if (!mlir::isa<cir::CallOp>(user) && !mlir::isa<cir::TryCallOp>(user))
      return false;
    std::string callee = calleeOf(user);
    if (callee != sym) return false; // sym used as an argument, not the callee
    std::string dem = demangleSymbol(sym);
    return externalizeStd_ && isStdCallName(sym, dem);
  };

  // A `cir.get_global @f` whose result feeds *only* externalized I/O calls is a
  // stream manipulator (e.g. std::endl) that the emitter discards, so it never
  // references @f. Drop that edge too, otherwise the whole manipulator chain
  // would be kept alive although it is absent from the output.
  auto refIsDiscardedManipulator = [&](mlir::Operation *user) {
    if (!externalizeStd_) return false;
    auto gg = mlir::dyn_cast<cir::GetGlobalOp>(user);
    if (!gg || gg.getResult().use_empty()) return false;
    for (mlir::Operation *cu : gg.getResult().getUsers()) {
      if (!mlir::isa<cir::CallOp>(cu) && !mlir::isa<cir::TryCallOp>(cu))
        return false;
      std::string callee = calleeOf(cu);
      if (callee.empty() || !isStdCallName(callee, demangleSymbol(callee)))
        return false;
    }
    return true;
  };

  // Index defined functions; non-inline definitions are always-kept roots,
  // inline/weak ones are elision candidates reached only through edges.
  module->walk([&](cir::FuncOp f) {
    std::string sym = symOf(f);
    if (sym.empty()) return;
    mlir::Operation *fop = f.getOperation();
    bool hasBody = fop->getNumRegions() > 0 && !fop->getRegion(0).empty();
    if (!hasBody) { declOnlyFuncs_.insert(sym); return; }
    cir::GlobalLinkageKind lk = f.getLinkage();
    bool droppable = cir::isLinkOnceLinkage(lk) || cir::isWeakLinkage(lk) ||
                     cir::isAvailableExternallyLinkage(lk);
    if (droppable) droppableDefs_.insert(sym);
    else markRoot(sym);
    if (auto uses = mlir::SymbolTable::getSymbolUses(f.getOperation())) {
      for (const auto &u : *uses) {
        std::string callee = u.getSymbolRef().getRootReference().str();
        if (callIsExternalized(u.getUser(), callee) ||
            refIsDiscardedManipulator(u.getUser()))
          continue;
        edges[sym].insert(callee);
      }
    }
  });

  // `main` and any function referenced by a global initializer (vtables,
  // function-pointer tables) are roots regardless of linkage.
  markRoot("main");
  module->walk([&](cir::GlobalOp g) {
    if (auto uses = mlir::SymbolTable::getSymbolUses(g.getOperation()))
      for (const auto &u : *uses)
        markRoot(u.getSymbolRef().getRootReference().str());
  });

  // Propagate reachability across the call graph.
  while (!work.empty()) {
    std::string cur = work.back();
    work.pop_back();
    auto it = edges.find(cur);
    if (it == edges.end()) continue;
    for (const std::string &callee : it->second) markRoot(callee);
  }
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
  unsigned paramIndex = 0;
  for (mlir::Type paramType : fty.getInputs()) {
    if (!first) params += ", ";
    first = false;
    std::string paramName = "p" + std::to_string(paramIndex++);
    params += mapParamTypeToC(*this, paramType, paramName);
  }
  if (fty.isVarArg()) {
    // C forbids a lone "..." with no preceding named parameter. For such
    // functions (e.g. __gxx_personality_v0) emit "()" — an unprototyped
    // declaration that accepts any arguments — instead of "(...)".
    if (!params.empty()) params += ", ...";
  }

  // Declaration-only operator new/delete: emit inline stubs that wrap
  // malloc/free so the linker finds a definition. We match both the demangled
  // output name (operator_new*/operator_delete*) and the raw Itanium mangled
  // symbol, because the demangler handles operator new[] (_Zna*) but leaves the
  // array-delete forms (_ZdaPv / _ZdaPvm) mangled — without this they would be
  // emitted as a bare extern and fail to link.
  std::string mangledSym = sym.getValue().str();
  bool isNewOp = outName.rfind("operator_new", 0) == 0 ||
                 mangledSym.rfind("_Znw", 0) == 0 ||   // operator new
                 mangledSym.rfind("_Zna", 0) == 0;     // operator new[]
  bool isDeleteOp = outName.rfind("operator_delete", 0) == 0 ||
                    mangledSym.rfind("_Zdl", 0) == 0 || // operator delete
                    mangledSym.rfind("_Zda", 0) == 0;   // operator delete[]
  bool hasBodyCheck = (fop->getNumRegions() > 0 && !fop->getRegion(0).empty());
  if (isNewOp && !hasBodyCheck) {
    ensureMallocFreeDeclared(out);
    out << retType << " " << outName << "(" << params << ") { return malloc(p0); }\n";
    return true;
  }
  if (isDeleteOp && !hasBodyCheck) {
    ensureMallocFreeDeclared(out);
    out << retType << " " << outName << "(" << params << ") { free(p0); }\n";
    return true;
  }
  // __cxa_pure_virtual fills pure-virtual vtable slots (Itanium ABI). It is a
  // libstdc++ symbol; emit a self-contained stub so the file links. It is only
  // reached if a pure virtual is actually invoked (a program bug) — abort.
  if (mangledSym == "__cxa_pure_virtual" || mangledSym == "__cxa_deleted_virtual") {
    ensureAbortDeclared(out);
    out << "void " << outName << "(void) { abort(); }\n";
    return true;
  }

  // C1/D1 constructor/destructor variants: the complete-object variant (C1/D1)
  // is often declaration-only when the base variant (C2/D2) has the body.
  // Emit a delegation stub so the linker finds a definition. Only do this when
  // THIS variant is itself body-less — otherwise mapFunc emits its real body
  // and a stub here would be a redefinition.
  bool hasBody = (fop->getNumRegions() > 0 && !fop->getRegion(0).empty());
  if (!hasBody) {
    std::string mangled = sym.getValue().str();
    auto tryDelegate = [&](const std::string &pattern,
                           const std::string &replacement) -> bool {
      size_t pos = mangled.rfind(pattern);
      if (pos == std::string::npos) return false;
      std::string baseSym = mangled.substr(0, pos) + replacement +
                            mangled.substr(pos + pattern.size());
      auto mod = fop->getParentOfType<mlir::ModuleOp>();
      if (!mod) return false;
      for (auto &op2 : mod.getOps()) {
        if (!llvm::isa<cir::FuncOp>(op2)) continue;
        auto sym2 = op2.getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
        if (!sym2 || sym2.getValue().str() != baseSym) continue;
        if (op2.getNumRegions() == 0 || op2.getRegion(0).empty()) return false;
        // We forward p0..pN-1 to the base variant, so the signatures must agree
        // on arity (e.g. a D1 taking 1 arg cannot delegate to a D2 taking a VTT
        // pointer as a second arg).
        if (mlir::cast<cir::FuncOp>(op2).getFunctionType().getInputs().size() !=
            fty.getInputs().size())
          return false;
        std::string baseName = getFunctionOutputName(baseSym);
        // Build arg list p0, p1, ...
        std::string args;
        unsigned n = fty.getInputs().size();
        for (unsigned i = 0; i < n; ++i) {
          if (i) args += ", ";
          args += "p" + std::to_string(i);
        }
        out << retType << " " << outName << "(" << params << ") { "
            << baseName << "(" << args << "); }\n";
        return true;
      }
      return false;
    };
    if (tryDelegate("C1E", "C2E")) return true;
    if (tryDelegate("D1E", "D2E")) return true;
    // D1/D2 destructor variants that are declaration-only in this module mean
    // the destructor body lives in an external library (e.g. libstdc++) that
    // we cannot link (we compile as plain C with -lm only).  Emit a noop stub.
    if (mangled.find("D1E") != std::string::npos ||
        mangled.find("D2E") != std::string::npos) {
      out << retType << " " << outName << "(" << params << ") {}\n";
      return true;
    }
  }

  // _GLOBAL__sub_I_* functions are C++ global constructor trampolines that
  // normally run before main() via the .init_array section. We emit them as
  // ordinary functions (no __attribute__((constructor))) and instead call them
  // explicitly at the top of main() — see mapModule's collection pass and the
  // injection in mapFunc. SV-COMP verifiers ignore the constructor attribute.

  // Declaration-only functions are external references; emit them as extern so
  // the verifier knows their signature without pulling in any system headers.
  // Unresolved C++-stdlib references (libstdc++, which we do not link) are left
  // as-is on purpose: the test harness validates the C by COMPILING only, so a
  // link failure does not make the generated C invalid.
  //
  // KNOWN LIMITATION (soundness, --no-externalize-std): a handful of libstdc++
  // functions are defined OUT OF LINE in compiled .cc units (not headers/inline
  // /templates), so ClangIR only ever sees a declaration — there is no body in
  // the CIR to emit.  Examples: std::__detail::_List_node_base::_M_hook /
  // _M_unhook / _M_transfer / _M_reverse (list.cc), and various std::string /
  // locale internals.  When std is KEPT (--no-externalize-std) these stay as
  // bare externs, and a verifier that models an undefined call as a no-op
  // SILENTLY DROPS their pointer side effects.  For _M_hook this means list
  // nodes are never linked: begin() returns the sentinel header and front()/
  // back() read the header's _M_size field as the element value, producing a
  // WRONG (unsound) counterexample.  The bodies genuinely do not exist in the
  // CIR, so there is no general mapper-side fix that recovers the real
  // semantics; modelling them would require per-function knowledge of each
  // libstdc++ internal (rejected as too specific).  Verifying STL container
  // programs under --no-externalize-std is therefore out of scope here.  Under
  // the default --externalize-std these calls are over-approximated (havoc /
  // nondet) and the result stays sound.
  if (!hasBody)
    out << "extern ";

  out << retType << " " << outName << "(" << params << ");\n";
  // Record that a prototype for this C name now exists, so the injected libc
  // declarations (memcpy/memset/memchr) don't emit a conflicting second one.
  forwardDeclaredFuncNames_.insert(outName);
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
  // Reset per-function state so that stacks from a previous function do not
  // bleed into this one (should normally be empty, but guard defensively).
  cleanupStack_.clear();
  consumedCleanups_.clear();
  loopDepth_ = 0;
  forStepLabelStack_.clear();
  tryLandingPadStack_.clear();

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
  std::string params;
  bool hasBody = (fop->getNumRegions() > 0 && !fop->getRegion(0).empty());
  llvm::ArrayRef<mlir::Type> inputs = fty.getInputs();

  // Reset the va_start sentinel for this function.
  lastVarargParamName_.clear();

  std::vector<std::string> bodyParamNames;
  if (hasBody) {
    // If function has a body, use block arguments to get parameter names
    Block &entryBlock = fop->getRegion(0).front();
    bool first = true;
    for (BlockArgument arg : entryBlock.getArguments()) {
      if (!first) params += ", ";
      first = false;

      // Generate parameter name
      std::string paramName = freshName("v");
      setName(arg, paramName);
      bodyParamNames.push_back(paramName);
        // Only mark non-pointer parameters as direct access
        // Pointer parameters are already pointer values, not lvalues that need &
        if (!mlir::isa<cir::PointerType>(arg.getType())) {
          markAsDirectAccess(arg);
        }

      params += mapParamTypeToC(*this, arg.getType(), paramName);
      // Track the last named parameter for va_start.
      if (fty.isVarArg()) lastVarargParamName_ = paramName;
    }
  } else {
    // For declarations without body, use types from function signature
    bool first = true;
    unsigned paramIndex = 0;
    for (mlir::Type paramType : inputs) {
      if (!first) params += ", ";
      first = false;

      // Map parameter type to C type
      std::string paramName = "p" + std::to_string(paramIndex++);
      std::string cParamType = mapParamTypeToC(*this, paramType, paramName);
      params += cParamType;
      // Track the last named parameter for va_start.
      if (fty.isVarArg()) lastVarargParamName_ = paramName;
    }
  }
  if (fty.isVarArg()) {
    // C forbids a lone "..." with no preceding named parameter. For such
    // functions (e.g. __gxx_personality_v0) emit "()" — an unprototyped
    // declaration that accepts any arguments — instead of "(...)".
    if (!params.empty()) params += ", ...";
  }

  // Global constructors (`_GLOBAL__sub_I_*` trampolines and explicit
  // __attribute__((constructor)) functions, marked global_ctor in CIR) are NOT
  // tagged with the attribute here: SV-COMP verifiers ignore it. They are
  // emitted as ordinary functions and called explicitly at the top of main()
  // (collected in mapModule, injected below).
  //
  // KNOWN LIMITATION: explicit __attribute__((destructor)) functions (global_dtor
  // in CIR) are likewise emitted as plain functions but are NOT re-invoked. A
  // sound replacement would have to run them on every exit path from main(),
  // including exit()/abort(), which have no single textual site. None occur in
  // the current workload (C++ static-object destructors register via
  // __cxa_atexit inside __cxx_global_var_init, not via this attribute).
  std::string ctorAttr;
  // Force even function addresses when the module uses pointer-to-member
  // functions, so the Itanium `ptr & 1` virtual/non-virtual discriminator works
  // (GCC otherwise packs functions onto odd addresses).
  if (usesMemberFnPtr_)
    ctorAttr += "__attribute__((aligned(2))) ";
  out << ctorAttr << retType << " " << outName << "(" << params << ")";
  std::string funcHeaderText = ctorAttr + retType + " " + outName + "(" + params + ")";

  // If there is no region/body then emit a declaration (prototype).
  if (fop->getNumRegions() == 0 || fop->getRegion(0).empty()) {
    // For C++ operator new/delete, emit inline stubs that wrap malloc/free
    // instead of bare declarations (which would be undefined at link time).
    if (outName.rfind("operator_new", 0) == 0) {
      out << " { return malloc(p0); }\n\n";
      traceability.recordOperationTrace(fop->getName().getStringRef(), funcInputText, funcHeaderText + " { return malloc(p0); }\n", true);
      return true;
    }
    if (outName.rfind("operator_delete", 0) == 0) {
      out << " { free(p0); }\n\n";
      traceability.recordOperationTrace(fop->getName().getStringRef(), funcInputText, funcHeaderText + " { free(p0); }\n", true);
      return true;
    }
    out << ";\n\n";
    traceability.recordOperationTrace(fop->getName().getStringRef(), funcInputText, funcHeaderText + ";\n", true);
    return true;
  }

  // Trivial defaulted copy/move-assignment operators (CIR
  // special_member<cxx_assign<..., trivial true>>): CIR emits an essentially
  // empty body for these — the actual semantics ("bitwise-copy the object")
  // is carried only by the `trivial` marker, not by any IR in the body — on
  // the assumption that whatever lowers this materializes the copy itself.
  // Transcribing that placeholder body literally (the previous behavior)
  // produced a real C function that did nothing, so every copy/move
  // assignment of such a type (e.g. std::basic_string's internal __rep
  // union) silently no-op'd. Detect this and emit the real assignment.
  if (hasBody) {
    if (auto specialMember = cirFuncOp.getCxxSpecialMember()) {
      if (auto assignAttr = mlir::dyn_cast<cir::CXXAssignAttr>(*specialMember)) {
        bool returnsVoid = mlir::isa<mlir::NoneType>(rty) || mlir::isa<cir::VoidType>(rty);
        if (assignAttr.getIsTrivial() && bodyParamNames.size() == 2 &&
            mlir::isa<cir::PointerType>(inputs[0]) &&
            mlir::isa<cir::PointerType>(inputs[1])) {
          const std::string &dst = bodyParamNames[0];
          const std::string &src = bodyParamNames[1];
          std::string body = returnsVoid
              ? " {\n  *" + dst + " = *" + src + ";\n}\n\n"
              : " {\n  *" + dst + " = *" + src + ";\n  return " + dst + ";\n}\n\n";
          out << body;
          traceability.recordOperationTrace(fop->getName().getStringRef(), funcInputText,
                                            funcHeaderText + body, true);
          return true;
        }
      }
    }
  }

  out << " {\n";
  traceability.recordOperationTrace(fop->getName().getStringRef(), funcInputText, funcHeaderText + " {\n", true);

  // C++ static initialization and explicit __attribute__((constructor))
  // functions normally run before main() via .init_array. We don't emit the
  // constructor attribute (SV-COMP verifiers ignore it), so call the collected
  // constructors explicitly here, in the order the loader would. This assumes
  // main() is the program entry point.
  if (sym.getValue().str() == "main" && !globalCtorSymbols_.empty()) {
    out << "  // global constructors (C++ static init), normally run before main\n";
    for (const std::string &ctorSym : globalCtorSymbols_)
      out << "  " << getFunctionOutputName(ctorSym) << "();\n";
  }

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
      out << "  " << mapParamTypeToC(*this, arg.getType(), argName) << ";\n";
    }
  }

  for (Block &b : r.getBlocks()) getOrCreateLabel(&b);
  for (Block &b : r.getBlocks()) {
    // Null statement after the label: a label must prefix a *statement*, and a
    // declaration is not one before C23. Block bodies often start with a
    // declaration, so emit "label: ;" to keep the output valid for strict C
    // frontends (e.g. DIVINE's clang).
    out << mangleLabel(getOrCreateLabel(&b)) << ": ;\n";
    for (Operation &bbop : b.getOperations()) {
      if (!mapOperation(&bbop, out)) return false;
    }
  }

  out << "}\n\n";
  return true;
}

bool Mapper::mapGlobal(mlir::Operation *gop, std::ostream &out) {
  auto sym = gop->getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
  if (!sym) {
    out << "// Global variable with missing name\n";
    return true;
  }

  // Sanitize the name to be a valid C identifier (replace dots, etc. with underscores)
  std::string name = TypeMapper::recordCName(sym);
  std::string rawSym = sym.getValue().str();

  // Reserve the global's C name so a function-local freshName temp can't reuse
  // it and shadow the global (e.g. a local `float t10` hiding global `t10`,
  // making a later `(&t10)->field` reference the float). Globals are emitted
  // before any function body, so this is populated in time.
  usedNames_.insert(name);

  // Suppress ABI-internal symbols that conflict with or are provided by the runtime.
  if (rawSym == "__dso_handle") {
    // __dso_handle is a linker-provided symbol (crtbeginS.o) used as a DSO
    // cookie by __cxa_atexit(f, arg, &__dso_handle).
    // CIR declares it as type i8 (a byte), so get_global yields !cir.ptr<i8>
    // and the call argument is &__dso_handle (type int8_t*), matching the
    // int8_t* parameter of __cxa_atexit.  Declare it as int8_t so the C
    // compiler sees a complete type and &__dso_handle has the right type.
    out << "extern signed char __dso_handle;\n";
    return true;
  }
  // Cast to GlobalOp to access getSymType()
  auto globalOp = mlir::cast<cir::GlobalOp>(gop);
  mlir::Type symType = globalOp.getSymType();

  // Vtable (`_ZTV*`) and construction vtable (`_ZTC*`): emit as flat `void*
  // <sym>[]` arrays so constructors can install address-points into vptr fields
  // and __VERIFIER_virtual_call can index them. `_ZTC*` construction vtables are
  // used with virtual inheritance and have the same VTableAttr structure.
  bool isVtableSym = rawSym.rfind("_ZTV", 0) == 0 || rawSym.rfind("_ZTC", 0) == 0;
  if (isVtableSym) {
    auto iv = globalOp.getInitialValue();
    auto vt = iv ? mlir::dyn_cast<cir::VTableAttr>(*iv) : cir::VTableAttr();
    if (!vt) { // external/undefined vtable — declare so references link
      out << "extern void *" << name << "[];\n";
      return true;
    }
    auto module = gop->getParentOfType<mlir::ModuleOp>();
    auto fmtElem = [&](mlir::Attribute e) -> std::string {
      if (auto gv = mlir::dyn_cast<cir::GlobalViewAttr>(e)) {
        std::string sym = gv.getSymbol().getValue().str();
        // Only function slots matter for dispatch. Non-function references
        // (RTTI/typeinfo, offset-to-top) are emitted as null placeholders so
        // the vtable depends only on functions (declared before it). The
        // address point skips the offset-to-top + RTTI header slots anyway.
        if (module && mlir::isa_and_nonnull<cir::FuncOp>(
                          mlir::SymbolTable::lookupSymbolIn(module, sym)))
          return "(void*)&" + getFunctionOutputName(sym);
        return "(void*)0";
      }
      return "(void*)0"; // null pointer / offset-to-top int
    };
    std::string body;
    bool first = true;
    for (mlir::Attribute comp : vt.getData()) {
      auto ca = mlir::dyn_cast<cir::ConstArrayAttr>(comp);
      if (!ca) continue;
      // ConstArrayAttr stores its elements as an ArrayAttr (non-string vtables).
      if (auto elts = mlir::dyn_cast<mlir::ArrayAttr>(ca.getElts()))
        for (mlir::Attribute e : elts) {
          if (!first) body += ", ";
          first = false;
          body += fmtElem(e);
        }
    }
    out << "void *" << name << "[] = { " << body << " };\n";
    return true;
  }

  // Packed struct/union globals: CIR may type the global as one record yet
  // initialise it with a const_record of a structurally fuller record (extra
  // explicit-padding members). Declare the variable with the initializer's
  // record/array type so the C layout matches the initializer exactly (these
  // are type-punned through bitcasts, so the byte layout is what matters).
  if (auto iv = globalOp.getInitialValue())
    if (auto ta = mlir::dyn_cast<mlir::TypedAttr>(*iv))
      if (ta.getType() && ta.getType() != symType &&
          (mlir::isa<cir::RecordType>(ta.getType()) ||
           mlir::isa<cir::ArrayType>(ta.getType())))
        symType = ta.getType();

  auto escapeCStringBytes = [](const std::string &bytes) {
    std::string escaped;
    escaped.reserve(bytes.size() * 4 + 4);

    for (size_t i = 0; i < bytes.size(); ++i) {
      unsigned char c = static_cast<unsigned char>(bytes[i]);
      switch (c) {
      case '\\': escaped += "\\\\"; break;
      case '"': escaped += "\\\""; break;
      case '\n': escaped += "\\n"; break;
      case '\r': escaped += "\\r"; break;
      case '\t': escaped += "\\t"; break;
      default:
        if (c < 32 || c > 126) {
          // Use a full 3-digit octal escape rather than \xHH: a hex escape
          // greedily consumes *all* following hex digits, so "\x01" "7" becomes
          // "\x017" (= 279, out of range). An octal escape takes at most 3
          // digits, so \001 followed by '7' stays two characters.
          escaped.push_back('\\');
          escaped.push_back(static_cast<char>('0' + ((c >> 6) & 7)));
          escaped.push_back(static_cast<char>('0' + ((c >> 3) & 7)));
          escaped.push_back(static_cast<char>('0' + (c & 7)));
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
      if (!llvm::isa<cir::GlobalOp>(op)) continue;
      auto s = op.getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName());
      if (!s) continue;
      if (s.getValue().str() != symbol) continue;
      auto targetGlobal = mlir::cast<cir::GlobalOp>(op);
      return targetGlobal.getSymType();
    }
    return mlir::Type();
  };

  // Recover initializer using the typed attribute API -- no text manipulation required.
  std::string initExpr;
  if (auto initVal = globalOp.getInitialValue()) {
    mlir::Attribute attr = *initVal;
    if (auto intAttr = mlir::dyn_cast<cir::IntAttr>(attr)) {
      initExpr = std::to_string(intAttr.getValue().getSExtValue());
    } else if (auto fpAttr = mlir::dyn_cast<cir::FPAttr>(attr)) {
      // Floating-point constant initializer (e.g. `double d = 1.5;`). Without
      // this the initializer was dropped and the global defaulted to 0.
      initExpr = ConstantEmitter::formatFpLiteral(fpAttr.getValue(), mapTypeToC(symType));
    } else if (auto fAttr = mlir::dyn_cast<mlir::FloatAttr>(attr)) {
      initExpr = ConstantEmitter::formatFpLiteral(fAttr.getValue(), mapTypeToC(symType));
    } else if (auto gvAttr = mlir::dyn_cast<cir::GlobalViewAttr>(attr)) {
      std::string target = gvAttr.getSymbol().getValue().str();
      // Functions are emitted with their demangled output name; using the raw
      // sanitized mangled name would produce a reference to an undeclared symbol.
      auto mod = gop->getParentOfType<mlir::ModuleOp>();
      bool isFunc = mod && mlir::isa_and_nonnull<cir::FuncOp>(
                               mlir::SymbolTable::lookupSymbolIn(mod, target));
      std::string targetName = isFunc ? getFunctionOutputName(target)
                                      : sanitizeIdentifier(target);
      mlir::Type targetType = findGlobalTypeBySymbol(target);
      // Vtable/construction-vtable globals are now flat void*[] arrays; their
      // address-point index [component, element] must be converted to a flat
      // offset (sum of component sizes before `component`, plus `element`).
      bool isVtableRef = target.rfind("_ZTV", 0) == 0 || target.rfind("_ZTC", 0) == 0;
      if (isVtableRef && gvAttr.getIndices() && !gvAttr.getIndices().empty()) {
        auto idxs = gvAttr.getIndices();
        int64_t component = 0, element = 0;
        if (!idxs.empty()) {
          if (auto i = mlir::dyn_cast<cir::IntAttr>(idxs[0])) component = i.getValue().getSExtValue();
          else if (auto i = mlir::dyn_cast<mlir::IntegerAttr>(idxs[0])) component = i.getInt();
        }
        if (idxs.size() > 1) {
          if (auto i = mlir::dyn_cast<cir::IntAttr>(idxs[1])) element = i.getValue().getSExtValue();
          else if (auto i = mlir::dyn_cast<mlir::IntegerAttr>(idxs[1])) element = i.getInt();
        }
        uint64_t flat = static_cast<uint64_t>(element);
        // Find the VTableAttr and add the element counts of preceding components.
        if (component > 0) {
          auto tgt = mlir::SymbolTable::lookupSymbolIn(
              gop->getParentOfType<mlir::ModuleOp>(), target);
          if (auto g = llvm::dyn_cast_or_null<cir::GlobalOp>(tgt)) {
            if (auto iv2 = g.getInitialValue())
              if (auto vt = mlir::dyn_cast<cir::VTableAttr>(*iv2))
                for (int64_t ci = 0; ci < component && ci < (int64_t)vt.getData().size(); ++ci)
                  if (auto ca = mlir::dyn_cast<cir::ConstArrayAttr>(vt.getData()[ci]))
                    if (auto at = mlir::dyn_cast<cir::ArrayType>(ca.getType()))
                      flat += at.getSize();
          }
        }
        initExpr = "(" + mapTypeToC(symType) + ")(&" + targetName + "[" + std::to_string(flat) + "])";
      } else {
        // Apply access indices: `&Upgrade_items[1].field` is global_view<@items,[1,..]>.
        // Each index steps into the current aggregate — array -> [i], record -> field.
        std::string access = targetName;
        mlir::Type curType = targetType;
        bool indexed = false;
        if (auto idxs = gvAttr.getIndices()) {
          for (mlir::Attribute ia : idxs) {
            int64_t idx = 0;
            if (auto i1 = mlir::dyn_cast<cir::IntAttr>(ia)) idx = i1.getValue().getSExtValue();
            else if (auto i2 = mlir::dyn_cast<mlir::IntegerAttr>(ia)) idx = i2.getInt();
            if (auto at = mlir::dyn_cast_if_present<cir::ArrayType>(curType)) {
              access += "[" + std::to_string(idx) + "]";
              curType = at.getElementType();
            } else if (auto rt = mlir::dyn_cast_if_present<cir::RecordType>(curType)) {
              std::string recN = rt.getName() && !rt.getName().getValue().empty()
                                     ? TypeMapper::recordCName(rt.getName()) : anonRecordCName(rt);
              std::string fn = lookupFieldName(recN, (int)idx);
              access += "." + (fn.empty() ? ("__field" + std::to_string(idx)) : fn);
              curType = (idx >= 0 && (size_t)idx < rt.getMembers().size())
                            ? rt.getMembers()[idx] : mlir::Type();
            } else break;
            indexed = true;
          }
        }
        // The target may live outside the module (extern/declared-only) -> null type.
        bool targetIsArray = !indexed && targetType && mlir::isa<cir::ArrayType>(targetType);
        initExpr = targetIsArray ? access : ("&" + access);
        // Cast to the global's declared pointer type (no-op when types match).
        if (mlir::isa<cir::PointerType>(symType))
          initExpr = "(" + mapTypeToC(symType) + ")(" + initExpr + ")";
      }
    } else if (mlir::isa<cir::ConstArrayAttr>(attr) ||
               mlir::isa<cir::ConstRecordAttr>(attr)) {
      // Array and struct/union constant initializers (recursing through nested
      // aggregates and handling int/fp/char-string/pointer elements).
      initExpr = formatConstInit(attr, symType);
    }
  }

  // Build qualifier prefix (_Atomic and/or volatile) based on access patterns
  // detected during the mapModule pre-scan.
  std::string qualPrefix;
  if (isAtomicGlobal(rawSym))   qualPrefix += "_Atomic ";
  if (isVolatileGlobal(rawSym)) qualPrefix += "volatile ";
  // Thread-local storage (`static __thread` / `_Thread_local`): without it the
  // hoisted static is shared across threads (e.g. tls.c: each thread must get
  // its own copy of `i`).
  if (globalOp.getTlsModel().has_value()) qualPrefix += "_Thread_local ";

  // Declaration-only globals (no initializer / ctor / dtor — the object is
  // defined in another TU, e.g. the libc FILE* `stdout`/`stderr`/`stdin`) must
  // be emitted as `extern`. A bare `T name;` is a C tentative definition that
  // creates a *separate*, zero-initialised object, so `stdout` would read back
  // NULL and any use of it crashes. (_ZTI* RTTI declarations are handled by the
  // stub special-case below and return before this prefix is used.)
  if (globalOp.isDeclaration()) qualPrefix = "extern " + qualPrefix;

  // Over-alignment: a source `__attribute__((aligned(N)))` (or any ABI alignment
  // exceeding the natural one) is recorded on the CIR global. Some tests check
  // the runtime address alignment of a global (e.g. 20050215-1: a char[8] struct
  // forced to aligned(8)). GCC's aligned() is a minimum — it never under-aligns —
  // and the CIR alignment is >= natural, so emitting it is always safe.
  std::string alignAttr;
  if (auto a = globalOp.getAlignment(); a && *a > 1)
    alignAttr = " __attribute__((aligned(" + std::to_string(*a) + ")))";

  // Array type (handles multi-dimensional arrays: double a[8][3])
  if (mlir::isa<cir::ArrayType>(symType)) {
    std::string dims;
    std::string elemCType = arrayBaseTypeAndDims(symType, dims);
    out << qualPrefix << elemCType << " " << name << dims << alignAttr;
    if (!initExpr.empty()) {
      out << " = " << initExpr;
    }
    out << ";\n";
    return true;
  }

  // Non-array types
  std::string ctype = mapTypeToC(symType);

  // _ZTI* globals are RTTI type_info objects declared extern (no initializer).
  // When emitted as zero-initialized pointers they compare equal (NULL==NULL).
  // Instead emit a two-pointer struct acting as a std::type_info stub so that
  // the __name field is distinct for each type and operator== returns false.
  if (rawSym.rfind("_ZTI", 0) == 0 && initExpr.empty() &&
      mlir::isa<cir::PointerType>(symType)) {
    // _ZTI* symbols are Itanium-ABI RTTI type_info objects (used by typeid,
    // dynamic_cast, and exception matching). The CIR type is ptr-to-u8i
    // (extern pointer), but the actual object is a struct with at minimum two
    // pointer-sized fields: [0] vptr (ignored for verification), [1] name ptr.
    // We emit an array of two void* so that &name equals the struct address,
    // matching what handleCast produces when it prepends & for directAccess
    // pointer types.  A simple pointer variable would give &var = address of
    // the 8-byte pointer slot, not the struct — wrong layout.
    // This approximates __fundamental_type_info / __pointer_type_info layout;
    // sufficient for verification since we never actually invoke RTTI methods.
    out << "static const char " << name << "__n_[] = \"" << rawSym << "\";\n";
    out << "static void* " << name << "[2] = {(void*)0, (void*)" << name << "__n_};\n";
    return true;
  }

  out << qualPrefix << ctype << " " << name << alignAttr;
  if (!initExpr.empty()) {
    out << " = " << initExpr;
  }
  out << ";\n";
  return true;
}

bool Mapper::mapModule(ModuleOp module, std::ostream &realOut) {
  currentModule_ = module;
  // For the top-level module, buffer the whole body so the file header / feature
  // manifest can be prepended afterwards: the manifest depends on flags that are
  // only set during body emission (memcpyDeclared_, usesPackedStruct_, the
  // __VERIFIER_nondet_memory havoc, ...). Nested modules write straight through
  // to the parent's buffer.
  const bool isTopLevelModule = !module->getParentOp();
  std::ostringstream topLevelBuf;
  std::ostream &out = isTopLevelModule ? topLevelBuf : realOut;
  // Prepare function names (demangle where possible and unique) before
  // emitting any function declarations/definitions so we can avoid name
  // collisions when demangling.
  prepareFunctionNames(module);

  // Determine which function definitions are reachable so unreachable inline /
  // weak definitions (e.g. the std I/O machinery left dead after I/O
  // externalization) can be elided. Computed once for the whole module tree.
  computeReachableDefs(module);

  // Collect global constructors (C++ static-init trampolines `_GLOBAL__sub_I_*`
  // and explicit `__attribute__((constructor))` functions) so they can be
  // called explicitly at the top of main(). We deliberately do NOT emit
  // `__attribute__((constructor))`: SV-COMP verifiers treat main() as the sole
  // entry and ignore the attribute, which would leave globals uninitialized.
  // We therefore ASSUME main() is the program entry point. Collected once, from
  // the top-level module only (`walk` reaches nested modules), so the recursive
  // mapModule calls in the third pass below do not clobber the list.
  if (!module->getParentOp()) {
    globalCtorSymbols_.clear();
    struct Ctor { uint32_t priority; unsigned order; std::string sym; };
    std::vector<Ctor> ctors;
    unsigned order = 0;
    module->walk([&](cir::FuncOp f) {
      auto sym = f->getAttrOfType<mlir::StringAttr>(
          mlir::SymbolTable::getSymbolAttrName());
      if (!sym) return;
      std::string s = sym.getValue().str();
      bool isTrampoline = s.rfind("_GLOBAL__sub_I_", 0) == 0;
      std::optional<uint32_t> prio = f.getGlobalCtorPriority();
      if (!isTrampoline && !prio) return;
      // GCC runs lower priority numbers first; unprioritized constructors
      // (including the `_GLOBAL__sub_I_*` trampoline) run after, in module
      // order. 65535 is GCC's "unspecified" default priority.
      ctors.push_back({prio.value_or(65535), order++, std::move(s)});
    });
    std::stable_sort(ctors.begin(), ctors.end(),
                     [](const Ctor &a, const Ctor &b) {
                       if (a.priority != b.priority) return a.priority < b.priority;
                       return a.order < b.order;
                     });
    for (auto &c : ctors) globalCtorSymbols_.push_back(c.sym);
  }

  // Pre-scan: detect _Atomic and volatile qualifiers on global variables and
  // local allocas by inspecting cir.load / cir.store operations.  When a
  // load or store carries a mem_order (atomic) or is_volatile attribute we
  // trace the address operand one step back:
  //   * cir.get_global @sym  -> record sym in atomicGlobalSymbols_ / volatileGlobalSymbols_
  //   * cir.alloca            -> record the SSA Value in atomicAllocaValues_ / volatileAllocaValues_
  {
    std::function<void(mlir::Operation &)> scanForQualifiers;
    scanForQualifiers = [&](mlir::Operation &op) {
      auto recordAccess = [&](mlir::Value addr, bool isAtomic, bool isVol) {
        if (!addr) return;
        mlir::Operation *defOp = addr.getDefiningOp();
        if (!defOp) return;
        if (auto gg = mlir::dyn_cast<cir::GetGlobalOp>(defOp)) {
          std::string sym = gg.getName().str();
          if (isAtomic) atomicGlobalSymbols_.insert(sym);
          if (isVol)    volatileGlobalSymbols_.insert(sym);
        } else if (mlir::isa<cir::AllocaOp>(defOp)) {
          if (isAtomic) atomicAllocaValues_.insert(addr);
          if (isVol)    volatileAllocaValues_.insert(addr);
        }
      };
      if (auto loadOp = mlir::dyn_cast<cir::LoadOp>(op)) {
        bool isAtomic = (bool)loadOp.getMemOrderAttr();
        bool isVol    = loadOp.getIsVolatile();
        if (isAtomic || isVol)
          recordAccess(loadOp.getAddr(), isAtomic, isVol);
      } else if (auto storeOp = mlir::dyn_cast<cir::StoreOp>(op)) {
        bool isAtomic = (bool)storeOp.getMemOrderAttr();
        bool isVol    = storeOp.getIsVolatile();
        if (isAtomic || isVol)
          recordAccess(storeOp.getAddr(), isAtomic, isVol);
      } else if (mlir::isa<cir::TrapOp>(op) || mlir::isa<cir::UnreachableOp>(op)) {
        // Both lower to abort(); flag so abort gets declared.
        hasTrap_ = true;
      }
      for (auto &region : op.getRegions())
        for (auto &block : region.getBlocks())
          for (auto &nestedOp : block.getOperations())
            scanForQualifiers(nestedOp);
    };
    for (auto &op : module.getOps())
      scanForQualifiers(op);
  }

  // Auto-parse struct definitions by scanning member accesses.
  struct FieldInfo {
    std::string name;        // field name
    std::string baseType;    // base C type (without array declarators or struct keyword repetition)
    int index = -1;          // layout index in record; -1 means unknown
    bool isStruct = false;   // whether baseType already includes 'struct X'
    bool isArray = false;    // whether field is an array
    std::vector<std::string> dims; // array dimensions outer->inner
  };
  std::map<std::string, std::vector<FieldInfo>> structFields; // recordName -> fields
  std::map<std::string, bool> isUnionContainer; // recordName -> isUnion
  // Stores the most complete RecordType seen for each record name; used for
  // the typed member-layout fallback when no cir.get_member ops were found.
  std::map<std::string, cir::RecordType> knownRecordTypes;

  // Ensure every referenced record type is tracked, even when there are no
  // explicit cir.get_member operations (e.g. empty/simple classes).
  std::function<void(mlir::Type)> collectRecordTypesFromType;
  collectRecordTypesFromType = [&](mlir::Type t) {
    if (!t) return;

    if (auto recordType = mlir::dyn_cast<cir::RecordType>(t)) {
      auto nameAttr = recordType.getName();
      // Anonymous records get a stable unique name so distinct layouts (an
      // Itanium member pointer vs a bitfield const-init's byte layout) don't
      // collapse together. They are then collected like any named record so
      // their members are emitted.
      std::string recordName = (nameAttr && !nameAttr.getValue().empty())
                                   ? TypeMapper::recordCName(nameAttr)
                                   : anonRecordCName(recordType);

      // Cycle guard: if we already have a complete type recorded for this name,
      // the field types have already been recursed; skip to avoid infinite loops.
      auto it = knownRecordTypes.find(recordName);
      bool alreadyComplete = (it != knownRecordTypes.end() && it->second.isComplete());

      // Keep an entry even if there are no discovered fields yet.
      (void)structFields[recordName];

      if (recordType.isUnion()) {
        isUnionContainer[recordName] = true;
      }
      // Store the most complete version seen; prefer complete over incomplete.
      if (it == knownRecordTypes.end() || (!it->second.isComplete() && recordType.isComplete())) {
        knownRecordTypes[recordName] = recordType;
      }
      // Recurse into field types on first encounter of a complete definition so
      // transitively-referenced structs are collected (fixes ofstream_ctor).
      if (!alreadyComplete && recordType.isComplete()) {
        for (auto memberType : recordType.getMembers())
          collectRecordTypesFromType(memberType);
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
      std::string structName = TypeMapper::recordCName(recordType.getName());

      // Track unions
      if (recordType.isUnion()) {
        isUnionContainer[structName] = true;
      }

      // Result type is pointer to field type
      mlir::Type resType = gm.getOperation()->getResult(0).getType();
      FieldInfo info;
      info.index = static_cast<int>(gm.getIndex());

      // Check if result is pointer to struct
      if (auto resPtrType = mlir::dyn_cast<cir::PointerType>(resType)) {
        mlir::Type resPointee = resPtrType.getPointee();

        if (auto resRecordType = mlir::dyn_cast<cir::RecordType>(resPointee)) {
          std::string fieldStructName = TypeMapper::recordCName(resRecordType.getName());

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
            std::string arrayStructName = TypeMapper::recordCName(elemRecordType.getName());

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
        size_t idx = static_cast<size_t>(std::max(0, info.index));
        if (info.index < 0) idx = structFields[structName].size();
        fname = "field" + std::to_string(idx);
      }
      info.name = fname;

      // Note: union detection is driven by IR-declared unions, not field names.

      // Avoid duplicate entries for the same field name
  auto &vec = structFields[structName];
  bool exists = false;
  for (auto &fi : vec) {
    if ((info.index >= 0 && fi.index == info.index) || fi.name == info.name) {
      exists = true;
      break;
    }
  }
  if (!exists) vec.push_back(info);
  // Remember the canonical name for this member index so that other accessors
  // of the same storage (e.g. sibling bitfields) resolve to it.
  recordFieldName(structName, info.index, info.name);
    }
  };

  // Kick off collection for top-level operations
  for (auto &op : module.getOps()) collectFromOp(op);

  // Scan global variable types: cir.global stores its type in the sym_type
  // attribute (getSymType()), not as an SSA operand/result, so the generic
  // collectFromOp loop above misses struct types that are only referenced as
  // a global variable's type (e.g. `struct element cellspace[19]` when no
  // function body ever reads/writes the struct via get_member).
  //
  // Use walk() rather than getOps() so we also reach globals inside a nested
  // module: clang wraps the real translation unit in an outer ModuleOp, and
  // this struct-collection runs on the outer module (which writes the struct
  // definitions). A getOps() loop would only see the inner ModuleOp, missing
  // every record used solely as a nested global's element type.
  module->walk([&](cir::GlobalOp globalOp) {
    collectRecordTypesFromType(globalOp.getSymType());
    // Also collect the initializer's own type: for packed structs/unions CIR
    // may type the global as one record but initialise it with a const_record
    // of a structurally-different (fuller) record. We declare the global with
    // the initializer's type (below in mapGlobal) so its members must be known.
    if (auto iv = globalOp.getInitialValue())
      if (auto ta = mlir::dyn_cast<mlir::TypedAttr>(*iv))
        collectRecordTypesFromType(ta.getType());
    // Record symbol -> type so GlobalViewAttr access indices can be resolved.
    if (auto s = globalOp->getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName()))
      globalSymbolTypes_[s.getValue().str()] = globalOp.getSymType();
  });

  // Typed fallback: for records with no directly discovered members (e.g.
  // derived records only accessed through cir.base_class_addr casts), extract
  // member types directly from the complete RecordType definition.
  // This replaces the previous textual !rec_ line-scanning approach.
  {
    for (auto &kv : structFields) {
      const auto &recordName = kv.first;
      auto &existingFields = kv.second;

      auto recIt = knownRecordTypes.find(recordName);
      if (recIt == knownRecordTypes.end()) continue;
      cir::RecordType recType = recIt->second;
      if (!recType.isComplete()) continue;

      llvm::ArrayRef<mlir::Type> members = recType.getMembers();
      std::vector<FieldInfo> layoutFields;
      for (size_t index = 0; index < members.size(); ++index) {
        mlir::Type memberType = members[index];
        FieldInfo info;
        info.index = static_cast<int>(index);
        info.name = "__field" + std::to_string(index);

        if (auto arrayTy = mlir::dyn_cast<cir::ArrayType>(memberType)) {
          info.isArray = true;
          mlir::Type currentType = memberType;
          while (auto aT = mlir::dyn_cast<cir::ArrayType>(currentType)) {
            info.dims.push_back(std::to_string(aT.getSize()));
            currentType = aT.getElementType();
          }
          if (auto recTy = mlir::dyn_cast<cir::RecordType>(currentType)) {
            // Anonymous nested records have no name; give them their stable
            // synthetic name so the field isn't dropped (empty baseType below).
            std::string fn = (recTy.getName() && !recTy.getName().getValue().empty())
                                 ? TypeMapper::recordCName(recTy.getName())
                                 : anonRecordCName(recTy);
            info.baseType = (recTy.isUnion() ? "union " : "struct ") + fn;
            info.isStruct = true;
          } else {
            info.baseType = mapTypeToC(currentType);
          }
        } else if (auto recTy = mlir::dyn_cast<cir::RecordType>(memberType)) {
          std::string fn = (recTy.getName() && !recTy.getName().getValue().empty())
                               ? TypeMapper::recordCName(recTy.getName())
                               : anonRecordCName(recTy);
          info.baseType = (recTy.isUnion() ? "union " : "struct ") + fn;
          info.isStruct = true;
        } else {
          info.baseType = mapTypeToC(memberType);
        }

        if (!info.baseType.empty())
          layoutFields.push_back(info);
      }

      // Merge: keep real names from get_member discovery; fill gaps with
      // synthetic layout fields to preserve struct layout.
      for (const auto &lf : layoutFields) {
        bool exists = false;
        for (const auto &ef : existingFields) {
          if ((lf.index >= 0 && ef.index == lf.index) || ef.name == lf.name) {
            exists = true;
            break;
          }
        }
        if (!exists) existingFields.push_back(lf);
      }
    }
  }

  // Pre-scan: when std:: externalization is on, classify which std__ structs
  // are value-used (need a full definition) vs pointer-only (forward decl
  // suffices) vs unreferenced (skip entirely).
  std::set<std::string> stdStructAnyRef, stdStructValueUsed;
  if (externalizeStd_) {
    auto classifyType = [&](mlir::Type t, bool isValue) {
      while (true) {
        if (auto pt = mlir::dyn_cast<cir::PointerType>(t)) {
          isValue = false; t = pt.getPointee();
        } else if (auto at = mlir::dyn_cast<cir::ArrayType>(t)) {
          t = at.getElementType();
        } else break;
      }
      if (auto rt = mlir::dyn_cast<cir::RecordType>(t)) {
        if (!rt.getName()) return;
        std::string cn = TypeMapper::recordCName(rt.getName());
        if (cn.rfind("std__", 0) != 0) return;
        if (isValue) stdStructValueUsed.insert(cn);
        stdStructAnyRef.insert(cn);
      }
    };
    std::function<void(mlir::Operation &)> classScan;
    classScan = [&](mlir::Operation &op) {
      if (auto al = mlir::dyn_cast<cir::AllocaOp>(&op))
        classifyType(al.getAllocaType(), true);
      else if (auto g = mlir::dyn_cast<cir::GlobalOp>(&op)) {
        // A global of non-pointer struct type needs a complete definition: even
        // an extern declaration may have sizeof applied to it (e.g. the void
        // std:: call handler emits sizeof(*&global)).
        bool isValue = !mlir::isa<cir::PointerType>(g.getSymType()) ||
                       g.getInitialValue().has_value();
        classifyType(g.getSymType(), isValue);
      }
      else if (auto f = mlir::dyn_cast<cir::FuncOp>(&op)) {
        for (auto t : f.getFunctionType().getInputs()) classifyType(t, false);
        classifyType(f.getFunctionType().getReturnType(), false);
      } else if (auto gm = mlir::dyn_cast<cir::GetMemberOp>(&op)) {
        // Member access through a pointer requires the struct to be complete:
        // ptr->field compiles only when the struct definition is visible.
        mlir::Type baseType = gm.getOperation()->getOperand(0).getType();
        if (auto ptrType = mlir::dyn_cast<cir::PointerType>(baseType))
          classifyType(ptrType.getPointee(), true);
        for (auto t : op.getResultTypes())
          classifyType(t, !mlir::isa<cir::PointerType>(t));
      } else {
        for (auto t : op.getResultTypes())
          classifyType(t, !mlir::isa<cir::PointerType>(t));
      }
      for (auto &region : op.getRegions())
        for (auto &block : region.getBlocks())
          for (auto &nestedOp : block.getOperations())
            classScan(nestedOp);
    };
    for (auto &op : module.getOps()) classScan(op);
    // Propagate value-use: if struct A needs a full definition and embeds
    // struct B by value, B also needs a full definition.
    // Seed the worklist from std__ structs already detected as value-used.
    std::vector<std::string> worklist(stdStructValueUsed.begin(),
                                      stdStructValueUsed.end());
    // Also seed from non-std structs: they always get full definitions, so
    // any std__ struct they embed by value must also be fully defined.
    for (auto &kv : structFields) {
      if (kv.first.rfind("std__", 0) == 0) continue;
      for (auto &fi : kv.second) {
        std::string dep;
        if (fi.baseType.rfind("struct ", 0) == 0) dep = fi.baseType.substr(7);
        else if (fi.baseType.rfind("union ", 0) == 0) dep = fi.baseType.substr(6);
        if (!dep.empty() && dep.rfind("std__", 0) == 0 &&
            !stdStructValueUsed.count(dep)) {
          stdStructValueUsed.insert(dep);
          stdStructAnyRef.insert(dep);
          worklist.push_back(dep);
        }
      }
    }
    while (!worklist.empty()) {
      std::string sn = worklist.back(); worklist.pop_back();
      auto it = structFields.find(sn);
      if (it == structFields.end()) continue;
      for (auto &fi : it->second) {
        std::string dep;
        if (fi.baseType.rfind("struct ", 0) == 0) dep = fi.baseType.substr(7);
        else if (fi.baseType.rfind("union ", 0) == 0) dep = fi.baseType.substr(6);
        if (!dep.empty() && dep.rfind("std__", 0) == 0 &&
            !stdStructValueUsed.count(dep)) {
          stdStructValueUsed.insert(dep);
          stdStructAnyRef.insert(dep);
          worklist.push_back(dep);
        }
      }
    }
    // Expose the value-used set to handlers so they can guard sizeof(*ptr) on
    // potentially-forward-declared std types (e.g. the void std:: call handler).
    stdValueUsedStructs_ = stdStructValueUsed;
  }

  // Order structs to satisfy dependencies: if a struct references another
  // struct in its fields, emit the dependency first. Simple fixed-point topo.
  auto getDeps = [&](const std::string &sname){
    std::set<std::string> deps;
    auto it = structFields.find(sname);
    if (it != structFields.end()) {
      for (auto &fi : it->second) {
        // A `struct X` / `union X` field requires the tag's full definition
        // to be visible at this struct's declaration site. Pointer-typed
        // fields are fine because the trailing '*' keeps baseType from
        // matching either prefix.
        if (fi.baseType.rfind("struct ", 0) == 0) {
          std::string dep = fi.baseType.substr(7);
          if (dep != sname) deps.insert(dep);
        } else if (fi.baseType.rfind("union ", 0) == 0) {
          std::string dep = fi.baseType.substr(6);
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

  // Pre-scan: collect the C return types of all virtual calls so we can emit
  // one typed __VERIFIER_virtual_call_<suffix> declaration per distinct return
  // type.  We find these by inspecting the result type of every
  // cir.vtable.get_virtual_fn_addr op: its type is
  //   !cir.ptr<!cir.ptr<!cir.func<(params) -> RetType>>>
  // from which RetType is extracted.
  {
    std::function<void(mlir::Operation &)> scanOp;
    scanOp = [&](mlir::Operation &op) {
      // Pointer-to-member-function dispatch casts the integer ptr field to a
      // function pointer (the non-virtual branch). Its presence means function
      // addresses must be even (see usesMemberFnPtr_).
      if (auto cast = llvm::dyn_cast<cir::CastOp>(&op))
        if (cast.getKind() == cir::CastKind::int_to_ptr)
          if (op.getNumResults() > 0)
            if (auto pt = mlir::dyn_cast<cir::PointerType>(op.getResult(0).getType()))
              if (mlir::isa<cir::FuncType>(pt.getPointee()))
                usesMemberFnPtr_ = true;
      if (llvm::isa<cir::VTableGetVirtualFnAddrOp>(op)) {
        if (op.getNumResults() > 0) {
          // Result type is ptr<ptr<func<(this,args)->ret>>>; register the
          // wrapper signature so its default implementation is emitted.
          mlir::Type rt = op.getResult(0).getType();
          if (auto outerPtr = mlir::dyn_cast<cir::PointerType>(rt))
            if (auto innerPtr = mlir::dyn_cast<cir::PointerType>(outerPtr.getPointee()))
              if (auto funcTy = mlir::dyn_cast<cir::FuncType>(innerPtr.getPointee())) {
                std::string ret; std::vector<std::string> args;
                registerVirtualCallSig(funcTy, ret, args);
              }
        }
      }
      for (auto &region : op.getRegions())
        for (auto &block : region.getBlocks())
          for (auto &nestedOp : block.getOperations())
            scanOp(nestedOp);
    };
    for (auto &op : module.getOps()) scanOp(op);
  }

  // Pre-scan: detect exception-handling ops and collect every RTTI symbol
  // referenced by a throw, structured cir.try handler list, or
  // cir.eh.dispatch catch list.  The collected symbols drive emission of
  // per-type address tags in the EH preamble (one `static const char
  // __cir_eh_type_<sym>[]` per symbol), and the presence of any EH op
  // triggers emission of the exception state globals.
  {
    auto recordHandlerArray = [&](mlir::ArrayAttr arr) {
      if (!arr) return;
      for (auto attr : arr) {
        if (auto gv = mlir::dyn_cast<cir::GlobalViewAttr>(attr))
          registerEhTypeSymbol(gv.getSymbol().getValue().str());
      }
    };

    std::function<void(mlir::Operation &)> ehScan;
    ehScan = [&](mlir::Operation &op) {
      if (auto tryOp = llvm::dyn_cast<cir::TryOp>(&op)) {
        setHasExceptions();
        recordHandlerArray(tryOp.getHandlerTypes());
      } else if (auto throwOp = llvm::dyn_cast<cir::ThrowOp>(&op)) {
        setHasExceptions();
        if (auto ti = throwOp.getTypeInfoAttr())
          registerEhTypeSymbol(ti.getValue().str());
      } else if (auto dispOp = llvm::dyn_cast<cir::EhDispatchOp>(&op)) {
        setHasExceptions();
        recordHandlerArray(dispOp.getCatchTypesAttr());
      } else if (auto inflightOp = llvm::dyn_cast<cir::EhInflightOp>(&op)) {
        setHasExceptions();
        // Register catch types now so the EH preamble (written before any
        // function body) includes their __cir_eh_type_* string literals.
        if (auto types = inflightOp.getCatchTypeListAttr())
          for (auto attr : types)
            if (auto sym = mlir::dyn_cast<mlir::FlatSymbolRefAttr>(attr))
              registerEhTypeSymbol(sym.getValue().str());
      } else if (auto typeIdOp = llvm::dyn_cast<cir::EhTypeIdOp>(&op)) {
        setHasExceptions();
        registerEhTypeSymbol(typeIdOp.getTypeSym().str());
      } else if (llvm::isa<cir::TryCallOp, cir::EhInitiateOp, cir::EhTerminateOp,
                           cir::BeginCatchOp, cir::EndCatchOp,
                           cir::ResumeOp, cir::ResumeFlatOp,
                           cir::CatchParamOp, cir::AllocExceptionOp>(op)) {
        setHasExceptions();
      }
      for (auto &region : op.getRegions())
        for (auto &block : region.getBlocks())
          for (auto &nestedOp : block.getOperations())
            ehScan(nestedOp);
    };
    for (auto &op : module.getOps()) ehScan(op);
  }

  // abort() is called by our synthesised EH-termination and trap code, not
  // necessarily by a CIR declaration, so we still need to guarantee it is
  // declared before use.  All other external functions (malloc, free,
  // __assert_fail, …) are emitted as `extern` by emitFuncForwardDecl when
  // the CIR contains the corresponding declaration-only FuncOp.
  if (hasTrap_ || hasExceptions_)
    ensureAbortDeclared(out);

  if (hasExceptions_ && !ehPreambleEmitted) {
    out << "// Exception handling state (modelled in plain C)\n";
    out << "static void *__cir_exc_ptr;\n";
    out << "static const void *__cir_exc_type;\n";
    // uintptr_t: must be wide enough to hold a pointer value without truncation
    // on any platform (a plain 'unsigned' would lose the high 32 bits on LP64).
    out << "static unsigned long __cir_exc_type_id;\n";
    out << "static int __cir_exc_active;\n";
    // Destructor for the in-flight exception object (set by cir.throw from its
    // dtor operand); cir.end_catch runs it on the object, mirroring the Itanium
    // ABI where __cxa_end_catch destroys the exception when the last handler
    // exits. Stored as void* and called through a (void(*)(void*)) cast.
    out << "static void *__cir_exc_dtor;\n";
    if (!ehTypeSymbols_.empty()) {
      out << "// Per-RTTI address tags: each thrown/caught type symbol gets a\n"
          << "// distinct storage location so catch dispatch is a pointer compare.\n";
      for (const auto &sym : ehTypeSymbols_) {
        std::string san = sanitizeIdentifier(sym);
        out << "static const char __cir_eh_type_" << san
            << "[] = \"" << sym << "\";\n";
      }
    }
    out << "\n";
    ehPreambleEmitted = true;
  }

  if (!structsEmitted && !order.empty()) {
    out << "// Struct definitions (auto-parsed)\n";
    for (auto &sname : order) {
      // When std:: externalization is on, filter std__ structs:
      //   - unreferenced → skip entirely
      //   - pointer-only → forward declaration only
      //   - value-used   → full definition (falls through below)
      if (externalizeStd_ && sname.rfind("std__", 0) == 0) {
        if (!stdStructAnyRef.count(sname)) continue;
        if (!stdStructValueUsed.count(sname)) {
          bool isU2 = false;
          auto itk2 = isUnionContainer.find(sname);
          if (itk2 != isUnionContainer.end()) isU2 = itk2->second;
          out << (isU2 ? "union " : "struct ") << sname << ";\n";
          continue;
        }
      }
      // NOTE: reserved-name records (__foo, _Foo) used to be skipped here on the
      // assumption that system headers already define them. We now emit fully
      // header-free C, so nothing else provides these — skipping them left the
      // type undefined ("unknown type name '__locale_struct'"). Emit them like
      // any other record; there is no system definition to conflict with.

      bool isU = false;
      auto itk = isUnionContainer.find(sname);
      if (itk != isUnionContainer.end()) isU = itk->second;
      out << (isU ? "union " : "struct ") << sname << " { ";
      auto &vec = structFields[sname];
      std::stable_sort(vec.begin(), vec.end(), [](const FieldInfo &lhs, const FieldInfo &rhs) {
        if (lhs.index < 0 && rhs.index < 0) return false;
        if (lhs.index < 0) return false;
        if (rhs.index < 0) return true;
        return lhs.index < rhs.index;
      });
      if (vec.empty()) {
        // Keep records complete in C even when CIR does not expose fields.
        if (sname == "anon_struct") {
          // Itanium ABI member-function-pointer layout.  CIR represents both
          // fields as !s64i (ptrdiff_t).  field0 = function ptr encoded as int
          // (odd=virtual, even=direct); field1 = this-pointer adjustment.
          out << "long __field0; long __field1;";
        } else {
          out << "unsigned char __placeholder;";
        }
      }
      for (size_t i = 0; i < vec.size(); ++i) {
        const FieldInfo &fi = vec[i];
        // Always keep the 'struct'/'union' keyword. We previously dropped it for
        // __-prefixed field types, relying on a matching system typedef — but in
        // header-free C there is no such typedef, and we now emit the record's
        // own definition above, so the keyword-qualified name resolves directly
        // (and a pointer to it stays valid even when the record is incomplete).
        std::string fieldType = fi.baseType;
        out << fieldType << " " << fi.name;
        if (fi.isArray) {
          for (auto &dim : fi.dims) out << "[" << dim << "]";
        }
        out << ";";
        if (i + 1 < vec.size()) out << " ";
      }
      // Packed records (e.g. a bitfield struct whose storage members would
      // otherwise be over-aligned by C) must keep clang's byte layout, since
      // initializers are type-punned onto them. Emit __attribute__((packed)).
      bool isPacked = false;
      if (auto itr = knownRecordTypes.find(sname); itr != knownRecordTypes.end())
        isPacked = itr->second.getPacked();
      if (isPacked) usesPackedStruct_ = true;
      out << (isPacked ? " } __attribute__((packed));\n" : " };\n");
    }
    out << "\n";

    // One-time banner: the output still relies on two non-ISO ABI attributes.
    // A verifier/compiler that silently ignores them produces UNSOUND results
    // (wrong struct offsets / misread member-function pointers), so flag them
    // both in the artifact and on stderr (below, in mapModule).
    emitAbiAttrNote(out);

    // Default __VERIFIER_virtual_call_<sig> implementations. Emitted after
    // struct definitions because return types may be std__ structs that need
    // a complete definition (e.g. a virtual function returning std::string).
    // The call site passes (object, slot, args...); the wrapper loads the
    // object's vtable pointer (at offset 0), indexes by `slot` to get the
    // function pointer, and calls it with (object, args...). One wrapper per
    // distinct (return type, arg types), defined exactly once per output file,
    // so no `weak` linkage is needed (and it would not be plain ISO C).
    if (!virtualCallSigs_.empty()) {
      out << "// Virtual dispatch: default implementations.\n"
             "// __VERIFIER_virtual_call_<sig>(obj, slot, args): obj's vtable\n"
             "// pointer is at offset 0; the function is vtable[slot].\n";
      for (const auto &kv : virtualCallSigs_) {
        const std::string &suffix = kv.first;
        const std::string &ret = kv.second.first;
        const std::vector<std::string> &args = kv.second.second;
        // Parameter list and forwarded-argument list.
        std::string params, fwd, fnArgTypes = "void*";
        for (size_t i = 0; i < args.size(); ++i) {
          params += ", " + args[i] + " __a" + std::to_string(i);
          fwd += ", __a" + std::to_string(i);
          fnArgTypes += ", " + args[i];
        }
        out << ret << " __VERIFIER_virtual_call_"
            << suffix << "(void* __obj, int __slot" << params << ") {\n";
        out << "  void* __fn = ((void**)*(void**)__obj)[__slot];\n";
        out << "  " << (ret == "void" ? "" : "return ")
            << "((" << ret << "(*)(" << fnArgTypes << "))__fn)(__obj" << fwd << ");\n";
        out << "}\n";
      }
      out << "\n";
    }

    structsEmitted = true;
  }

  // Does an initializer attribute (recursively) take the address of another
  // symbol? Such a global references functions or other globals declared later,
  // so it must be emitted AFTER the function declarations — even when the
  // global_view is nested inside an array/record initializer (e.g.
  // `void* tbl[] = {&f1, &f2}` or `struct s a[] = {{1, &g}}`).
  std::function<bool(mlir::Attribute)> refsAnotherSymbol =
      [&](mlir::Attribute a) -> bool {
    if (!a) return false;
    if (mlir::isa<cir::GlobalViewAttr>(a)) return true;
    if (auto arr = mlir::dyn_cast<cir::ConstArrayAttr>(a)) {
      if (auto elts = mlir::dyn_cast<mlir::ArrayAttr>(arr.getElts()))
        for (mlir::Attribute e : elts)
          if (refsAnotherSymbol(e)) return true;
      return false;
    }
    if (auto rec = mlir::dyn_cast<cir::ConstRecordAttr>(a)) {
      for (mlir::Attribute m : rec.getMembers())
        if (refsAnotherSymbol(m)) return true;
      return false;
    }
    return false;
  };

  // Pre-pass: emit `extern void *_ZTV...[]` and `extern void *_ZTC...[]`
  // declarations for EXTERNAL vtable globals (no VTableAttr initializer).
  // These can be referenced by VTT globals (which go to `lateGlobals`) or
  // constructors, and must be visible before either emission pass.
  for (auto &op : module.getOps()) {
    auto gop = llvm::dyn_cast<cir::GlobalOp>(&op);
    if (!gop) continue;
    auto sym = gop->getAttrOfType<mlir::StringAttr>(
        mlir::SymbolTable::getSymbolAttrName());
    if (!sym) continue;
    std::string rs = sym.getValue().str();
    if (rs.rfind("_ZTV", 0) != 0 && rs.rfind("_ZTC", 0) != 0) continue;
    auto iv = gop.getInitialValue();
    if (iv && mlir::isa<cir::VTableAttr>(*iv)) continue; // has a definition
    out << "extern void *" << sanitizeIdentifier(rs) << "[];\n";
  }

  // First pass: emit global variables. Globals whose initializer takes the
  // address of another symbol (a function or a later global) are deferred to
  // `lateGlobals`, emitted after the function-declaration pass so the reference
  // resolves; everything else is self-contained and emitted now.
  std::vector<mlir::Operation *> normalGlobals;
  std::vector<mlir::Operation *> lateGlobals;
  std::vector<mlir::Operation *> vtableGlobals;
  for (auto &op : module.getOps()) {
    auto globalOp = llvm::dyn_cast<cir::GlobalOp>(&op);
    if (!globalOp) continue;
    auto initVal = globalOp.getInitialValue();
    // Vtable and VTT globals reference functions (declared in the next pass) and
    // each other (vtables → functions, VTTs → vtables), so emit them all AFTER
    // the function-declaration pass in a final stage: vtables first, then VTTs.
    if (initVal && mlir::isa<cir::VTableAttr>(*initVal)) {
      vtableGlobals.push_back(&op);
      continue;
    }
    {
      auto sym2 = op.getAttrOfType<mlir::StringAttr>(
          mlir::SymbolTable::getSymbolAttrName());
      bool isVTT = sym2 && sym2.getValue().str().rfind("_ZTT", 0) == 0;
      if (isVTT) { vtableGlobals.push_back(&op); continue; }
    }
    // RTTI typeinfo globals (TypeInfoAttr): emit as `extern void* <sym>[2]` so
    // any `_ZTI*` address taken elsewhere (e.g. dynamic_cast, throw) resolves.
    // The real struct lives in the C++ runtime; we don't reproduce its contents.
    if (initVal && mlir::isa<cir::TypeInfoAttr>(*initVal)) {
      auto sym = op.getAttrOfType<mlir::StringAttr>(
          mlir::SymbolTable::getSymbolAttrName());
      if (sym) out << "extern unsigned char "
                   << sanitizeIdentifier(sym.getValue().str()) << "[];\n";
      continue;
    }
    if (initVal && refsAnotherSymbol(*initVal))
      lateGlobals.push_back(&op);
    else
      normalGlobals.push_back(&op);
  }

  for (mlir::Operation *gop : normalGlobals) {
    mapGlobal(gop, out);
  }

  // Second pass: emit declarations for all functions.  Functions with a body
  // get a plain prototype; declaration-only (external) functions get an
  // `extern` declaration so call sites compile regardless of definition order.
  {
    bool anyDecl = false;
    for (auto &op : module.getOps()) {
      if (llvm::isa<cir::FuncOp>(op)) {
        if (auto sym = op.getAttrOfType<mlir::StringAttr>(
                mlir::SymbolTable::getSymbolAttrName()))
          if (funcDefElided(sym.getValue())) continue; // unreachable inline def
        emitFuncForwardDecl(&op, out);
        anyDecl = true;
      }
    }
    if (anyDecl) out << "\n";
  }

  // Globals that take the address of functions / other globals: emitted after
  // the function-declaration pass so all references resolve.
  for (mlir::Operation *gop : lateGlobals) mapGlobal(gop, out);

  // Vtable arrays first (vtables → functions), then VTTs (VTTs → vtables),
  // then other vtable-group globals.
  if (!vtableGlobals.empty()) {
    // Pass 1: emit vtable arrays (_ZTV*, _ZTC*).
    for (mlir::Operation *gop : vtableGlobals) {
      auto sym2 = gop->getAttrOfType<mlir::StringAttr>(
          mlir::SymbolTable::getSymbolAttrName());
      if (!sym2) continue;
      std::string rs = sym2.getValue().str();
      if (rs.rfind("_ZTV", 0) != 0 && rs.rfind("_ZTC", 0) != 0) continue;
      mapGlobal(gop, out);
    }
    // Pass 2: emit VTTs (_ZTT*) and anything else in the group.
    for (mlir::Operation *gop : vtableGlobals) {
      auto sym2 = gop->getAttrOfType<mlir::StringAttr>(
          mlir::SymbolTable::getSymbolAttrName());
      if (!sym2) continue;
      std::string rs = sym2.getValue().str();
      if (rs.rfind("_ZTV", 0) == 0 || rs.rfind("_ZTC", 0) == 0) continue;
      mapGlobal(gop, out);
    }
    out << "\n";
  }

  // Third pass: buffer function definitions so __VERIFIER_nondet_* extern
  // declarations (collected into verifierDeclsBuf_ during body emission) can
  // be flushed above the function bodies rather than inline inside them.
  std::ostringstream funcsBuf;
  for (auto &op : module.getOps()) {
    if (llvm::isa<mlir::ModuleOp>(op)) {
      mlir::ModuleOp inner = mlir::cast<mlir::ModuleOp>(op);
      if (!mapModule(inner, funcsBuf)) return false;
      continue;
    }

    if (llvm::isa<cir::FuncOp>(op)) {
      bool hasBody = (op.getNumRegions() > 0 && !op.getRegion(0).empty());
      if (hasBody) {
        if (auto sym = op.getAttrOfType<mlir::StringAttr>(
                mlir::SymbolTable::getSymbolAttrName()))
          if (funcDefElided(sym.getValue())) continue; // unreachable inline def
        if (!mapFunc(&op, funcsBuf)) return false;
      }
    }
    // Skip cir.global (already processed)
  }

  std::string decls = verifierDeclsBuf_.str();
  verifierDeclsBuf_.str("");
  verifierDeclsBuf_.clear();
  if (!decls.empty()) out << decls;
  out << funcsBuf.str();

  // Top-level module: the body is now fully buffered (so every emission-time
  // flag is set). Emit the header/manifest, then flush the body after it.
  if (isTopLevelModule) {
    emitFileHeader(realOut, module);
    realOut << topLevelBuf.str();
  }

  // Top-level module only: warn on stderr about non-ISO ABI attributes the
  // output kept, so whoever runs the mapper (and picks a verifier) is alerted.
  if (!module->getParentOp()) {
    if (usesPackedStruct_)
      llvm::errs() << "xcfa-mapper: warning: output uses __attribute__((packed)); "
                      "the verifier must honor exact struct layout for sound results.\n";
    if (usesMemberFnPtr_)
      llvm::errs() << "xcfa-mapper: warning: output uses __attribute__((aligned(2))) "
                      "for pointer-to-member dispatch; functions must stay 2-byte aligned.\n";
  }
  return true;
}

} // namespace cir2c
