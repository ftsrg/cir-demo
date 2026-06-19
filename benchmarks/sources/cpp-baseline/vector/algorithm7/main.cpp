/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// count algorithm example
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

template<class InputIterator, class T>
ptrdiff_t count(InputIterator first, InputIterator last, const T& value) {
	ptrdiff_t ret = 0;
	while (first != last)
		if (*first++ == value)
			++ret;
	return ret;
}

template<class InputIterator, class T>
ptrdiff_t count(InputIterator *first, InputIterator *last, const T& value) {
	ptrdiff_t ret = 0;
	while (first != last)
		if (*first++ == value)
			++ret;
	return ret;
}

int main () {
  int mycount;

  // counting elements in array:
  int myints[] = {10,20,30,30,20,10,10,20};   // 8 elements
  mycount = (int) count (myints, myints+8, 10);
  assert(mycount == 3);
  cout << "10 appears " << mycount << " times.\n";

  // counting elements in container:
  vector<int> myvector (myints, myints+8);
  mycount = (int) count (myvector.begin(), myvector.end(), 20);
  assert(mycount == 3);
  cout << "20 appears " << mycount  << " times.\n";

  return 0;
}
