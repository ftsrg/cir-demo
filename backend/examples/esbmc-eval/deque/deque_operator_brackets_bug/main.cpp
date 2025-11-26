/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// deque::operator[]
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque (10);   // 10 zero-initialized elements
  unsigned int i;

  deque<int>::size_type sz = mydeque.size();

  // assign some values:
  for (i=0; i<sz; i++) mydeque[i]=i;

  // reverse order of elements using operator[]:
  for (i=0; i<sz/2; i++)
  {
    int temp;
    temp = mydeque[sz-1-i];
    mydeque[sz-1-i]=mydeque[i];
    mydeque[i]=temp;
  }

  cout << "mydeque contains:";
  for (i=0; i<sz; i++)
    assert(mydeque[i] != 9-i);

  cout << endl;

  return 0;
}
