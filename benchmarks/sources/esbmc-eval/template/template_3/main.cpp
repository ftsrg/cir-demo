/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// TC description:
//  - This TC is just a variant of template_1, using float instead of int
//    for the type parameter of class template
//  - lvalue reference to an array in function template argument
#include<cassert>

template< class T, class T1>
class FixedArray25
{
  public:
    T anValue[25];
};

// Returns a reference to the nIndex element of rArray
template< class T, class T1>
T& Value( FixedArray25<T, T1> &rArray, int nIndex)
{
  return rArray.anValue[nIndex];
}

int main()
{
    FixedArray25<float, char> sMyArray;

    Value(sMyArray, 10) = 5.0;
    assert(sMyArray.anValue[10] == 5.0);
    Value(sMyArray, 15) = 10.0;
    assert(sMyArray.anValue[15] == 10.0);
    assert(sMyArray.anValue[10] == 5.0);

    return 0;
}
