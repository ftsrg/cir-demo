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

#include <iostream>
#include <set>
#include <cassert>
using namespace std;

int main ()
{
  set<int> myset;
  int i;

  // set some initial values:
  for (i=1; i<5; i++) myset.insert(i*3);    // set: 3 6 9 12
  assert(myset.count(3) == 1);
  assert(myset.count(6) == 1);
  assert(myset.count(9) == 1);
  assert(myset.count(12) == 1);
  myset.insert(3);
  myset.insert(3);
  myset.insert(3);
  assert(myset.count(3) == 1);
  for (i=0;i<10; i++)
  {
    cout << i;
    if (myset.count(i)>0)
      cout << " is an element of myset.\n";
    else 
      cout << " is not an element of myset.\n";
  }

  return 0;
}
