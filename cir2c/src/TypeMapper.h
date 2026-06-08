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

#include <mlir/IR/Types.h>
#include <mlir/IR/BuiltinAttributes.h>
#include <llvm/ADT/DenseMap.h>
#include <string>

namespace cir2c {

/// Service class responsible for mapping CIR/MLIR types to C type strings.
class TypeMapper {
public:
  /// Strip CIR's ".base" suffix and sanitize a record type name attribute
  /// into a valid C identifier used as a struct/union tag. This is a public
  /// static helper so that code in Mapper.cpp that does not go through
  /// mapTypeToC (e.g., struct-collection logic in mapModule/mapGlobal) can
  /// call it directly as TypeMapper::recordCName(...).
  static std::string recordCName(mlir::StringAttr nameAttr);

  /// Map a single CIR/MLIR type to a C type string.
  std::string mapTypeToC(mlir::Type t) const;

  /// Peel off any nested cir::ArrayType layers from `t`, returning the base
  /// (non-array) C type and appending each dimension as "[N]" to `dimsOut`
  /// in outer->inner order.
  std::string arrayBaseTypeAndDims(mlir::Type t, std::string &dimsOut) const;

  /// Stable unique C struct/union tag for an anonymous record type.
  std::string anonRecordCName(mlir::Type recordType) const;

private:
  mutable llvm::DenseMap<mlir::Type, std::string> anonRecordNames_;
};

} // namespace cir2c
