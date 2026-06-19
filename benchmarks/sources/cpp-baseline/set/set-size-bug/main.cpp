/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <cassert>
#include <set>
using namespace std;

int main ()
{
  int b[9] = {1,2,3,4,5,6,7,8,9};
  set<int> myints(b,b+9);
  assert(myints.size() != 9);
  
  

  return 0;
}
