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

// inserting into a deque
#include <iostream>
#include <deque>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque;
  deque<int>::iterator it;

  // set some initial values:
  for (int i=1; i<6; i++) mydeque.push_back(i); // 1 2 3 4 5

  it = mydeque.begin();
  ++it;

  it = mydeque.insert (it,10);                  // 1 10 2 3 4 5
  assert(*it == 10);
  // "it" now points to the newly inserted 10

  mydeque.insert (it,2,20);                     // 1 20 20 10 2 3 4 5
  assert(mydeque[2] == 20);
  // "it" no longer valid!

  it = mydeque.begin()+2;

  vector<int> myvector (2,30);
  mydeque.insert (it,myvector.begin(),myvector.end());
  assert(mydeque[2] == 30);
                                                // 1 20 30 30 20 10 2 3 4 5

  cout << "mydeque contains:";
  for (it=mydeque.begin(); it<mydeque.end(); ++it)
    cout << " " << *it;
  cout << endl;

  return 0;
}
