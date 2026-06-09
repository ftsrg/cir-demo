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
// { dg-do run }

// Origin: Lynn Akers <lakers@peachtree.com>

// PR c++/10940: Problem handling parameter list for static member
// that is a specialization of a member template of a template class.

template<int b>
class o
{
public:
  template<typename T> static void do_add(T* p, T v);
};

template<>
template<typename T>
inline void o<32>::do_add(T* p, T v)
{
  *p += v;
}

int main()
{
  int a = 0x1000;
  o<32>().do_add<int>(&a, 0x2000);
  assert(0 == ( (a != 0x3000)));
}
