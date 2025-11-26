/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

class X 
{
  public:
    X(int x): i(x){}
    int i;
};

template < X x = X(1), class T = X() >
class A
{
public:
  A():v(x){}
  T v;
};

int main()
{
  A<> a;
  assert(a.v.i==1);
  return 0;
}

