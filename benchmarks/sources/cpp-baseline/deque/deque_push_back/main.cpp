/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// deque::push_back
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque;
  int myint;

/*  cout << "Please enter some integers (enter 0 to end):\n"; */
  int n = 10;

  do {
    myint = --n;
    mydeque.push_back (myint);
  } while (myint);
  assert(mydeque.back() == 0);
  assert(mydeque.size() == 10);
  cout << "mydeque stores " << (int) mydeque.size() << " numbers.\n";

  return 0;
}
