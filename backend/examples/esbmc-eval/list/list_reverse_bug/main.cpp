/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// reversing list
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;
  list<int>::iterator it;

  for (int i=1; i<3; i++) mylist.push_back(i);

  mylist.reverse();
  int n = 2;
  cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it)
      assert(*it != n--);

  cout << endl;

  return 0;
}
