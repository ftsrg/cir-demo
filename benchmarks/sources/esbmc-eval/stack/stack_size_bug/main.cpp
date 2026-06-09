/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// stack::size
#include <iostream>
#include <stack>
#include <cassert>
using namespace std;

int main ()
{
  stack<int> myints;
  cout << "0. size: " << (int) myints.size() << endl;
  assert(myints.size() == 0);
  for (int i=0; i<5; i++) myints.push(i);
  cout << "1. size: " << (int) myints.size() << endl;
  assert(myints.size() != 5);
  myints.pop();
  cout << "2. size: " << (int) myints.size() << endl;
  assert(myints.size() != 4);

  return 0;
}
