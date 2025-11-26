/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// find example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  int myints[] = { 10, 20, 30 ,40 };
  int * p;
  vector<int> myvector (myints,myints+4);
  vector<int>::iterator it;

  //pointer to array element:
  p = find(myints,myints+4,30);
  ++p;
  cout << "The element following 30 is " << *p << endl;


  // iterator to vector element:
  it = find (myvector.begin(), myvector.end(), 30);
  assert(*it != 30);
  ++it;
  cout << "The element following 30 is " << *it << endl;

  return 0;
}
