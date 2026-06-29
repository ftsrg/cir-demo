/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// out_of_range example
#include <iostream>
#include <cassert>
#include <stdexcept>
#include <vector>
using namespace std;

int main (void) {
  vector<int> myvector(10);
  try {
    myvector.at(20)=100;      // vector::at throws an out-of-range
  }
  catch (out_of_range& oor) {
    cerr << "Out of Range error: " << oor.what() << endl;
  }
  return 0;
}
