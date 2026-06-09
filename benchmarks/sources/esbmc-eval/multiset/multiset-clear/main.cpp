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
  multiset<int> myset;
  multiset<int>::iterator it;

  myset.insert (100);
  myset.insert (200);
  myset.insert (300);

  cout << "myset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
    cout << " " << *it;

  myset.clear();
  assert(myset.size() == 0);
  myset.insert (1101);
  it = myset.begin();
  assert(*it == 1101);
  assert(myset.size() == 1);
  myset.insert (2202);
  assert(myset.size() == 2);
  assert(*it == 1101);
  it++;
  assert(*it == 2202);

  cout << "\nmyset contains:";
  for (it=myset.begin(); it!=myset.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
