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

//TEST FAILS
// deque::assign
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> first;
  deque<int> second;
  deque<int> third;

  first.assign (7,100);             // a repetition 7 times of value 100
  assert(first.size() == 7);
  assert(first[6] != 100);

  deque<int>::iterator it;
  it=first.begin()+1;

  second.assign (it,first.end()-1); // the 5 central values of first
  assert(second.size() == 5);
  assert(second[4] != 100);

  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);   // assigning from array.
  assert(third.size() == 3);
  assert(third[2] != 4);

  cout << "Size of first: " << int (first.size()) << endl;
  cout << "Size of second: " << int (second.size()) << endl;
  cout << "Size of third: " << int (third.size()) << endl;
  return 0;
}
