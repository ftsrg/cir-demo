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

// iter_swap example
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

template<class ForwardIterator1, class ForwardIterator2>
void iter_swap_esbmc(ForwardIterator1 a[], ForwardIterator2 b) {
	swap_esbmc(*a, *b);
}

template<class ForwardIterator1, class ForwardIterator2>
void iter_swap_esbmc(ForwardIterator1 a, ForwardIterator2 b) {
	swap_esbmc(*a, *b);
}

int main () {

  int myints[]={10,20,30,40,50 };          //   myints:  10  20  30  40  50
  vector<int> myvector (4,99);             // myvector:  99  99  99  99

  iter_swap_esbmc(myints,myvector.begin());      //   myints: [99] 20  30  40  50
                                           // myvector: [10] 99  99  99

  iter_swap_esbmc(myints+3,myvector.begin()+2);  //   myints:  99  20  30 [99]
                                           // myvector:  10  99 [40] 99

  assert(myvector[0] == 10);
  assert(myvector[1] == 99);
  assert(myvector[2] == 40);
  assert(myvector[3] == 99);

  cout << "myvector contains:";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
