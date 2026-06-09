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

// Fig. 20.6: fig20_06.cpp
// Using signal handling 
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <iomanip>

using std::setw;

#include <csignal>
#include <cstdlib>
#include <ctime>

void signalHandler( int );

int main()
{
   signal( SIGINT, signalHandler );
   srand( time( 0 ) );
   
   // create and output random numbers
   for ( int i = 1; i <= 100; i++ ) {
      int x = 1 + rand() % 50;
      
      // raise SIGINT when x is 25
      if ( x == 25 )
         raise( SIGINT );
         
      cout << setw( 4 ) << i;

      // output endl when i is a multiple of 10
      if ( i % 10 == 0 )
         cout << endl;

   }  // end for

   return 0;

}  // end main

// handles signal
void signalHandler( int signalValue )
{
   cout << "\nInterrupt signal (" << signalValue
        << ") received.\n"
        << "Do you wish to continue (1 = yes or 2 = no)? ";

   int response;  

   cin >> response;

   // check for invalid responses
   while ( response != 1 && response != 2 ) {
      cout << "(1 = yes or 2 = no)? ";
      cin >> response;

   }  // end while
   
   // determine if it is time to exit
   if ( response != 1 )
      exit( EXIT_SUCCESS );

   // call signal and pass it SIGINT and address of signalHandler
   signal( SIGINT, signalHandler );
      cout << SIGINT << endl;
}  // end function signalHandler

/**************************************************************************
 * (C) Copyright 1992-2003 by Deitel & Associates, Inc. and Prentice      *
 * Hall. All Rights Reserved.                                             *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
