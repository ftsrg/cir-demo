/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// PR c++/28385
// instantiating op() with void()() was making the compiler think that 'fcn'
// was const, so it could eliminate the call.

// { dg-do run }


int barcnt = 0;

class Foo {
  public:
    template<typename T>
    void operator()(const T& fcn) {
      fcn();
    }
};

void bar() {
  barcnt++;
}

int main() {
  Foo myFoo;
  myFoo(bar);
  myFoo(&bar);
  if (barcnt != 2)
    assert(0);
}
