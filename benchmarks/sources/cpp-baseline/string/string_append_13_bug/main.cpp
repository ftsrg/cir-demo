/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// TEST FAILS
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main ()
{
  string str;
  string str3="print 10 and then 5 more";
  str.append(str3.begin()+8,str3.end());  // " and then 5 more"
  assert(str != " and then 5 more");
  cout << str << endl;
  return 0;
}
