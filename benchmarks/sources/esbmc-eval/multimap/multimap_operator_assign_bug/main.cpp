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
  std::multimap<char,int> foo,bar;

  foo.insert(std::make_pair('x',32));
  foo.insert(std::make_pair('y',64));
  foo.insert(std::make_pair('y',96));
  foo.insert(std::make_pair('z',128));

  bar = foo;                  // bar now contains 4 ints
  assert(foo != bar);
  foo.clear();                // and first is now empty

  std::cout << "Size of foo: " << foo.size() << '\n';
  std::cout << "Size of bar: " << bar.size() << '\n';
  return 0;
}
