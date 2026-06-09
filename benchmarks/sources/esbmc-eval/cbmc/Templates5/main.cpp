/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template<class T>
class Y {
public:
  void f() {
    T::A++;   // T::A is not a type name!
  }
};

class B
{
public:
  static int A;
};

int B::A = 0;

int main()
{
  Y<B> y;
  y.f();
  assert(B::A == 1);
}
