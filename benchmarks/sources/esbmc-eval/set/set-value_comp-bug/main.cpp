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
  set<int> myset;
  set<int>::value_compare mycomp;
  set<int>::iterator it,it2;
  int i,highest;

  mycomp = myset.value_comp();
  it = myset.begin();
  it2 = myset.begin();
  assert(mycomp(*it,*it2));


  return 0;
}
