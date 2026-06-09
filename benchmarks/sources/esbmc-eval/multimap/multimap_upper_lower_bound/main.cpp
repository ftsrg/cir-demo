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

// map::lower_bound/upper_bound
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> mymultimap;
  std::multimap<char,int>::iterator it,itlow,itup;

  mymultimap.insert(std::make_pair('a',10));
  mymultimap.insert(std::make_pair('b',121));
  mymultimap.insert(std::make_pair('c',1001));
  mymultimap.insert(std::make_pair('c',2002));
  mymultimap.insert(std::make_pair('d',11011));
  mymultimap.insert(std::make_pair('e',44));

  itlow = mymultimap.lower_bound ('b');  // itlow points to b
  itup = mymultimap.upper_bound ('d');   // itup points to e (not d)
  assert(itlow->first == 'b');
  assert(itlow->second == 121);
  assert(itup->first == 'e');
  assert(itup->second == 44);

  return 0;
}
