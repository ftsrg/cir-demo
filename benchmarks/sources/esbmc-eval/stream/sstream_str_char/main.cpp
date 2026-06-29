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
  char val1 = 'X';
  signed char val2 = 'Y';
  unsigned char val3 = 'Z';
  
  oss << val1;
  assert(oss.str() == "X");
 
  oss << val2;
  assert(oss.str() == "XY");
  
  oss << val3;
  assert(oss.str() == "XYZ");
  
  return 0;
}
