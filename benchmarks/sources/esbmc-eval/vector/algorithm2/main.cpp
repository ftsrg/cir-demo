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

// find example
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

template<class InIt, class Ty>
InIt find(InIt first, InIt last, const Ty& value) {
	for (; first != last; first++) {
		if (*first == value) {
			*first = value;
			return first;
		}
	}
	return first;
}

template<class InIt, class Ty>
InIt* find(InIt *first, InIt *last, const Ty& value) {
	for (; first != last; first++) {
		if (*first == value) {
			break;
		}
	}
	return first;
}

int main () {
  int myints[] = { 10, 20, 30 ,40 };
  int * p;

  // pointer to array element:
  p = find(myints,myints+4,30);
  ++p;
  cout << "The element following 30 is " << *p << endl;

  vector<int> myvector (myints,myints+4);
  vector<int>::iterator it;

  // iterator to vector element:
  it = find (myvector.begin(), myvector.end(), 30);
  ++it;
  assert(*it == 40);
  cout << "The element following 30 is " << *it << endl;

  return 0;
}
