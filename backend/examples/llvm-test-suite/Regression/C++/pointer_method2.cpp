/*
 * Copyright 2026 LLVM Project
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

#include <stdio.h>

struct A {
  int a;
  virtual void foo() = 0;
  void bar() { printf("A::bar(): a=%x\n", a); }
};

struct B {
  int b;
  virtual void foo() = 0;
  void bar() { printf("B::bar(): b=%x\n", b); }
};

struct C : A, B {
  int c;
  virtual void foo() { printf("C::foo(), c=%x\n", c); }
  void bar() { printf("C::bar(), c=%x\n", c); }
};

template <class T> void invoke(C &c, void (T::*fn)()) {
  (c.*fn)();
}

int main() {
  C c;
  c.a = 0xff;
  c.b = 0xf0f;
  c.c = 0xf00f;

  invoke(c, &A::foo);
  invoke(c, &A::bar);
  invoke(c, &B::foo);
  invoke(c, &B::bar);
  invoke(c, &C::foo);
  invoke(c, &C::bar);
}
