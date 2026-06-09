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

// erasing from map
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> mymultimap;

  // insert some values:
  mymultimap.insert(std::pair<char,int>('a',10));
  mymultimap.insert(std::pair<char,int>('b',20));
  mymultimap.insert(std::pair<char,int>('b',30));
  mymultimap.insert(std::pair<char,int>('c',40));
  mymultimap.insert(std::pair<char,int>('d',50));

  std::multimap<char,int>::iterator it = mymultimap.find('b');

  mymultimap.erase (it);                     // erasing by iterator (1 element)

  mymultimap.erase ('b');                    // erasing by key (2 elements)

  it=mymultimap.find ('c');
  mymultimap.erase ( it, mymultimap.end() ); // erasing by range
  assert(mymultimap.size() != 1);
  it = mymultimap.begin();
  assert(it->first == 'a');
  assert(it->second == 10);

  return 0;
}
