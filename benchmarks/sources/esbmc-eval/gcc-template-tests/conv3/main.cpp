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

// Copyright (C) 2001 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 29 Dec 2001 <nathan@codesourcery.com>

// PR 4361. Template conversion operators were not overloaded.

template <typename T> struct C
{
  operator T () 
  {
    return 0;
  }
  template <typename T2> operator T2 ()
  {
    return 1;
  }
  int Foo ()
  {
    return operator T ();
  }
  template <typename T2> int Baz ()
  {
    return static_cast <int> (operator T2 ());
  }
};

int main ()
{
  int r;
  C<int> c;

  r = c.Foo ();
  if (r)
    assert(0 == 1);
  r = c.Baz<int> ();
  if (r)
    assert(0 == ( 2));
  r = c.Baz<float> ();
  if (!r)
    assert(0 == (3));
  return 0;
}
