/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// remove_copy example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  int myints[] = {10,20,30,30,20,10,10,20};          // 10 20 30 30 20 10 10 20
  vector<int> myvector (8);
  vector<int>::iterator it;

  remove_copy (myints,myints+8,myvector.begin(),20); // 10 30 30 10 10 0 0 0
  
  assert(myvector[0] == 10);
  assert(myvector[1] == 30);
  assert(myvector[2] == 30);
  assert(myvector[3] == 10);
  assert(myvector[4] == 10);

  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
