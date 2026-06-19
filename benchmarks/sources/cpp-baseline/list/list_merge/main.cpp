/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::merge
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<double> first, second;
  double mydoubles[] = {1.4, 2.2, 2.9};
  list<double> merged; 
  merged.assign(mydoubles,mydoubles+3);
  
  first.push_back (2.2);
  first.push_back (2.9);

  second.push_back (1.4);

  first.sort();

  first.merge(second);
  assert(first == merged);

  return 0;
}
