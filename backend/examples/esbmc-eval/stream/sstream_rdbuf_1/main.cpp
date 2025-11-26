/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// stringstream::rdbuf
#include <iostream>
#include <sstream>
using namespace std;

int main () {
  stringbuf *pbuf;
  stringstream ss;

  pbuf=ss.rdbuf();
  pbuf->sputn ("Sample string",13);
  cout << pbuf->str();

  return 0;
}
