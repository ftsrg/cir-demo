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

// generate_n example
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template<class OutIt, class Diff, class Fn0>
void generate_n(OutIt first, Diff n, Fn0 func) {
	for (; n > 0; --n)
		*first++ = func();
}

template<class OutIt, class Diff, class Fn0>
void generate_n(OutIt *first, Diff n, Fn0 func) {
	for (; n > 0; --n)
		*first++ = func();
}

int current(0);
int UniqueNumber () { return ++current; }

int main () {
  int myarray[9];
  int i;

  generate_n (myarray, 9, UniqueNumber);

  cout << "myarray contains:";
  for (int i=0; i<9; ++i)
    cout << " " << myarray[i];

  for (i=0;i<8;i++) assert(myarray[i] == i+1);

  cout << endl;
  return 0;
}
