/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// typewriter
#include <iostream>
#include <fstream>
using namespace std;

int main () {

  char ch;
  ofstream outfile ("test");

  do {
    ch=cin.get();
    outfile.put (ch);
  } while (ch!='.');

  return 0;
}
