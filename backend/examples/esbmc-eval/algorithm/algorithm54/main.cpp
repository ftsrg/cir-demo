/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// set_difference example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  int first[] = {5,10,15,20,25};
  int second[] = {10,20,30,40,50};
  vector<int> v(10);                           // 0  0  0  0  0  0  0  0  0  0
  vector<int>::iterator it;

  it=set_difference (first, first+5, second, second+5, v.begin());
                                               // 5 15 25  0  0  0  0  0  0  0
  assert(v[0] == 5);
  assert(v[1] == 15);
  assert(v[2] == 25);

//  cout << "difference has " << int(it - v.begin()) << " elements.\n";

  return 0;
}
