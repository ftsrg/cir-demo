/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template <typename T1, typename T2>
class basic
{
  T1 some;
  T2 other;
};

template <typename T1x, typename T2x=char>
class basic;

basic<char> b;

int main()
{
  return 0;
}
