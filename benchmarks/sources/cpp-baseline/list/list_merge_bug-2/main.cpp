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

// this compares equal two doubles if
//  their interger equivalents are equal
bool mycomparison (double first, double second)
{ return ( int(first)<int(second) ); }

int main ()
{
  list<double> first, second;
  double md2[] = {1.4, 2.2, 2.1, 3.1};
  list<double> merged;
  
  first.push_back (3.1);
  first.push_back (2.2);

  second.push_back (1.4);

  first.sort();
  
  second.push_back (2.1);
  merged.assign(md2,md2+4);
  first.merge(second,mycomparison);
  assert(merged != first);

  return 0;
}
