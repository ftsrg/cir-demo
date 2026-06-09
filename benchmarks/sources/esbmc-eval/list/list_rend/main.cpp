/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::rbegin/rend
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> mylist;
  for (int i=1; i<=5; i++) mylist.push_back(i);

  cout << "mylist contains:";
  list<int>::reverse_iterator rit = mylist.rend();
  rit--;
  assert(*rit == 1);
  
  for ( rit=mylist.rbegin() ; rit != mylist.rend(); ++rit )
    cout << " " << *rit;

  cout << endl;

  return 0;
}
