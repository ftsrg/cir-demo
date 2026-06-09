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

#include <iostream>
#include <set>
#include <cassert>
using namespace std;

int main ()
{
  int b[5] = {10,20,30,40,50};
  multiset<int> myset(b,b+5);
  pair<multiset<int>::iterator,multiset<int>::iterator> ret;

//  for (int i=1; i<=5; i++) myset.insert(i*10);   // set: 10 20 30 40 50
  ret = myset.equal_range(30);
  assert(*ret.first == 	30);
  assert(*ret.second !=	40);
  cout << "lower bound points to: " << *ret.first << endl;
  cout << "upper bound points to: " << *ret.second << endl;

  return 0;
}
