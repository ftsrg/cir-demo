/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// lower_bound/upper_bound example
#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
using namespace std;

int main () {
  int myints[] = {10,10,10,20,20,20,30,30};
  vector<int> v(myints,myints+8);           // 10 10 10 20 20 10 30 30
  vector<int>::iterator low,up;


  low=lower_bound (v.begin(), v.end(), 20); //          ^
  up= upper_bound (v.begin(), v.end(), 20); //                   ^
  assert(*up != 30);
  return 0;
}
