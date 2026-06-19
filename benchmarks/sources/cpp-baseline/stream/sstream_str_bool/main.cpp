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
  bool val = true;
  
  oss << val;
  assert(oss.str() == "1");
  
  
  return 0;
}
