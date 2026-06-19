/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// { dg-do run }

int i;

template <class T>
struct S
{
  S () { i = 1; }
};

static S<int> s[1];

int main ()
{
  if (!i)
    assert(0 == ( 1));
}

