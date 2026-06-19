/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T>
struct A
{
  T t;
};

struct B
{
  int i;
  B():i(0) { }
};

int main()
{
  A<B> a;
  assert(a.t.i == 0);
}
