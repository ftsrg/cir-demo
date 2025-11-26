/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

class T1
{
public:
  // a template member function
  template <typename T2>
  T2 f(T2 x)
  {
    t=!t;
    return x;
  }

  void g()
  {
    assert(2==f<int>(2));
  }

  void h()
  {
    assert(3==f<int>(3));
  }

  bool t;
  T1():t(false) { }
};

int main()
{
  T1 x;
  x.g();
  assert(x.t==true);

  assert(1==x.f<int>(1));
  assert(true==x.f<bool>(true));

  x.h();
  assert(x.t==false);
}
