/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// length_error example
#include <iostream>
#include <cassert>
#include <stdexcept>
#include <vector>
using namespace std;

int main (void) {
  try {
    vector<int> myvector;
    myvector.resize(myvector.max_size()+1);
  }
  catch (length_error& le) {
    cerr << "Length error: " << le.what() << endl;
  }
  return 0;
}
