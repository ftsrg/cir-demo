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

// resizing list
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;

  unsigned int i;

  // set some initial content:
  for (i=1;i<10;i++) mylist.push_back(i);
  assert(mylist.size() == 9);
  mylist.resize(5);
  assert(mylist.size() == 5);  
  mylist.resize(8,100);
  assert(mylist.size() == 8);  
  assert(mylist.back() == 100);
  mylist.resize(12);
  assert(mylist.size() == 12);
  assert(mylist.back() == 0);

  cout << "mylist contains:";
  for (list<int>::iterator it=mylist.begin();it!=mylist.end();++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
