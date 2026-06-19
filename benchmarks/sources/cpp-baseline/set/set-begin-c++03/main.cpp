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
  int myints[] = {75,23,65,42,13};
  int mySecondInts[] = {13,23,42,65,75};
  int i;
  set<int> myset (myints,myints+5);
  assert(myset.size() == 5);
  set<int>::iterator it;

  cout << "myset contains:" << endl;
  for ( it=myset.begin(), i=0 ; it != myset.end(); it++, i++ ){
    cout << " " << *it;
    assert(*it == mySecondInts[i]);
  }
  cout << endl;

  return 0;
}
