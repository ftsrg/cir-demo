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
  std::multimap<char,int> foo,bar;

  foo.insert(std::make_pair('x',100));
  foo.insert(std::make_pair('y',200));

  bar.insert(std::make_pair('a',11));
  bar.insert(std::make_pair('b',22));
  bar.insert(std::make_pair('a',55));

  std::multimap<char,int>::iterator it=foo.begin();
  assert(it->first == 'x');
  assert(it->second == 100);
  it++;
  assert(it->first == 'y');
  assert(it->second == 200);
  
  it=bar.begin();
  assert(it->first == 'a');
  assert(it->second == 11);
  it++;
  assert(it->first == 'a');
  assert(it->second == 55);
  it++;
  assert(it->first == 'b');
  assert(it->second == 22);
  foo.swap(bar);

  it=bar.begin();
  assert(it->first == 'x');
  assert(it->second == 100);
  it++;
  assert(it->first == 'y');
  assert(it->second == 200);
  
  it=foo.begin();
  assert(it->first == 'a');
  assert(it->second == 11);
  it++;
  assert(it->first == 'a');
  assert(it->second == 55);
  it++;
  assert(it->first == 'b');
  assert(it->second == 22);

  return 0;
}

