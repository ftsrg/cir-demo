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
// Copyright (C) 2005 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 31 Mar 2005 <nathan@codesourcery.com>

// { dg-do run }
// DR214

template <class T> T f(int) {return 0;}
template <class T, class U> T f(U){return 1;}

template <typename T, typename R> T checked_cast (R const &) {return 0;}
template <typename T, typename R> T checked_cast (R *) {return 1;}


int main ()
{
  int i = 0;

  if (f<int>(1))
    assert (0 == 1);
  
  if (checked_cast<int>(i) != 0)
    assert(0 ==  2);

  if (checked_cast<int>(&i) != 1)
    assert(0 ==  3);
}
