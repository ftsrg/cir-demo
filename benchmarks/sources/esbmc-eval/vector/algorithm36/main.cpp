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

// rotate_copy algorithm example
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template<class InputIterator, class OutputIterator>
OutputIterator copy(InputIterator first, InputIterator last,
		OutputIterator result) {
	while (first!=last) *result++ = *first++;
	return result;
}

template<class InIt, class OutIt>
OutIt copy(InIt *first, InIt *last, OutIt dest) {
	while (first != last)
		*dest++ = *first++;
	return dest;
}

template<class FwdIt, class OutIt>
OutIt rotate_copy(FwdIt first, FwdIt mid, FwdIt last, OutIt dest) {
	dest = copy(mid, last, dest);
	return copy(first, mid, dest);
}

template<class FwdIt, class OutIt>
OutIt rotate_copy(FwdIt *first, FwdIt *mid, FwdIt *last, OutIt dest) {
	dest=copy (mid,last,dest);
	return copy (first,mid,dest);
}

int main () {
  int myints[] = {10,20,30,40,50,60,70};

  vector<int> myvector;
  vector<int>::iterator it;

  myvector.resize(7);

  rotate_copy(myints,myints+3,myints+7,myvector.begin());

  assert(myvector[0] == 40);

  // print out content:
  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
