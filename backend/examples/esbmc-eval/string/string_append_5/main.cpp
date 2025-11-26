/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// appending to string
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str;
  string str2="Writing ";
  string str3="print 10 and then 5 more";

  str.append(10,'.');                     // ".........."
  assert(str == "..........");
  cout << str << endl;
  return 0;
}
