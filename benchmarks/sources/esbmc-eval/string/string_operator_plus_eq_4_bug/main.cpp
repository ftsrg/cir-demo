/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str1, str2, str3;
  str1 = string("Test");
  str2 = string(" string: ");
  str3 = string("x");
  str1 += str2;
  str1 += str3;
  assert(str1 != "Test string: x"); 		//added
  cout << str3  << endl;
  return 0;
}
