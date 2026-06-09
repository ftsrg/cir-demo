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

// erasing from vector
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  unsigned int i;
  vector<unsigned int> myvector;

  // set some values (from 1 to 10)
  for (i=1; i<=10; i++) myvector.push_back(i);
  
  // erase the 6th element
  myvector.erase (myvector.begin()+5);
  assert(myvector[5] != 7);
  // erase the first 3 elements:
  myvector.erase (myvector.begin(),myvector.begin()+3);
  assert(myvector[2] != 7);
  cout << "myvector contains:";
  for (i=0; i<myvector.size(); i++)
    cout << " " << myvector[i];
  cout << endl;

  return 0;
}
