/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// fstream::is_open
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main () {

  fstream filestr;
  filestr.open ("test");
  assert(filestr.is_open());
  if (filestr.is_open())
  {
    filestr << "File successfully open";
    filestr.close();
    assert(!(filestr.is_open()));
  }
  else
  {
    cout << "Error opening file";
  }
  return 0;
}
