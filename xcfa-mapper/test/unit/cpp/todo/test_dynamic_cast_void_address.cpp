// Benchmark-derived todo example: dynamic_cast<void*> through a polymorphic base.
// Origin: backend/examples/esbmc-eval/inheritance_bringup/dynamic_cast4/main.cpp
// This needs base-subobject, RTTI, and vtable/vptr support.

#include <cassert>

struct A {
  virtual ~A() = default;
};

struct B : A {};

int main() {
  B bobj;
  A* ap = &bobj;
  void* vp = dynamic_cast<void*>(ap);
  assert(vp == &bobj);
  return 0;
}
