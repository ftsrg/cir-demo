/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// erasing from map
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it;
  char chararray[4] = {'a', 'd'};
  int intarray[4] = {10, 40};
  
  
  // insert some values:
  mymap['a']=10;
  mymap['b']=20;
  mymap['c']=30;
  mymap['d']=40;
  mymap['e']=50;
  mymap['f']=60;

  it=mymap.find('b');
  mymap.erase (it);                   // erasing by iterator

  mymap.erase ('c');                  // erasing by key

  it=mymap.find ('e');
  mymap.erase ( it, mymap.end() );    // erasing by range
  int i = 0;
  // show content:
  for ( it=mymap.begin() ; it != mymap.end(); it++ ){
    cout << (*it).first << " => " << (*it).second << endl;
    assert((*it).first == chararray[i]);
    assert((*it).second == intarray[i]);
    i++;
    }

  return 0;
}
