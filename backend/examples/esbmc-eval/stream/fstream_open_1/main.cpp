/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// fstream::open
#include <fstream>
#include <cassert>
using namespace std;

int main () {

  fstream filestr;

  filestr.open ("test", fstream::in | fstream::out | fstream::app);
  assert(filestr.is_open());
  // >> i/o operations here <<

  filestr.close();

  return 0;
}
