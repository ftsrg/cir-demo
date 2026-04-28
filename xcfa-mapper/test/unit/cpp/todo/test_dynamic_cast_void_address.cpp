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
