/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template <class T>
int func()
{
  return 0;
}

template <>
int func<int>()
{
  return 1;
}

template <>
int func<char>()
{
  return 2;
}

int main()
{
  assert(func<bool>() == 0);
  assert(func<int>()  == 1);
  assert(func<char>() == 2);
}
