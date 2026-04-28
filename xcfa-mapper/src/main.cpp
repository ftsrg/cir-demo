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
using namespace xcfa;

int main(int argc, char **argv) {
  bool bestEffort = false;
  const char *monitorJsonFile = nullptr;
  std::vector<std::string> positional;

  for (int i = 1; i < argc; ++i) {
    std::string arg = argv[i];
    if (arg == "--version") {
      llvm::outs() << "xcfa-mapper " << XCFA_MAPPER_VERSION << "\n";
      return 0;
    }
    if (arg == "--best-effort") {
      bestEffort = true;
      continue;
    }
    if (arg == "--monitor-json") {
      if (i + 1 >= argc) {
        llvm::errs() << "Usage: xcfa-mapper [--best-effort] [--monitor-json <trace.json>] <input.mlir> <output.c>\n";
        return 2;
      }
      monitorJsonFile = argv[++i];
      continue;
    }
    positional.push_back(arg);
  }

  if (positional.size() != 2) {
    llvm::errs() << "Usage: xcfa-mapper [--best-effort] [--monitor-json <trace.json>] <input.mlir> <output.c>\n";
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
  // cannot parse ", cleanup_dest_slot" after the alloca name -- it expects
  // 'init' instead.  Since xcfa-mapper never inspects this flag (it only marks
  // the alloca as the C++ cleanup-destination-dispatch slot, something the C
  // emitter doesn't need), we can safely strip it before handing the text to
  // the MLIR parser.
  {
    const std::string pattern = ", cleanup_dest_slot";
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

  Mapper mapper(bestEffort);
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
  mapper.computeTraceLineMappings(input, generatedC);

  if (monitorJsonFile) {
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
