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
// PR c++/14258
// { dg-do run }

template<typename T>
struct A 
{
  typedef T type;
  typedef A type2;
};
                                                                               
template<typename T>
struct B : A<T> 
{
  using typename A<T>::type;
  type t;

  using typename A<T>::type2;

  type f()
  {
    type i = 1;
    return i;
  }
};

int main()
{
  B<int>::type t = 4;
  if (t != 4)
    assert(0);

  B<double> b;
  b.t = 3;
  if (b.t != 3)
    assert(0);

  B<long> b2;
  if (b2.f() != 1)
    assert(0);

  B<double>::type2::type tt = 12;
  if (tt != 12)
    assert(0);
}

