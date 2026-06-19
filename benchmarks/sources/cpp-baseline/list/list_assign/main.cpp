/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// list::assign
#include <iostream>
#include <list>
#include <cassert>
using namespace std;

int main ()
{
  list<int> first;
  list<int> second;

  first.assign (7,100);                      // 7 ints with value 100
  assert(first.back() == 100);
  assert(first.size() == 7);

  second.assign (first.begin(),first.end()); // a copy of first
  assert(second.back() == 100);
  assert(second.size() == 7);


  int myints[]={1776,7,4};
  first.assign (myints,myints+3);            // assigning from array
  assert(first.back() == 4);
  assert(first.size() == 3);


  cout << "Size of first: " << int (first.size()) << endl;
  cout << "Size of second: " << int (second.size()) << endl;
  return 0;
}
