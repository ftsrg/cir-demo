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
#include <map>
#include <string>
#include <vector>

namespace xcfa {

/// Parses the stdout of `clang++ -Xclang -fdump-vtable-layouts`.
///
/// Populates:
///   vtableIndexMap  — class_name -> vector<slot_method_label>
///                     where slot_method_label is "ClassName::method(args)" (no
///                     return type, with argument parens), matching the string
///                     used as the __VERIFIER_virtual_call label.
///   classHierarchy  — class_name -> vector<direct_base_class_names>
///                     derived from "-- (Base, offset) vtable address --" lines
///                     in each "Vtable for 'X'" block.
///
/// Returns false and prints a diagnostic to stderr if the file cannot be opened.
bool parseVtableLayoutDump(
    const std::string &filename,
    std::map<std::string, std::vector<std::string>> &vtableIndexMap,
    std::map<std::string, std::vector<std::string>> &classHierarchy);

} // namespace xcfa
