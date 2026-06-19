/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template <class T>
struct A
{
  T i;
};

template <class T>
T  get_i(const A<T> a1)
{
  return a1.i;
}

int main()
{
  A<int> a2;
  a2.i = 10;
  assert (a2.i == 10);
  assert(get_i<int>(a2) == 10);
}
