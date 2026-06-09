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

// search_n example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool mypredicate (int i, int j) {
  return (i==j);
}

int main () {
  int myints[]={10,20,30,30,20,10,10,20};
  vector<int> myvector (myints,myints+8);

  vector<int>::iterator it;

  // using default comparison:
  it = search_n (myvector.begin(), myvector.end(), 2, 30);
  assert(*it++ == 30);
  assert(*it == 30);
   cout << *it << endl;
  
  return 0;
}
