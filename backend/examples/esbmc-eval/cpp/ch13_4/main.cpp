/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

#include <iostream>
using std::cout;

int main()
{
  double *ptr[ 50 ];

  for ( int i = 0; i < 50; i++ ) {
    ptr[ i ] = new double[ 5000000 ];

    if ( ptr[ i ] == 0 ) {
      cout << "Memory allocation failed for ptr[ "
          << i << " ]\n";
      break;
    }
    else
      cout << "Allocated 5000000 doubles in ptr[ "
      << i << " ]\n";
  }
  return 0;
}
