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

// inplace_merge example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {10,20,30,40,50};
  vector<int> v(10);
  vector<int>::iterator it;
// 5 10 10 15 20 20 25 30 40 50
  copy (first,first+5,v.begin());
  copy (second,second+5,v.begin()+5);
  
  inplace_merge (v.begin(),v.begin()+5,v.end());
  
  assert(v[0] == 5);
  assert(v[1] == 10);
  assert(v[2] == 10);
  assert(v[3] == 15);
  assert(v[4] == 20);
  assert(v[5] == 20);
  assert(v[6] == 25);
  assert(v[7] == 30);
  assert(v[8] == 40);
  assert(v[9] == 50);

  cout << "The resulting vector contains:";
  for (it=v.begin(); it!=v.end(); ++it)
    cout << " " << *it;

  cout << endl;
  
  return 0;
}
