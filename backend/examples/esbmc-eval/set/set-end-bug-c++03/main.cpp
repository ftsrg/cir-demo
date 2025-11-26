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
  int myints[] = {75,23,65,42,13};
  set<int> myset (myints,myints+5);

  set<int>::iterator it = myset.end();
  it--;
  assert(*it != 75);
  cout << "myset contains:";
  for ( it=myset.begin() ; it != myset.end(); it++ )
    cout << " " << *it;

  cout << endl;

  return 0;
}
