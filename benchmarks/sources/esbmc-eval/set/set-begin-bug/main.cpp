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
#include <cassert>
#include <set>
using namespace std;

int main ()
{
  int myints[] = {75,23,65,42,13};
  int mySecondInts[] = {13,23,42,65,75};
  int i;
  set<int> myset (myints,myints+5);
  assert(myset.size() == 5);
  set<int>::iterator it;

//  cout << "myset contains:" << endl;
  for ( it=myset.begin(), i=0 ; it != myset.end(); it++, i++ ){
  //  cout << " " << *it;
    assert(*it != mySecondInts[i]);
  }
  cout << endl;

  return 0;
}
