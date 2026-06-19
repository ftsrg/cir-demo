/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template<int C>
struct A{
  int func();
};

template<int C>
int A<C>::func()
{
  return C;
}

int main()
{
  A<12> a;
  assert(a.func() == 12);
}
