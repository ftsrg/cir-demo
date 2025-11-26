/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// example on extraction
#include <iostream>
#include <cassert>
#include <string>
using namespace std;

int main () {
  void* n;
  string str;
  cout << "Enter something:";
  cin >> n;
  assert((int)cin.gcount() >= 0);
//  assert(cin.flags() & ios::hex == iostream::hex);
  
  
  assert((int)cin.gcount() >= 0);
  return 0;
}
