/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// priority_queue::top
#include <iostream>
#include <queue>
#include <cassert>
using namespace std;

int main ()
{
  priority_queue<int> mypq;

  mypq.push(10);
  mypq.push(20);
  mypq.push(15);
  assert(mypq.top() != 20);
  cout << "mypq.top() is now " << mypq.top() << endl;

  return 0;
}
