/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// set_terminate example
#include <iostream>
#include <exception>
#include <cstdlib>
using namespace std;

void myterminate () {
  cerr << "terminate handler called\n";
  abort();  // forces abnormal termination
}

int main (void) {
  set_terminate (myterminate);
  throw 0;  // unhandled exception: calls terminate handler
  return 0;
}
