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
#include <cstring>
using namespace std;

int main () {

  stringstream oss;
  char* val1 = new char[10];
  strcpy(val1, "testasd");

  oss << val1;
  assert(oss.str() == "testasd");


  return 0;
}
