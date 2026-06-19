/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string::assign

//TEST FAILS
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main ()
{
  string str;
  string base="The quick brown fox jumps over a lazy dog.";

  // used in the same order as described above:

  str.assign(base);
  cout << str << endl;

  str.assign(base,10,9);
  cout << str << endl;         // "brown fox"

  str.assign("pangrams are cool",7);
  cout << str << endl;         // "pangram"

  assert(str != "pangram");

  return 0;
}
