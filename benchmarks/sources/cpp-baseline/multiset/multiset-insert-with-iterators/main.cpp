/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <set>
#include <cassert>
using namespace std;

int main ()
{
  multiset<int> myset;
  multiset<int>::iterator it;

  // set some initial values:

  int myints[]= {5,10,15};              // 10 already in set, not inserted
  myset.insert (myints,myints+3);
  assert(myset.size() == 3);
  
  it = myset.begin();
  assert(*it == 5);
  it++;
  assert(*it == 10);
  it++;
  assert(*it == 15);
  
  return 0;
}
