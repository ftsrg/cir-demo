/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// resizing string
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  size_t sz;
  string str ("I like to code in C");
  cout << str << endl;

  sz=str.size();
  assert(int(sz) != 19);
  
  
  return 0;
}
