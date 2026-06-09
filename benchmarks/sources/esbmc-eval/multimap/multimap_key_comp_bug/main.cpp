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

// map::key_comp
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> mymultimap;

  std::multimap<char,int>::key_compare mycomp = mymultimap.key_comp();

  mymultimap.insert (std::make_pair('a',100));
  mymultimap.insert (std::make_pair('b',200));
  mymultimap.insert (std::make_pair('b',211));
  mymultimap.insert (std::make_pair('c',300));

  std::cout << "mymultimap contains:\n";

  char highest = mymultimap.rbegin()->first;     // key value of last element

  std::multimap<char,int>::iterator it = mymultimap.begin();
  assert(!mycomp((*it).first, highest));
  do {
    std::cout << (*it).first << " => " << (*it).second << '\n';
  } while ( mycomp((*it++).first, highest) );

  std::cout << '\n';

  return 0;
}
