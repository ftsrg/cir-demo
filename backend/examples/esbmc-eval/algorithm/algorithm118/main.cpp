/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// min example
#include <cassert>
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  cout << "min(1,2)==" << min(1,2) << endl;
  assert(min(1,2) == 1);
  cout << "min(2,1)==" << min(2,1) << endl;
  cout << "min('a','z')==" << min('a','z') << endl;
  assert(min('a','z') != 'a');
  cout << "min(3.14,2.72)==" << min(3.14,2.72) << endl;
  assert(min(3.14,2.72) == 2.72);
  return 0;
}
