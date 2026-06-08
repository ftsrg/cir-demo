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

#pragma once

#include "Mapper.h"

#include <functional>
#include <ostream>
#include <string>
#include <vector>

namespace cir2c {

class LambdaOpHandler : public OpHandler {
public:
  explicit LambdaOpHandler(std::function<bool(mlir::Operation *, Mapper &, std::ostream &)> fn)
      : fn(std::move(fn)) {}

  bool handle(mlir::Operation *op, Mapper &m, std::ostream &out) override {
    return fn(op, m, out);
  }

private:
  std::function<bool(mlir::Operation *, Mapper &, std::ostream &)> fn;
};

// Extract a name from various attributes (names, sym_names, name, etc.)
std::string extractName(mlir::Operation *o, const std::string &fallback = "");

// Returns a C expression that uses `v` as the pointer its CIR pointer type
// denotes. A direct-access value's C name is bound to the pointee lvalue, so:
//   - scalar lvalue           -> &name  (take its address)
//   - array / VLA / array-alloca -> name (the name already decays to a pointer;
//                                   taking '&' would give a pointer-to-array)
//   - anything else (real pointer SSA value, non-pointer type) -> name
// Shared by handlers that must treat a possibly-direct-access value as the
// pointer the CIR intends (comparisons, ?: branches yielding pointers, …).
std::string pointerOperandExpr(mlir::Value v, Mapper &m);

std::string indentText(const std::string &text, llvm::StringRef indent = "  ");

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
bool emitRegionBody(mlir::Region &region, Mapper &m, std::ostream &out,
                    std::vector<mlir::Value> *yieldedValues = nullptr,
                    CaseTerminatorKind *terminatorKind = nullptr);

} // namespace cir2c
