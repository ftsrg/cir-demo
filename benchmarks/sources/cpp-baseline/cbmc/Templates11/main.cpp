/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T>
bool func(T t){return false;}


template <>
bool func<int>(int t){return true;}

template <class A>
struct Test
{
  bool f()
  {
    A a;
    return func<A>(a);
  }
};

int main()
{
  Test<int> t1;
  assert(t1.f()==true);
}
