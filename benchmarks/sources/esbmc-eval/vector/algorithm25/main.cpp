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

// generate algorithm example
#include <iostream>
#include <cassert>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

template<class FwdIt, class Fn0>
void generate(FwdIt first, FwdIt last, Fn0 func) {
	while (first != last)
		*first++ = func();
}

// function generator:
int RandomNumber () { return (rand()%100); }

// class generator:
struct c_unique {
  int current;
  c_unique() {current=0;}
  int operator()() {return ++current;}
} UniqueNumber;


int main () {
  int i;
  srand ( unsigned ( time(NULL) ) );

  vector<int> myvector (8);
  vector<int>::iterator it;

  generate (myvector.begin(), myvector.end(), RandomNumber);

  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  generate (myvector.begin(), myvector.end(), UniqueNumber);

  for (i=0;i<8;i++) assert(myvector[i] == ++i);

  cout << "\nmyvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
