/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <cassert>

template <class T>
struct C
{
  static const char* k;
};

template <typename T>
const char* C<T>::k = "C";

int main(int argc, char* argv[])
{
  assert(C<int>::k[0] == 'C');
  assert(C<char>::k[0] == 'C');
  assert(&C<int>::k != &C<char>::k);

  return 0;
}
