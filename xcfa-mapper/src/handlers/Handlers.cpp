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

// Forward decl: defined below alongside the exception-handling section so the
// EH state model lives in one place.  Earlier handlers (handleResumeFlat,
// etc.) need it for emitting a function-level unwind return.
static void emitExceptionReturn(mlir::Operation *op, Mapper &m,
                                std::ostream &out);

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

// Describes which terminator op ended a region walk, for callers that need
// to make a decision based on the kind of terminator (e.g. switch/case).
enum class CaseTerminatorKind {
  Yield,  // cir.yield — fallthrough in a case; end-of-region in other contexts
  Break,  // cir.break — explicit break; handler already emitted "break;"
  Other,  // cir.return, cir.unreachable, cir.continue, etc. — already emitted
};

// Walk the first block of `region`, emitting each op via the mapper.  Stops
// at `cir.yield` (which is consumed without emitting) or at a block terminator
// after it has been emitted.  The optional `terminatorKind` out-parameter
// receives the kind of the terminator that ended the walk; callers that do
// not need this can leave it null (default callers: cir.if, cir.scope,
// cir.ternary, cir.cleanup_scope).
bool emitRegionBody(Region &region, Mapper &m, std::ostream &out,
                    std::vector<Value> *yieldedValues = nullptr,
                    CaseTerminatorKind *terminatorKind = nullptr) {
  if (terminatorKind) *terminatorKind = CaseTerminatorKind::Other;
  if (region.empty()) return true;

  std::ostringstream regionOut;
  bool isFirstBlock = true;

  for (Block &block : region.getBlocks()) {
    // Non-first blocks need a label so gotos from the first block can reach them.
    if (!isFirstBlock) {
      std::string lbl = Mapper::sanitizeIdentifier(m.getOrCreateLabel(&block));
      regionOut << lbl << ":\n";
    }
    isFirstBlock = false;

    bool yieldSeen = false;
    Operation *lastOp = nullptr;
    for (Operation &nestedOp : block.getOperations()) {
      if (auto yieldOp = llvm::dyn_cast<cir::YieldOp>(&nestedOp)) {
        if (yieldedValues) {
          yieldedValues->assign(yieldOp->operand_begin(), yieldOp->operand_end());
        }
        if (terminatorKind) *terminatorKind = CaseTerminatorKind::Yield;
        yieldSeen = true;
        break;
      }

      if (!m.mapOperation(&nestedOp, regionOut)) return false;
      lastOp = &nestedOp;

      // cir.break is a block terminator; after emitting it (handleBreak) there
      // are no more ops — record the kind and stop the walk explicitly so that
      // callers (e.g. handleSwitch) know not to emit a redundant "break;".
      if (terminatorKind && llvm::isa<cir::BreakOp>(nestedOp)) {
        *terminatorKind = CaseTerminatorKind::Break;
        break;
      }
    }
    if (yieldSeen) break;

    // If this block ended with a definitive region-exit op (goto, return,
    // continue — NOT cir.br which is an intra-region branch), subsequent
    // blocks are unreachable.  Stop iterating so their cir.yield does not
    // incorrectly set termKind=Yield and trigger spurious cleanup emission.
    if (lastOp && (llvm::isa<cir::GotoOp>(lastOp) ||
                   llvm::isa<cir::ReturnOp>(lastOp) ||
                   llvm::isa<cir::ContinueOp>(lastOp) ||
                   llvm::isa<cir::UnreachableOp>(lastOp) ||
                   llvm::isa<cir::TrapOp>(lastOp)))
      break;
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

  // An empty name is valid: Clang emits unnamed allocas for unused or
  // compiler-generated parameter slots (e.g. `const void* __hint` in
  // std::__new_allocator::allocate).  Just assign a synthetic name.
  if (varName.empty())
    varName = "unnamed";
  
  // Make variable name unique by appending suffix if it's already been used
  // This handles cases where MLIR has multiple allocas with the same name (e.g., in nested scopes)
  // Sanitize first so dots/dashes in CIR names don't produce invalid C identifiers.
  std::string uniqueVarName = m.freshName(m.sanitizeIdentifier(varName));

  // Determine qualifier prefix (_Atomic / volatile) based on access patterns
  // detected during the mapModule pre-scan.  We check the first (and only)
  // result of the alloca against the sets recorded by the pre-scan.
  std::string qualPrefix;
  if (o->getNumResults() > 0) {
    mlir::Value allocaResult = o->getResult(0);
    if (m.isAtomicAlloca(allocaResult))   qualPrefix += "_Atomic ";
    if (m.isVolatileAlloca(allocaResult)) qualPrefix += "volatile ";
  }

  // Get the allocated type (first operand type in the operation signature)
  // cir.alloca returns a pointer, but we want to declare the variable as the pointed-to type
  Type allocaTy = op.getAllocaType();
  
  // Handle struct types first: use typed API instead of textual type string inspection.
  // This needs to come before array check since some struct names might contain "array"
  if (mlir::isa<cir::RecordType>(allocaTy)) {
    std::string ctype = m.mapTypeToC(allocaTy);
    out << "  " << qualPrefix << ctype << " " << uniqueVarName << ";\n";
    for (Value res : o->getResults()) {
      m.setName(res, uniqueVarName);
      m.markAsDirectAccess(res);
    }
    return true;
  }
  
  // Handle array types specially: !cir.array<!s32i x 5> -> int arr[5]
  if (auto arrayTy = llvm::dyn_cast<cir::ArrayType>(allocaTy)) {
    std::string elemCType = m.mapTypeToC(arrayTy.getElementType());
    out << "  " << qualPrefix << elemCType << " " << uniqueVarName << "[" << arrayTy.getSize() << "];\n";
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
  
  out << "  " << qualPrefix << ctype << " " << uniqueVarName << ";\n";
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
      litVal = "((void*)0)"; // "NULL"; - NULL would need to be included
      break;
    }
    // Struct/record constant (e.g. Itanium member-function-pointer {fnptr, adj})
    if (auto cra = llvm::dyn_cast<cir::ConstRecordAttr>(a.getValue())) {
      std::string init = "{";
      bool firstMember = true;
      for (mlir::Attribute member : cra.getMembers()) {
        if (!firstMember) init += ", ";
        firstMember = false;
        if (auto ia = mlir::dyn_cast<cir::IntAttr>(member)) {
          init += std::to_string(ia.getValue().getSExtValue());
        } else if (auto za2 = mlir::dyn_cast<cir::ZeroAttr>(member)) {
          init += "0";
        } else if (auto gva2 = mlir::dyn_cast<cir::GlobalViewAttr>(member)) {
          std::string rawSym = gva2.getSymbol().getValue().str();
          // Member-function-pointer field0: function address encoded as ptrdiff_t.
          // Use the demangled output name so it matches the emitted function definition.
          std::string outSym = m.getFunctionOutputName(rawSym);
          init += "(long)&" + outSym;
        } else {
          init += "0"; // fallback for unknown member types
        }
      }
      init += "}";
      litVal = init;
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
    out << "  // " << ERR_CONSTANT_NO_LITERAL << "\n";
    // Use aggregate initializer for struct/array types; plain 0 is not valid.
    if (resultType &&
        (mlir::isa<cir::RecordType>(resultType) || mlir::isa<cir::ArrayType>(resultType)))
      litVal = "{0}";
    else
      litVal = "0";
  }
  
  std::string tmp = m.freshName("c");
  std::string literal = litVal.value();
  std::string ctype = "int";
  if (o->getNumResults() > 0) {
    ctype = m.mapTypeToC(resultType);
  }

  // Normalize special floating-point literal values that are not valid C
  // expressions (LLVM APFloat::toString() may emit "+Inf", "-Inf", "+NaN", etc.)
  if (literal == "+Inf" || literal == "Inf") {
    if (ctype == "float")       literal = "__builtin_inff()";
    else if (ctype == "long double") literal = "__builtin_infl()";
    else                        literal = "__builtin_inf()";
  } else if (literal == "-Inf") {
    if (ctype == "float")       literal = "-__builtin_inff()";
    else if (ctype == "long double") literal = "-__builtin_infl()";
    else                        literal = "-__builtin_inf()";
  } else if (literal == "+NaN" || literal == "NaN") {
    if (ctype == "float")       literal = "__builtin_nanf(\"\")";
    else if (ctype == "long double") literal = "__builtin_nanl(\"\")";
    else                        literal = "__builtin_nan(\"\")";
  } else if (literal == "-NaN") {
    if (ctype == "float")       literal = "-__builtin_nanf(\"\")";
    else if (ctype == "long double") literal = "-__builtin_nanl(\"\")";
    else                        literal = "-__builtin_nan(\"\")";
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

  // Vtable dispatch chain: if loading from a tracked chain value, propagate
  // the chain and emit a C declaration when the loaded value will be referenced
  // by downstream ops (e.g. virtual-base offset computation).
  if (m.isVtableDispatchValue(ptr)) {
    if (o->getNumResults() > 0) {
      Value result    = o->getResult(0);
      mlir::Value obj = m.getVtableDispatchObject(ptr);
      m.trackVtableDispatch(result, obj);
      bool isFnPtr = false;
      // If the result is a pointer to a function type this is the final
      // function-pointer load -- mark it so that handleCall can emit the
      // __VERIFIER_virtual_call intrinsic.
      if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(result.getType()))
        if (mlir::isa<cir::FuncType>(ptrTy.getPointee())) {
          isFnPtr = true;
          m.markVirtualFnPtr(result);
          // Propagate the virtual function label from the ptr-to-fn-ptr value.
          std::string lbl = m.getVirtualFnLabel(ptr);
          if (!lbl.empty()) m.setVirtualFnLabel(result, lbl);
        }
      std::string name = m.getOrCreateName(result);
      if (!isFnPtr) {
        // Non-function-pointer vtable load (e.g. the vtable pointer itself for
        // virtual-base-offset computation): emit a declaration so that
        // downstream casts/arithmetic that reference this name compile.
        // The source has type void* (ptr-to-vptr mapped to void*), so cast to
        // void** before dereferencing to produce the void* vtable pointer.
        std::string srcName = m.getOrCreateName(ptr);
        out << "  void* " << name << " = *((void**)" << srcName << ");\n";
      }
    }
    return true;
  }


  std::string src = m.getOrCreateName(ptr);
  std::string tmp = m.freshName("t");
  std::string ctype = "int";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());
  // Check if source is marked as direct access (alloca, array, struct)
  // Never dereference direct access values
  bool shouldDereference = !m.isDirectAccess(ptr);
  if (shouldDereference) {
    if (src.size() > 1 && src[0] == '&') {
      out << "  " << ctype << " " << tmp << " = " << src.substr(1) << ";\n";
    } else {
      out << "  " << ctype << " " << tmp << " = *" << src << ";\n";
    }
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

  // Suppress vtable-initialisation stores: when a constructor writes a
  // !cir.vptr value (produced by cir.vtable.address_point) into the object's
  // __vptr slot.  These are internals of the C++ ABI and must not appear in
  // the verification-targeted output.
  if (mlir::isa<cir::VPtrType>(val.getType()))
    return true;

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
        needAddressOf = true;
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
    out << "  // " << ERR_BRCOND_NO_SUCCESSORS << "\n";
    out << "  if (" << cond << ") goto bb_true; else goto bb_false;\n";
    return true;
  }
  
  mlir::Block *trueSucc = o->getSuccessors()[0];
  mlir::Block *falseSucc = o->getSuccessors()[1];
  tlabel = m.getOrCreateLabel(trueSucc);
  flabel = m.getOrCreateLabel(falseSucc);
  
  // Use typed accessors from cir::BrCondOp to get the operand ranges for
  // each successor directly, avoiding manual index arithmetic.
  auto trueOperands  = op.getDestOperandsTrue();
  auto falseOperands = op.getDestOperandsFalse();

  // Simple case: no block arguments
  if (trueSucc->getNumArguments() == 0 && falseSucc->getNumArguments() == 0) {
    out << "  if (" << cond << ") goto " << tlabel << "; else goto " << flabel << ";\n";
    return true;
  }

  // Complex case: emit if-else with phi-assignments before each goto.
  out << "  if (" << cond << ") {\n";
  for (unsigned i = 0; i < (unsigned)trueOperands.size() && i < trueSucc->getNumArguments(); ++i) {
    Value branchArg = trueOperands[i];
    BlockArgument blockArg = trueSucc->getArgument(i);
    out << "    " << m.getOrCreateName(blockArg) << " = " << m.getOrCreateName(branchArg) << ";\n";
  }
  out << "    goto " << tlabel << ";\n";
  out << "  } else {\n";
  for (unsigned i = 0; i < (unsigned)falseOperands.size() && i < falseSucc->getNumArguments(); ++i) {
    Value branchArg = falseOperands[i];
    BlockArgument blockArg = falseSucc->getArgument(i);
    out << "    " << m.getOrCreateName(blockArg) << " = " << m.getOrCreateName(branchArg) << ";\n";
  }
  out << "    goto " << flabel << ";\n";
  out << "  }\n";
  
  return true;
}

// ============================================================================
// Structured control-flow terminators: break and continue
// ============================================================================

// cir.break terminates a switch case or a loop body.  In the structured form
// emitRegionBody recognises it and records CaseTerminatorKind::Break so the
// enclosing switch handler knows not to emit a redundant "break;".  The op
// itself still goes through the normal handler path so the statement appears
// in the C output at the right indentation level.
bool handleBreak(cir::BreakOp op, Mapper &m, std::ostream &out) {
  // Run cleanups for cir.cleanup.scopes that are nested INSIDE the current
  // loop/switch (i.e. pushed after the current loop was entered).  We emit
  // cleanups whose loopDepth >= current loop depth so we only cross the
  // cleanups between this break and its target loop, not outer cleanups.
  m.emitPendingCleanups(out, m.getLoopDepth());
  out << "  break;\n";
  return true;
}

// cir.continue terminates a loop body iteration.
bool handleContinue(cir::ContinueOp op, Mapper &m, std::ostream &out) {
  // Emit cleanups for scopes crossed by this continue (same depth logic as
  // handleBreak).
  m.emitPendingCleanups(out, m.getLoopDepth());
  // If we are inside a cir.for loop, jump to the step label so the increment
  // runs before the next iteration (plain C `continue` would skip the step
  // because the step is emitted at the end of the while(1) body).
  const std::string &stepLabel = m.currentForStepLabel();
  if (!stepLabel.empty()) {
    out << "  goto " << stepLabel << ";\n";
  } else {
    out << "  continue;\n";
  }
  return true;
}

// cir.yield is consumed by emitRegionBody before reaching the dispatcher.
// Register an explicit no-op handler so that any stray cir.yield that escapes
// (e.g. in best-effort mode for a malformed switch) does not trigger
// "no handler registered".
bool handleYield(cir::YieldOp op, Mapper &m, std::ostream &out) {
  // Intentionally emits nothing; emitRegionBody already handles cir.yield.
  return true;
}

// cir.case is always consumed by handleSwitch iterating the switch body.
// Register a no-op handler as a belt-and-suspenders guard in case a cir.case
// somehow reaches the top-level dispatcher (e.g. a malformed module in
// best-effort mode).
bool handleCase(cir::CaseOp op, Mapper &m, std::ostream &out) {
  // Intentionally emits nothing; handleSwitch already processes cir.case.
  return true;
}

bool handleGoto(cir::GotoOp op, Mapper &m, std::ostream &out) {
  // Flush any pending cleanup scopes before jumping: a goto that exits a
  // cir.cleanup.scope boundary must destroy the scoped objects first.
  m.emitPendingCleanups(out, 0);
  out << "  goto " << op.getLabel().str() << ";\n";
  return true;
}

bool handleLabel(cir::LabelOp op, Mapper &m, std::ostream &out) {
  out << op.getLabel().str() << ": ;\n";
  return true;
}

// Common implementation shared by cir.call and cir.try_call. Both ops have the
// same operand/attribute structure; the only difference is that cir.try_call
// is a terminator with two successor blocks (normal/unwind). We treat the
// unwind path as unreachable in our model (no exceptions).
static bool handleCallLikeOp(Operation *o, Mapper &m, std::ostream &out) {
  std::string callee;
  bool isIndirectCall = false;

  // ── Virtual dispatch: check BEFORE the generic indirect-call path ────────
  // If the first operand is a tracked virtual function pointer (produced by
  // the cir.vtable.get_vptr → load → get_virtual_fn_addr → load chain), emit
  // __VERIFIER_virtual_call(object, args...) instead of a function-pointer
  // call.  The verifier tool itself gives the semantics of this intrinsic.
  //
  // The `this` pointer is already present as operand 1 of the CIR call, so we
  // simply skip operand 0 (the fn pointer itself) and forward all remaining
  // operands as arguments.
  if (o->getNumOperands() > 0 && m.isVirtualFnPtr(o->getOperand(0))) {
    std::string args;
    bool firstArg = true;
    for (unsigned i = 1; i < o->getNumOperands(); ++i) {
      if (!firstArg) args += ", ";
      firstArg = false;
      Value argV = o->getOperand(i);
      std::string argName = m.getOrCreateName(argV);
      if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(argV.getType())) {
        bool pointeeIsArray = mlir::isa<cir::ArrayType>(ptrTy.getPointee());
        if (m.isDirectAccess(argV) && !pointeeIsArray)
          argName = "&" + argName;
      }
      args += argName;
    }

    m.setHasVirtualCalls();
    std::string retType = "void";
    if (o->getNumResults() > 0)
      retType = m.mapTypeToC(o->getResult(0).getType());
    std::string intrinsic = "__VERIFIER_virtual_call_" + Mapper::virtualCallTypeSuffix(retType);

    // Build the argument list: this-ptr first, then the virtual fn label as a
    // string literal, then the remaining call arguments.
    std::string fnLabel = m.getVirtualFnLabel(o->getOperand(0));
    std::string labelArg = "\"" + fnLabel + "\"";
    // args already has 'this' + remaining args; prepend the label after 'this'.
    // Re-build: first operand (i=1) is 'this', then label, then rest (i>=2).
    std::string argsWithLabel;
    bool firstArg2 = true;
    for (unsigned i = 1; i < o->getNumOperands(); ++i) {
      if (!firstArg2) argsWithLabel += ", ";
      firstArg2 = false;
      Value argV = o->getOperand(i);
      std::string argName = m.getOrCreateName(argV);
      if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(argV.getType())) {
        bool pointeeIsArray = mlir::isa<cir::ArrayType>(ptrTy.getPointee());
        if (m.isDirectAccess(argV) && !pointeeIsArray)
          argName = "&" + argName;
      }
      argsWithLabel += argName;
      // After the first arg (this ptr), insert the label.
      if (i == 1) argsWithLabel += ", " + labelArg;
    }
    // Edge case: no operands beyond fn ptr (i.e. no this or args).
    if (o->getNumOperands() <= 1) argsWithLabel = labelArg;

    if (o->getNumResults() > 0) {
      std::string tmp   = m.freshName("vcall");
      std::string ctype = retType;
      out << "  " << ctype << " " << tmp
          << " = (" << ctype << ")" << intrinsic << "(" << argsWithLabel << ");\n";
      m.setName(o->getResult(0), tmp);
    } else {
      out << "  " << intrinsic << "(" << argsWithLabel << ");\n";
    }
    return true;
  }
  // ─────────────────────────────────────────────────────────────────────────


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
    std::string retType = "void";
    if (o->getNumResults() > 0)
      retType = m.mapTypeToC(o->getResult(0).getType());
    // Build parameter types from the actual arguments passed, not from the
    // function pointer's declared type.  For Itanium member-function-pointer
    // dispatch, the declared type includes extra ABI parameters (e.g. the
    // original class pointer) that are not actually passed at the call site.
    // Using the operand types ensures the cast matches the actual call.
    std::string paramTypes;
    bool firstParam = true;
    bool isFuncVarArg = false;
    if (o->getNumOperands() > 0) {
      // Check vararg flag from the callee's function type (still needed).
      Value fnPtrVal = o->getOperand(0);
      if (auto ptrTy = llvm::dyn_cast<cir::PointerType>(fnPtrVal.getType()))
        if (auto funcTy = mlir::dyn_cast<cir::FuncType>(ptrTy.getPointee()))
          isFuncVarArg = funcTy.isVarArg();
      // Arguments are operands 1..N (operand 0 is the callee).
      for (unsigned i = 1; i < o->getNumOperands(); ++i) {
        if (!firstParam) paramTypes += ", ";
        firstParam = false;
        paramTypes += m.mapTypeToC(o->getOperand(i).getType());
      }
    }
    if (isFuncVarArg) {
      if (!firstParam) paramTypes += ", ";
      paramTypes += "...";
    }
    callExpr = "((" + retType + " (*)(" + paramTypes + "))" + outCallee + ")";
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

bool handleCall(cir::CallOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (!handleCallLikeOp(o, m, out)) return false;

  // A regular cir.call without the `nothrow` attribute may have left an
  // exception in flight in the callee.  C has no implicit unwind, so we
  // model the unwind edge explicitly: if __cir_exc_active is set, either
  // jump to the enclosing structured try's dispatch label (so its handlers
  // run) or return from the current function, propagating the exception
  // to the caller.  cir.try_call already has explicit successors for this
  // and is handled separately.
  //
  // Only emit the guard when the module actually uses EH ops: if no
  // cir.throw / cir.try / cir.try_call / etc. exist then __cir_exc_active
  // is never declared and the reference would produce a compile error.
  if (!op.getNothrow() && m.hasExceptions()) {
    out << "  if (__cir_exc_active) {\n";
    // Run any pending RAII destructors before propagating the exception.
    // emitPendingCleanups writes to `out` with its own indentation; we wrap
    // the whole guard in a block so the cleanup statements are scoped.
    std::ostringstream cleanupOut;
    m.emitPendingCleanups(cleanupOut, 0);
    // Re-indent: the cleanups were produced at "  " indent; inside the if-block
    // we want one extra level.
    {
      std::istringstream lines(cleanupOut.str());
      std::string line;
      while (std::getline(lines, line)) {
        if (!line.empty()) out << "  ";
        out << line << "\n";
      }
    }
    const std::string &pad = m.currentTryLandingPad();
    if (!pad.empty()) {
      out << "    goto " << pad << ";\n";
    } else {
      auto func = o->getParentOfType<cir::FuncOp>();
      mlir::Type rty = func ? func.getFunctionType().getReturnType()
                            : mlir::Type();
      if (!func || mlir::isa<mlir::NoneType>(rty) ||
          mlir::isa<cir::VoidType>(rty)) {
        out << "    return;\n";
      } else {
        std::string ctype = m.mapTypeToC(rty);
        out << "    " << ctype << " __cir_eh_ret = (" << ctype << ")0;\n";
        out << "    return __cir_eh_ret;\n";
      }
    }
    out << "  }\n";
  }
  return true;
}

bool handleTryCall(cir::TryCallOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (!handleCallLikeOp(o, m, out)) return false;
  m.setHasExceptions();

  // cir.try_call is a terminator with two successors: normal and unwind.
  // Branch to unwind when the callee left an exception in flight.
  if (o->getNumSuccessors() >= 2) {
    mlir::Block *normal = op.getNormalDest();
    mlir::Block *unwind = op.getUnwindDest();
    out << "  if (__cir_exc_active) goto " << m.getOrCreateLabel(unwind)
        << "; else goto " << m.getOrCreateLabel(normal) << ";\n";
  } else if (o->getNumSuccessors() == 1) {
    out << "  goto " << m.getOrCreateLabel(o->getSuccessor(0)) << ";\n";
  }
  return true;
}

bool handleReturn(cir::ReturnOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  // Destructor order: evaluate return value FIRST, then run dtors, then return.
  // C++ standard: destructors of locals run after the return expression is
  // evaluated but before control leaves the function.
  if (o->getNumOperands() == 0) {
    // No return value — emit cleanups then return.
    m.emitPendingCleanups(out, 0);
    out << "  return;\n";
    return true;
  }
  // With a return value: capture it into a temp, run cleanups, return temp.
  std::string rv = m.getOrCreateName(o->getOperand(0));
  // Only introduce a temp when the pending cleanups could shadow the name.
  if (m.getLoopDepth() > 0 || !m.currentForStepLabel().empty() ||
      !m.cleanupStackEmpty()) {
    // Use a stable temp name that won't collide (freshName gives a new name).
    std::string retTmp = m.freshName("ret_val");
    std::string ctype = m.mapTypeToC(o->getOperand(0).getType());
    out << "  " << ctype << " " << retTmp << " = " << rv << ";\n";
    m.emitPendingCleanups(out, 0);
    out << "  return " << retTmp << ";\n";
  } else {
    // No cleanups pending — direct return.
    m.emitPendingCleanups(out, 0);
    out << "  return " << rv << ";\n";
  }
  return true;
}

bool handleUnreachable(cir::UnreachableOp op, Mapper &m, std::ostream &out) {
  out << "  __builtin_unreachable();\n";
  return true;
}

bool handleTrap(cir::TrapOp op, Mapper &m, std::ostream &out) {
  out << "  abort();\n";
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

bool handleBinOpOverflow(Operation *o, Mapper &m, std::ostream &out) {
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

// ============================================================================
// Unary operations
// ============================================================================

// Typed wrappers for overflow ops so they can be registered via registerTypedHandler.
bool handleAddOverflow(cir::AddOverflowOp op, Mapper &m, std::ostream &out) {
  return handleBinOpOverflow(op.getOperation(), m, out);
}
bool handleSubOverflow(cir::SubOverflowOp op, Mapper &m, std::ostream &out) {
  return handleBinOpOverflow(op.getOperation(), m, out);
}
bool handleMulOverflow(cir::MulOverflowOp op, Mapper &m, std::ostream &out) {
  return handleBinOpOverflow(op.getOperation(), m, out);
}

// ============================================================================
// Unary operations (continued)
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
  // CIR 'not' represents logical not for !cir.bool, bitwise complement otherwise.
  const char *opStr = mlir::isa<cir::BoolType>(operand.getType()) ? "!" : "~";
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

  // When the CIR operand is a pointer but our C representation is a
  // direct-access lvalue (e.g. an alloca'd struct or a get_member result),
  // the lvalue itself is not assignment-compatible with a pointer cast.
  // Take its address so `(T*)expr` operates on a real pointer.
  if (m.isDirectAccess(operand) && !opnd.empty() && opnd[0] != '&' &&
      mlir::isa<cir::PointerType>(operand.getType())) {
    opnd = "&(" + opnd + ")";
  }

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
  // The second argument to va_start must be the last named parameter before
  // the ellipsis. We recover this from Mapper state set by mapFunc.
  const std::string &lastParam = m.getLastVarargParamName();
  std::string sentinel = lastParam.empty() ? "0" : lastParam;
  out << "  __builtin_va_start(" << toBuiltinVAList(argList) << ", " << sentinel << ");\n";
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

bool handleVACopy(cir::VACopyOp op, Mapper &m, std::ostream &out) {
  std::string dstArgList = m.getOrCreateName(op.getDstList());
  std::string srcArgList = m.getOrCreateName(op.getSrcList());
  out << "  __builtin_va_copy(" << toBuiltinVAList(dstArgList) << ", "
      << toBuiltinVAList(srcArgList) << ");\n";
  return true;
}

// ============================================================================
// Control flow: switch and select
// ============================================================================

bool handleSwitch(cir::SwitchOp op, Mapper &m, std::ostream &out) {
  // Structured cir.switch: the body region contains cir.case ops followed by a
  // trailing cir.yield (the mandatory region terminator).  Each cir.case has a
  // kind (Default/Equal/Anyof/Range) and a value array, plus its own region.

  std::string condName = m.getOrCreateName(op.getCondition());
  out << "  switch (" << condName << ") {\n";

  for (Operation &bodyOp : op.getBody().front().getOperations()) {
    auto caseOp = llvm::dyn_cast<cir::CaseOp>(bodyOp);
    if (!caseOp) continue; // skip the trailing cir.yield and anything else

    cir::CaseOpKind kind = caseOp.getKind();
    mlir::ArrayAttr values = caseOp.getValue();

    // Emit the case label(s).
    switch (kind) {
    case cir::CaseOpKind::Default:
      out << "  default:\n";
      break;
    case cir::CaseOpKind::Equal:
      for (auto attr : values) {
        auto intAttr = llvm::cast<cir::IntAttr>(attr);
        out << "  case " << intAttr.getValue().getSExtValue() << ":\n";
      }
      break;
    case cir::CaseOpKind::Anyof:
      // Multiple discrete values that all map to the same body.
      for (auto attr : values) {
        auto intAttr = llvm::cast<cir::IntAttr>(attr);
        out << "  case " << intAttr.getValue().getSExtValue() << ":\n";
      }
      break;
    case cir::CaseOpKind::Range:
      // GCC extension: "case lo ... hi:".  values[0] = lo, values[1] = hi.
      if (values.size() == 2) {
        int64_t lo = llvm::cast<cir::IntAttr>(values[0]).getValue().getSExtValue();
        int64_t hi = llvm::cast<cir::IntAttr>(values[1]).getValue().getSExtValue();
        out << "  case " << lo << " ... " << hi << ":\n";
      }
      break;
    }

    // Emit the case body.  Capture the terminator kind to decide whether to
    // emit a "break;" (if the case body explicitly ended with cir.break, the
    // handleBreak handler already emitted it — no second break needed; if it
    // ended with cir.yield, it is a C fallthrough — no break at all).
    CaseTerminatorKind termKind = CaseTerminatorKind::Yield;
    if (!emitRegionBody(caseOp.getCaseRegion(), m, out, nullptr, &termKind))
      return false;
    // termKind == Yield  => fallthrough; omit break
    // termKind == Break  => handleBreak already emitted "break;"
    // termKind == Other  => cir.return/unreachable/continue already emitted
    // In all three cases we do nothing extra here.
    (void)termKind;
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

// NOTE: C++20 coroutine scopes (cir.await / co_await) are intentionally NOT
// handled. The await operation wraps its ready/suspend/resume regions in a
// cir.scope; lowering that to C requires a full coroutine state-machine
// transformation which is out of scope for the current verification target.
bool handleCleanupScope(cir::CleanupScopeOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  // Region 0: normal body.  Region 1: cleanup (destructor) body.
  // The cleanup must run on EVERY exit from the body:
  //   (a) Normal fall-through (cir.yield terminator).
  //   (b) Early exits (cir.return / cir.break / cir.continue) — those
  //       handlers already check the cleanup stack and emit pending cleanups
  //       before their own statement, so nothing extra is needed here.
  //   (c) Exceptional exits — handleCall already emits cleanups before the
  //       `if (__cir_exc_active)` guard when the module uses EH.
  //
  // Push the cleanup region onto the stack before emitting the body so that
  // any early-exit handler inside the body sees it.
  mlir::Region *cleanupRegion =
      (o->getNumRegions() >= 2) ? &o->getRegion(1) : nullptr;
  if (cleanupRegion && !cleanupRegion->empty())
    m.pushCleanup(cleanupRegion);

  CaseTerminatorKind termKind = CaseTerminatorKind::Other;
  if (!emitRegionBody(o->getRegion(0), m, out, nullptr, &termKind))
    return false;

  if (cleanupRegion && !cleanupRegion->empty())
    m.popCleanup();

  // (a) Normal fall-through: emit the cleanup inline, but only when:
  //   - kind != EH  (EH cleanups run on exceptional exits only, not normal ones)
  //   - not already consumed by an emitPendingCleanups call from a goto inside
  //     the body (which would cause double-destruction if we also emit here)
  if (termKind == CaseTerminatorKind::Yield && cleanupRegion &&
      !cleanupRegion->empty() &&
      op.getCleanupKind() != cir::CleanupKind::EH &&
      !m.isCleanupConsumed(cleanupRegion)) {
    out << "  {\n";
    mlir::Block &block = cleanupRegion->front();
    std::ostringstream cleanupOut;
    for (mlir::Operation &cop : block.getOperations()) {
      if (llvm::isa<cir::YieldOp>(cop)) break;
      if (!m.mapOperation(&cop, cleanupOut))
        cleanupOut << "  // (cleanup op could not be mapped)\n";
    }
    // Indent one extra level inside the braces.
    std::istringstream ls(cleanupOut.str());
    std::string ln;
    while (std::getline(ls, ln)) {
      if (!ln.empty()) out << "  ";
      out << ln << "\n";
    }
    out << "  }\n";
  }
  return true;
}

bool handleScope(cir::ScopeOp op, Mapper &m, std::ostream &out) {
  // cir.scope optionally yields a value; capture it and propagate to the
  // result SSA value (if any).
  Operation *o = op.getOperation();
  std::vector<Value> yieldedValues;
  if (!emitRegionBody(o->getRegion(0), m, out,
                      o->getNumResults() > 0 ? &yieldedValues : nullptr))
    return false;
  if (o->getNumResults() > 0) {
    if (yieldedValues.size() != 1) return false;
    m.setName(o->getResult(0), m.getOrCreateName(yieldedValues[0]));
  }
  return true;
}

bool handleIf(cir::IfOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 1 || o->getNumRegions() < 1) return false;

  std::string condName = m.getOrCreateName(o->getOperand(0));
  out << "  if (" << condName << ") {\n";
  if (!emitRegionBody(o->getRegion(0), m, out)) return false;
  out << "  }";

  // elseRegion is always present but may be empty
  if (o->getNumRegions() >= 2 && !o->getRegion(1).empty() &&
      !o->getRegion(1).front().empty()) {
    out << " else {\n";
    if (!emitRegionBody(o->getRegion(1), m, out)) return false;
    out << "  }";
  }
  out << "\n";
  return true;
}

// ============================================================================
// Structured loops: while, do-while, for
// ============================================================================

// Walk a loop condition region (whose block ends with cir.condition(%v)).
// Emits all ops before cir.condition, returns the C name of the bool predicate
// passed to cir.condition.  Sets *ok = false and returns "" on error.
static std::string emitCondRegion(Region &region, Mapper &m, std::ostream &out,
                                   bool *ok) {
  *ok = true;
  if (region.empty()) { *ok = false; return ""; }
  Block &block = region.front();
  std::ostringstream condOut;
  std::string condName;
  for (Operation &nestedOp : block.getOperations()) {
    if (auto condOp = llvm::dyn_cast<cir::ConditionOp>(&nestedOp)) {
      condName = m.getOrCreateName(condOp.getCondition());
      break;
    }
    if (!m.mapOperation(&nestedOp, condOut)) { *ok = false; return ""; }
  }
  out << indentText(condOut.str());
  return condName;
}

// cir.while:
//   while (1) { <cond-region>; if (!cond) break; <body-region>; }
bool handleWhile(cir::WhileOp op, Mapper &m, std::ostream &out) {
  m.enterLoop();
  m.pushForStepLabel("");  // empty = not a for-loop; continue stays plain
  out << "  while (1) {\n";
  bool ok;
  std::string condName = emitCondRegion(op.getCond(), m, out, &ok);
  if (!ok) { m.popForStepLabel(); m.exitLoop(); return false; }
  if (!condName.empty())
    out << "    if (!" << condName << ") break;\n";
  if (!emitRegionBody(op.getBody(), m, out)) {
    m.popForStepLabel(); m.exitLoop(); return false;
  }
  out << "  }\n";
  m.popForStepLabel();
  m.exitLoop();
  return true;
}

// cir.do:
//   do { <body-region>; <cond-region>; if (!cond) break; } while (1);
bool handleDoWhile(cir::DoWhileOp op, Mapper &m, std::ostream &out) {
  m.enterLoop();
  m.pushForStepLabel("");  // empty = not a for-loop
  out << "  do {\n";
  if (!emitRegionBody(op.getBody(), m, out)) {
    m.popForStepLabel(); m.exitLoop(); return false;
  }
  bool ok;
  std::string condName = emitCondRegion(op.getCond(), m, out, &ok);
  if (!ok) { m.popForStepLabel(); m.exitLoop(); return false; }
  if (!condName.empty())
    out << "    if (!" << condName << ") break;\n";
  out << "  } while (1);\n";
  m.popForStepLabel();
  m.exitLoop();
  return true;
}

// cir.for:
//   while (1) { <cond-region>; if (!cond) break; <body-region>;
//               step_label: ; <step-region>; }
// A step label is inserted before the step region so that `continue` inside
// the body can jump to it (via `goto step_label`) rather than skipping the
// increment by targeting the outer while(1) top.
bool handleFor(cir::ForOp op, Mapper &m, std::ostream &out) {
  m.enterLoop();
  std::string stepLabel = m.freshName("for_step");
  m.pushForStepLabel(stepLabel);
  out << "  while (1) {\n";
  bool ok;
  std::string condName = emitCondRegion(op.getCond(), m, out, &ok);
  if (!ok) { m.popForStepLabel(); m.exitLoop(); return false; }
  if (!condName.empty())
    out << "    if (!" << condName << ") break;\n";
  if (!emitRegionBody(op.getBody(), m, out)) {
    m.popForStepLabel(); m.exitLoop(); return false;
  }
  // Step label: `continue` jumps here.
  out << "  " << stepLabel << ": ;\n";
  if (!emitRegionBody(op.getStep(), m, out)) {
    m.popForStepLabel(); m.exitLoop(); return false;
  }
  out << "  }\n";
  m.popForStepLabel();
  m.exitLoop();
  return true;
}

// cir.condition is the terminator of a loop cond region; it is consumed by
// emitCondRegion and never reaches the top-level dispatcher.  Register a
// defensive no-op handler to avoid "no handler registered" for any stray
// occurrences (e.g. malformed input in best-effort mode).
bool handleCondition(cir::ConditionOp op, Mapper &m, std::ostream &out) {
  return true;
}

// ============================================================================
// Structured exception handling: try
// ============================================================================

// cir.try: emit the try body region, then dispatch to one of the handler
// regions based on the in-flight exception type.  handler_types is a list
// parallel to handler_regions; each entry is one of
//   - #cir.global_view<@RTTI_sym>  (typed catch)
//   - #cir.all                     (catch-all)
//   - #cir.unwind                  (unwind continuation, re-raises)
// Typed handlers run when __cir_exc_type matches; the catch-all runs as a
// fallback; the unwind handler re-asserts active and returns from the
// enclosing function so the exception propagates to the caller.
bool handleTry(cir::TryOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();

  // Push a landing-pad label so that any cir.throw inside the body jumps
  // here instead of returning straight out of the function.  The label is
  // emitted at the end of the body, right before the dispatch chain.
  std::string padLabel = m.freshName("cir_try_dispatch");
  m.pushTryLandingPad(padLabel);
  bool bodyOk = emitRegionBody(op.getTryRegion(), m, out);
  m.popTryLandingPad();
  if (!bodyOk) return false;

  out << "  " << padLabel << ": ;\n";

  auto handlerRegions = op.getHandlerRegions();
  mlir::ArrayAttr handlerTypes = op.getHandlerTypes();
  if (handlerRegions.empty()) return true;

  out << "  if (__cir_exc_active) {\n";

  // Classify each handler and chain them as if / else if / else so that
  // only the first matching catch executes, mirroring C++ catch semantics.
  enum class Kind { Typed, CatchAll, Unwind };
  bool firstClause = true;
  bool sawTerminalClause = false; // catch-all or unwind reached
  for (unsigned i = 0; i < handlerRegions.size(); ++i) {
    Region &handler = handlerRegions[i];
    if (handler.empty()) continue;
    if (sawTerminalClause) break;

    Kind kind = Kind::CatchAll;
    std::string typeSym;
    if (handlerTypes && i < handlerTypes.size()) {
      auto attr = handlerTypes[i];
      if (auto gv = mlir::dyn_cast<cir::GlobalViewAttr>(attr)) {
        kind = Kind::Typed;
        typeSym = gv.getSymbol().getValue().str();
        m.registerEhTypeSymbol(typeSym);
      } else if (mlir::isa<cir::UnwindAttr>(attr)) {
        kind = Kind::Unwind;
      } else {
        // CatchAllAttr or anything we don't recognise: treat as catch-all.
        kind = Kind::CatchAll;
      }
    }

    const char *keyword = firstClause ? "if" : "else if";
    const char *elseKeyword = firstClause ? "" : "else ";
    firstClause = false;

    if (kind == Kind::Typed) {
      std::string san = Mapper::sanitizeIdentifier(typeSym);
      out << "  " << keyword << " (__cir_exc_type == (const void*)__cir_eh_type_"
          << san << ") {\n";
      if (!emitRegionBody(handler, m, out)) return false;
      out << "  }\n";
    } else if (kind == Kind::CatchAll) {
      out << "  " << elseKeyword << "{\n";
      if (!emitRegionBody(handler, m, out)) return false;
      out << "  }\n";
      sawTerminalClause = true;
    } else { // Unwind
      out << "  " << elseKeyword << "{\n";
      if (!emitRegionBody(handler, m, out)) return false;
      // Re-raise to the enclosing try (or, if none, the caller).  Pad has
      // already been popped above, so emitExceptionReturn looks at any
      // outer try or the function-level return.
      emitExceptionReturn(op.getOperation(), m, out);
      out << "  }\n";
      sawTerminalClause = true;
    }
  }

  // If no catch-all / unwind clause was emitted and the exception was not
  // matched, keep it in flight and propagate it.
  if (!sawTerminalClause) {
    out << "  else {\n";
    emitExceptionReturn(op.getOperation(), m, out);
    out << "  }\n";
  }

  out << "  }\n";
  return true;
}

// cir.catch_param: appears inside a cir.try handler region (HasParent<TryOp>)
// to retrieve the in-flight exception object.  Cast the global exception
// pointer to the requested type, and mark the exception as caught.
bool handleCatchParam(cir::CatchParamOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();
  if (op->getNumResults() < 1) {
    // Bare `cir.catch_param` (no result): still clear the active flag so
    // the handler runs without re-tripping the dispatch.
    out << "  __cir_exc_active = 0;\n";
    return true;
  }
  std::string ctype = m.mapTypeToC(op->getResult(0).getType());
  std::string tmp = m.freshName("cp_exn");
  // Clang always generates a pointer result, but guard defensively: if the
  // result is a value type, dereference through a pointer cast rather than
  // producing a pointer-as-integer.
  if (!ctype.empty() && ctype.back() == '*')
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")__cir_exc_ptr;\n";
  else
    out << "  " << ctype << " " << tmp << " = *(" << ctype << "*)__cir_exc_ptr;\n";
  out << "  __cir_exc_active = 0;\n";
  m.setName(op->getResult(0), tmp);
  return true;
}

// cir.resume.flat: post-CFG-flattening form of cir.resume that propagates an
// uncaught exception to the caller.  Re-raise by keeping __cir_exc_active
// set and returning from the current function.
bool handleResumeFlat(cir::ResumeFlatOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();
  out << "  __cir_exc_active = 1;\n";
  emitExceptionReturn(op.getOperation(), m, out);
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

  // Anonymous members (empty name attr) are emitted into the struct definition
  // as `field<N>` by the struct collector in Mapper.cpp (the "_M_local_buf"-
  // bearing anonymous union inside libstdc++ basic_string is the canonical
  // example). Mirror that scheme here using the op's `index_attr` so the
  // access expression resolves to a real field.
  if (memberName.empty()) {
    if (auto ia = o->getAttrOfType<mlir::IntegerAttr>("index_attr"))
      memberName = "field" + std::to_string(ia.getInt());
  }

  if (memberName.empty()) {
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
    // If baseName is already address-of (e.g. "&op"), wrap it so that -> binds
    // to the struct value, not to the address: (&op)->field rather than &op->field.
    if (!baseName.empty() && baseName[0] == '&')
      expr = "(" + baseName + ")->" + memberName;
    else
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

// cir.extract_member extracts the value of a field from a struct value
// (not a pointer). Used e.g. for Itanium member-function-pointer fields.
bool handleExtractMember(cir::ExtractMemberOp op, Mapper &m, std::ostream &out) {
  std::string recName = m.getOrCreateName(op.getRecord());
  uint64_t index = op.getIndex();
  std::string tmp = m.freshName("v");
  std::string ctype = m.mapTypeToC(op.getResult().getType());
  out << "  " << ctype << " " << tmp << " = " << recName << ".__field" << index << ";\n";
  m.setName(op.getResult(), tmp);
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
    // get_element always produces base[index] which is the element lvalue;
    // mark as direct access so load/store don't add an extra dereference.
    m.markAsDirectAccess(o->getResult(0));
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

  // Default policy: prefer array-style indexing syntax over raw pointer
  // arithmetic because downstream verifiers generally support indexing better.
  // Keep a conservative fallback to `base + stride` for unsupported pointer
  // categories (e.g., void/function pointers).
  static constexpr bool kPreferIndexedPtrStride = true;
  
  std::string tmp = m.freshName("ptr");
  std::string ctype = "int*";
  if (o->getNumResults() > 0) ctype = m.mapTypeToC(o->getResult(0).getType());

  bool canUseIndexedForm = false;
  if (auto basePtrTy = llvm::dyn_cast<cir::PointerType>(base.getType())) {
    mlir::Type pointee = basePtrTy.getPointee();
    bool unsupportedIndexedPointee = mlir::isa<cir::VoidType>(pointee) ||
                                     mlir::isa<cir::FuncType>(pointee) ||
                                     mlir::isa<mlir::NoneType>(pointee);
    canUseIndexedForm = !unsupportedIndexedPointee;
  }

  if (kPreferIndexedPtrStride && canUseIndexedForm) {
    out << "  " << ctype << " " << tmp << " = &(" << baseName << ")[" << strideName << "];\n";
  } else {
    out << "  " << ctype << " " << tmp << " = " << baseName << " + " << strideName << ";\n";
  }
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
  // Direct-access values are C lvalues (variables, `a.b`, `p->b`, `a[i]`) —
  // to use them in pointer arithmetic we need their address. Wrap in parens
  // so member/index chains stay grouped under the unary &.
  if (m.isDirectAccess(base) && !baseName.empty() && baseName[0] != '&') {
    baseName = "&(" + baseName + ")";
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
  // NOTE: cir.copy is spelled as "cir.copy %src to %dst", but in the
  // generated op API operand(0) is the destination and operand(1) is the
  // source. Use typed accessors to avoid accidental reversal.
  Value src = op.getSrc();
  Value dst = op.getDst();
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
      out << "  for (unsigned long i = 0; i < " << size << "; ++i) { " << dstName << "[i] = " << srcName << "[i]; }\n";
      return true;
    }
  }
  // Struct/scalar copy. cir.copy semantically does `*dst = *src` — both
  // operands are pointers. In C, a direct-access value's name *is* the
  // lvalue (no deref needed); a non-direct-access name is a pointer and
  // needs `*`. Adjust each side accordingly so the assignment types match.
  std::string dstExpr = m.isDirectAccess(dst) ? dstName : ("*" + dstName);
  std::string srcExpr = m.isDirectAccess(src) ? srcName : ("*" + srcName);
  out << "  " << dstExpr << " = " << srcExpr << "; // copy\n";
  return true;
}

bool handleStackSave(cir::StackSaveOp op, Mapper &m, std::ostream &out) {
  // VLA stack bookkeeping — irrelevant for reachability verification.
  // Give the result a name (it may be consumed by StackRestore) but emit
  // nothing.
  Operation *o = op.getOperation();
  if (o->getNumResults() > 0) m.getOrCreateName(o->getResult(0));
  return true;
}

bool handleStackRestore(cir::StackRestoreOp op, Mapper &m, std::ostream &out) {
  // VLA stack bookkeeping — irrelevant for reachability verification.
  return true;
}

bool handleGetBitfield(cir::GetBitfieldOp op, Mapper &m, std::ostream &out) {
  Value addr = op.getAddr();
  std::string addrName = m.getOrCreateName(addr);
  cir::BitfieldInfoAttr info = op.getBitfieldInfo();
  uint64_t offset = info.getOffset();
  uint64_t width = info.getSize();
  bool isSigned = info.getIsSigned();
  std::string ctype = m.mapTypeToC(op.getResult().getType());
  std::string storageExpr = m.isDirectAccess(addr) ? addrName : ("(*" + addrName + ")");
  // Guard against width==64 to avoid UB in shift (1ULL<<64).
  uint64_t mask = (width >= 64) ? ~0ULL : ((1ULL << width) - 1);
  std::string tmp = m.freshName("bf");
  if (!isSigned) {
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")((unsigned long)("
        << storageExpr << ") >> " << offset << " & " << mask << "ULL);\n";
  } else {
    // Sign-extend using the portable formula: (raw ^ signbit) - signbit
    uint64_t signbit = 1ULL << (width - 1);
    std::string raw = m.freshName("bf_raw");
    out << "  unsigned long " << raw << " = (unsigned long)(" << storageExpr
        << ") >> " << offset << " & " << mask << "ULL;\n";
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")((" << raw << " ^ "
        << signbit << "ULL) - " << signbit << "ULL);\n";
  }
  m.setName(op.getResult(), tmp);
  return true;
}

bool handleSetBitfield(cir::SetBitfieldOp op, Mapper &m, std::ostream &out) {
  Value addr = op.getAddr();
  Value src = op.getSrc();
  std::string addrName = m.getOrCreateName(addr);
  std::string srcName = m.getOrCreateName(src);
  cir::BitfieldInfoAttr info = op.getBitfieldInfo();
  uint64_t offset = info.getOffset();
  uint64_t width = info.getSize();
  bool isSigned = info.getIsSigned();
  std::string ctype = m.mapTypeToC(op.getResult().getType());
  std::string storageExpr = m.isDirectAccess(addr) ? addrName : ("(*" + addrName + ")");
  uint64_t mask = (width >= 64) ? ~0ULL : ((1ULL << width) - 1);
  // Update storage: clear field bits then OR in new value
  out << "  " << storageExpr << " = (unsigned long)(" << storageExpr << ") & ~("
      << mask << "ULL << " << offset << ") | ((unsigned long)(" << srcName
      << ") & " << mask << "ULL) << " << offset << ";\n";
  // Result: new bitfield value read back (with possible sign extension)
  std::string tmp = m.freshName("bf");
  if (!isSigned) {
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")((unsigned long)("
        << storageExpr << ") >> " << offset << " & " << mask << "ULL);\n";
  } else {
    uint64_t signbit = 1ULL << (width - 1);
    std::string raw = m.freshName("bf_raw");
    out << "  unsigned long " << raw << " = (unsigned long)(" << storageExpr
        << ") >> " << offset << " & " << mask << "ULL;\n";
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")((" << raw << " ^ "
        << signbit << "ULL) - " << signbit << "ULL);\n";
  }
  m.setName(op.getResult(), tmp);
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
    out << "  // " << ERR_GET_GLOBAL_NO_NAME << "\n";
    globalName = "global_var";
  }

  // Keep the raw name for function-output-name lookup before sanitization.
  std::string rawGlobalName = globalName;
  
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
  // Inline get_global by binding SSA names directly to expressions that refer
  // to the global symbol. This avoids unnecessary temporaries such as
  //   void* g118 = &f1;
  // before calls/loads/stores.

  // Pointer-global special case:
  // get_global of a pointer variable returns a pointer-to-pointer (int** for
  // int*). Subsequent stores/loads should target the global lvalue itself.
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

    // Function-pointer global: use the demangled output name (same as what
    // mapFunc emits for the definition) so the reference resolves correctly.
    if (mlir::isa<cir::FuncType>(pointeeType)) {
      std::string outName = m.getFunctionOutputName(rawGlobalName);
      m.setName(o->getResult(0), "&" + outName);
      return true;
    }

    // Generic pointer-to-object global: use address-of expression directly.
    m.setName(o->getResult(0), "&" + globalName);
    return true;
  }

  // Conservative fallback (unexpected non-pointer result): still bind directly.
  m.setName(o->getResult(0), globalName);
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

// ============================================================================
// VTable / virtual dispatch operations
// ============================================================================

// cir.vtable.address_point: produces a !cir.vptr used to initialise the
// __vptr field of an object in a constructor.  The value is only ever stored
// into the __vptr slot (which we suppress in handleStore), so we just give
// the result a name and emit nothing.
bool handleVTableAddrPoint(cir::VTableAddrPointOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() > 0)
    m.getOrCreateName(op->getResult(0));
  return true;
}

// cir.vtable.get_vptr: retrieves the address of the __vptr field of an
// object.  We register the result in the dispatch chain and emit nothing.
bool handleVTableGetVPtr(cir::VTableGetVPtrOp op, Mapper &m, std::ostream &out) {
  if (op->getNumOperands() > 0 && op->getNumResults() > 0) {
    m.trackVtableDispatch(op->getResult(0), op.getSrc());
    std::string name = m.getOrCreateName(op->getResult(0));
    std::string src  = m.getOrCreateName(op.getSrc());
    // Source must be a pointer expression. If it's a direct-access lvalue
    // (e.g. a local struct), take its address first.
    if (m.isDirectAccess(op.getSrc()) && !src.empty() && src[0] != '&')
      src = "&(" + src + ")";
    // The result is the address of the __vptr field; type !cir.ptr<!cir.vptr>
    // maps to void** (the slot holds a void* vtable pointer). The vptr is at
    // offset 0 of the struct, so its address equals the struct address.
    out << "  void** " << name << " = (void**)" << src << ";\n";
  }
  return true;
}

// cir.vtable.get_virtual_fn_addr: index into the vtable to get the address
// of a specific virtual function pointer.  We extend the dispatch chain and
// emit nothing.
bool handleVTableGetVirtualFnAddr(cir::VTableGetVirtualFnAddrOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() > 0) {
    Value vptr   = op.getVptr();
    Value result = op->getResult(0);
    mlir::Value chainRoot = m.isVtableDispatchValue(vptr)
                                ? m.getVtableDispatchObject(vptr)
                                : vptr;
    m.trackVtableDispatch(result, chainRoot);
    m.getOrCreateName(result);

    // Determine a label for this virtual slot so handleCall can pass it as
    // the second argument to __VERIFIER_virtual_call_<type>.
    int slot = static_cast<int>(op.getIndex());
    std::string rec_name;
    if (chainRoot) {
      mlir::Type objTy = chainRoot.getType();
      if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(objTy))
        if (auto recTy = mlir::dyn_cast<cir::RecordType>(ptrTy.getPointee()))
          if (recTy.getName())
            rec_name = recTy.getName().getValue().str();
    }
    if (rec_name.empty()) {
      llvm::errs() << "xcfa-mapper: error: cannot determine static type for "
                      "virtual call (slot " << slot << "); cannot emit label.\n";
      return false;
    }
    std::string label = m.getVtableSlotLabel(rec_name, slot);
    if (label.empty()) return false; // error already printed by getVtableSlotLabel
    m.setVirtualFnLabel(result, label);
  }
  return true;
}

// cir.vtable.get_type_info: retrieves the type_info pointer from a vtable.
// For verification we emit a null-pointer placeholder.
bool handleVTableGetTypeInfo(cir::VTableGetTypeInfoOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() > 0) {
    std::string tmp   = m.freshName("tinfo");
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    out << "  " << ctype << " " << tmp << " = (" << ctype << ")0;\n";
    m.setName(op->getResult(0), tmp);
  }
  return true;
}

// ============================================================================
// VTT / derived-class address handlers
// ============================================================================

// cir.vtt.address_point retrieves a !cir.ptr<!cir.ptr<!void>> element from a
// VTT (virtual table table) and is consumed by base-class constructors so
// they can install the appropriate __vptr in virtually-inherited subobjects.
// We do not model vtables faithfully; the only downstream effect that
// matters is the eventual cir.store of a !cir.vptr into a __vptr field,
// which handleStore already suppresses.  To keep the intermediate C valid
// (the result is passed by name into a constructor call that dereferences
// it), point at a fresh static !void* slot initialised to null.  Reads
// through the chain then yield 0 — a benign null vptr that the suppressed
// store discards.
bool handleVTTAddrPoint(cir::VTTAddrPointOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() < 1) return false;
  std::string ctype = m.mapTypeToC(op->getResult(0).getType());
  std::string target = m.freshName("vtt_slot");
  std::string tmp    = m.freshName("vtt");
  out << "  static void *" << target << " = 0;\n";
  out << "  " << ctype << " " << tmp << " = (" << ctype << ")&" << target << ";\n";
  m.setName(op->getResult(0), tmp);
  return true;
}

// cir.derived_class_addr is the inverse of cir.base_class_addr: given a base
// pointer it returns a pointer to the enclosing derived object by going
// backwards in memory by the given offset (lowering to a negative offset).
// Mirror handleBaseClassAddr but subtract the offset instead of adding it.
bool handleDerivedClassAddr(Operation *o, Mapper &m, std::ostream &out) {
  if (o->getNumOperands() < 1 || o->getNumResults() < 1) return false;

  Value base = o->getOperand(0);
  std::string baseName = m.getOrCreateName(base);
  if (m.isDirectAccess(base) && !baseName.empty() && baseName[0] != '&') {
    baseName = "&(" + baseName + ")";
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

  std::string adjustedExpr = "(" + resultType + ")((char *)" + baseName + " - " + std::to_string(offset) + ")";
  if (!isNonnull) {
    adjustedExpr = "((" + baseName + ") ? " + adjustedExpr + " : (" + resultType + ")0)";
  }

  std::string tmp = m.freshName("derived");
  out << "  " << resultType << " " << tmp << " = " << adjustedExpr << ";\n";
  m.setName(o->getResult(0), tmp);
  return true;
}

// ============================================================================
// libc handlers
// ============================================================================

// cir.libc.memchr lowers 1:1 to C's memchr(src, pattern, len).
bool handleMemChr(cir::MemChrOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  if (o->getNumOperands() < 3 || o->getNumResults() < 1) return false;
  std::string src = m.getOrCreateName(o->getOperand(0));
  std::string pat = m.getOrCreateName(o->getOperand(1));
  std::string len = m.getOrCreateName(o->getOperand(2));
  std::string ctype = m.mapTypeToC(o->getResult(0).getType());
  std::string tmp = m.freshName("memchr");
  // Use the GCC builtin so we don't need <string.h> or an extern declaration.
  out << "  " << ctype << " " << tmp << " = (" << ctype << ")__builtin_memchr("
      << src << ", " << pat << ", " << len << ");\n";
  m.setName(o->getResult(0), tmp);
  return true;
}

// ============================================================================
// Bit-counting handler: cir.clz
// ============================================================================

bool handleClz(cir::BitClzOp op, Mapper &m, std::ostream &out) {
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

// ============================================================================
// Compile-time constant probe: cir.is_constant
// ============================================================================

// `__builtin_constant_p` returns 1 only for manifest constants, and any code
// guarded by it must produce the same result on the runtime branch.  Returning
// 0 is therefore always semantically safe and avoids relying on the host
// compiler's notion of "manifest constant" matching CIR's.
bool handleIsConstant(cir::IsConstantOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() < 1) return false;
  std::string ctype = m.mapTypeToC(op->getResult(0).getType());
  std::string tmp = m.freshName("isconst");
  out << "  " << ctype << " " << tmp << " = 0;\n";
  m.setName(op->getResult(0), tmp);
  return true;
}

// ============================================================================
// Exception handling
// ============================================================================
//
// C++ exceptions are modelled in plain C through a small set of file-scope
// globals declared by Mapper::mapModule when any EH op is present:
//
//   static void       *__cir_exc_ptr;       // in-flight exception object
//   static const void *__cir_exc_type;      // RTTI tag address (see below)
//   static unsigned    __cir_exc_type_id;   // numeric tag (address-as-int)
//   static int         __cir_exc_active;    // 1 while an exception is in flight
//
// Each RTTI symbol referenced from a throw or catch list gets a distinct
// `static const char __cir_eh_type_<sanitized_sym>[]` so that comparing
// exception types reduces to a pointer comparison.
//
// Control-flow rules implemented by the handlers below:
//   * cir.throw  — store ptr/type into the globals, set active, return from
//                  the enclosing function with a default value.
//   * cir.try_call — emit the call, then branch to the unwind successor when
//                    __cir_exc_active is set, otherwise to the normal one.
//   * cir.try   — emit the body, then if active, walk the handler list and
//                 jump into the first matching one (a typed match clears
//                 __cir_exc_active before running the handler).
//   * cir.eh.dispatch — same idea but on flat CFGs, branching to one of the
//                       successor blocks based on __cir_exc_type.
//   * cir.catch_param / cir.begin_catch — bind the exception pointer to the
//                                          handler's local and clear active.
//   * cir.resume(.flat) — re-raise: keep active set and return.

// Emit the C statement that hands control to whatever should run when the
// current function is unwinding due to an exception.  If we are inside the
// body of a structured cir.try, jump to that try's dispatch label so its
// handlers run.  Otherwise return from the function with a default value of
// the declared return type, propagating the exception to the caller.
static void emitExceptionReturn(mlir::Operation *op, Mapper &m,
                                std::ostream &out) {
  const std::string &pad = m.currentTryLandingPad();
  if (!pad.empty()) {
    out << "  goto " << pad << ";\n";
    return;
  }
  auto func = op->getParentOfType<cir::FuncOp>();
  if (!func) {
    out << "  return;\n";
    return;
  }
  cir::FuncType fty = func.getFunctionType();
  mlir::Type rty = fty.getReturnType();
  if (mlir::isa<mlir::NoneType>(rty) || mlir::isa<cir::VoidType>(rty)) {
    out << "  return;\n";
    return;
  }
  std::string ctype = m.mapTypeToC(rty);
  out << "  { " << ctype << " __cir_eh_ret = (" << ctype
      << ")0; return __cir_eh_ret; }\n";
}

// cir.eh.inflight_exception is the first op in a try_call unwind block.
// It produces the (exception_ptr, type_id) pair from the in-flight exception,
// which we have stored in the global EH state.
bool handleEhInflight(cir::EhInflightOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();
  // Also register every type in the catch list so the type-tag globals exist
  // before any compare against them.
  if (auto types = op.getCatchTypeListAttr()) {
    for (auto attr : types) {
      if (auto sym = mlir::dyn_cast<mlir::FlatSymbolRefAttr>(attr))
        m.registerEhTypeSymbol(sym.getValue().str());
    }
  }
  if (op->getNumResults() >= 1) {
    std::string p = m.freshName("exc_ptr");
    out << "  void *" << p << " = __cir_exc_ptr;\n";
    m.setName(op->getResult(0), p);
  }
  if (op->getNumResults() >= 2) {
    std::string t = m.freshName("exc_tid");
    std::string ctype = m.mapTypeToC(op->getResult(1).getType());
    out << "  " << ctype << " " << t << " = (" << ctype
        << ")__cir_exc_type_id;\n";
    m.setName(op->getResult(1), t);
  }
  return true;
}

// cir.eh.typeid maps a global RTTI symbol to the numeric tag we use for
// dispatch (address of the per-symbol type tag, cast to the result int type).
bool handleEhTypeId(cir::EhTypeIdOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() < 1) return false;
  m.setHasExceptions();
  std::string sym = op.getTypeSym().str();
  m.registerEhTypeSymbol(sym);
  std::string san = Mapper::sanitizeIdentifier(sym);
  std::string ctype = m.mapTypeToC(op->getResult(0).getType());
  std::string tmp = m.freshName("type_id");
  out << "  " << ctype << " " << tmp << " = (" << ctype
      << ")(unsigned long)__cir_eh_type_" << san << ";\n";
  m.setName(op->getResult(0), tmp);
  return true;
}

bool handleEhSetjmp(cir::EhSetjmpOp op, Mapper &m, std::ostream &out) {
  out << "  // " << ERR_EH_SETJMP_UNSUPPORTED << "\n";
  return true;
}

bool handleEhLongjmp(cir::EhLongjmpOp op, Mapper &m, std::ostream &out) {
  out << "  // " << ERR_EH_LONGJMP_UNSUPPORTED << "\n";
  return true;
}

// cir.eh.initiate appears at the start of an unwind block in flattened CIR.
// Its result is an opaque !cir.eh_token that downstream ops (begin_catch,
// begin_cleanup, eh.dispatch) thread through.  Our model keeps the actual
// exception state in globals, so the token only needs a placeholder name.
bool handleEhInitiate(cir::EhInitiateOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() < 1) return false;
  m.setHasExceptions();
  std::string ctype = m.mapTypeToC(op->getResult(0).getType());
  std::string tmp = m.freshName("eh_tok");
  out << "  " << ctype << " " << tmp << " = 0;\n";
  m.setName(op->getResult(0), tmp);
  return true;
}

// cir.eh.terminate marks the end of the world: an exception was thrown
// during cleanup unwinding, which std::terminate()s in C++.  abort() is the
// closest C equivalent.
bool handleEhTerminate(cir::EhTerminateOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();
  out << "  abort();\n";
  return true;
}

// cir.eh.dispatch branches to one of its successor blocks based on the
// type of the in-flight exception.  catch_types is a parallel array to
// catch_destinations; the default_destination is taken when no typed entry
// matches (either as catch-all when default_is_catch_all is set, or as
// continued unwind).
bool handleEhDispatch(cir::EhDispatchOp op, Mapper &m, std::ostream &out) {
  Operation *o = op.getOperation();
  m.setHasExceptions();

  // Helper: forward the dispatch op's eh_token operand into a successor block
  // that takes one block-arg (mirrors handleBr's phi forwarding).  The caller
  // provides the indent prefix so the assignment lines up with surrounding
  // statements.
  auto forwardEhToken = [&](mlir::Block *succ, const char *indent) {
    unsigned n = std::min(o->getNumOperands(),
                          (unsigned)succ->getNumArguments());
    for (unsigned i = 0; i < n; ++i) {
      std::string blockArgName  = m.getOrCreateName(succ->getArgument(i));
      std::string branchArgName = m.getOrCreateName(o->getOperand(i));
      out << indent << blockArgName << " = " << branchArgName << ";\n";
    }
  };

  if (o->getNumSuccessors() == 0) {
    out << "  abort();\n";
    return true;
  }

  mlir::ArrayAttr catchTypes = op.getCatchTypesAttr();
  // catch_destinations are successors 1..N; the default is successor 0.
  mlir::SuccessorRange catchDests = op.getCatchDestinations();

  unsigned typedCount = catchTypes ? catchTypes.size() : 0;
  unsigned destCount = catchDests.size();
  unsigned n = std::min(typedCount, destCount);

  // Known limitation: dispatch uses exact pointer equality on the RTTI tag.
  // A `catch (Base &)` block will NOT fire for a `Derived` exception because
  // C++ inheritance is not modelled here.  This is a deliberate approximation
  // for verification: the miss is conservative (the handler is unreachable in
  // the model when it would have been reachable in the real program).
  for (unsigned i = 0; i < n; ++i) {
    auto attr = catchTypes[i];
    auto gv = mlir::dyn_cast<cir::GlobalViewAttr>(attr);
    if (!gv) continue; // catch_all / unwind are encoded by default_destination
    std::string sym = gv.getSymbol().getValue().str();
    m.registerEhTypeSymbol(sym);
    std::string san = Mapper::sanitizeIdentifier(sym);
    mlir::Block *succ = catchDests[i];
    std::string lbl = m.getOrCreateLabel(succ);
    out << "  if (__cir_exc_type == (const void*)__cir_eh_type_" << san
        << ") {\n";
    forwardEhToken(succ, "    ");
    out << "    goto " << lbl << ";\n";
    out << "  }\n";
  }

  mlir::Block *defaultSucc = op.getDefaultDestination();
  // Whether catch-all or continued unwind, we drop into the default block.
  // For catch-all the handler will clear __cir_exc_active; for the unwind
  // path the exception stays in flight and is resumed.
  forwardEhToken(defaultSucc, "  ");
  out << "  goto " << m.getOrCreateLabel(defaultSucc) << ";\n";
  return true;
}

bool handleBeginCleanup(cir::BeginCleanupOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() < 1) return false;
  std::string ctype = m.mapTypeToC(op->getResult(0).getType());
  std::string tmp = m.freshName("cl_tok");
  out << "  " << ctype << " " << tmp << " = 0;\n";
  m.setName(op->getResult(0), tmp);
  return true;
}

bool handleEndCleanup(cir::EndCleanupOp op, Mapper &m, std::ostream &out) {
  return true;
}

// cir.begin_catch starts a catch handler.  It returns a catch-token (opaque
// in our model) and a pointer to the caught exception object, which we
// produce by casting the global __cir_exc_ptr to the result pointer type.
// Entering a catch means the exception has been caught: clear the active
// flag so subsequent calls don't see it as still-in-flight.
bool handleBeginCatch(cir::BeginCatchOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();
  if (op->getNumResults() >= 1) {
    std::string ctype = m.mapTypeToC(op->getResult(0).getType());
    std::string t = m.freshName("ca_tok");
    out << "  " << ctype << " " << t << " = 0;\n";
    m.setName(op->getResult(0), t);
  }
  if (op->getNumResults() >= 2) {
    std::string ctype = m.mapTypeToC(op->getResult(1).getType());
    std::string p = m.freshName("ca_exn");
    if (!ctype.empty() && ctype.back() == '*')
      out << "  " << ctype << " " << p << " = (" << ctype << ")__cir_exc_ptr;\n";
    else
      out << "  " << ctype << " " << p << " = *(" << ctype << "*)__cir_exc_ptr;\n";
    m.setName(op->getResult(1), p);
  }
  out << "  __cir_exc_active = 0;\n";
  return true;
}

// cir.end_catch closes a catch handler.  In our model the catch entry has
// already cleared __cir_exc_active; nothing more to do here.
bool handleEndCatch(cir::EndCatchOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();
  return true;
}

// cir.throw stores the in-flight exception in the global EH state and then
// transfers control out of the current function by returning.  The enclosing
// cir.try (or a caller's cir.try_call) is responsible for checking
// __cir_exc_active to dispatch the matching handler.  Both the typed-throw
// (`cir.throw %ptr, @rtti[, @dtor]`) and the bare rethrow form
// (`cir.throw`) are supported -- the latter leaves the EH state untouched
// and merely re-asserts that the exception is in flight.
bool handleThrow(cir::ThrowOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();

  if (!op.rethrows()) {
    if (op.getExceptionPtr()) {
      std::string excName = m.getOrCreateName(op.getExceptionPtr());
      out << "  __cir_exc_ptr = (void*)" << excName << ";\n";
    } else {
      out << "  __cir_exc_ptr = (void*)0;\n";
    }
    if (auto ti = op.getTypeInfoAttr()) {
      std::string sym = ti.getValue().str();
      m.registerEhTypeSymbol(sym);
      std::string san = Mapper::sanitizeIdentifier(sym);
      out << "  __cir_exc_type = (const void*)__cir_eh_type_" << san << ";\n";
      out << "  __cir_exc_type_id = (unsigned long)__cir_eh_type_" << san << ";\n";
    } else {
      // Untyped throw: clear the type tag so dispatch falls through to
      // catch-all handlers only.
      out << "  __cir_exc_type = (const void*)0;\n";
      out << "  __cir_exc_type_id = 0;\n";
    }
  }
  out << "  __cir_exc_active = 1;\n";
  // Run any RAII cleanup regions that are in scope at the throw site, mirroring
  // what handleReturn does before returning.  CIR-level unwind regions handle
  // destructor calls at the CIR layer, but cleanupStack_ tracks scopes that
  // were pushed by the mapper itself and must always be drained.
  m.emitPendingCleanups(out, 0);
  emitExceptionReturn(op.getOperation(), m, out);
  return true;
}

// cir.resume continues unwinding when no catch matches.  The exception
// remains in flight (__cir_exc_active stays set); we propagate it to the
// caller by returning from the current function with a default value.
bool handleResume(cir::ResumeOp op, Mapper &m, std::ostream &out) {
  m.setHasExceptions();
  out << "  __cir_exc_active = 1;\n";
  emitExceptionReturn(op.getOperation(), m, out);
  return true;
}

// cir.alloc.exception conceptually calls __cxa_allocate_exception.  Since the
// allocated buffer is only ever consumed by the (unreachable) throw path, we
// hand out a stack buffer of the requested size cast to the result pointer
// type.  This keeps any in-between cir.store ops well-defined.
bool handleAllocException(cir::AllocExceptionOp op, Mapper &m, std::ostream &out) {
  if (op->getNumResults() < 1) return false;
  uint64_t size = 0;
  if (auto sa = op->getAttrOfType<mlir::IntegerAttr>("size"))
    size = static_cast<uint64_t>(sa.getInt());
  if (size == 0) size = 16;  // safety floor for any pathological 0-sized cases
  std::string ctype = m.mapTypeToC(op->getResult(0).getType());
  std::string buf = m.freshName("exc_buf");
  std::string tmp = m.freshName("exc");
  // Static storage: the address must remain valid after the throwing function
  // returns (the catcher dereferences __cir_exc_ptr in its own frame).
  // freshName guarantees each throw site gets its own uniquely-named static.
  out << "  static char " << buf << "[" << size << "] = {0};\n";
  out << "  " << ctype << " " << tmp << " = (" << ctype << ")" << buf << ";\n";
  m.setName(op->getResult(0), tmp);
  return true;
}

// =============================================================================
// Floating-point math function handlers (Fix 5)
// =============================================================================

// Choose the correct C math function name by appending a suffix for
// float ("f") or long double ("l") variants.
static std::string fpMathFuncName(const char *base, const std::string &ctype) {
  std::string name = base;
  if (ctype == "float")            name += "f";
  else if (ctype == "long double") name += "l";
  return name;
}

// Unary floating-point op: result type = operand type (FP→FP).
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

// Unary FP→Int op: result is an integer, function suffix determined by the
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

// Binary FP→FP op.
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

// ---- Unary FP→FP handlers ----
bool handleSqrt(cir::SqrtOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("sqrt",      op.getOperation(), m, out); }
bool handleACos(cir::ACosOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("acos",      op.getOperation(), m, out); }
bool handleASin(cir::ASinOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("asin",      op.getOperation(), m, out); }
bool handleATan(cir::ATanOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("atan",      op.getOperation(), m, out); }
bool handleCeil(cir::CeilOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("ceil",      op.getOperation(), m, out); }
bool handleCos(cir::CosOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("cos",       op.getOperation(), m, out); }
bool handleExp(cir::ExpOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("exp",       op.getOperation(), m, out); }
bool handleExp2(cir::Exp2Op op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("exp2",      op.getOperation(), m, out); }
bool handleLog(cir::LogOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("log",       op.getOperation(), m, out); }
bool handleLog10(cir::Log10Op op, Mapper &m, std::ostream &out)         { return handleUnaryFPOp("log10",     op.getOperation(), m, out); }
bool handleLog2(cir::Log2Op op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("log2",      op.getOperation(), m, out); }
bool handleNearbyint(cir::NearbyintOp op, Mapper &m, std::ostream &out) { return handleUnaryFPOp("nearbyint", op.getOperation(), m, out); }
bool handleRint(cir::RintOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("rint",      op.getOperation(), m, out); }
bool handleRound(cir::RoundOp op, Mapper &m, std::ostream &out)         { return handleUnaryFPOp("round",     op.getOperation(), m, out); }
bool handleRoundEven(cir::RoundEvenOp op, Mapper &m, std::ostream &out) { return handleUnaryFPOp("nearbyint", op.getOperation(), m, out); }
bool handleSin(cir::SinOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("sin",       op.getOperation(), m, out); }
bool handleTan(cir::TanOp op, Mapper &m, std::ostream &out)             { return handleUnaryFPOp("tan",       op.getOperation(), m, out); }
bool handleFTrunc(cir::TruncOp op, Mapper &m, std::ostream &out)        { return handleUnaryFPOp("trunc",     op.getOperation(), m, out); }
bool handleFAbs(cir::FAbsOp op, Mapper &m, std::ostream &out)           { return handleUnaryFPOp("fabs",      op.getOperation(), m, out); }
bool handleFloor(cir::FloorOp op, Mapper &m, std::ostream &out)         { return handleUnaryFPOp("floor",     op.getOperation(), m, out); }

// ---- Unary FP→Int handlers ----
bool handleLround(cir::LroundOp op, Mapper &m, std::ostream &out)       { return handleFPToIntOp("lround",    op.getOperation(), m, out); }
bool handleLlround(cir::LlroundOp op, Mapper &m, std::ostream &out)     { return handleFPToIntOp("llround",   op.getOperation(), m, out); }
bool handleLrint(cir::LrintOp op, Mapper &m, std::ostream &out)         { return handleFPToIntOp("lrint",     op.getOperation(), m, out); }
bool handleLlrint(cir::LlrintOp op, Mapper &m, std::ostream &out)       { return handleFPToIntOp("llrint",    op.getOperation(), m, out); }

// ---- Binary FP→FP handlers ----
bool handleCopysign(cir::CopysignOp op, Mapper &m, std::ostream &out)   { return handleBinaryFPOp("copysign", op.getOperation(), m, out); }
bool handleFMaxNum(cir::FMaxNumOp op, Mapper &m, std::ostream &out)     { return handleBinaryFPOp("fmax",     op.getOperation(), m, out); }
bool handleFMaximum(cir::FMaximumOp op, Mapper &m, std::ostream &out)   { return handleBinaryFPOp("fmax",     op.getOperation(), m, out); }
bool handleFMinNum(cir::FMinNumOp op, Mapper &m, std::ostream &out)     { return handleBinaryFPOp("fmin",     op.getOperation(), m, out); }
bool handleFMinimum(cir::FMinimumOp op, Mapper &m, std::ostream &out)   { return handleBinaryFPOp("fmin",     op.getOperation(), m, out); }
bool handleFMod(cir::FModOp op, Mapper &m, std::ostream &out)           { return handleBinaryFPOp("fmod",     op.getOperation(), m, out); }
bool handlePow(cir::PowOp op, Mapper &m, std::ostream &out)             { return handleBinaryFPOp("pow",      op.getOperation(), m, out); }
bool handleATan2(cir::ATan2Op op, Mapper &m, std::ostream &out)         { return handleBinaryFPOp("atan2",    op.getOperation(), m, out); }

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
  // TODO: remove when cir.binop.overflow is no longer emitted by the compiler
  m.registerHandler("cir.binop.overflow", std::make_unique<LambdaOpHandler>(handleBinOpOverflow));
  m.registerTypedHandler<cir::AddOverflowOp>(handleAddOverflow);
  m.registerTypedHandler<cir::SubOverflowOp>(handleSubOverflow);
  m.registerTypedHandler<cir::MulOverflowOp>(handleMulOverflow);
  
  // Type conversions
  m.registerTypedHandler<cir::CastOp>(handleCast);
  m.registerTypedHandler<cir::VAStartOp>(handleVAStart);
  m.registerTypedHandler<cir::VAEndOp>(handleVAEnd);
  m.registerTypedHandler<cir::VAArgOp>(handleVAArg);
  m.registerTypedHandler<cir::VACopyOp>(handleVACopy);
  
  // Control flow
  m.registerTypedHandler<cir::BrOp>(handleBr);
  m.registerTypedHandler<cir::BrCondOp>(handleBrCond);
  m.registerTypedHandler<cir::GotoOp>(handleGoto);
  m.registerTypedHandler<cir::LabelOp>(handleLabel);
  m.registerTypedHandler<cir::SwitchOp>(handleSwitch);
  m.registerTypedHandler<cir::SwitchFlatOp>(handleSwitchFlat);
  m.registerTypedHandler<cir::SelectOp>(handleSelect);
  m.registerTypedHandler<cir::TernaryOp>(handleTernary);
  m.registerTypedHandler<cir::CleanupScopeOp>(handleCleanupScope);
  m.registerTypedHandler<cir::ScopeOp>(handleScope);
  m.registerTypedHandler<cir::IfOp>(handleIf);
  m.registerTypedHandler<cir::BreakOp>(handleBreak);
  m.registerTypedHandler<cir::ContinueOp>(handleContinue);
  m.registerTypedHandler<cir::YieldOp>(handleYield);
  m.registerTypedHandler<cir::CaseOp>(handleCase);
  m.registerTypedHandler<cir::ConditionOp>(handleCondition);
  m.registerTypedHandler<cir::WhileOp>(handleWhile);
  m.registerTypedHandler<cir::DoWhileOp>(handleDoWhile);
  m.registerTypedHandler<cir::ForOp>(handleFor);
  m.registerTypedHandler<cir::TryOp>(handleTry);
  
  // Function calls
  m.registerTypedHandler<cir::CallOp>(handleCall);
  m.registerTypedHandler<cir::TryCallOp>(handleTryCall);
  m.registerTypedHandler<cir::ReturnOp>(handleReturn);
  m.registerTypedHandler<cir::UnreachableOp>(handleUnreachable);
  m.registerTypedHandler<cir::TrapOp>(handleTrap);
  
  // Memory and pointer operations
  m.registerTypedHandler<cir::GetMemberOp>(handleGetMember);
  m.registerTypedHandler<cir::ExtractMemberOp>(handleExtractMember);
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

  // VTable / virtual dispatch
  m.registerTypedHandler<cir::VTableAddrPointOp>(handleVTableAddrPoint);
  m.registerTypedHandler<cir::VTableGetVPtrOp>(handleVTableGetVPtr);
  m.registerTypedHandler<cir::VTableGetVirtualFnAddrOp>(handleVTableGetVirtualFnAddr);
  m.registerTypedHandler<cir::VTableGetTypeInfoOp>(handleVTableGetTypeInfo);
  m.registerTypedHandler<cir::VTTAddrPointOp>(handleVTTAddrPoint);
  m.registerHandler("cir.derived_class_addr", std::make_unique<LambdaOpHandler>(handleDerivedClassAddr));

  // libc
  m.registerTypedHandler<cir::MemChrOp>(handleMemChr);

  // Bit-counting
  m.registerTypedHandler<cir::BitClzOp>(handleClz);

  // Compile-time constant probe
  m.registerTypedHandler<cir::IsConstantOp>(handleIsConstant);

  // Exception handling (modelled via __cir_exc_* global state)
  m.registerTypedHandler<cir::EhInflightOp>(handleEhInflight);
  m.registerTypedHandler<cir::EhTypeIdOp>(handleEhTypeId);
  m.registerTypedHandler<cir::EhSetjmpOp>(handleEhSetjmp);
  m.registerTypedHandler<cir::EhLongjmpOp>(handleEhLongjmp);
  m.registerTypedHandler<cir::EhInitiateOp>(handleEhInitiate);
  m.registerTypedHandler<cir::EhTerminateOp>(handleEhTerminate);
  m.registerTypedHandler<cir::EhDispatchOp>(handleEhDispatch);
  m.registerTypedHandler<cir::BeginCleanupOp>(handleBeginCleanup);
  m.registerTypedHandler<cir::EndCleanupOp>(handleEndCleanup);
  m.registerTypedHandler<cir::BeginCatchOp>(handleBeginCatch);
  m.registerTypedHandler<cir::EndCatchOp>(handleEndCatch);
  m.registerTypedHandler<cir::ThrowOp>(handleThrow);
  m.registerTypedHandler<cir::ResumeOp>(handleResume);
  m.registerTypedHandler<cir::ResumeFlatOp>(handleResumeFlat);
  m.registerTypedHandler<cir::AllocExceptionOp>(handleAllocException);
  m.registerTypedHandler<cir::CatchParamOp>(handleCatchParam);

  // Floating-point math functions
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
  m.registerTypedHandler<cir::LroundOp>(handleLround);
  m.registerTypedHandler<cir::LlroundOp>(handleLlround);
  m.registerTypedHandler<cir::LrintOp>(handleLrint);
  m.registerTypedHandler<cir::LlrintOp>(handleLlrint);
  m.registerTypedHandler<cir::CopysignOp>(handleCopysign);
  m.registerTypedHandler<cir::FMaxNumOp>(handleFMaxNum);
  m.registerTypedHandler<cir::FMaximumOp>(handleFMaximum);
  m.registerTypedHandler<cir::FMinNumOp>(handleFMinNum);
  m.registerTypedHandler<cir::FMinimumOp>(handleFMinimum);
  m.registerTypedHandler<cir::FModOp>(handleFMod);
  m.registerTypedHandler<cir::PowOp>(handlePow);
  m.registerTypedHandler<cir::ATan2Op>(handleATan2);
}

} // namespace xcfa

