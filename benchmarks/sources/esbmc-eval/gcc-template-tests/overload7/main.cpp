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

// Copyright (C) 2005 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 17 Oct 2005 <nathan@codesourcery.com>

// PR 24386:Wrong virtual function called
// Origin:  Scott Snyder snyder@fnal.gov

struct A
{
  virtual int Foo () { return 1; }
};
struct B : public A
{
  virtual int Foo () { return 2; }
};

template <class T>
int Bar (T *a)
{
  if (static_cast<A*>(a)->A::Foo () != 1)
    return 1;
  if (static_cast<A*>(a)->Foo () != 2)
    return 2;
  return 0;
}

int main ()
{
  assert(0 == ( Bar (new B)));
}
