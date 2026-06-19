/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// PR c++/20208
// { dg-do run }
// { dg-options "-O2" }

extern "C" void abort();

template <typename T>
inline void *Foo (T arg) { return &arg[0]; }

int main () {
  int bry[2];
  if (Foo<int[2]>(bry) != bry)
    assert(0);
}
