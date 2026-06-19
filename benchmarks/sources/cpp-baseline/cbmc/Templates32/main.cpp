/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

enum argt { ONE, TWO };

template < argt V = TWO, class T = argt >
class A
{
public:
  A():v(V){}
  T v;
};

int main()
{
  A<> a;
  assert (a.v == TWO);
  return 0;
}

