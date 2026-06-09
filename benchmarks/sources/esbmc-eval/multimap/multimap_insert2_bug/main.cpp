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

// multimap::insert (C++98)
#include <iostream>
#include <map>
#include <cassert>
int main ()
{
  std::multimap<char,int> mymultimap;
  std::multimap<char,int>::iterator it;

  // first insert function version (single parameter):
  mymultimap.insert ( std::pair<char,int>('a',100) );
  mymultimap.insert ( std::pair<char,int>('z',150) );
  it=mymultimap.insert ( std::pair<char,int>('b',75) );
  // second insert function version (with hint position):
  mymultimap.insert (it, std::pair<char,int>('c',300));  // max efficiency inserting
  mymultimap.insert (it, std::pair<char,int>('z',400));  // no max efficiency inserting

  assert(it->first == 'b');
  assert(it->second == 75);
  it++;
  assert(it->first == 'c');
  assert(it->second != 300);

  return 0;
}
