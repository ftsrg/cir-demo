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

// deque::operator[]
#include <iostream>
#include <deque>
using namespace std;

int main ()
{
  deque<int> mydeque (10);   // 10 zero-initialized elements
  unsigned int i;

  deque<int>::size_type sz = mydeque.size();
  sz += 3;
  // assign some values:
  for (i=0; i<sz; i++) mydeque[i]=i;

  // reverse order of elements using operator[]:
  for (i=0; i<sz/2; i++)
  {
    int temp;
    temp = mydeque[sz-1-i];
    mydeque[sz-1-i]=mydeque[i];
    mydeque[i]=temp;
  }

  cout << "mydeque contains:";
  for (i=0; i<sz; i++)
    cout << " " << mydeque[i];
  mydeque[25] = 2;

  cout << endl;

  return 0;
}
