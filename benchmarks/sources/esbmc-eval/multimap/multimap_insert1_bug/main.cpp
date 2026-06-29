/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// multimap::insert (C++98)
#include <iostream>
#include <map>
#include <cassert>
int main ()
{
  std::multimap<char,int> mymultimap;
  std::multimap<char,int>::iterator it;

  // first insert function version (single parameter):
  mymultimap.insert ( std::pair<char,int>('a',100) );
  mymultimap.insert ( std::pair<char,int>('z',150) );
  it=mymultimap.insert ( std::pair<char,int>('b',75) );

  assert(it->first == 'b');
  assert(it->second == 75);
  it--;
  assert(it->first == 'a');
  assert(it->second != 100);

  return 0;
}
