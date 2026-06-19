/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// deque::empty
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque;
  int sum (0);

  for (int i=1;i<=10;i++) mydeque.push_back(i);

  while (!mydeque.empty())
  {
     sum += mydeque.front();
     mydeque.pop_front();
  }
  assert(!mydeque.empty());
  assert(mydeque.size() != 0);
  cout << "total: " << sum << endl;
  
  return 0;
}
