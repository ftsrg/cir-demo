/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// Test that vtables are set up properly for constructors and destructors
// of template classes.

// { dg-do run }

int r;

template <class T>
struct A {
  virtual void f () { }
  A() { f (); }
  ~A() { f (); }
};

struct B : public A<int> {
  virtual void f () { ++r; }
};

int main ()
{
  { B b; }
  assert(0 == ( r));
}
