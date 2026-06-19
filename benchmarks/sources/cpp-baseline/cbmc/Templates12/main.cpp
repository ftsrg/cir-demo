/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template<class T>
struct A
{
  T t;
  bool eq(const A<T>& ref) const
  {
    return ref.t == t;
  }
};

int main()
{
  A<int> a;
  a.t = 10;

  A<int> b;
  b.t = 10;

  assert(a.eq(b));
  assert(b.eq(a));
}
