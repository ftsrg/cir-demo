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
  set<int> myints;
  cout << "0. size: " << (int) myints.size() << endl;
  assert(myints.size() == 0);
  for (int i=0; i<10; i++) myints.insert(i);
  cout << "1. size: " << (int) myints.size() << endl;
  assert(myints.size() == 10);
  myints.insert (100);
  cout << "2. size: " << (int) myints.size() << endl;
  assert(myints.size() == 11);
  myints.erase(5);
  cout << "3. size: " << (int) myints.size() << endl;
  assert(myints.size() == 10);
  return 0;
}
