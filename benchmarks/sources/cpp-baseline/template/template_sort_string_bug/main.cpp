/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::sort
#include <iostream>
#include <list>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  list<string> mylist;
  list<string>::iterator it;
  mylist.push_back ("one");
  mylist.push_back ("two");
  mylist.push_back ("Three");

  mylist.sort();
  it = mylist.begin();
  assert(*it != "Three"); it++;
  assert(*it != "one"); it++;
  assert(*it != "two");
  
  cout << "mylist contains:";
  for (it=mylist.begin(); it!=mylist.end(); ++it)
    cout << " " << *it;
  cout << endl;

  return 0;
}
