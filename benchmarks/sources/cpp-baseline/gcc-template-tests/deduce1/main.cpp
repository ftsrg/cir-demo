/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
#include <cstddef>
// { dg-do run }

// Copyright (C) 2002 Free Software Foundation, Inc.
// Contributed by Nathan Sidwell 13 Sep 2002 <nathan@codesourcery.com>

template <typename T> int Foo (T const *)
{
  return 1;
}
template <typename T> int Foo (T const &)
{
  return 2;
}
template <typename T, size_t I> int Foo (T const (&ref)[I])
{
  return 0;
}

int main ()
{
  static int array[4] = {};
  
  assert(0 == ( Foo (array)));
}

