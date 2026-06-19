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
  int myints[] = {21,64,17,78,49};
  multiset<int> myset (myints,myints+5);

  multiset<int>::reverse_iterator rit;
  rit = myset.rbegin();
  assert(*rit != 78);

  cout << endl;

  return 0;
}
