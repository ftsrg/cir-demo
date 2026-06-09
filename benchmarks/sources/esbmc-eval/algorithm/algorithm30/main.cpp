/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// remove_copy_if example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
  int myints[] = {1,2,3,4,5,6,7,8,9};          
  vector<int> myvector (9);
  vector<int>::iterator it;

  remove_copy_if (myints,myints+9,myvector.begin(),IsOdd);
  assert(myvector[0] == 2);
  assert(myvector[1] == 4);
  assert(myvector[2] == 6);
  assert(myvector[3] == 8);
  cout << "myvector contains:";
  for (it=myvector.begin(); it!=myvector.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
