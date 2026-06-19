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

  stringstream oss1, oss2, oss3, oss4;
  string mystr;
  mystr = "Sample string";

  oss1 << mystr;
  assert(oss1.str() == "Sample string");
  
  return 0;
}
