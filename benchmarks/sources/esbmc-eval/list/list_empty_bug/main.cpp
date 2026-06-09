/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::empty
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;
  int sum (0);

  for (int i=1;i<=10;i++) mylist.push_back(i);

  assert(!mylist.empty());
  while (!mylist.empty())
  {
     sum += mylist.front();
     mylist.pop_front();
  }
  assert(!mylist.empty()||(mylist.size() != 0));
  cout << "total: " << sum << endl;
  
  return 0;
}
