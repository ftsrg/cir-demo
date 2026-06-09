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

/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

/*
 * Polymorphism:
 *  - derived class contains two overriding methods
 *  - one of the overriding methods has `virtual` keyword, but the other doesn't
 */
#include <cassert>

class Bird {
  public:
  virtual int do_something(void) { return 21; }
  virtual int do_other(void) { return 25; }
};

class Penguin: public Bird {
  public:
    virtual int do_something(void) { return 42; }
    int do_other(void) { return 50; }
};

int main(){
  Bird *b = new Bird();
  Bird *p = new Penguin();
  assert(b->do_something() == 21);
  assert(p->do_something() == 42);
  assert(b->do_other() == 25);
  assert(p->do_other() == 50);
  delete b;
  delete p;
  return 0;
}

