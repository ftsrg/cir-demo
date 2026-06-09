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
  int i;

  // insert some values:
  for (int i=1; i<10; i++) myset.insert(i*10);  // 10 20 30 40 50 60 70 80 90

  it=myset.begin();
  it++;                                         // "it" points now to 20
  assert(*it == 20);
  myset.erase (it);
  it=myset.begin();
  it++;
  assert(*it == 30);
  myset.erase (40);

  it=myset.find (60);
  myset.erase ( it, myset.end() );

  cout << "myset contains:";
  for (it=myset.begin(), i = 10; it!=myset.end(); ++it, i+=20){
    cout << " " << *it;
    assert(*it == i);
  }
  cout << endl;

  return 0;
}
