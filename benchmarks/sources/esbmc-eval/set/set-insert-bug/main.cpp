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
  set<int>::iterator it;
  pair<set<int>::iterator,bool> ret;

  // set some initial values:
  for (int i=1; i<=5; i++) myset.insert(i*10);    // set: 10 20 30 40 50

  assert(myset.size() == 5);

  ret = myset.insert(20);               // no new element inserted
  assert(!(ret.second));
  assert(*ret.first == 20);
  if (ret.second==false) it=ret.first;  // "it" now points to element 20

  myset.insert (it,25);                 // max efficiency inserting
  myset.insert (it,24);                 // max efficiency inserting
  myset.insert (it,26);                 // no max efficiency inserting

  int myints[]= {5,10,15};              // 10 already in set, not inserted
  myset.insert (myints,myints+3);
  assert(myset.size() == 10);
  cout << "myset contains:";
 
  it = myset.begin();
  assert(*it == 5);
  it++;
  assert(*it == 10);
  it++;
  assert(*it == 15);
  it++;
  assert(*it != 20);
  it++;
  assert(*it == 24);
  it++;
  assert(*it == 25);
  it++;
  assert(*it == 26);
  it++;
  assert(*it == 30);
  it++;
  assert(*it == 40);
  it++;
  assert(*it != 50);
  return 0;
}
