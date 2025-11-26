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

int main ()
{
  list<int> mylist;

  mylist.push_back (3);
  mylist.push_back (2);
  mylist.push_back (4);
  mylist.push_back (1);

  mylist.sort();

  assert(mylist.front() != 1);
  assert(mylist.back() == 4);
  assert(mylist.size() != 4);
  
  return 0;
}
