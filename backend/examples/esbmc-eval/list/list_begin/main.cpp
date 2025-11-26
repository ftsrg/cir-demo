/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::begin
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  int myints[] = {75,23,65,42,13};
  list<int> mylist (myints,myints+5);

  list<int>::iterator it;

  it = mylist.begin();
  assert(*it == 75);
  
  cout << endl;

  return 0;
}
