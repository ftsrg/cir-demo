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

template <class T>
struct A {
  static const int a = 0;
};

// specialization to int
template <>
struct A<int> {
  static const int a = 1;
};

// specialization to char
template <>
struct A<char> {
  static const int a = 2;
};

// specialization to signed char
template <>
struct A<signed char> {
  static const int a = 3;
};

// specialization to unsigned char
template <>
struct A<unsigned char> {
  static const int a = 4;
};

int main()
{
  A<bool> obj0; // general one
  assert(obj0.a == 0);

  A<int> obj1; // specialized
  assert(obj1.a == 1);

  A<char> obj2; // specialized
  assert(obj2.a == 2);

  A<signed char> obj3; // specialized
  assert(obj3.a == 3);

  A<unsigned char> obj4; // specialized
  assert(obj4.a == 4);
}
