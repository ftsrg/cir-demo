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
  int val1 = -1532;
  unsigned int val2 = 433;
  
  oss << val1;
  assert(oss.str() == "-1532");
  
  
  oss << val2;
  assert(oss.str() == "-1532433");
  
  return 0;
}
