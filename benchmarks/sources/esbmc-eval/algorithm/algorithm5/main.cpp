/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// find_first_of example
#include <iostream>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;

bool comp_case_insensitive (char c1, char c2) {
  return (tolower(c1)==tolower(c2));
}

int main () {
  int mychars[] = {'a','b','c','A','B','C'};
  vector<char> myvector (mychars,mychars+6);
  vector<char>::iterator it;

  int match[] = {'A','B','C'};

  // using default comparison:
  it = find_first_of (myvector.begin(), myvector.end(), match, match+3);

  if (it!=myvector.end())
    cout << "first match is: " << *it << endl;

  // using predicate comparison:
  it = find_first_of (myvector.begin(), myvector.end(),
                      match, match+3, comp_case_insensitive);

  if (it!=myvector.end())
    cout << "first match is: " << *it << endl;
  
  return 0;
}
