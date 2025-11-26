/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// deque::size
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> myints;
  cout << "0. size: " << (int) myints.size() << endl;
  assert(myints.size() == 0);
  for (int i=0; i<5; i++) myints.push_back(i);
  cout << "1. size: " << (int) myints.size() << endl;
  assert(myints.size() != 5);
  myints.insert (myints.begin(),5,100);
  cout << "2. size: " << (int) myints.size() << endl;
  assert(myints.size() == 10);
  myints.pop_back();
  cout << "3. size: " << (int) myints.size() << endl;
  assert(myints.size() != 9);  
  return 0;
}
