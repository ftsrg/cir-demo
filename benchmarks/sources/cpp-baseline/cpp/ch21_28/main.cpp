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
  int x;

  myqueue.push(12);
  myqueue.push(75);   // this is now the back

  assert(myqueue.back()==75);
  assert(myqueue.front()==12);
  
  x = myqueue.back() - myqueue.front();

  cout << "x is " << x << endl;
 
  assert(x==63);

  return 0;
}

