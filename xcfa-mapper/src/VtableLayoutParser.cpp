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

#include "VtableLayoutParser.h"

#include <algorithm>
#include <fstream>
#include <sstream>
#include <string>

#include <llvm/Support/raw_ostream.h>

namespace xcfa {

// ---------------------------------------------------------------------------
// Helper: trim leading/trailing whitespace
// ---------------------------------------------------------------------------
static std::string trim(const std::string &s) {
  size_t start = s.find_first_not_of(" \t\r\n");
  if (start == std::string::npos) return "";
  size_t end = s.find_last_not_of(" \t\r\n");
  return s.substr(start, end - start + 1);
}

// ---------------------------------------------------------------------------
// Strip the leading return type from a vtable-dump method entry.
//
// The dump line looks like:
//   "   K | ReturnType ClassName::method(ArgTypes)"
// After stripping the slot prefix, we have:
//   "ReturnType ClassName::method(ArgTypes)"
//
// We want:
//   "ClassName::method(ArgTypes)"
//
// The return type is everything before the first "::" segment that is not
// preceded by a "<" (template parameter). We find the FIRST "::" that starts
// the class::method portion by scanning from left and skipping any "<...>"
// groups (since return types can be template specialisations).
//
// Special cases handled:
//   - "void ClassName::~ClassName()"
//   - "ClassName * ClassName::operator=(const ClassName &)"
//   - plain "ClassName::method()" (no return type — should not appear but
//     handled gracefully)
//
// Strategy: walk left-to-right counting template depth. The first "::" at
// depth 0 that is preceded by a valid identifier character (not by ">", ")",
// "*", "&") marks the start of the class name.
// ---------------------------------------------------------------------------
static std::string stripReturnType(const std::string &entry) {
  // Find all "::" positions at template depth 0
  int depth = 0;
  size_t firstColonColon = std::string::npos;
  for (size_t i = 0; i + 1 < entry.size(); ++i) {
    char c = entry[i];
    if (c == '<') { ++depth; continue; }
    if (c == '>') { if (depth > 0) --depth; continue; }
    if (depth > 0) continue;
    if (c == ':' && entry[i + 1] == ':') {
      firstColonColon = i;
      break;
    }
  }
  if (firstColonColon == std::string::npos) return entry; // no "::" found

  // Walk backwards from firstColonColon to find the start of the class name.
  // The class name is the last whitespace-delimited token before "::".
  size_t classStart = firstColonColon;
  while (classStart > 0) {
    char prev = entry[classStart - 1];
    if (prev == ' ' || prev == '\t' || prev == '*' || prev == '&') break;
    --classStart;
  }

  return entry.substr(classStart);
}

// ---------------------------------------------------------------------------
// Main parser
// ---------------------------------------------------------------------------
bool parseVtableLayoutDump(
    const std::string &filename,
    std::map<std::string, std::vector<std::string>> &vtableIndexMap,
    std::map<std::string, std::vector<std::string>> &classHierarchy) {

  std::ifstream file(filename);
  if (!file) {
    llvm::errs() << "xcfa-mapper: cannot open vtable layout dump '" << filename << "'\n";
    return false;
  }

  // Read all lines into a vector for two-pass processing.
  std::vector<std::string> lines;
  {
    std::string line;
    while (std::getline(file, line))
      lines.push_back(line);
  }

  // -------------------------------------------------------------------------
  // Pass 1: "VTable indices for 'ClassName' (N entries)." blocks
  //
  // Format:
  //   VTable indices for 'ClassName' (N entries).
  //      K | ReturnType ClassName::method(ArgTypes)
  //
  // We extract slot K and the label "ClassName::method(ArgTypes)".
  // -------------------------------------------------------------------------
  for (size_t i = 0; i < lines.size(); ++i) {
    const std::string &line = lines[i];
    const std::string prefix = "VTable indices for '";
    if (line.rfind(prefix, 0) != 0) continue;

    // Extract class name between first pair of single quotes.
    size_t nameStart = prefix.size();
    size_t nameEnd = line.find('\'', nameStart);
    if (nameEnd == std::string::npos) continue;
    std::string className = line.substr(nameStart, nameEnd - nameStart);
    if (className.empty()) continue;

    // Parse entry count from "(N entries)."
    size_t parenStart = line.find('(', nameEnd);
    size_t parenEnd = line.find(')', parenStart);
    int numEntries = 0;
    if (parenStart != std::string::npos && parenEnd != std::string::npos) {
      std::string countStr = line.substr(parenStart + 1, parenEnd - parenStart - 1);
      // "N entries" or "N entry"
      std::istringstream ss(countStr);
      ss >> numEntries;
    }

    std::vector<std::string> &slots = vtableIndexMap[className];
    if (static_cast<int>(slots.size()) < numEntries)
      slots.resize(numEntries);

    // Read following lines until we hit a non-entry line or consume all slots.
    ++i;
    while (i < lines.size()) {
      const std::string &eline = lines[i];
      // Entry lines look like:  "   K | ..."
      // Find the '|'
      size_t pipe = eline.find('|');
      if (pipe == std::string::npos) break; // end of block

      // Parse slot index K (the integer before '|')
      std::string slotStr = trim(eline.substr(0, pipe));
      int slot = -1;
      try { slot = std::stoi(slotStr); } catch (...) { ++i; continue; }
      if (slot < 0) { ++i; continue; }

      // Everything after '|' is "ReturnType ClassName::method(Args)"
      std::string rest = trim(eline.substr(pipe + 1));
      if (rest.empty()) { ++i; continue; }

      // Strip return type to get "ClassName::method(Args)"
      std::string label = stripReturnType(rest);

      if (slot >= static_cast<int>(slots.size()))
        slots.resize(slot + 1);
      slots[slot] = label;
      ++i;
    }
    // Back up one so the outer loop re-examines the line that broke us out.
    --i;
  }

  // -------------------------------------------------------------------------
  // Pass 2: "Vtable for 'DerivedClass' (N entries)." blocks
  //         to extract the class hierarchy from
  //         "   -- (BaseClass, offset) vtable address --" lines.
  // -------------------------------------------------------------------------
  std::string currentClass;
  for (size_t i = 0; i < lines.size(); ++i) {
    const std::string &line = lines[i];

    const std::string vtPrefix = "Vtable for '";
    if (line.rfind(vtPrefix, 0) == 0) {
      // Extract derived class name.
      size_t nameStart = vtPrefix.size();
      size_t nameEnd = line.find('\'', nameStart);
      if (nameEnd != std::string::npos)
        currentClass = line.substr(nameStart, nameEnd - nameStart);
      else
        currentClass.clear();
      continue;
    }

    if (currentClass.empty()) continue;

    // Match "       -- (BaseClass, offset) vtable address --"
    // Trim and check for the pattern.
    std::string tline = trim(line);
    if (tline.rfind("-- (", 0) != 0) continue;
    // BaseClass is between '(' and ','
    size_t baseStart = 4; // after "-- ("
    size_t baseEnd = tline.find(',', baseStart);
    if (baseEnd == std::string::npos) continue;
    std::string baseName = tline.substr(baseStart, baseEnd - baseStart);
    baseName = trim(baseName);

    if (baseName.empty() || baseName == currentClass) continue;

    // Add baseName to hierarchy of currentClass if not already present.
    auto &bases = classHierarchy[currentClass];
    if (std::find(bases.begin(), bases.end(), baseName) == bases.end())
      bases.push_back(baseName);
  }

  return true;
}

} // namespace xcfa
