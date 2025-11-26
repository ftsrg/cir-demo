/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

//TEST FAILS
// istream constructor
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main () {
  filebuf fb;
  fb.open ("test",ios::in);
  assert(!fb.is_open());
  istream is(&fb);
  cout << char(is.get());
  fb.close();
  return 0;
}
