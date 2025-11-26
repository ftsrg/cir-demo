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
  list<int>::iterator it;

  mylist.push_back(1);                          // 1 2 3 4 
  mylist.push_back(2);
  mylist.push_back(3);
  mylist.push_back(4);

  it = mylist.begin();
  ++it;       // it points now to number 2           ^

  mylist.insert (it,10);                        // 1 10 2 3 4 

  it = mylist.begin();
  it++;
  it++;
  it++;
  it++;
  assert(*it == 4);
  cout << *it << endl;

  return 0;
}
