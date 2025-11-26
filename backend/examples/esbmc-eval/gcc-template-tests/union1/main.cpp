/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>
// { dg-do run }


void g (char c) 
{
  if (c != 'a')
    assert(0);
}

void h (int i)
{
  if (i != 3)
    assert(0);
}

template <typename T> void f(T const &t)
{
    union { char c; T t_; };

    c = 'a';
    g (c);
    t_ = 3;
    h (t_);
}

int main () {
  f (3);
}
