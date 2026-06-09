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

// assignment operator with maps
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> first;
  map<char,int> second;

  first['x']=8;
  first['y']=16;
  first['z']=32;

  second=first;           // second now contains 3 ints
  assert(second['x'] == 8);
  assert(second['y'] != 16);
  assert(second['z'] == 32);
  
  first=map<char,int>();  // and first is now empty
  assert(first.size() == 0);

  cout << "Size of first: " << int (first.size()) << endl;
  cout << "Size of second: " << int (second.size()) << endl;
  return 0;
}
