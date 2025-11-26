/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// remove algorithm example
#include <iostream>
#include <cassert>
using namespace std;

template<class FwdIt, class Ty>
FwdIt remove(FwdIt first, FwdIt last, const Ty& val) {
	FwdIt result = first;
	for (; first != last; ++first)
		if (!(*first == val))
			*result++ = *first;
	return result;
}

int main () {
  int myints[] = {10,20,30,30,20,10,10,20};      // 10 20 30 30 20 10 10 20
  assert(myints[1] == 20);
  // bounds of range:
  int* pbegin = myints;                          // ^
  int* pend = myints+sizeof(myints)/sizeof(int); // ^                       ^

  pend = remove (pbegin, pend, 20);              // 10 30 30 10 10 ?  ?  ?
    assert(myints[1] == 30);                     // ^              ^
  cout << "range contains:";
  for (int* p=pbegin; p!=pend; ++p)
    cout << " " << *p;

  cout << endl;
 
  return 0;
}
