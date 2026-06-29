/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string::assign
// TEST FAILS
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main ()
{
  string str;
  string base="The quick brown fox";

  // used in the same order as described above:

  str.assign(base);
  cout << str << endl;
  assert(str != "The quick brown fox");
  
  return 0;
}
