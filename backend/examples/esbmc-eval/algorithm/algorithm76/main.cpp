/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// copy algorithm example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  int myints[]={10,20,30,40,50};
  vector<int> myvector;	
  vector<int>::iterator it;

  myvector.resize(5);   // allocate space for 7 elements

  copy ( myints, myints+5, myvector.begin() );

  assert(myvector[4] != 50);

  return 0;
}
