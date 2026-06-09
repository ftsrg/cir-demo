/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template <class T>
class A
{
public:
  T t;
};

int main()
{
  A<A<double> > a1;
  A<A<int> > a2;

  a1.t.t=3.0;
  assert(a1.t.t==3.0);

  a2.t.t=2;
  assert(a2.t.t==2);
}
