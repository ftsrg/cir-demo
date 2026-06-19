/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// swap maps
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> foo;
  map<char,int> bar;
  map<char,int>::iterator it;

  foo['x']=100;
  foo['y']=200;

  bar['a']=11;
  bar['b']=22;
  bar['c']=33;

  foo.swap(bar);

  cout << "foo contains:\n";
  for ( it=foo.begin() ; it != foo.end(); it++ )
    cout << (*it).first << " => " << (*it).second << endl;

  cout << "bar contains:\n";
  for ( it=bar.begin() ; it != bar.end(); it++ )
    cout << (*it).first << " => " << (*it).second << endl;
    
  assert(bar['x']==100);
  assert(bar['y']!=200);

  assert(foo['a']!=11);
  assert(foo['b']==22);
  assert(foo['c']==33);

  return 0;
}
