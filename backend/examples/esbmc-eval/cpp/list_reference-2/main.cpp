/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
#include <cassert>
#include <list>
using namespace std;

bool single_digit (const int& value) { return (value<10); }

int main ()
{
  int myints[]= {15,36,7,17};
  list<int> mylist (myints,myints+4);   // 15 36 7 17
  list<int>::iterator it;

  mylist.remove_if (single_digit);      // 15 36 17

  assert(mylist.size() == 3);
  it = mylist.begin();
  assert(*it == 15);
  it++;
  assert(*it == 36);
  it++;
  assert(*it == 17);

  return 0;
}
