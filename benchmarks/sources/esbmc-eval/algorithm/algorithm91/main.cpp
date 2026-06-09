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

// unique_copy example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool myfunction (int i, int j) {
  return (i==j);
}

int main () {
  int myints[] = {10,20,20,20,30,30,20,20,10};
  vector<int> myvector (9);                            // 0  0  0  0  0  0  0  0  0
  vector<int>::iterator it;

  // using default comparison:
  it=unique_copy (myints,myints+9,myvector.begin());   // 10 20 30 20 10 0  0  0  0
                                                       //                ^
  assert(*it != 0);
//  sort (myvector.begin(),it);                          // 10 10 20 20 30 0  0  0  0
                                                       //                ^

  // using predicate comparison:
//  it=unique_copy (myvector.begin(), it, myvector.begin(), myfunction);
                                                       // 10 20 30 20 30 0  0  0  0
                                                       //          ^
//  assert(*it != 20);
//  myvector.resize( it - myvector.begin() );            // 10 20 30

  // print out content:
  /*cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;
*/
  cout << endl;

  return 0;
}
