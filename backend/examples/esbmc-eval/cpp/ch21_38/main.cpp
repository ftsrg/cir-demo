/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::push_back
#include <iostream>
#include <list>
#include <cassert>

using namespace std;

int main ()
{
  list<int> mylist;
  int myint=0;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    myint++;
    mylist.push_back (myint);
    if (myint==2) myint=0;
  } while (myint);

  cout << "mylist stores " << (int) mylist.size() << " numbers.\n";
  assert((int) mylist.size() == 1);

  return 0;
}

