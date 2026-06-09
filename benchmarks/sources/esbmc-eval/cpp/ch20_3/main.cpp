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

// Fig. 20.4: fig20_04.cpp
// Using the exit and atexit functions 
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include <cstdlib>

void print( void );

int main()
{
   atexit( print );       // register function print 

   cout << "Enter 1 to terminate program with function exit" 
        << "\nEnter 2 to terminate program normally\n";

   int answer;
   cin >> answer;

   // exit if answer is 1
   if ( answer == 1 ) {
      cout << "\nTerminating program with function exit\n";
      exit( EXIT_SUCCESS );

   }  // end if

   cout << "\nTerminating program by reaching the end of main"
        << endl;

   return 0;

}  // end main

// display message before termination
void print( void )
{
   cout << "Executing function print at program termination\n"
        << "Program terminated" << endl;

}  // end function print

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
