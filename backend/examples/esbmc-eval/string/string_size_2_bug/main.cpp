/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// string::size
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str ("Test string");
  int i = (int) str.size();
  assert(i != 11);
  cout << "The size of str is " << str.size() << " characters.\n";
  return 0;
}
