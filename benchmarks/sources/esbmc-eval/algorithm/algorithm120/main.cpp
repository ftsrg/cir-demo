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

// min_element/max_element
#include <cassert>
#include <iostream>
#include <algorithm>
using namespace std;

bool myfn(int i, int j) { return i<j; }

struct myclass {
  bool operator() (int i,int j) { return i<j; }
} myobj;

int main () {
  int myints[] = {3,7,2,5,6,4,9};

  // using default comparison:
  cout << "The smallest element is " << *min_element(myints,myints+7) << endl;
  cout << "The largest element is " << *max_element(myints,myints+7) << endl;

  // using function myfn as comp:
  cout << "The smallest element is " << *min_element(myints,myints+7,myfn) << endl;
  cout << "The largest element is " << *max_element(myints,myints+7,myfn) << endl;

  // using object myobj as comp:
  cout << "The smallest element is " << *min_element(myints,myints+7,myobj) << endl;
  assert(*max_element(myints,myints+7,myobj) != 9);
  cout << "The largest element is " << *max_element(myints,myints+7,myobj) << endl;

  return 0;
}
