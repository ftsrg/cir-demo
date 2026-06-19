/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// string::find
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str ("There are two needles .");
  string str2 ("needle");
  size_t found;

  // different member versions of find in the same order as above:
  found=str.find(str2);
  assert(int(found)!=14);
  if (found!=string::npos)
    cout << "first 'needle' found at: " << int(found) << endl;

  found=str.find("needles are small",found+1,6);
  assert(int(found)!=44);
  if (found!=string::npos)
    cout << "second 'needle' found at: " << int(found) << endl;

  return 0;
}
