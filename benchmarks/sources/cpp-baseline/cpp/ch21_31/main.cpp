/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// queue::front
#include <iostream>
#include <queue>
#include <cassert>
using namespace std;

int main ()
{
  queue<int> myqueue;

  myqueue.push(12);
  myqueue.push(75);   // this is now the back

  myqueue.back() -= myqueue.front();

  cout << "myqueue.back() is now " << myqueue.back() << endl;

  assert(myqueue.back()==63);
  return 0;
}

