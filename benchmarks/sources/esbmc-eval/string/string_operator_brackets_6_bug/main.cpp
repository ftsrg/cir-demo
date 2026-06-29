/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string assigning
//TEST FAILS
//Example from C++ Reference, avaliable at http://www.cplusplus.com/reference/string/string/operator=/
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str1, str2, str3, str4, str5;
  int i;
  str1 = string("Test");
  str2 = string(" String");
  for(i = 0;i < 4;i++){
    str3[i] = str1[i];
    str4[i] = str2[i];
  }
  assert( (str3 == str1 + 't') && (str4 == " String") );
  cout << str3  << endl;
  return 0;
}
