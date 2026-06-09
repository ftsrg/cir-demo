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
// dg-do run
// Copyright (C) 2005 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 16 Sep 2005 <nathan@codesourcery.com>

// PR 23519  template specialization ordering (DR214)
// Origin:  Maxim Yegorushkin <maxim.yegorushkin@gmail.com>

struct A
{
    template<class T> int operator+(T&) { return 1;}
};

template<class T> struct B
{
  int operator-(A&) {return 2;}
  template<typename R> int operator*(R&) {return 3;}
};

template <typename T, typename R> int operator-(B<T>, R&) {return 4;}
template<class T> int operator+(A&, B<T>&) {return 5;}
template <typename T> int operator*(T &, A&){return 6;}

int main()
{
  A a;
  B<A> b;
  if ((a + b) != 5)
    assert(0 == (1));
  
  if ((b - a) != 2)
    assert(0 == (2));
  
  if ((b * a) != 6)
    assert(0 == (3));
}
