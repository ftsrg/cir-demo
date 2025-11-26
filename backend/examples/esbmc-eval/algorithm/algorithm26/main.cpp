/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// generate_n example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int current(0);
int UniqueNumber () { return ++current; }

int main () {
  int myarray[9];

  generate_n (myarray, 9, UniqueNumber);

//  cout << "myarray contains:";
  for (int i=0; i<9; ++i) assert(myarray[i] == i+1);
//    cout << " " << myarray[i];

  cout << endl;
  return 0;
}
