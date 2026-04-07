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

#include <ostream>
#include <string>
#include <unordered_map>
#include <vector>

#include <llvm/ADT/StringRef.h>

namespace xcfa {

struct OperationMonitorEntry {
  bool isRegistered = false;
  unsigned visitedCount = 0;
  unsigned handledCount = 0;
};

struct OperationTraceEntry {
  std::string opName;
  std::string inputText;
  std::string outputText;
  bool mapped = false;
  int mlirStartLine = 0;
  int mlirEndLine = 0;
  int cStartLine = 0;
  int cEndLine = 0;
};

class TraceabilityTracker {
public:
  void registerOperation(llvm::StringRef opName);
  void recordOperationVisit(llvm::StringRef opName);
  void recordOperationHandled(llvm::StringRef opName);
  void recordOperationTrace(llvm::StringRef opName,
                            const std::string &inputText,
                            const std::string &outputText,
                            bool mapped);

  void printReport(std::ostream &out) const;
  void writeJson(std::ostream &out) const;
  void computeLineMappings(llvm::StringRef mlirText, llvm::StringRef cText);

private:
  std::unordered_map<std::string, OperationMonitorEntry> operationMonitor;
  std::vector<OperationTraceEntry> operationTrace;
};

} // namespace xcfa
