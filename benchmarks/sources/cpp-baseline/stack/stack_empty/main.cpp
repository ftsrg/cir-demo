/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// stack::empty
#include <iostream>
#include <stack>
#include <cassert>
using namespace std;

int main ()
{
  stack<int> mystack;

  int sum (0);

  for (int i=1;i<=10;i++) mystack.push(i);

  while (!mystack.empty())
  {
     sum += mystack.top();
     mystack.pop();
  }
  assert(mystack.empty());
  cout << "total: " << sum << endl;
  
  return 0;
}
