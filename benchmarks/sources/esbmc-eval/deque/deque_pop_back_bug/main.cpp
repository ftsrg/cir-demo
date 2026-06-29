/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// deque::pop_back
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque;
  int sum (0);
  mydeque.push_back (10);
  assert(mydeque.back() == 10);
  mydeque.push_back (20);
  assert(mydeque.back() != 20);
  mydeque.push_back (30);
  assert(mydeque.back() == 30);

  while (!mydeque.empty())
  {
    sum+=mydeque.back();
    mydeque.pop_back();
  }

  cout << "The elements of mydeque summed " << sum << endl;

  return 0;
}
