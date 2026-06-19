/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T>
struct A
{
  static T some_function(T v) { return v; }
};

int main()
{
  int v = A<int>::some_function(10);
  assert(v==10);  
}
