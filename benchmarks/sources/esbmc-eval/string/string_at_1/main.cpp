/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string assigning

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str1;
  str1 = "Test string"; 
  assert(str1[2] == str1.at(2)); 		//added
  cout << str1  << endl;
  return 0;
}
