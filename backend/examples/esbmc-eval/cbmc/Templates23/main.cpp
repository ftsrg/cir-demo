/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <unsigned N>
struct A
{
  static const unsigned n = N;
};

template <unsigned N>
struct B
{
  A<0+N> a;
};

int main()
{
  B<10> b;
  assert(b.a.n == 10);
}
