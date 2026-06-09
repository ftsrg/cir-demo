/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// reversing list
#include <iostream>
#include <cassert>
#include <list>
using namespace std;

int main ()
{
  list<int> mylist;
  list<int>::iterator it;

  for (int i=1; i<5; i++) mylist.push_back(i);

  mylist.reverse();

  it = mylist.begin();
  assert(*it != 4);

  cout << "*it: " << *it << endl;
  return 0;
}
