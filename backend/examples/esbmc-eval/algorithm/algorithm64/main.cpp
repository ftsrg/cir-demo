/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// prev_permutation
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
  int myints[] = {3,2,1};

  cout << "The 3! possible permutations with 3 elements:\n";

  do {
    cout << myints[0] << " " << myints[1] << " " << myints[2] << endl;
  } while ( prev_permutation (myints,myints+3) );

  return 0;
}
