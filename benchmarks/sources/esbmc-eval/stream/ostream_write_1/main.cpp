/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// Copy a file
#include <fstream>
#include <cassert>
using namespace std;

int main () {

  char * buffer;
  long size;

  ifstream infile ("test",ifstream::binary);
  ofstream outfile ("new",ofstream::binary);
  
  assert(infile.is_open());
  assert(outfile.is_open());
  
  // get size of file
  infile.seekg(0,ifstream::end);
  size=infile.tellg();
  infile.seekg(0);

  // allocate memory for file content
  buffer = new char [size];

  // read content of infile
  infile.read (buffer,size);

  // write to outfile
  outfile.write (buffer,size);
  
  // release dynamically-allocated memory
  delete[] buffer;

  outfile.close();
  infile.close();
  
  assert(!(infile.is_open()));
  assert(!(outfile.is_open()));
  
  return 0;
}
