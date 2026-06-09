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

// fill_n example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  vector<int> myvector (8,10);        // myvector: 10 10 10 10 10 10 10 10

  fill_n (myvector.begin(),4,20);     // myvector: 20 20 20 20 10 10 10 10
  
  assert(myvector[0] == 20);
  assert(myvector[1] == 20);
  assert(myvector[2] == 20);
  assert(myvector[3] == 20);
  
  fill_n (myvector.begin()+3,3,33);   // myvector: 20 20 20 33 33 33 10 10
  
  assert(myvector[3] == 33);
  assert(myvector[4] == 33);
  assert(myvector[5] == 33);

  cout << "myvector contains:";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
