/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::size
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  mymap['a']=101;
  mymap['b']=202;
  mymap['c']=302;
  assert(mymap.size() == 3);
  cout << "mymap.size() is " << (int) mymap.size() << endl;

  return 0;
}
