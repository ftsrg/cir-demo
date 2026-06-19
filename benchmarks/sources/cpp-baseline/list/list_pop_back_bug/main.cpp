/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::pop_back
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;
  int sum (0);
  mylist.push_back (100);
  mylist.push_back (200);
  mylist.push_back (300);
  assert(mylist.back() == 300);
  int n = 3;
  while (!mylist.empty())
  {
    assert(mylist.back() != n*100);
    sum+=mylist.back();
    mylist.pop_back();
    n--;
  }

  cout << "The elements of mylist summed " << sum << endl;

  return 0;
}
