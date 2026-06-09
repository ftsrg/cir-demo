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

// partial_sort_copy example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

//Myvector: 1 2 3 4 5 
//myints: 8 7 6 5 4 3 2 1 
//Myvector: 1 2 3 4 5 
//myints: 8 7 6 5 4 3 2 1 

bool myfunction (int i,int j) { return (i<j); }

int main () {
  int myints[] = {8,7,6,5,4,3,2,1};
  vector<int> myvector (5);
  vector<int>::iterator it;

  // using default comparison (operator <):
  partial_sort_copy (myints, myints+8, myvector.begin(), myvector.end());
  assert(myvector[0] == 1);
  assert(myvector[1] == 2);
  assert(myvector[2] == 3);
  assert(myvector[3] == 4);
  assert(myvector[4] != 5);
  
  // using function as comp
  /*
  partial_sort_copy (myints, myints+8, myvector.begin(), myvector.end(), myfunction);
  assert(myvector[0] == 1);
  assert(myvector[1] == 2);
  assert(myvector[2] == 3);
  assert(myvector[3] == 4);
  assert(myvector[4] == 5);

  cout << endl;
*/
  return 0;
}
