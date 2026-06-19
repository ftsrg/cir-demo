/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T>
struct A{
  T i;
  void write(T i){this->i = i;}
};

struct B: A<bool>
{
  void write(bool i)
  {
    A<bool>::write(i);
  }
};

int main()
{
  B b;
  b.write(true);
  assert(b.i == true);
}
