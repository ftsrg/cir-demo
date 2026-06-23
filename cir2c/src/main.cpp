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
#include "handlers/Handlers.h"
#include "version.h"

#include <mlir/IR/MLIRContext.h>
#include <mlir/AsmParser/AsmParser.h>
#include <mlir/IR/BuiltinOps.h>
#include <mlir/IR/Location.h>
#include <mlir/IR/AsmState.h>
#include <llvm/Support/SourceMgr.h>
#include <llvm/Support/MemoryBuffer.h>
#include <mlir/IR/DialectRegistry.h>
#include <mlir/IR/ExtensibleDialect.h>
#include <mlir/Support/LogicalResult.h>

#include <clang/CIR/Dialect/IR/CIROpsDialect.h.inc>

#include <fstream>
#include <iostream>
#include <vector>
#include "ErrorMessages.h"

using namespace mlir;
using namespace cir2c;

int main(int argc, char **argv) {
  const char *monitorJsonFile = nullptr;
  std::vector<std::string> positional;
  // Issue #7: externalize all std:: calls (I/O and containers) by default.
  bool externalizeStd = true;

  const char *usage =
      "Usage: cir2c [--monitor-json <trace.json>] "
      "[--[no-]externalize-std] "
      "<input.mlir> <output.c>\n";

  for (int i = 1; i < argc; ++i) {
    std::string arg = argv[i];
    if (arg == "--version") {
      llvm::outs() << "cir2c " << CIR2C_VERSION << "\n";
      return 0;
    }
    if (arg == "--externalize-std") { externalizeStd = true; continue; }
    if (arg == "--no-externalize-std") { externalizeStd = false; continue; }
    if (arg == "--monitor-json") {
      if (i + 1 >= argc) {
        llvm::errs() << usage;
        return 2;
      }
      monitorJsonFile = argv[++i];
      continue;
    }
    positional.push_back(arg);
  }

  if (positional.size() != 2) {
    llvm::errs() << usage;
    return 2;
  }

  const char *inFile = positional[0].c_str();
  const char *outFile = positional[1].c_str();

  MLIRContext context;
  context.allowUnregisteredDialects(true);
  (void)context.getOrLoadDialect<cir::CIRDialect>();

  // Read input file
  std::string input;
  {
    std::ifstream ifs(inFile);
    if (!ifs) {
      llvm::errs() << "Unable to open input file: " << inFile << "\n";
      return 3;
    }
    input.assign((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());
  }

  // Workaround: the tablegen-generated AllocaOp parser has a bug where it
  // consumes the comma and sets 'init' before verifying the keyword, so it
  // only accepts ", init" and rejects any other qualifier with "expected 'init'".
  // Known qualifiers emitted by clang that are not 'init':
  //   ", cleanup_dest_slot" — the C++ EH cleanup-destination slot
  //   ", const"             — a const-qualified catch-clause variable
  //                           (emitted for `catch (const T& e)`)
  // The C emitter never inspects these flags, so it is safe to strip them
  // before handing the text to the MLIR parser.
  for (const std::string pattern : {", cleanup_dest_slot", ", const"}) {
    std::string::size_type pos = 0;
    while ((pos = input.find(pattern, pos)) != std::string::npos)
      input.erase(pos, pattern.size());
  }

  llvm::SourceMgr sourceMgr;
  sourceMgr.AddNewSourceBuffer(llvm::MemoryBuffer::getMemBuffer(input), llvm::SMLoc());

  // Create an empty module and parse into its body using the asm parser.
  mlir::ModuleOp module = mlir::ModuleOp::create(mlir::UnknownLoc::get(&context));
  mlir::ParserConfig parserConfig(&context);
  if (mlir::failed(mlir::parseAsmSourceFile(sourceMgr, module.getBody(), parserConfig))) {
    llvm::errs() << "Failed to parse MLIR module from input.\n";
    return 4;
  }

  Mapper mapper;
  mapper.setExternalizeStd(externalizeStd);
  registerBuiltinHandlers(mapper);

  std::ofstream ofs(outFile);
  if (!ofs) {
    llvm::errs() << "Unable to open output file: " << outFile << "\n";
    return 5;
  }

  if (!mapper.mapModule(module, ofs)) {
    llvm::errs() << ERR_MAPPING_FAILED << "\n";
    return 6;
  }

  ofs.flush();
  std::string generatedC;
  {
    std::ifstream cifs(outFile);
    if (cifs) {
      generatedC.assign((std::istreambuf_iterator<char>(cifs)), std::istreambuf_iterator<char>());
    }
  }
  if (monitorJsonFile) {
    // Only needed to populate the line-mapping fields written below; computing
    // it unconditionally was pure wasted work on every run (this is the only
    // consumer), and its cost scales with operation count x output line count.
    mapper.computeTraceLineMappings(input, generatedC);
    std::ofstream mofs(monitorJsonFile);
    if (!mofs) {
      llvm::errs() << "Unable to open monitor json file: " << monitorJsonFile << "\n";
      return 7;
    }
    mapper.writeMonitorJson(mofs);
  }

  // mapper.printMonitorReport(std::cout); // print readable version of json to std::cout

  llvm::outs() << "Wrote C output to " << outFile << "\n";
  return 0;
}
