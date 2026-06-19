/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::front
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;

  mylist.push_back(77);
  mylist.push_back(22);
  assert(mylist.front() == 77);
  // now front equals 77, and back 22

  mylist.front() -= mylist.back();
  assert(mylist.front() == 55);
  cout << "mylist.front() is now " << mylist.front() << endl;

  return 0;
}
