/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::value_comp
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> mymultimap;

  mymultimap.insert(std::make_pair('x',101));
  mymultimap.insert(std::make_pair('y',202));
  mymultimap.insert(std::make_pair('y',252));
  mymultimap.insert(std::make_pair('z',303));

  std::cout << "mymultimap contains:\n";

  std::pair<char,int> highest = *mymultimap.rbegin();          // last element

  std::multimap<char,int>::iterator it = mymultimap.begin();

  assert(!mymultimap.value_comp()(*it, highest));

  do {
    std::cout << (*it).first << " => " << (*it).second << '\n';
  } while ( mymultimap.value_comp()(*it++, highest) );

  return 0;
}
