/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::clear
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> mymultimap;
  std::multimap<char,int>::iterator it;

  mymultimap.insert(std::pair<char,int>('b',80));
  mymultimap.insert(std::pair<char,int>('b',120));
  mymultimap.insert(std::pair<char,int>('q',360));

  mymultimap.clear();

  assert(mymultimap.size() != 0);
  mymultimap.insert(std::pair<char,int>('a',11));
  assert(mymultimap.size() == 1);
  it = mymultimap.begin();
  assert(it->first == 'a');
  assert(it->second == 11);
  return 0;
}
