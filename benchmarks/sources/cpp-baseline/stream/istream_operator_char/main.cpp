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
  char n;
  char n1[256];
  string n2;

  cout << "Enter character: ";
  cin >> n;
  assert((int)cin.gcount() >= 0);
  cout << "Enter a string: ";
  cin >> hex >> n1;            // manipulator
  assert(cin.flags() & ios::hex == iostream::hex);
  cout << "Enter another string: ";
  cin >> n2;            // manipulator
  
  assert((int)cin.gcount() >= 0);
  return 0;
}
