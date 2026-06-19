/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// replace_copy_if example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

bool IsOdd (int i) { return ((i%2)==1); }

int main () {
  vector<int> first,second;
  vector<int>::iterator it;

  // set some values:
  for (int i=1; i<10; i++) first.push_back(i);          // 1 2 3 4 5 6 7 8 9

  second.resize(first.size());   // allocate space
  replace_copy_if (first.begin(), first.end(), second.begin(), IsOdd, 0);
                                                        // 0 2 0 4 0 6 0 8 0
  assert(second[0] == 0);
  assert(second[2] == 0);
  assert(second[4] == 0);
  assert(second[6] == 0);
  assert(second[8] == 0);
  cout << "second contains:";
  for (it=second.begin(); it!=second.end(); ++it)
    cout << " " << *it;

  cout << endl;
 
  return 0;
}
