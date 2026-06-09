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

// constructing stacks
#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque (3,100);     // deque with 3 elements
  vector<int> myvector (2,200);   // vector with 2 elements

  stack<int> first;               // empty stack
  stack<int> second (mydeque);    // stack initialized to copy of deque

  stack<int,vector<int> > third;  // empty stack using vector
  stack<int,vector<int> > fourth (myvector);
  
  assert(first.size() == 0);
  assert(second.size() == 3);
  assert(third.size() == 0);
  assert(fourth.size() == 2);

  cout << "size of first: " << (int) first.size() << endl;
  cout << "size of second: " << (int) second.size() << endl;
  cout << "size of third: " << (int) third.size() << endl;
  cout << "size of fourth: " << (int) fourth.size() << endl;

  return 0;
}
