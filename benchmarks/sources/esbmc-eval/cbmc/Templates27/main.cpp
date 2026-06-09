/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T1, class T2 = int>
struct C {
  T2 i;
  C():i(10) { }
};

template <class T, int v = 9>
void check9()
{
  assert(v == 9);
}

template <int v = 10>
void check10()
{
  assert(v == 10);
}

int main()
{
  C<bool> c;
  assert(c.i == 10);

  check9<int>();
  check10<>();
}
