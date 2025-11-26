/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::back
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;

  mylist.push_back(10);
  int n = 10;
  while (mylist.back() != 0)
  {
    assert(mylist.back() != n--);
    mylist.push_back ( mylist.back() -1 );
  }

  cout << "mylist contains:";
  for (list<int>::iterator it=mylist.begin(); it!=mylist.end() ; ++it)
    cout << " " << *it;

  cout << endl;

  return 0;
}
