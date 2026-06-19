/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// priority_queue::empty
#include <iostream>
#include <queue>
#include <cassert>
using namespace std;

int main ()
{
  priority_queue<int> mypq;
  int sum (0);

  for (int i=1;i<=10;i++) mypq.push(i);

  while (!mypq.empty())
  {
     sum += mypq.top();
     mypq.pop();
  }
  assert(!mypq.empty());
  cout << "total: " << sum << endl;
  
  return 0;
}
