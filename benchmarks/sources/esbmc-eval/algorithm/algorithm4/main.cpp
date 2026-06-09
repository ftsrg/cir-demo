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

// find_end example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool myfunction (int i, int j) {
  return (i==j);
}

int main () {
  int myints[] = {1,2,3,4,5,1,2,3,4,5};
  vector<int> myvector (myints,myints+10);
  vector<int>::iterator it;

  int match1[] = {1,2,3};

  // using default comparison:
  it = find_end (myvector.begin(), myvector.end(), match1, match1+3);
  assert(*it == 1);

  int match2[] = {4,5,1};

  // using predicate comparison:
  it = find_end (myvector.begin(), myvector.end(), match2, match2+3, myfunction);
  assert(*it == 4);
  return 0;
}
