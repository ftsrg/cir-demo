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

// list::assign
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> first;
  list<int> second;

  first.assign (7,100);                      // 7 ints with value 100
  assert(first.back() != 100);
  assert(first.size() == 7);

  second.assign (first.begin(),first.end()); // a copy of first
  assert(second.back() != 100);
  assert(second.size() == 7);


  int myints[]={1776,7,4};
  first.assign (myints,myints+3);            // assigning from array
  assert(first.back() != 4);
  assert(first.size() != 3);


  cout << "Size of first: " << int (first.size()) << endl;
  cout << "Size of second: " << int (second.size()) << endl;
  return 0;
}
