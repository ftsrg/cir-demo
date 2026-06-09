/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// PR c++/28370
// { dg-do run }

namespace
{
  template<typename T> struct A { static int *a; };
  template<typename T> int *A<T>::a = 0;
}

int *
foo ()
{
  return A<int>::a;
}

int
main ()
{
  assert(0 == ( foo() != 0));
}
