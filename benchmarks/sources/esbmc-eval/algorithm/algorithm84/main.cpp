/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// replace_copy example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  int myints[] = { 10, 20, 30, 30, 20 };

  vector<int> myvector (5);
  replace_copy (myints, myints+5, myvector.begin(), 20, 99);

  assert(myvector[4] != 99);
  cout << "myvector contains:";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
