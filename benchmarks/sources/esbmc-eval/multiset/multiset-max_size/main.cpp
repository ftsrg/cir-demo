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
  int i;
  multiset<int> myset;
  if (myset.max_size()>1000)
  {
    for (i=0; i<1000; i++) myset.insert(i);
    cout << "The set contains 1000 elements.\n";
  }
  else cout << "The set could not hold 1000 elements.\n";
  assert(myset.size() == 1000);
  return 0;
}
