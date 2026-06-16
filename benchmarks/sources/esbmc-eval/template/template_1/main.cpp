/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// TC description:
//  - lvalue reference to an array in function template argument
#include<cassert>

template< class T >
class FixedArray25
{
  public:
    T anValue[25];
};

// Returns a reference to the nIndex element of rArray
template< class T >
T& Value( FixedArray25<T> &rArray, int nIndex)
{
  return rArray.anValue[nIndex];
}

int main()
{
    FixedArray25<int> sMyArray;

    Value(sMyArray, 10) = 5;
    assert(sMyArray.anValue[10] == 5);
    Value(sMyArray, 15) = 10;
    assert(sMyArray.anValue[15] == 10);
    assert(sMyArray.anValue[10] == 5);

    return 0;
}
