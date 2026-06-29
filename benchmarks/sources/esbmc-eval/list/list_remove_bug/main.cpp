/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// remove from list
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  int myints[]= {17,89,7,14};
  list<int> mylist (myints,myints+4);
  list<int>::iterator it;
  
  mylist.remove(89);
  assert(mylist.size() != 3);
  it = mylist.begin(); it++;
  assert(*it != 7);

  cout << "mylist contains:";
  for (list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
    cout << " " << *it;
  cout << endl;

  return 0;
}
