/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// istream ignore
#include <iostream>
#include <cassert>
using namespace std;
  
int main () {
  char first, last;
  int i, j;
  cout << "Enter your first and last names: ";
  
  first=cin.get();
  assert(!((int)cin.gcount() == 1));
  cin.ignore(256,' ');
  
  last=cin.get();
  assert(!((int)cin.gcount() == 1));
  cout << "Your initials are " << first << last;
  
  return 0;
}
