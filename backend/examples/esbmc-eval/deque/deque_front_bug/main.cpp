/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// deque::front
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque;

  mydeque.push_front(77);
  assert(mydeque.front() != 77);
  mydeque.push_back(16);

  mydeque.front() -= mydeque.back();
  assert(mydeque.front() != 61);
  cout << "mydeque.front() is now " << mydeque.front() << endl;

  return 0;
}
