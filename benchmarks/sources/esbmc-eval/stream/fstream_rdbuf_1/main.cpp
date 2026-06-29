/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// open and close a file using buffer members
#include <fstream>
#include <cassert>
using namespace std;

int main () {
  char ch;
  fstream filestr;
  filebuf *pbuf;

  pbuf=filestr.rdbuf();
  
  pbuf->open ("test", fstream::in | fstream::out);
  assert(pbuf->is_open());
  // >> i/o operations here <<

  pbuf->close();

  return 0;
}
