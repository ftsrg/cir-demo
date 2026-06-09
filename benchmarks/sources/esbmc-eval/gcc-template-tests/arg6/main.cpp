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
// PR c++/33744
// { dg-do run }

template <bool B> struct A { bool b; A() : b(B) {}; };
A<bool(1)> a;
A<bool(1<2)> b;
A<(bool)(2>1)> c;
A<bool((2>1))> d;
A<bool(2>1)> e;

int
main ()
{
  assert(0 == ( (a.b && b.b && c.b && d.b && e.b) ? 0 : 1));
}
