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
#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <sstream>
#include <string>
#include <vector>

using namespace mlir;

namespace cir2c {

/// Handlers for structured control-flow terminators, switch/select, and loops.
class ControlFlowHandlers : public HandlerModule {
public:
  void registerHandlers(Mapper &m) override {
    // Structured control-flow terminators
    m.registerTypedHandler<cir::BrOp>(handleBr);
    m.registerTypedHandler<cir::BrCondOp>(handleBrCond);
    m.registerTypedHandler<cir::GotoOp>(handleGoto);
    m.registerTypedHandler<cir::LabelOp>(handleLabel);
    // Control flow: switch and select
    m.registerTypedHandler<cir::SwitchOp>(handleSwitch);
    m.registerTypedHandler<cir::SwitchFlatOp>(handleSwitchFlat);
    m.registerTypedHandler<cir::SelectOp>(handleSelect);
    m.registerTypedHandler<cir::TernaryOp>(handleTernary);
    m.registerTypedHandler<cir::CleanupScopeOp>(handleCleanupScope);
    m.registerTypedHandler<cir::ScopeOp>(handleScope);
    m.registerTypedHandler<cir::IfOp>(handleIf);
    // Structured control-flow terminators: break and continue
    m.registerTypedHandler<cir::BreakOp>(handleBreak);
    m.registerTypedHandler<cir::ContinueOp>(handleContinue);
    m.registerTypedHandler<cir::YieldOp>(handleYield);
    m.registerTypedHandler<cir::CaseOp>(handleCase);
    m.registerTypedHandler<cir::ConditionOp>(handleCondition);
    // Structured loops
    m.registerTypedHandler<cir::WhileOp>(handleWhile);
    m.registerTypedHandler<cir::DoWhileOp>(handleDoWhile);
    m.registerTypedHandler<cir::ForOp>(handleFor);
  }

private:
  static bool handleBr(cir::BrOp op, Mapper &m, std::ostream &out) {
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

  static bool handleBrCond(cir::BrCondOp op, Mapper &m, std::ostream &out) {
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

  static bool handleGoto(cir::GotoOp op, Mapper &m, std::ostream &out) {
    // Flush any pending cleanup scopes before jumping: a goto that exits a
    // cir.cleanup.scope boundary must destroy the scoped objects first.
    m.emitPendingCleanups(out, 0);
    out << "  goto " << op.getLabel().str() << ";\n";
    return true;
  }

  static bool handleLabel(cir::LabelOp op, Mapper &m, std::ostream &out) {
    out << op.getLabel().str() << ": ;\n";
    return true;
  }

  static bool handleSwitch(cir::SwitchOp op, Mapper &m, std::ostream &out) {
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

      // Emit the case label(s). Append a null statement (": ;") because the case
      // body may start with a declaration, and a label must prefix a statement
      // (not a declaration) before C23 — strict frontends (DIVINE's clang) reject
      // "case N: <decl>".
      switch (kind) {
      case cir::CaseOpKind::Default:
        out << "  default: ;\n";
        break;
      case cir::CaseOpKind::Equal:
        for (auto attr : values) {
          auto intAttr = llvm::cast<cir::IntAttr>(attr);
          out << "  case " << intAttr.getValue().getSExtValue() << ": ;\n";
        }
        break;
      case cir::CaseOpKind::Anyof:
        // Multiple discrete values that all map to the same body.
        for (auto attr : values) {
          auto intAttr = llvm::cast<cir::IntAttr>(attr);
          out << "  case " << intAttr.getValue().getSExtValue() << ": ;\n";
        }
        break;
      case cir::CaseOpKind::Range:
        // GCC extension: "case lo ... hi:".  values[0] = lo, values[1] = hi.
        if (values.size() == 2) {
          int64_t lo = llvm::cast<cir::IntAttr>(values[0]).getValue().getSExtValue();
          int64_t hi = llvm::cast<cir::IntAttr>(values[1]).getValue().getSExtValue();
          out << "  case " << lo << " ... " << hi << ": ;\n";
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

  static bool handleSwitchFlat(cir::SwitchFlatOp op, Mapper &m, std::ostream &out) {
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

  static bool handleSelect(cir::SelectOp op, Mapper &m, std::ostream &out) {
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

  static bool handleTernary(cir::TernaryOp op, Mapper &m, std::ostream &out) {
    Operation *o = op.getOperation();
    if (o->getNumOperands() < 1 || o->getNumRegions() != 2) return false;

    std::string condName = m.getOrCreateName(o->getOperand(0));
    std::vector<std::string> resultNames;
    std::vector<std::string> resultTypes;
    resultNames.reserve(o->getNumResults());
    resultTypes.reserve(o->getNumResults());

    for (Value result : o->getResults()) {
      std::string tmp = m.freshName("ternary");
      std::string ctype = m.mapTypeToC(result.getType());
      out << "  " << ctype << " " << tmp << ";\n";
      resultNames.push_back(tmp);
      resultTypes.push_back(ctype);
      m.setName(result, tmp);
    }

    std::vector<Value> trueYieldedValues;
    std::vector<Value> falseYieldedValues;

    // Cast each yielded branch value to the result type. The two arms of a
    // ?: can have differently-typed C expressions even when CIR agrees — most
    // commonly a null-pointer constant materialised as an integer (`0`) feeding
    // a pointer-typed result ("makes pointer from integer without a cast").
    out << "  if (" << condName << ") {\n";
    if (!emitRegionBody(o->getRegion(0), m, out,
                        o->getNumResults() > 0 ? &trueYieldedValues : nullptr)) {
      return false;
    }
    if (!resultNames.empty()) {
      if (trueYieldedValues.size() != resultNames.size()) return false;
      for (size_t i = 0; i < resultNames.size(); ++i) {
        out << "    " << resultNames[i] << " = (" << resultTypes[i] << ")"
            << pointerOperandExpr(trueYieldedValues[i], m) << ";\n";
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
        out << "    " << resultNames[i] << " = (" << resultTypes[i] << ")"
            << pointerOperandExpr(falseYieldedValues[i], m) << ";\n";
      }
    }
    out << "  }\n";
    return true;
  }

  // NOTE: C++20 coroutine scopes (cir.await / co_await) are intentionally NOT
  // handled. The await operation wraps its ready/suspend/resume regions in a
  // cir.scope; lowering that to C requires a full coroutine state-machine
  // transformation which is out of scope for the current verification target.
  static bool handleCleanupScope(cir::CleanupScopeOp op, Mapper &m, std::ostream &out) {
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

  static bool handleScope(cir::ScopeOp op, Mapper &m, std::ostream &out) {
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

  static bool handleIf(cir::IfOp op, Mapper &m, std::ostream &out) {
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

  // cir.break terminates a switch case or a loop body.  In the structured form
  // emitRegionBody recognises it and records CaseTerminatorKind::Break so the
  // enclosing switch handler knows not to emit a redundant "break;".  The op
  // itself still goes through the normal handler path so the statement appears
  // in the C output at the right indentation level.
  static bool handleBreak(cir::BreakOp op, Mapper &m, std::ostream &out) {
    // Run cleanups for cir.cleanup.scopes that are nested INSIDE the current
    // loop/switch (i.e. pushed after the current loop was entered).  We emit
    // cleanups whose loopDepth >= current loop depth so we only cross the
    // cleanups between this break and its target loop, not outer cleanups.
    m.emitPendingCleanups(out, m.getLoopDepth());
    out << "  break;\n";
    return true;
  }

  // cir.continue terminates a loop body iteration.
  static bool handleContinue(cir::ContinueOp op, Mapper &m, std::ostream &out) {
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
  static bool handleYield(cir::YieldOp op, Mapper &m, std::ostream &out) {
    // Intentionally emits nothing; emitRegionBody already handles cir.yield.
    return true;
  }

  // cir.case is always consumed by handleSwitch iterating the switch body.
  // Register a no-op handler as a belt-and-suspenders guard in case a cir.case
  // somehow reaches the top-level dispatcher (e.g. a malformed module in
  // best-effort mode).
  static bool handleCase(cir::CaseOp op, Mapper &m, std::ostream &out) {
    // Intentionally emits nothing; handleSwitch already processes cir.case.
    return true;
  }

  // cir.condition is the terminator of a loop cond region; it is consumed by
  // emitCondRegion and never reaches the top-level dispatcher.  Register a
  // defensive no-op handler to avoid "no handler registered" for any stray
  // occurrences (e.g. malformed input in best-effort mode).
  static bool handleCondition(cir::ConditionOp op, Mapper &m, std::ostream &out) {
    return true;
  }

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
  static bool handleWhile(cir::WhileOp op, Mapper &m, std::ostream &out) {
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
  static bool handleDoWhile(cir::DoWhileOp op, Mapper &m, std::ostream &out) {
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
  static bool handleFor(cir::ForOp op, Mapper &m, std::ostream &out) {
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
};

REGISTER_HANDLER_MODULE(ControlFlowHandlers)

} // namespace cir2c
