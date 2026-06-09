/*
 * Copyright 2025 Budapest University of Technology and Economics
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

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
