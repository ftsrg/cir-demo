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

// Copyright (C) 2002 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 14 Sep 2002 <nathan@codesourcery.com>

// PR 7768 template dtor pretty function wrong

#include <string.h>

static size_t current = 0;
static bool error = false;

static char const *names[] =
{
  "X<T>::X() [with T = void]",
  "X<T>::~X() [with T = void]",
  0
};

void Verify (char const *ptr)
{
  error = strcmp (ptr, names[current++]);
}
  
template <typename T>
struct X
{
  X() { Verify (__PRETTY_FUNCTION__); }
  ~X() { Verify (__PRETTY_FUNCTION__); }
};

int main()
{
  {
    X<void> x;
    
    if (error)
      assert(0 == ( current));
  }
  if (error)
    assert(0 == ( current));
  return 0;
}
