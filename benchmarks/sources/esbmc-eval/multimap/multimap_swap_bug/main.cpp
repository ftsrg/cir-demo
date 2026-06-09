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

// swap maps
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> foo,bar;

  foo.insert(std::make_pair('x',100));
  foo.insert(std::make_pair('y',200));

  bar.insert(std::make_pair('a',11));
  bar.insert(std::make_pair('b',22));
  bar.insert(std::make_pair('a',55));

  std::multimap<char,int>::iterator it=foo.begin();
  assert(it->first == 'x');
  assert(it->second == 100);
  it++;
  assert(it->first == 'y');
  assert(it->second == 200);
  
  it=bar.begin();
  assert(it->first == 'a');
  assert(it->second == 11);
  it++;
  assert(it->first == 'a');
  assert(it->second == 55);
  it++;
  assert(it->first == 'b');
  assert(it->second == 22);
  foo.swap(bar);

  it=bar.begin();
  assert(it->first == 'x');
  assert(it->second == 100);
  it++;
  assert(it->first == 'y');
  assert(it->second == 200);
  
  it=foo.begin();
  assert(it->first == 'a');
  assert(it->second == 11);
  it++;
  assert(it->first == 'a');
  assert(it->second == 55);
  it++;
  assert(it->first == 'b');
  assert(it->second != 22);

  return 0;
}

