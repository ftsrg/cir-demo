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

// Pointer-to-member-function of a virtual method. The Itanium ABI encodes a
// virtual member pointer as a vtable byte offset; calling `(obj.*p)()` performs
// a raw `*(vptr)[offset]` load, so it requires a real in-memory vtable and an
// initialised vptr — which the vtable-array lowering now provides.

struct A {
  virtual int g() { return 10; }
  virtual int h() { return 20; }
};

struct B : public A {
  int g() override { return 11; }
  int h() override { return 21; }
};

int main() {
  int (A::*pg)() = &A::g;
  int (A::*ph)() = &A::h;
  A *a = new B();
  int r = (a->*pg)() + (a->*ph)();   // B::g()+B::h() == 11+21 == 32
  delete a;
  return r == 32 ? 0 : 1;
}
