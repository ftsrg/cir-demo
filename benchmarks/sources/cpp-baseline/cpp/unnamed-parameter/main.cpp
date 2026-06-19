/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

struct a
{
  a(int, int *c) : b(*c)
  {
  }
  int b;
};
int f = 42;
int main()
{
  a a(0, &f);
  assert(a.b == 42);
}
