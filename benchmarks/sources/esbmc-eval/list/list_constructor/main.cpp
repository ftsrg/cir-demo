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

// constructing lists
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  // constructors used in the same order as described above:
  list<int> first;                                // empty list of ints
  assert(first.size() == 0);
  list<int> second (4,100);                       // four ints with value 100
  assert(second.size() == 4);
  assert(second.back() == 100);
  list<int> third (second.begin(),second.end());  // iterating through second
  assert(third.size() == second.size());
  assert(third.back() == second.back());
  list<int> fourth (third);                       // a copy of third
  assert(fourth.size() == 4);
  assert(fourth.back() == 100);

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  list<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );
  assert(fifth.size() == 4);
  list<int>::iterator it = fifth.begin();
  
  assert(*it == 16);
  assert(*(++it) == 2);
  assert(*(++it) == 77);
  assert(*(++it) == 29);

  cout << "The contents of fifth are: ";
  for (list<int>::iterator it = fifth.begin(); it != fifth.end(); it++)
    cout << *it << " ";

  cout << endl;

  return 0;
}
