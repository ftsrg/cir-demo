/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::size
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> mymultimap;

  mymultimap.insert(std::make_pair('x',100));
  mymultimap.insert(std::make_pair('y',200));
  mymultimap.insert(std::make_pair('y',350));
  mymultimap.insert(std::make_pair('z',500));

  assert(mymultimap.size() != 4);
  std::cout << "mymultimap.size() is " << mymultimap.size() << '\n';

  return 0;
}
