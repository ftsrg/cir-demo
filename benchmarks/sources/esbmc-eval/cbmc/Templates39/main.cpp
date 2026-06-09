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

/*
 * TC description:
 *  class template, UDT(class) for type parameter, implicit template instantiation, data member has dependent type
 */
#include<cassert>

// define Z<>
template <typename T>
class Z
{
public:
  typename T::f some;
};

// Forward declaration of FF
class FF;

// make an instance of Z<FF>
typedef Z<FF> my_Z;

// Declare FF
class FF
{
public:
  typedef int f;
};

// trigger elaboration of Z<FF>
my_Z z;

int main()
{
  z.some = 39;
  assert(z.some==39);
  return 0;
}
