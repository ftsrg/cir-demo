/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// string::rfind
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str ("T six sd six hck.");
  string key ("six");
  size_t found;

  found=str.rfind(key);

assert(found == 9);
  
cout << found << endl;
  
  return 0;
}
