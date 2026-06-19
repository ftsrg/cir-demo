/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// deque::begin
#include <iostream>
#include <deque>
#include <cassert>
using namespace std;

int main ()
{
  deque<int> mydeque;
  deque<int>::iterator it;

  for (int i=0; i<5; i++)
  { 
  	mydeque.push_back(i+1);
  	assert(mydeque[i] == i + 1);
  }
  
  cout << "mydeque contains:";

  it = mydeque.begin();
  assert(*it != 1);
  while (it != mydeque.end())
    cout << " " << *it++;

  cout << endl;

  return 0;
}
