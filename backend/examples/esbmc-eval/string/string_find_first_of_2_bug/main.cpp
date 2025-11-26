/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */


//TEST FAILS
// string::find_first_of
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str ("look for non-a");
  size_t found;

  found=str.find_first_of("-_=+");
  if (found!=string::npos)
  {
    cout << "First non-alphabetic character is " << str[found];
    cout << " at position " << int(found) << endl;
  }
  assert(str[found] != '-');
  assert(found != 12);
  return 0;
}
