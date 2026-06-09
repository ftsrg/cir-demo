/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// search_n example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool mypredicate (int i, int j) {
  return (i==j);
}

int main () {
  int myints[]={10,20,30,30,20};
  vector<int> myvector (myints,myints+5);

  vector<int>::iterator it;

  // using default comparison:
  it = search_n (myvector.begin(), myvector.end(), 2, 30);
  
  assert(*it != 30);


  return 0;
}
