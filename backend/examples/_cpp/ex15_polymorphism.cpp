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

class I { public: virtual int op(int) = 0; };
class A : public I { public: int op(int x) override { return x-1; } };
class B : public I { public: int op(int x) override { return x+2; } };

int main(){
  I *i = (__VERIFIER_nondet_int() % 2) ? static_cast<I*>(new A()) : static_cast<I*>(new B());
  int r = i->op(__VERIFIER_nondet_int());
  if (r == -1) reach_error();
  delete i;
  return 0;
}
