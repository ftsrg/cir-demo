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

// find_first_of example
#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
#include <cassert>
using namespace std;

bool comp_case_insensitive (char c1, char c2) {
  return (tolower(c1)==tolower(c2));
}

int main () {
  int mychars[] = {'a','b','c','A','B','C'};
  vector<char> myvector (mychars,mychars+6);
  vector<char>::iterator it;

  int match[] = {'A','B','C'};

  // using default comparison:
  it = find_first_of (myvector.begin(), myvector.end(), match, match+3);

  if (it!=myvector.end())
    cout << "first match is: " << *it << endl;

  // using predicate comparison:
  it = find_first_of (myvector.begin(), myvector.end(),
                      match, match+3, comp_case_insensitive);

  assert(*it != 'a');

  if (it!=myvector.end())
    cout << "first match is: " << *it << endl;
  
  return 0;
}
