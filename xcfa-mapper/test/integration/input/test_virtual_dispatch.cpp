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

// Basic single-inheritance virtual dispatch through a base pointer.
//
// Exercises the vtable-array lowering: the constructor installs &_ZTV[k] as the
// object's vtable pointer, and `b->f(...)` becomes
// __VERIFIER_virtual_call_<sig>(b, slot, args), whose default implementation
// loads the function pointer from vtable[slot] and calls it. Dynamic type is
// Derived, so Derived::f must be selected (not Base::f).

struct Base {
  virtual int f(int x) { return x; }
};

struct Derived : public Base {
  int f(int x) override { return x + 1; }
};

int main() {
  Base *b = new Derived();
  int v = b->f(41);   // Derived::f(41) == 42
  delete b;
  return v == 42 ? 0 : 1;
}
