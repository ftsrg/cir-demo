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

// includes algorithm example
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

bool myfunction (int i, int j) { return i<j; }

int main () {
  int container[] = {5,10,15,20,25,30,35,40,45,50};
  int continent[] = {10,20,30,40};

  // using default comparison:
//  if ( includes(container,container+10,continent,continent+4) )
//    cout << "container includes continent!" << endl;
  assert(includes(container,container+10,continent,continent+4));
  assert(includes(container,container+10,continent,continent+4, myfunction));
  // using myfunction as comp:
//  if ( includes(container,container+10,continent,continent+4, myfunction) )
//    cout << "container includes continent!" << endl;

  return 0;
}
