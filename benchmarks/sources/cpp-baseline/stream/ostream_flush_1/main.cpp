/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// Flushing files
#include <fstream>
#include <cassert>
using namespace std;

int main () {

  ofstream outfile ("test");
  assert(outfile.is_open());
  for (int n=0; n<100; n++)
  {
    outfile << n;
    outfile.flush();
  }

  outfile.close();

  return 0;
}
