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

  myset.insert(20);
  myset.insert(30);
  myset.insert(10);
  assert(myset.size() == 3);
  multiset<int>::iterator it = myset.begin();
  assert(*it == 10);
  cout << "myset contains:";
  while (!myset.empty())
  {
     cout << " " << *myset.begin();
     myset.erase(myset.begin());
  }
  assert(myset.begin() == myset.end());
  assert(myset.size() == 0);
  cout << endl;

  return 0;
}
