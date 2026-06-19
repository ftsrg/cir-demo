/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

namespace N {
template <class T>
struct A
{
  T i;
  A(T i):i(i){}
};
}

struct B : N::A<int>
{
  B(int i): N::A<int>(i) {}
  void  func(){};
  int b;
};

int main()
{
  B b(10);
  assert(b.i == 10);
}
