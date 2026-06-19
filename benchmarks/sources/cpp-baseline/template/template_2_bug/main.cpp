/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// TC description:
//  lvalue reference argument to an integral in function template
#include<cassert>

template< class T>
T& Value1(T &value)
{
  return value;
}

int main()
{
    int x=5;
    assert(Value1(x)!=5); // should be 5

    return 0;
}
