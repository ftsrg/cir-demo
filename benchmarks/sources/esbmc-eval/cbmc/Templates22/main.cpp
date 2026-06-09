/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template<class T>
T func(T* t){return *t;}

template<class T>
T func(T t){ return t;}

int main()
{
  int x = 10;
  assert(func<int>(&x) == func<int>(x));
}
