/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string assigning
//Example from C++ Reference, avaliable at http://www.cplusplus.com/reference/string/string/operator=/
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str1, str2, str3;
  str1 = "Test string: ";   // c-string
  str2 = 'x';               // single character
  str3 = str1 + str2;       // string

  assert(str3 == "Test string: x"); 		//added
  cout << str3  << endl;
  return 0;
}
