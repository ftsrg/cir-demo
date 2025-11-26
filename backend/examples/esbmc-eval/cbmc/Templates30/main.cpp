/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template <class T1>
struct A
{
  T1 t;

  template <class T2>
  void set(T2 t){ this->t = t; }

};

int main()
{
  A<bool> a;
  a.set<int>(0);
  assert(a.t == false);
};
