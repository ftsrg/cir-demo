/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// set_unexpected example
#include <iostream>
#include <exception>
using namespace std;

void myfunction () {
  throw 1;
}

int main (void) {
  try {
    myfunction();
  }
  catch (int) { cerr << "caught int\n"; }
  catch (...) { cerr << "caught other exception (non-compliant compiler?)\n"; }
  return 0;
}
