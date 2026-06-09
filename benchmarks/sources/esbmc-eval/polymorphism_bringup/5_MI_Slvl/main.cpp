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
 * multiple inheritance: late binding
 */
#include <cassert>

class Base1 {
  public:
  virtual int f(void) { return 21; }
};

class Base2 {
  public:
    virtual int f(void) { return 42; }
};

class Derived: public Base1, public Base2 {
  public:
    virtual int g(void) { return 100; }
    int f(void) { return 1; }
};

int main(){
  Derived *d = new Derived();
  assert(d->Base1::f() == 21);
  assert(d->Base2::f() == 42);
  assert(d->g() == 100);
  assert(d->f() == 1);
  delete d;

  return 0;
}

