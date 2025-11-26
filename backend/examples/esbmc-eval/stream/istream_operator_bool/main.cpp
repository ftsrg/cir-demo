/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// example on extraction
#include <iostream>
#include <cassert>
using namespace std;

int main () {
  bool n;

  cout << "Enter a bool value: ";
  cin >> boolalpha >> n;
  assert(cin.flags() & ios::boolalpha == ios::boolalpha);
  cout << "You have entered: " << n << endl;

  cout << "Enter another bool value: ";
  cin >> boolalpha >> n;            // manipulator
  assert(cin.flags() & ios::boolalpha == ios::boolalpha);
  cout << "You have entered: " << n << endl;


  return 0;
}
