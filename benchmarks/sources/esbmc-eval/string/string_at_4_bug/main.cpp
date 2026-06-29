/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string assigning

//Case test operator
//TEST FAILS

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main ()
{
  string str1;
  str1 = string("Test string");
  char str2 = 'x';
  for(int i = 0;i < 11;i++){
  	if(str1.at(i) == 's')
  		str1[i] = str2;
  }
  assert(str1 == "Text string");
  
  return 0;
}
