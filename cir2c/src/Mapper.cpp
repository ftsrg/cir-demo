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

#include "Mapper.h"
#include "ConstantEmitter.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>

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

std::string Mapper::sanitizeIdentifier(const std::string &s) {
  std::string out;
  out.reserve(s.size());
  for (char c : s) {
    if (std::isalnum((unsigned char)c) || c == '_') out.push_back(c);
    else out.push_back('_');
  }
  if (!out.empty() && std::isdigit((unsigned char)out[0])) out = std::string("_") + out;
  return out;
}


std::string Mapper::virtualCallTypeSuffix(const std::string &ctype) {
  std::string raw;
  for (char c : ctype) {
    if (std::isalnum((unsigned char)c) || c == '_') raw += c;
    else if (c == '*') raw += "_ptr";
    else raw += '_';
  }
  // Collapse runs of underscores and strip leading/trailing ones.
  std::string clean;
  bool prevUnderscore = false;
  for (char c : raw) {
    if (c == '_') {
      if (!prevUnderscore && !clean.empty()) { clean += '_'; prevUnderscore = true; }
    } else {
      clean += c;
      prevUnderscore = false;
    }
  }
  while (!clean.empty() && clean.back() == '_') clean.pop_back();
  return clean.empty() ? "any" : clean;
}

Mapper::Mapper() : counter(0) {}

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

void Mapper::printMonitorReport(std::ostream &out) const {
  traceability.printReport(out);
}

// Emit pending cleanup regions (from innermost to outermost), stopping at
// fromDepth.  Each cleanup body is wrapped in a C block `{ ... }` to avoid
// name collisions when a region is emitted more than once (e.g. early-return
// and normal fall-through both need the same cleanup).
void Mapper::emitPendingCleanups(std::ostream &out, int fromDepth, bool consume) {
  // Walk innermost → outermost (back → front).
  for (int i = static_cast<int>(cleanupStack_.size()) - 1; i >= 0; --i) {
    if (cleanupStack_[i].loopDepth < fromDepth) break;
    mlir::Region *cleanupRegion = cleanupStack_[i].region;
    if (!cleanupRegion || cleanupRegion->empty()) continue;
    // Skip cleanups already emitted by a previous *consuming* emitPendingCleanups
    // call (e.g. an earlier goto in the same scope).  Mark newly-emitted ones so
    // handleCleanupScope won't emit them again on normal-yield exit — but only
    // when `consume` is set (an unconditional exit). A conditional EH-guard
    // emission must not consume, since the no-exception path still falls through.
    if (consumedCleanups_.count(cleanupRegion)) continue;
    if (consume) consumedCleanups_.insert(cleanupRegion);
    out << "  {\n";
    // Walk the first (and only) block of the cleanup region, emitting all ops
    // except the trailing cir.yield.
    mlir::Block &block = cleanupRegion->front();
    std::ostringstream cleanupOut;
    for (mlir::Operation &cop : block.getOperations()) {
      if (llvm::isa<cir::YieldOp>(cop)) break;
      if (!mapOperation(&cop, cleanupOut)) {
        // Best-effort: emit a comment and continue.
        cleanupOut << "  // (cleanup op could not be mapped)\n";
      }
    }
    // Indent the cleanup body by one extra level (we are inside the `{ }`).
    std::string cleanupText = cleanupOut.str();
    std::istringstream lines(cleanupText);
    std::string line;
    while (std::getline(lines, line)) {
      if (!line.empty()) out << "  ";
      out << line << "\n";
    }
    out << "  }\n";
  }
}

void Mapper::writeMonitorJson(std::ostream &out) const {
  traceability.writeJson(out);
}

void Mapper::computeTraceLineMappings(llvm::StringRef mlirText, llvm::StringRef cText) {
  traceability.computeLineMappings(mlirText, cText);
}

void Mapper::registerHandler(llvm::StringRef opName, std::unique_ptr<OpHandler> handler) {
  handlers[opName.str()] = std::move(handler);
  traceability.registerOperation(opName);
}

std::string Mapper::freshName(llvm::StringRef base) {
  // Skip any name already taken by a source-derived identifier (recorded via
  // setName) so e.g. the constant temp `c17` never clashes with a source
  // variable literally named `c17`.
  std::string s;
  do {
    s = (base + llvm::Twine(counter++)).str();
  } while (!usedNames_.insert(s).second);
  return s;
}

std::string Mapper::getOrCreateName(Value v) {
  auto it = valueNames.find(v);
  if (it != valueNames.end()) return it->second;
  std::string name = freshName("v");
  valueNames[v] = name;
  return name;
}

std::string Mapper::getOrCreateLabel(mlir::Block *b) {
  auto it = blockLabels.find(b);
  if (it != blockLabels.end()) return it->second;
  std::string name = freshName("bb");
  blockLabels[b] = name;
  return name;
}

void Mapper::setName(mlir::Value v, const std::string &name) {
  valueNames[v] = name;
  // Reserve source-derived names so freshName won't reuse them for a temp.
  usedNames_.insert(name);
}

void Mapper::markAsDirectAccess(mlir::Value v) {
  directAccessValues.insert(v);
}

bool Mapper::isDirectAccess(mlir::Value v) const {
  return directAccessValues.count(v) > 0;
}

std::string Mapper::anonRecordCName(mlir::Type recordType) const { return typeMapper_.anonRecordCName(recordType); }

std::string Mapper::mapTypeToC(mlir::Type t) const { return typeMapper_.mapTypeToC(t); }

void Mapper::recordFieldName(const std::string &recordName, int index,
                             const std::string &fieldName) {
  if (index < 0) return;
  auto &byIndex = recordFieldNames_[recordName];
  // First name wins, matching the struct emitter's dedup behaviour.
  byIndex.emplace(index, fieldName);
}

std::string Mapper::lookupFieldName(const std::string &recordName, int index) const {
  auto it = recordFieldNames_.find(recordName);
  if (it == recordFieldNames_.end()) return "";
  auto jt = it->second.find(index);
  return jt == it->second.end() ? "" : jt->second;
}

std::string Mapper::arrayBaseTypeAndDims(mlir::Type t, std::string &dimsOut) const { return typeMapper_.arrayBaseTypeAndDims(t, dimsOut); }

bool Mapper::mapOperation(mlir::Operation *op, std::ostream &out) {
  auto opName = op->getName().getStringRef();
  std::string inputText = oneLineOperationText(*op);
  traceability.recordOperationVisit(opName);

  auto it = handlers.find(opName.str());
  std::ostringstream opOut;
  bool mapped = false;

  if (it != handlers.end()) {
    bool handled = it->second->handle(op, *this, opOut);
    if (handled) {
      traceability.recordOperationHandled(opName);
      out << opOut.str();
      traceability.recordOperationTrace(opName, inputText, opOut.str(), true);
      return true;
    }
    // The handler failed. It may already have emitted partial output (e.g. an
    // opening brace of a control-flow construct whose body could not be
    // mapped). Continuing would leave that output unbalanced and unsound, so
    // hard-fail: surface the failure and stop mapping this function.
    out << opOut.str();
    opOut << "  // " << ERR_HANDLER_FAILED_PREFIX << opName.str() << "\n";
    traceability.recordOperationTrace(opName, inputText, opOut.str(), false);
    llvm::errs() << ERR_HANDLER_FAILED_PREFIX << opName.str() << "\n";
    return false;
  }

  // No handler registered for this op. We must not emit a placeholder value
  // for its results: a default-initialised declaration would be an unsound
  // mapping (the generated C would compile but compute the wrong result
  // silently). Hard-fail instead so the unsupported op is surfaced and the
  // test is reported as a mapper failure rather than producing wrong output.
  out << opOut.str();
  traceability.recordOperationTrace(opName, inputText, opOut.str(), false);
  llvm::errs() << ERR_NO_HANDLER_PREFIX << opName.str() << "\n";
  return false;
}

// ── Vtable dispatch tracking ───────────────────────────────────────────────

void Mapper::trackVtableDispatch(mlir::Value chainValue, mlir::Value objectValue) {
  vtableDispatchChain[chainValue] = objectValue;
}

bool Mapper::isVtableDispatchValue(mlir::Value v) const {
  return vtableDispatchChain.count(v) > 0;
}

mlir::Value Mapper::getVtableDispatchObject(mlir::Value v) const {
  auto it = vtableDispatchChain.find(v);
  if (it != vtableDispatchChain.end()) return it->second;
  return {};
}

void Mapper::markVirtualFnPtr(mlir::Value v) {
  virtualFnPtrSet.insert(v);
}

bool Mapper::isVirtualFnPtr(mlir::Value v) const {
  return virtualFnPtrSet.count(v) > 0;
}

void Mapper::setHasVirtualCalls() {
  anyVirtualCalls_ = true;
}

uint64_t Mapper::vtableFlatOffset(mlir::Operation *op, const std::string &symbol,
                                  int index, int offset) const {
  uint64_t flat = static_cast<uint64_t>(offset);
  if (index <= 0) return flat;
  // Find the vtable global and sum the element counts of components [0, index).
  // Use the provided op's parent module, or fall back to the stored module.
  mlir::ModuleOp module;
  if (op) module = op->getParentOfType<mlir::ModuleOp>();
  if (!module) module = currentModule_;
  if (!module) return flat;
  for (auto &g : module.getOps()) {
    auto gop = mlir::dyn_cast<cir::GlobalOp>(g);
    if (!gop) continue;
    auto s = gop->getAttrOfType<mlir::StringAttr>(
        mlir::SymbolTable::getSymbolAttrName());
    if (!s || s.getValue().str() != symbol) continue;
    auto iv = gop.getInitialValue();
    if (!iv) break;
    auto vt = mlir::dyn_cast<cir::VTableAttr>(*iv);
    if (!vt) break;
    mlir::ArrayAttr data = vt.getData();
    for (int i = 0; i < index && i < static_cast<int>(data.size()); ++i) {
      if (auto ca = mlir::dyn_cast<cir::ConstArrayAttr>(data[i]))
        if (auto at = mlir::dyn_cast<cir::ArrayType>(ca.getType()))
          flat += at.getSize();
    }
    break;
  }
  return flat;
}

std::string Mapper::registerVirtualCallSig(mlir::Type funcType, std::string &retOut,
                                           std::vector<std::string> &argsOut) {
  retOut = "void";
  argsOut.clear();
  auto ft = mlir::dyn_cast<cir::FuncType>(funcType);
  if (!ft) return virtualCallTypeSuffix("void");
  // The vtable function type is (this, args...) -> ret. The wrapper exposes
  // (void* obj, int slot, args...) -> ret, so drop the leading `this` param.
  retOut = ft.getReturnType() && !mlir::isa<cir::VoidType>(ft.getReturnType())
               ? mapTypeToC(ft.getReturnType())
               : "void";
  llvm::ArrayRef<mlir::Type> ins = ft.getInputs();
  for (size_t i = 1; i < ins.size(); ++i) // skip `this`
    argsOut.push_back(mapTypeToC(ins[i]));
  // Build a unique suffix from the return type and argument types.
  std::string sig = retOut;
  for (const auto &a : argsOut) sig += "_" + a;
  if (ft.isVarArg()) sig += "_va";
  std::string suffix = virtualCallTypeSuffix(sig);
  virtualCallSigs_[suffix] = {retOut, argsOut};
  return suffix;
}

// ── Global variables ───────────────────────────────────────────────────────

std::string Mapper::formatConstInit(mlir::Attribute attr, mlir::Type type) const {
  return constantEmitter_.formatConstInit(*this, attr, type);
}

// mapGlobal, mapModule, emitFuncForwardDecl, mapFunc, prepareFunctionNames,
// getFunctionOutputName, ensureMallocFreeDeclared: see ModuleEmitter.cpp.

} // namespace cir2c
