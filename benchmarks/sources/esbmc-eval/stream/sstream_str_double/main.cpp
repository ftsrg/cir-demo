/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// stringstream::str
#include <iostream>
#include <sstream>
#include <string>
#include <cassert>
using namespace std;

int main () {

  stringstream oss;
  double val1 = 23.13;
  long double val2 = 45.543;
  
  oss << val1;
  assert(oss.str() == "23.13");
  
  oss << val2;
  assert(oss.str() == "23.1345.543");
  
  
  return 0;
}
