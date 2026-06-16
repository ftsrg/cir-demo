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

#include "handlers/HandlerSupport.h"

#include <mlir/IR/Operation.h>
#include <llvm/Support/Casting.h>
#include <sstream>
#include <clang/CIR/Dialect/IR/CIRDialect.h>

using namespace mlir;

namespace cir2c {

std::string extractName(Operation *o, const std::string &fallback) {
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

std::string indentText(const std::string &text, llvm::StringRef indent) {
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

std::string pointerOperandExpr(mlir::Value v, Mapper &m) {
  std::string n = m.getOrCreateName(v);
  if (!m.isDirectAccess(v) || !mlir::isa<cir::PointerType>(v.getType()))
    return n;
  bool decays = false;
  if (auto pt = mlir::dyn_cast<cir::PointerType>(v.getType()))
    decays = mlir::isa<cir::ArrayType>(pt.getPointee());
  if (auto al = v.getDefiningOp<cir::AllocaOp>())
    decays = decays || al.getDynAllocSize() ||
             mlir::isa<cir::ArrayType>(al.getAllocaType());
  return decays ? n : ("&" + n);
}

bool emitRegionBody(Region &region, Mapper &m, std::ostream &out,
                    std::vector<Value> *yieldedValues,
                    CaseTerminatorKind *terminatorKind) {
  if (terminatorKind) *terminatorKind = CaseTerminatorKind::Other;
  if (region.empty()) return true;

  // A block that defines a cir.label is a cir.goto target. In CIR a goto does
  // not create a CFG edge, so such a block can have no predecessors yet still
  // be reachable — it must be emitted even when it follows a definitive
  // terminator (otherwise `goto bi;` dangles with no `bi:` label).
  auto blockIsGotoTarget = [](Block &b) {
    for (Operation &op : b.getOperations())
      if (llvm::isa<cir::LabelOp>(op)) return true;
    return false;
  };

  std::ostringstream regionOut;
  bool isFirstBlock = true;
  bool fallthroughDead = false; // current block unreachable by fall-through?

  for (Block &block : region.getBlocks()) {
    // Skip a block only if it is unreachable by fall-through AND is not a
    // goto target. A goto target resumes a reachable region of code.
    if (fallthroughDead && !blockIsGotoTarget(block))
      continue;
    fallthroughDead = false;

    // Non-first blocks need a label so gotos from the first block can reach them.
    if (!isFirstBlock) {
      std::string lbl = Mapper::sanitizeIdentifier(m.getOrCreateLabel(&block));
      // Null statement after the label: a label must prefix a statement, and a
      // declaration is not one before C23 (block bodies often start with one).
      regionOut << lbl << ": ;\n";
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
    // A yield is the region's fall-through exit: stop unless a later block is a
    // goto target (handled by the skip logic at the top of the loop).
    if (yieldSeen) { fallthroughDead = true; continue; }

    // If this block ended with a definitive region-exit op (goto, return,
    // continue — NOT cir.br which is an intra-region branch), the next block is
    // unreachable by fall-through; only emit it if it is a goto target.
    if (lastOp && (llvm::isa<cir::GotoOp>(lastOp) ||
                   llvm::isa<cir::ReturnOp>(lastOp) ||
                   llvm::isa<cir::ContinueOp>(lastOp) ||
                   llvm::isa<cir::UnreachableOp>(lastOp) ||
                   llvm::isa<cir::TrapOp>(lastOp)))
      fallthroughDead = true;
  }

  out << indentText(regionOut.str());
  return true;
}

} // namespace cir2c
