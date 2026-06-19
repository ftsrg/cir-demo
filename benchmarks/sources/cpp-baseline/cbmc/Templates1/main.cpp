/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template <typename T>
void f(T x)
{
  assert(x);
}

template <int i>
void eq(int z)
{
  assert(i==z);
}

int main()
{
  eq<2>(2);
  f<int>(1);
}
