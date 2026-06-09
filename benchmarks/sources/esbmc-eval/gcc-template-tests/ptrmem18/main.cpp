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
// PR c++/33616
// { dg-do run }
// { dg-options "-O2" }

struct S {
  int c;
  S () : c (0) {}
  virtual void f1 () { c += 1; }
  virtual void f2 () { c += 16; }
};

struct T {
  S s;
};

typedef void (S::*Q) ();

template <Q P>
void test1 (T *t)
{
  (t->s.*P)();
}

template <Q P>
void test2 (T *t)
{
  S &s = t->s;
  (s.*P)();
}

int
main ()
{
  T t;
  test1 <&S::f1> (&t);
  if (t.s.c != 1)
    assert(0);
  test1 <&S::f2> (&t);
  if (t.s.c != 17)
    assert(0);
  test2 <&S::f1> (&t);
  if (t.s.c != 18)
    assert(0);
  test2 <&S::f2> (&t);
  if (t.s.c != 34)
    assert(0);
}
