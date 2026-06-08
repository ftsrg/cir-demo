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

#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>
#include <llvm/ADT/APFloat.h>
#include <string>

namespace cir2c {

class Mapper;
class TypeMapper;

/// Service class responsible for rendering a CIR constant attribute as a C
/// initializer string. Handles int/fp/bool/string/pointer/struct/array leaves
/// and aggregates, recursing through nested constants.
class ConstantEmitter {
public:
  /// Render a constant attribute as a C initializer, recursing through nested
  /// array/struct/union constants (int/fp/string/pointer/member-fn-ptr leaves).
  /// `ctx` provides access to type-mapping, symbol names, and global type info.
  std::string formatConstInit(const Mapper &ctx, mlir::Attribute attr,
                              mlir::Type type) const;

  /// Format an APFloat as a C literal, normalising the +Inf/-Inf/+NaN/-NaN
  /// spellings that APFloat::toString() emits (which are not valid C) into
  /// builtins. Also used by Mapper::mapGlobal for standalone FP globals.
  static std::string formatFpLiteral(const llvm::APFloat &v,
                                     const std::string &ctype);

private:
  /// Escape raw bytes for a C string literal. Uses 3-digit octal for
  /// non-printing bytes (a \xHH escape greedily eats following hex digits).
  static std::string escapeCString(const std::string &bytes);
};

} // namespace cir2c
