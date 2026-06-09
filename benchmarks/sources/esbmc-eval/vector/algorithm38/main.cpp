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

// partition algorithm example
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template<class Ty>
void swap_esbmc(Ty& a, Ty& b) {
	Ty c(a);
	a = b;
	b = c;
}

template<class BidIt, class Pr>
BidIt partition(BidIt first, BidIt last, Pr pred) {
	while (true) {
		while (first != last && pred(*first))
			++first;
		if (first == last--)
			break;
		while (first != last && !pred(*last))
			--last;
		if (first == last)
			break;
		swap_esbmc(*first++, *last);
	}
	return first;
}

bool IsOdd (int i) { return (i%2)==1; }

int main () {
  vector<int> myvector;
  vector<int>::iterator it, bound;

  // set some values:
  for (int i=1; i<10; ++i) myvector.push_back(i); // 1 2 3 4 5 6 7 8 9

  bound = partition (myvector.begin(), myvector.end(), IsOdd);

  // print out content:
  cout << "odd members:";
  for (it=myvector.begin(); it!=bound; ++it)
    cout << " " << *it;

  assert(*bound == 6);
  cout << "\neven members:";
  for (it=bound; it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
