/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::empty
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;

  mymap['a']=10;
  mymap['b']=20;
  mymap['c']=30;

  while (!mymap.empty())
  {
     cout << mymap.begin()->first << " => ";
     cout << mymap.begin()->second << endl;
     mymap.erase(mymap.begin());
  }
  assert(mymap.empty());
  return 0;
}
