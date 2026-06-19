/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template <int c1>
struct A
{
  int func(){ return c1; }
};

template <int c1, int c2>
struct B
{
  A<c1*2+c2> a;
};

int main()
{
  B<5,4> b;
  assert(b.a.func() == 14);
}
