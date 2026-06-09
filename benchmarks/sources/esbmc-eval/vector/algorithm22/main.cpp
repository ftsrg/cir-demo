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

// replace_copy_if example
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template<class InIt, class OutIt, class Pr, class Ty>
OutIt replace_copy_if(InIt first, InIt last, OutIt dest, Pr pred,
		const Ty& val) {
	for (; first != last; ++first, ++dest)
		*dest = (pred(*first)) ? val : *first;
	return dest;
}

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
  vector<int> first,second;
  vector<int>::iterator it;

  // set some values:
  for (int i=1; i<10; i++) first.push_back(i);          // 1 2 3 4 5 6 7 8 9

  second.resize(first.size());   // allocate space
  replace_copy_if (first.begin(), first.end(), second.begin(), IsOdd, 0);
                                                        // 0 2 0 4 0 6 0 8 0
  assert(second[0] == 0);
  assert(second[2] == 0);
  assert(second[4] == 0);
  assert(second[6] == 0);
  cout << "second contains:";
  for (it=second.begin(); it!=second.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
