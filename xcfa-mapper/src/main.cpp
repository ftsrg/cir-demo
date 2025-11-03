#include "Mapper.h"
#include "handlers/Handlers.h"

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

using namespace mlir;
using namespace xcfa;

int main(int argc, char **argv) {
  if (argc < 3) {
    llvm::errs() << "Usage: xcfa-mapper <input.mlir> <output.c>\n";
    return 2;
  }

  const char *inFile = argv[1];
  const char *outFile = argv[2];

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
  // Register the built-in CIR handlers (alloca, load, store, const, cmp, br, brcond, call, return)
  registerBuiltinHandlers(mapper);

  std::ofstream ofs(outFile);
  if (!ofs) {
    llvm::errs() << "Unable to open output file: " << outFile << "\n";
    return 5;
  }

  if (!mapper.mapModule(module, ofs)) {
    llvm::errs() << "Mapping failed.\n";
    return 6;
  }

  llvm::outs() << "Wrote C output to " << outFile << "\n";
  return 0;
}
