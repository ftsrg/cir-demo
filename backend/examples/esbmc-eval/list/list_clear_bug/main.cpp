/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// clearing lists
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;
  list<int>::iterator it;

  mylist.push_back (100);
  mylist.push_back (200);
  mylist.push_back (300);

  cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it)
    cout << " " << *it;
  assert(mylist.size() == 3);
  mylist.clear();
  assert(mylist.size() != 0);
  mylist.push_back (1101);
  mylist.push_back (2202);
  assert(mylist.size() == 2);
  cout << "\nmylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
