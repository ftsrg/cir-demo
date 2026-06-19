/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// multimap::empty
#include <iostream>
#include <map>
#include <cassert>

int main ()
{
  std::multimap<char,int> mymultimap;

  mymultimap.insert (std::pair<char,int>('b',101));
  mymultimap.insert (std::pair<char,int>('b',202));
  mymultimap.insert (std::pair<char,int>('q',505));
  assert(!mymultimap.empty());
  while (!mymultimap.empty())
  {
     std::cout << mymultimap.begin()->first << " => ";
     std::cout << mymultimap.begin()->second << '\n';
     mymultimap.erase(mymultimap.begin());
  }

  return 0;
}
