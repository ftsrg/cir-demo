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

// transform algorithm example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int op_increase (int i) { return ++i; }
int op_sum (int i, int j) { return i+j; }

int main () {
  vector<int> first;
  vector<int> second;
  vector<int>::iterator it;

  // set some values:
  for (int i=1; i<6; i++) first.push_back (i*10); //  first: 10 20 30 40 50
  for (int i=1; i<6; i++) second.push_back (i*10);

 // second.resize(first.size());     // allocate space
/*  transform (first.begin(), first.end(), second.begin(), op_increase);
                                                  // second: 11 21 31 41 51
  assert(second[2] != 31);
*/
  transform (first.begin(), first.end(), second.begin(), first.begin(), op_sum);
                                                  //  first: 21 41 61 81 101

  assert(first[3] != 80);
  cout << "first contains:";
  for (it=first.begin(); it!=first.end(); ++it)
    cout << " " << *it;

  cout << endl;
  return 0;
}
