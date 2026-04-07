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

#include "Traceability.h"

#include <algorithm>
#include <cctype>
#include <sstream>

namespace xcfa {

void TraceabilityTracker::registerOperation(llvm::StringRef opName) {
  auto &entry = operationMonitor[opName.str()];
  entry.isRegistered = true;
}

void TraceabilityTracker::recordOperationVisit(llvm::StringRef opName) {
  auto &entry = operationMonitor[opName.str()];
  entry.visitedCount++;
}

void TraceabilityTracker::recordOperationHandled(llvm::StringRef opName) {
  auto &entry = operationMonitor[opName.str()];
  entry.handledCount++;
}

void TraceabilityTracker::recordOperationTrace(llvm::StringRef opName,
                                               const std::string &inputText,
                                               const std::string &outputText,
                                               bool mapped) {
  operationTrace.push_back(OperationTraceEntry{opName.str(), inputText, outputText, mapped});
}

void TraceabilityTracker::printReport(std::ostream &out) const {
  out << "\n=== Mapping Monitor Report (operations) ===\n";

  out << "\nOperation trace (input operation -> emitted output):\n";
  if (operationTrace.empty()) {
    out << "<no operation trace entries>\n";
  } else {
    for (size_t i = 0; i < operationTrace.size(); ++i) {
      const auto &entry = operationTrace[i];
      out << "[" << i << "] " << entry.opName
          << " | mapped=" << (entry.mapped ? "yes" : "no") << "\n";
      out << "  input: " << entry.inputText << "\n";
      if (entry.outputText.empty()) {
        out << "  output: <no emitted output>\n";
      } else {
        out << "  output:\n";
        std::istringstream iss(entry.outputText);
        std::string line;
        while (std::getline(iss, line)) {
          out << "    " << line << "\n";
        }
      }
    }
  }

  out << "=== End of Mapping Monitor Report ===\n";
}

static std::string jsonEscape(const std::string &s) {
  std::string out;
  out.reserve(s.size() + 16);
  for (char ch : s) {
    unsigned char uch = static_cast<unsigned char>(ch);
    switch (ch) {
      case '"': out += "\\\""; break;
      case '\\': out += "\\\\"; break;
      case '\b': out += "\\b"; break;
      case '\f': out += "\\f"; break;
      case '\n': out += "\\n"; break;
      case '\r': out += "\\r"; break;
      case '\t': out += "\\t"; break;
      default:
        if (uch < 0x20) {
          static const char hex[] = "0123456789abcdef";
          out += "\\u00";
          out += hex[(uch >> 4) & 0xF];
          out += hex[uch & 0xF];
        } else {
          out.push_back(ch);
        }
    }
  }
  return out;
}

void TraceabilityTracker::writeJson(std::ostream &out) const {
  out << "{\n";
  out << "  \"operationTrace\": [\n";
  for (size_t i = 0; i < operationTrace.size(); ++i) {
    const auto &entry = operationTrace[i];
    out << "    {\n";
    out << "      \"index\": " << i << ",\n";
    out << "      \"opName\": \"" << jsonEscape(entry.opName) << "\",\n";
    out << "      \"mapped\": " << (entry.mapped ? "true" : "false") << ",\n";
    out << "      \"inputText\": \"" << jsonEscape(entry.inputText) << "\",\n";
    out << "      \"outputText\": \"" << jsonEscape(entry.outputText) << "\",\n";
    out << "      \"mlirStartLine\": " << (entry.mlirStartLine > 0 ? std::to_string(entry.mlirStartLine) : std::string("null")) << ",\n";
    out << "      \"mlirEndLine\": " << (entry.mlirEndLine > 0 ? std::to_string(entry.mlirEndLine) : std::string("null")) << ",\n";
    out << "      \"cStartLine\": " << (entry.cStartLine > 0 ? std::to_string(entry.cStartLine) : std::string("null")) << ",\n";
    out << "      \"cEndLine\": " << (entry.cEndLine > 0 ? std::to_string(entry.cEndLine) : std::string("null")) << "\n";
    out << "    }" << (i + 1 < operationTrace.size() ? "," : "") << "\n";
  }
  out << "  ]\n";
  out << "}\n";
}

static std::string normalizeWs(const std::string &s) {
  std::string out;
  out.reserve(s.size());
  bool prevSpace = false;
  for (char c : s) {
    bool isSpace = std::isspace(static_cast<unsigned char>(c));
    if (isSpace) {
      if (!prevSpace) out.push_back(' ');
    } else {
      out.push_back(c);
    }
    prevSpace = isSpace;
  }
  if (!out.empty() && out.front() == ' ') out.erase(out.begin());
  if (!out.empty() && out.back() == ' ') out.pop_back();
  return out;
}

static std::vector<std::string> splitLines(const std::string &s) {
  std::vector<std::string> lines;
  std::istringstream iss(s);
  std::string line;
  while (std::getline(iss, line)) lines.push_back(line);
  if (!s.empty() && s.back() == '\n') lines.push_back("");
  return lines;
}

static int findLineByNormalized(const std::vector<std::string> &lines,
                                const std::string &targetNorm,
                                int startIdx) {
  if (targetNorm.empty()) return 0;
  for (int i = startIdx; i < static_cast<int>(lines.size()); ++i) {
    if (normalizeWs(lines[i]) == targetNorm) return i + 1;
  }
  for (int i = startIdx; i < static_cast<int>(lines.size()); ++i) {
    std::string lineNorm = normalizeWs(lines[i]);
    if (lineNorm.empty()) continue;
    if (lineNorm.find(targetNorm) != std::string::npos ||
        targetNorm.find(lineNorm) != std::string::npos) {
      return i + 1;
    }
  }
  return 0;
}

static int findLineByOpName(const std::vector<std::string> &lines,
                            const std::string &opName,
                            int startIdx) {
  if (opName.empty()) return 0;
  for (int i = startIdx; i < static_cast<int>(lines.size()); ++i) {
    const std::string &line = lines[i];
    if (opName != "cir.func" && line.find("cir.func") != std::string::npos) continue;
    if (line.find(opName) != std::string::npos) return i + 1;
  }
  return 0;
}

static std::pair<int, int> findOutputRange(const std::vector<std::string> &lines,
                                           const std::string &outputText,
                                           int startIdx) {
  std::vector<std::string> outLines = splitLines(outputText);
  std::vector<std::string> normOut;
  for (const auto &line : outLines) {
    std::string n = normalizeWs(line);
    if (!n.empty()) normOut.push_back(n);
  }
  if (normOut.empty()) return {0, 0};

  int first = 0;
  int last = 0;
  int cursor = startIdx;
  for (const auto &needle : normOut) {
    int found = findLineByNormalized(lines, needle, cursor);
    if (!found) return {0, 0};
    if (!first) first = found;
    last = found;
    cursor = found;
  }
  return {first, last};
}

void TraceabilityTracker::computeLineMappings(llvm::StringRef mlirText, llvm::StringRef cText) {
  std::vector<std::string> mlirLines = splitLines(mlirText.str());
  std::vector<std::string> cLines = splitLines(cText.str());

  int mlirCursor = 0;
  int cCursor = 0;
  for (auto &entry : operationTrace) {
    std::string inputNorm = normalizeWs(entry.inputText);
    int mlirLine = findLineByNormalized(mlirLines, inputNorm, mlirCursor);
    if (!mlirLine) mlirLine = findLineByOpName(mlirLines, entry.opName, mlirCursor);
    if (mlirLine) {
      entry.mlirStartLine = mlirLine;
      entry.mlirEndLine = mlirLine;
      mlirCursor = mlirLine;
    }

    auto cRange = findOutputRange(cLines, entry.outputText, cCursor);
    if (cRange.first > 0) {
      entry.cStartLine = cRange.first;
      entry.cEndLine = cRange.second;
      cCursor = cRange.second;
    }
  }
}

} // namespace xcfa
