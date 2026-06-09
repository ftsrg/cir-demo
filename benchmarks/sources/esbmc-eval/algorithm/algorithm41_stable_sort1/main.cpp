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

// stable_sort example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool compare_as_ints (double i,double j)
{
  return (int(i)<int(j));
}

//using default comparison: 1.32 1.41 1.62 1.73
//using 'compare_as_ints' : 1.41 1.73 1.32 1.62

int main () {
  double mydoubles[] = {1.41, 1.73, 1.32, 1.62};

  vector<double> myvector;
  vector<double>::iterator it;

  myvector.assign(mydoubles,mydoubles+4);

  cout << "using default comparison:";
//  stable_sort (myvector.begin(), myvector.end());
  
//  for (it=myvector.begin(); it!=myvector.end(); ++it)
//    cout << " " << *it;

//  myvector.assign(mydoubles,mydoubles+4);

  cout << "\nusing 'compare_as_ints' :";
  stable_sort (myvector.begin(), myvector.end(), compare_as_ints);
  assert(myvector[0] == 1.41);
  assert(myvector[1] == 1.73);
  assert(myvector[2] == 1.32);
  assert(myvector[3] == 1.62);
//  for (it=myvector.begin(); it!=myvector.end(); ++it)
//    cout << " " << *it;

  cout << endl;

  return 0;
}
