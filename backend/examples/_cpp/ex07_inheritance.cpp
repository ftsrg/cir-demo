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

extern void reach_error();
extern int __VERIFIER_nondet_int();

class Base {
public:
  virtual int f(int x) { return x; }
};
class Derived : public Base {
public:
  int f(int x) override { return x + 1; }
};

int main() {
  Base *b = new Derived();
  int v = b->f(__VERIFIER_nondet_int());
  if (v < 0) reach_error();
  delete b;
  return 0;
}
