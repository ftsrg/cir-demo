/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::equal_elements
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  pair<map<char,int>::iterator,map<char,int>::iterator> ret;

  mymap['a']=10;
  mymap['b']=20;
  mymap['c']=30;

  ret = mymap.equal_range('b');
  
  assert(ret.first->first == 'b');
  assert(ret.first->second == 20);
  
  assert(ret.second->first == 'c');
  assert(ret.second->second == 30);
  
  cout << "lower bound points to: ";
  cout << ret.first->first << " => " << ret.first->second << endl;

  cout << "upper bound points to: ";
  cout << ret.second->first << " => " << ret.second->second << endl;

  return 0;
}
