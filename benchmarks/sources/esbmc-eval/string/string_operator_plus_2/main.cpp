/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string assigning
//Case test operator
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str1, str2, str3;
  str1 = "Test string: ";   // c-string
  assert(str1 == "Test string: ");
  str2 = "x";               // single character
  assert(str2 == "x");
  str3 = str1 + str2;       // string
  assert(str3 == "Test string: x");

  str3 +=", y, ";
  assert(str3 == "Test string: x, y, ");
  str3 += "z";

  assert(str3 == "Test string: x, y, z"); //added
  cout << str3  << endl;
  return 0;
}
