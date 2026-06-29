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
  bool b;
  A(){}
};

template <>
struct A<bool>;

template <>
struct A<bool>{ bool b; };


int main()
{
  A<bool> a;
  a.b = false;
  assert(a.b==false);
}
