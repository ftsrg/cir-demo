/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include<cassert>

template<typename T>
class X
{
public:
  typename T::asd asd;
};

typedef X<char> Z;

int main()
{
  Z a;
  return 0;
}
