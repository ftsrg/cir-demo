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

#include <cassert>

class T1
{
public:
  // a template member function
  template <typename T2>
  T2 f(T2 x)
  {
    t=!t;
    return x;
  }

  void g()
  {
    assert(2==f<int>(2));
  }

  void h()
  {
    assert(3==f<int>(3));
  }

  bool t;
  T1():t(false) { }
};

int main()
{
  T1 x;
  x.g();
  assert(x.t==true);

  assert(1==x.f<int>(1));
  assert(true==x.f<bool>(true));

  x.h();
  assert(x.t==false);
}
