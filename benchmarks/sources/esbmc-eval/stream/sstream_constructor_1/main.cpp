/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// using stringstream constructors.
#include <iostream>
#include <sstream>
using namespace std;

int main () {

  int val;
  stringstream ss (stringstream::in | stringstream::out);

  ss << "120 42 377 6 5 2000";

  for (int n=0; n<6; n++)
  {
    ss >> val;
    cout << val*2 << endl;
  }

  return 0;
}
