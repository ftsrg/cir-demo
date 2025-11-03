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

static std::string mangleLabel(const std::string &s) {
  std::string out;
  out.reserve(s.size());
  for (char c : s) {
    if (std::isalnum((unsigned char)c) || c == '_') out.push_back(c);
    else out.push_back('_');
  }
  if (!out.empty() && std::isdigit((unsigned char)out[0])) out = std::string("_") + out;
  return out;
}

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
  auto emitCirFunc = [&](Operation *fop) {
    if (auto sym = fop->getAttrOfType<StringAttr>(SymbolTable::getSymbolAttrName())) {
      out << "// function: " << sym.getValue().str() << "\n";
      out << "// NOTE: mapping is partial; expand handlers for full translation.\n";
      out << "int " << sym.getValue().str() << "() {\n";

      if (fop->getNumRegions() > 0) {
        Region &r = fop->getRegion(0);
        for (Block &b : r.getBlocks()) getOrCreateLabel(&b);
        for (Block &b : r.getBlocks()) {
          out << mangleLabel(getOrCreateLabel(&b)) << ":\n";
          for (Operation &bbop : b.getOperations()) {
            auto it = handlers.find(bbop.getName().getStringRef().str());
            if (it != handlers.end()) {
              it->second->handle(&bbop, *this, out);
              continue;
            }
            for (Value res : bbop.getResults()) {
              std::string nm = getOrCreateName(res);
              out << "  // %" << nm << "  (produced by: " << bbop.getName().getStringRef().str() << ")\n";
            }
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
  };

  for (auto &op : module.getOps()) {
    // If the parser produced a nested `builtin.module` inside the provided
    // ModuleOp, descend into it and handle its contents.
    if (llvm::isa<mlir::ModuleOp>(op)) {
      mlir::ModuleOp inner = mlir::cast<mlir::ModuleOp>(op);
      for (auto &innerOp : inner.getOps()) {
        if (innerOp.getName().getStringRef() == "cir.func") {
          emitCirFunc(&innerOp);
        } else {
          out << "// top-level op: " << innerOp.getName().getStringRef().str() << " -- not mapped yet\n";
        }
      }
      continue;
    }

    if (op.getName().getStringRef() == "cir.func") {
      emitCirFunc(&op);
    } else {
      out << "// top-level op: " << op.getName().getStringRef().str() << " -- not mapped yet\n";
    }
  }

  return true;
}

} // namespace xcfa
