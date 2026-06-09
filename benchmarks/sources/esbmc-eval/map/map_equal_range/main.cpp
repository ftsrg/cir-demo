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

// map::equal_elements
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  pair<map<char,int>::iterator,map<char,int>::iterator> ret;

  mymap['a']=10;
  mymap['b']=20;
  mymap['c']=30;

  ret = mymap.equal_range('b');
  
  assert(ret.first->first == 'b');
  assert(ret.first->second == 20);
  
  assert(ret.second->first == 'c');
  assert(ret.second->second == 30);
  
  cout << "lower bound points to: ";
  cout << ret.first->first << " => " << ret.first->second << endl;

  cout << "upper bound points to: ";
  cout << ret.second->first << " => " << ret.second->second << endl;

  return 0;
}
