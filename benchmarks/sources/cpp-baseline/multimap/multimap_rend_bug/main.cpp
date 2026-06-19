/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// multimap::rbegin/rend
#include <iostream>
#include <map>
#include <cassert>

int main ()
{
  std::multimap<char,int> mymultimap;

  mymultimap.insert (std::make_pair('x',10));
  mymultimap.insert (std::make_pair('y',20));
  mymultimap.insert (std::make_pair('y',150));
  mymultimap.insert (std::make_pair('z',9));

  std::multimap<char,int>::reverse_iterator rit = mymultimap.rend();
  rit--;
  assert(rit->first == 'x');
  assert(rit->second == 10);
  rit--;
  assert(rit->first == 'y');
  assert(rit->second != 20);

  return 0;
}
