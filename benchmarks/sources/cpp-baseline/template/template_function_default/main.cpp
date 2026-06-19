/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <assert.h>
//#include <iostream>

template <typename S, typename T> void f(S s = 0, T t = 0)
{
  assert(s==0);
  assert(t==0);
}

int main() {
  f<int,char>();     // f<int,char>(0,0)

}
