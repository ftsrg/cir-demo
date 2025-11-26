/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// position of put pointer
#include <fstream>
#include <cassert>

using namespace std;

int main () {
  long pos;

  ofstream outfile;
  outfile.open ("test");
  
  outfile.write ("This is an apple",16);
  
  assert(outfile.tellp() == 16);
  pos=outfile.tellp();

  outfile.seekp (pos-7);
  assert(outfile.tellp() == 9);
  outfile.write (" sam",4);

  outfile.close();

  return 0;
}
