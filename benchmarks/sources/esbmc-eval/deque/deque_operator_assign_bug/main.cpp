/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// assignment operator with deques
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> first (3);      // deque with 3 zero-initialized ints
  deque<int> second (5);     // deque with 5 zero-initialized ints
  
  assert(first[0] != 0);
  assert(second[4] != 0);
  
  second=first;
  assert(second != first);
  first=deque<int>();
  
  assert(first.size() == 0);
  cout << "Size of first: " << int (first.size()) << endl;
  cout << "Size of second: " << int (second.size()) << endl;
  return 0;
}
