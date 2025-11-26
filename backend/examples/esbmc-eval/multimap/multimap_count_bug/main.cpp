/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// map::count
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  std::multimap<char,int> mymm;

  mymm.insert(std::make_pair('x',50));
  mymm.insert(std::make_pair('y',100));
  mymm.insert(std::make_pair('y',150));
  mymm.insert(std::make_pair('y',200));
  mymm.insert(std::make_pair('z',250));
  mymm.insert(std::make_pair('z',300));

  assert(mymm.count('x') == 1);
  assert(mymm.count('y') == 3);
  assert(mymm.count('z') == 1);

  return 0;
}
