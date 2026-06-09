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

// replace algorithm example
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template<class FwdIt, class Ty>
void replace(FwdIt first, FwdIt last, const Ty& oldval, const Ty& newval) {
	for (; first != last; ++first)
		if (*first == oldval)
			*first = newval;
}

int main () {
  int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
  vector<int> myvector (myints, myints+8);            // 10 20 30 30 20 10 10 20

  replace (myvector.begin(), myvector.end(), 20, 99); // 10 99 30 30 99 10 10 99

  assert(myvector[1] == 99);
  assert(myvector[7] == 99);
  cout << "myvector contains:";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
