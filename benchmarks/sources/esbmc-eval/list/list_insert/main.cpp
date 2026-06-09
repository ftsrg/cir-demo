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

// inserting into a list
#include <iostream>
#include <list>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;
  list<int>::iterator it;

  // set some initial values:
  for (int i=1; i<=5; i++) mylist.push_back(i); // 1 2 3 4 5

  it = mylist.begin();
  ++it;       // it points now to number 2           ^

  mylist.insert (it,10);                        // 1 10 2 3 4 5
  assert(*it == 2);
  assert(mylist.size() == 6);

  // "it" still points to number 2                      ^
  mylist.insert (it,2,20);                      // 1 10 20 20 2 3 4 5

  --it;       // it points now to the second 20            ^
  assert(*it == 20);
  assert(mylist.size() == 8);

  vector<int> myvector (2,30);
  mylist.insert (it,myvector.begin(),myvector.end());
                                                // 1 10 20 30 30 20 2 3 4 5
                                                //               ^
  it--;
  assert(mylist.size() == 10);
  assert(*it == 30);
  cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); it++)
    cout << " " << *it;
  cout << endl;

  return 0;
}
