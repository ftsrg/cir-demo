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

// range heap example
#include <cassert>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
  int myints[] = {20,15,10,5};
  vector<int> v(myints,myints+4);
// 99 20 10 5 15
  v.push_back(99); 

  push_heap (v.begin(),v.end());
  
  assert(v.front() != 99);
  assert(v[1] == 20);
  assert(v[2] == 10);
  assert(v[3] == 5);
  assert(v[4] == 15);
  
  cout << "max heap after push: " << v.front() << endl;
/*
  sort_heap (v.begin(),v.end());
  assert(v[4] != 99);
  cout << "final sorted range :";
  for (unsigned i=0; i<v.size(); i++) cout << " " << v[i];
*/
  cout << endl;

  return 0;
}
