/*
 * Source: https://doi.org/10.5281/zenodo.14824495
 *
 * This work is licensed under Creative Commons Attribution 4.0 International.
 * To view a copy of this license, visit https://creativecommons.org/licenses/by/4.0/
 */

// Fig. 13.6: fig13_06.cpp
// Demonstrating set_new_handler.
#include <iostream>

using std::cout;
using std::cerr;

#include <new>     // standard operator new and set_new_handler

using std::set_new_handler;

#include <cstdlib> // abort function prototype

void customNewHandler()
{
   cerr << "customNewHandler was called";
   abort();
}

// using set_new_handler to handle failed memory allocation
int main()
{
   double *ptr[ 5 ];

   // specify that customNewHandler should be called on failed 
   // memory allocation
   set_new_handler( customNewHandler );   

   // allocate memory for ptr[ i ]; customNewHandler will be
   // called on failed memory allocation
   for ( int i = 0; i < 5; i++ ) {
      ptr[ i ] = new double[ 5000000000000 ];

      cout << "Allocated 5000000 doubles in ptr[ " 
           << i << " ]\n";

   } // end for

   return 0;

}  // end main
