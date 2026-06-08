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

#include "TypeMapper.h"
#include "Mapper.h"

#include <mlir/IR/Types.h>
#include <mlir/IR/BuiltinTypes.h>
#include <mlir/IR/BuiltinAttributes.h>

#include <clang/CIR/Dialect/IR/CIRDialect.h>

#include <llvm/ADT/StringRef.h>

using namespace mlir;

namespace cir2c {

// Strip CIR's ".base" suffix before sanitizing a record type name.
// CIR emits "X.base" as the internal name for the base subobject layout of
// class X when it is embedded in a derived class. Stripping it ensures the
// generated C reuses the same struct tag as the complete class, which is
// correct because: (a) the '.' character is impossible in any user-defined
// C++ class name so there is no ambiguity, and (b) the base subobject layout
// is layout-compatible with the complete type for verification purposes.
/*static*/
std::string TypeMapper::recordCName(mlir::StringAttr nameAttr) {
  if (!nameAttr || nameAttr.getValue().empty()) return "anon_struct";
  llvm::StringRef raw = nameAttr.getValue();
  if (raw.ends_with(".base"))
    raw = raw.drop_back(5);
  return Mapper::sanitizeIdentifier(raw.str());
}

std::string TypeMapper::anonRecordCName(mlir::Type recordType) const {
  auto it = anonRecordNames_.find(recordType);
  if (it != anonRecordNames_.end())
    return it->second;
  std::string name = "anon_struct_" + std::to_string(anonRecordNames_.size());
  anonRecordNames_[recordType] = name;
  return name;
}

std::string TypeMapper::mapTypeToC(mlir::Type t) const {
  // Handle MLIR built-in integer types
  if (auto it = mlir::dyn_cast<mlir::IntegerType>(t)) {
    unsigned w = it.getWidth();
    switch (w) {
    case 1:
      return "bool";
    case 8:
      return "signed char";
    case 16:
      return "short";
    case 32:
      return "int";
    case 64:
      return "long";
    default:
      return "long";
    }
  }

  // Handle MLIR built-in float types
  if (auto ft = mlir::dyn_cast<mlir::FloatType>(t)) {
    unsigned w = ft.getWidth();
    switch (w) {
    case 16:
      return "float"; // half precision, approximate as float
    case 32:
      return "float";
    case 64:
      return "double";
    case 80:
      return "long double"; // x87 extended precision
    case 128:
      return "long double"; // quad precision, approximate as long double
    default:
      return "double";
    }
  }

  // Handle MLIR NoneType (sometimes used for void)
  if (mlir::isa<mlir::NoneType>(t)) {
    return "void";
  }

  // Handle CIR void type
  if (mlir::isa<cir::VoidType>(t)) {
    return "void";
  }

  // Handle CIR bool type
  if (mlir::isa<cir::BoolType>(t)) {
    return "_Bool";
  }

  // Handle CIR integer types
  if (auto intTy = mlir::dyn_cast<cir::IntType>(t)) {
    unsigned width = intTy.getWidth();
    bool isSigned = intTy.isSigned();

    if (width == 8) {
      return isSigned ? "char" : "unsigned char";
    } else if (width == 16) {
      return isSigned ? "short" : "unsigned short";
    } else if (width == 32) {
      return isSigned ? "int" : "unsigned int";
    } else if (width == 64) {
      return isSigned ? "long" : "unsigned long";
    }
    return "int"; // fallback
  }

  // Handle CIR floating-point types
  if (mlir::isa<cir::SingleType>(t)) {
    return "float";
  }
  if (mlir::isa<cir::DoubleType>(t)) {
    return "double";
  }
  if (mlir::isa<cir::LongDoubleType>(t)) {
    return "long double";
  }
  if (mlir::isa<cir::FP80Type>(t)) {
    return "long double";
  }
  if (mlir::isa<cir::FP16Type>(t)) {
    return "_Float16";
  }
  if (mlir::isa<cir::BF16Type>(t)) {
    return "__bf16";
  }

  // CIR complex type -> C99 `_Complex`. Element type drives the base (e.g.
  // !cir.complex<!cir.double> becomes "double _Complex").
  if (auto cplx = mlir::dyn_cast<cir::ComplexType>(t)) {
    return mapTypeToC(cplx.getElementType()) + " _Complex";
  }

  // Handle CIR pointer types
  if (auto ptrTy = mlir::dyn_cast<cir::PointerType>(t)) {
    mlir::Type pointee = ptrTy.getPointee();

    // Handle pointer to function
    if (mlir::isa<cir::FuncType>(pointee)) {
      return "void*"; // Simplify function pointers to void*
    }

    // Handle pointer to record (struct/union)
    if (auto recordTy = mlir::dyn_cast<cir::RecordType>(pointee)) {
      mlir::StringAttr nameAttr = recordTy.getName();
      std::string name = (nameAttr && !nameAttr.getValue().empty())
                             ? recordCName(nameAttr)
                             : anonRecordCName(recordTy);
      if (recordTy.isUnion()) {
        return "union " + name + "*";
      }
      return "struct " + name + "*";
    }

    // Handle pointer to vptr (!cir.ptr<!cir.vptr>) -- address of the __vptr
    // slot. The vptr value itself is a void* (vtable pointer), so its address
    // is void**. Mapping this to void* would make subsequent loads through it
    // a dereference of void* (illegal in C).
    if (mlir::isa<cir::VPtrType>(pointee)) {
      return "void**";
    }

    // Handle pointer to array (decays to pointer to element)
    if (auto arrayTy = mlir::dyn_cast<cir::ArrayType>(pointee)) {
      mlir::Type elemType = arrayTy.getElementType();
      std::string elemCType = mapTypeToC(elemType);
      return elemCType + "*";
    }

    // For other pointer types, recursively map the pointee and add *
    std::string pointeeType = mapTypeToC(pointee);
    return pointeeType + "*";
  }

  // Handle CIR vptr type (!cir.vptr) -- vtable pointer value
  if (mlir::isa<cir::VPtrType>(t)) {
    return "void*";
  }

  // Handle CIR record types (struct/union)
  if (auto recordTy = mlir::dyn_cast<cir::RecordType>(t)) {
    mlir::StringAttr nameAttr = recordTy.getName();
    std::string name = (nameAttr && !nameAttr.getValue().empty())
                           ? recordCName(nameAttr)
                           : anonRecordCName(recordTy);
    if (recordTy.isUnion()) {
      return "union " + name;
    }
    return "struct " + name;
  }

  // Handle CIR array types
  if (auto arrayTy = mlir::dyn_cast<cir::ArrayType>(t)) {
    // Arrays in C declarations require the element type, not the full array type
    // This should only be called when we need the base element type
    // Proper array handling should be done at the declaration site where we can
    // properly format "type name[size]"
    mlir::Type elemType = arrayTy.getElementType();
    return mapTypeToC(elemType);
  }

  // Conservative default for unknown types
  return "int";
}

std::string TypeMapper::arrayBaseTypeAndDims(mlir::Type t, std::string &dimsOut) const {
  dimsOut.clear();
  mlir::Type cur = t;
  while (auto arrayTy = mlir::dyn_cast<cir::ArrayType>(cur)) {
    dimsOut += "[" + std::to_string(arrayTy.getSize()) + "]";
    cur = arrayTy.getElementType();
  }
  return mapTypeToC(cur);
}

} // namespace cir2c
