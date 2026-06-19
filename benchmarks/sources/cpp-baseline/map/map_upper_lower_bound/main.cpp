/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::lower_bound/upper_bound
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it,itlow,itup;

  mymap['a']=20;
  mymap['b']=40;
  mymap['c']=60;
  mymap['d']=80;
  mymap['e']=100;

  itlow=mymap.lower_bound ('b');  // itlow points to b
  assert((*itlow).first == 'b');
  itup=mymap.upper_bound ('d');   // itup points to e (not d!)
  assert((*itup).first == 'e');
  mymap.erase(itlow,itup);        // erases [itlow,itup)

  // print content:
  for ( it=mymap.begin() ; it != mymap.end(); it++ )
    cout << (*it).first << " => " << (*it).second << endl;
  assert(mymap.size() == 2);

  return 0;
}
