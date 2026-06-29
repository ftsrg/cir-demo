/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
//Origin: harinath@cs.umn.edu
//PR c++/10804
// G++ was not emiting the function foo.

// { dg-do run }


template<class T>
struct A
{
  A() { const void (*a)() = foo; }
  static const void foo() {}
};
int main(int argc, char *argv[])
{
  A<int> a;
}
