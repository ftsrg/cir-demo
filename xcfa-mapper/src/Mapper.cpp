#include "Mapper.h"

#include <mlir/IR/Block.h>
#include <mlir/IR/Operation.h>
#include <mlir/IR/Attributes.h>
#include <mlir/IR/Types.h>

#include <llvm/ADT/SmallString.h>
#include <llvm/ADT/StringRef.h>
#include <llvm/Support/raw_ostream.h>

using namespace mlir;

namespace xcfa {

Mapper::Mapper() : counter(0) {}

void Mapper::registerHandler(llvm::StringRef opName, std::unique_ptr<OpHandler> handler) {
  handlers[opName.str()] = std::move(handler);
}

std::string Mapper::freshName(llvm::StringRef base) {
  std::string s = (base + llvm::Twine(counter++)).str();
  return s;
}

std::string Mapper::getOrCreateName(Value v) {
  auto it = valueNames.find(v);
  if (it != valueNames.end()) return it->second;
  std::string name = freshName("v");
  valueNames[v] = name;
  return name;
}

std::string Mapper::getOrCreateLabel(mlir::Block *b) {
  auto it = blockLabels.find(b);
  if (it != blockLabels.end()) return it->second;
  std::string name = freshName("bb");
  blockLabels[b] = name;
  return name;
}

void Mapper::setName(mlir::Value v, const std::string &name) {
  valueNames[v] = name;
}

bool Mapper::mapModule(ModuleOp module, std::ostream &out) {
  // Register a few built-in handlers here in the future. For now, we provide a
  // generic dispatcher that emits comments and assigns names to results.

  out << "/* xcfa-mapper generated C output - skeletal mapping. */\n\n";

  for (auto &op : module.getOps()) {
    // Only handle top-level cir.func for now (name: cir.func)
    auto name = op.getName().getStringRef();
    if (name == "cir.func") {
      // Extract the symbol name attribute if present
      if (auto sym = op.getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName())) {
        out << "// function: " << sym.getValue().str() << "\n";
        out << "// NOTE: mapping is partial; expand handlers for full translation.\n";
        // Emit a stub function header
        out << "int " << sym.getValue().str() << "() {\n";

        // Walk the region and emit comments/placeholder statements
        if (op.getNumRegions() > 0) {
          Region &r = op.getRegion(0);
          for (Block &b : r.getBlocks()) {
            out << "  // block\n";
            for (Operation &bbop : b.getOperations()) {
              // Dispatch to a handler if registered
              auto it = handlers.find(bbop.getName().getStringRef().str());
              if (it != handlers.end()) {
                it->second->handle(&bbop, *this, out);
                continue;
              }
              // Default: assign names for results and emit a comment with the op's name
              for (Value res : bbop.getResults()) {
                std::string nm = getOrCreateName(res);
                out << "  // %" << nm << "  (produced by: " << bbop.getName().getStringRef().str() << ")\n";
              }
              // Dump op attributes for debugging
              if (!bbop.getAttrs().empty()) {
                out << "  // attrs:\n";
                for (NamedAttribute attr : bbop.getAttrs()) {
                  llvm::SmallString<64> buf;
                  llvm::raw_svector_ostream ros(buf);
                  attr.getValue().print(ros);
                  out << "  //   " << attr.getName().getValue().str() << " = " << ros.str().str() << "\n";
                }
              }
            }
          }
        }

        out << "  return 0;\n";
        out << "}\n\n";
      } else {
        out << "// cir.func without symbol - skipping\n";
      }
    } else {
      out << "// top-level op: " << name.str() << " -- not mapped yet\n";
    }
  }

  return true;
}

} // namespace xcfa
