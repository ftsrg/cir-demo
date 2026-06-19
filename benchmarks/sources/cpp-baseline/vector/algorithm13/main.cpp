/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// copy algorithm example
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

int main () {
  int myints[]={10,20,30,40,50,60,70};
  vector<int> myvector;
  vector<int>::iterator it;

  myvector.resize(7);   // allocate space for 7 elements

  copy ( myints, myints+7, myvector.begin() );
  assert(myvector.size() == 7);
  assert(myvector[3] == 40);
  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
