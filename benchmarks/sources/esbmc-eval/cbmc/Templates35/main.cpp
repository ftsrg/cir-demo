/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template<typename T>
class X
{
public:
  // the :: should trigger elaboration of Z<int>
  enum { e = T::e };
};

template<typename T>
class Y:public X<T>
{
public:
  enum { e = X<T>::e } ;
};

template<typename T>
class Z
{
public:
  enum { e = 1 };
};

Y<Z<int> > y;

int main()
{
  assert(y.e==1);
}
