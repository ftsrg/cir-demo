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
  long val1 = 1334212;
  unsigned long val2 = 23132123;
  
  oss << val1;
  
  assert(oss.str() == "1334212");
  
  oss << val2;
  assert(oss.str() == "133421223132123");
  
  return 0;
}
