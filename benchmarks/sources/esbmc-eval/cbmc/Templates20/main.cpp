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
 * TC description:
 *  class template, type parameter, explicit specialization, inheritance
 */
#include <cassert>

struct A
{
  int i;
  A():i(10){}

private:
  A(const A& a); // disabled
};

template <class T>
class B: A {
public:
  T t;
  B(){};
  int get_i(){ return i; }

private:
  B(B<T>& b); // disabled
};


template <>
class B<bool>: A {
public:
  bool b;
  B():b(true){};
  int get_i(){ return i; }

private:
  B(B<bool>& b); // disabled
};

B<int> b1;

int main()
{
  b1.t = 20;
  assert(b1.t == 20);
  B<bool> b2;
  assert(b2.b == true);
}
