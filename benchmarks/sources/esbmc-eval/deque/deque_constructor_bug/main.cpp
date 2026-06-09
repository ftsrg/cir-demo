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

//TEST FAILS
// constructing deques
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  unsigned int i;

  // constructors used in the same order as described above:
  deque<int> first;                                // empty deque of ints
  deque<int> second (4,100);                       // four ints with value 100
  deque<int> third (second.begin(),second.end());  // iterating through second
  deque<int> fourth (third);                       // a copy of third
  
  assert(fourth == third);
  assert(first.size() == 0);
  assert(second.size() == 4);
  assert(second[2] == 100);
  assert(third[0] == 100);

  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  deque<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  cout << "The contents of fifth are:";
  for (i=0; i < fifth.size(); i++)
    assert(fifth[i] != myints[i]);

  cout << endl;

  return 0;
}
