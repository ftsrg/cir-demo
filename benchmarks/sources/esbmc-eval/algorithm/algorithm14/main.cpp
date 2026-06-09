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

// copy_backward example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  vector<int> myvector;
  vector<int>::iterator it;
// 10 20 30 10 20 30 40 50
  // set some values:
  for (int i=1; i<=5; i++)
    myvector.push_back(i*10);          // myvector: 10 20 30 40 50

  myvector.resize(myvector.size()+3);  // allocate space for 3 more elements

  copy_backward ( myvector.begin(), myvector.begin()+5, myvector.end() );
  assert(myvector[0] == 10);
  assert(myvector[1] == 20);
  assert(myvector[2] == 30);
  assert(myvector[3] == 10);
  assert(myvector[4] == 20);
  assert(myvector[5] == 30);
  assert(myvector[6] == 40);
  assert(myvector[7] == 50);
  
  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
