/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// queue::push/pop
#include <iostream>
#include <queue>
using namespace std;

int main ()
{
  queue<int> myqueue;
  int myint;

  cout << "Please enter some integers (enter 0 to end):\n";

  do {
    cin >> myint;
    myqueue.push (myint);
  } while (myint);

  cout << "myqueue contains: ";
  while (!myqueue.empty())
  {
    cout << " " << myqueue.front();
    myqueue.pop();
  }

  return 0;
}

