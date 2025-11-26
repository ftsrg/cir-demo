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
  string str ("There.");
  string str2 ("needle");
  size_t found;

  found=str.find('.');
  assert(int(found)==51);
  if (found!=string::npos)
    cout << "Period found at: " << int(found) << endl;

  return 0;
}
