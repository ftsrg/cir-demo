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

// Fig. 17.11: fig17_11.cpp
// Template Stack class test program.
#include <iostream>

using std::endl;

#include "stackcomposition.h"  // Stack class definition

int main()
{
   Stack< int > intStack;  // create Stack of ints
   int popInteger;

   cout << "processing an integer Stack" << endl;

   // push integers onto intStack
   for ( int i = 0; i < 4; i++ ) {
      intStack.push( i );
      intStack.printStack();

   } // end for

   // pop integers from intStack
   while ( !intStack.isStackEmpty() ) {
      intStack.pop( popInteger );
      cout << popInteger << " popped from stack" << endl;
      intStack.printStack();

   } // end while

   Stack< double > doubleStack;  // create Stack of doubles
   double value = 1.1, popdouble;

   cout << "processing a double Stack" << endl;

   // push floating-point values onto doubleStack
   for ( int j = 0; j< 4; j++ ) {
      doubleStack.push( value );
      doubleStack.printStack();
      value += 1.1;

   } // end for

   // pop floating-point values from doubleStack
   while ( !doubleStack.isStackEmpty() ) {
      doubleStack.pop( popdouble );
      cout << popdouble << " popped from stack" << endl;
      doubleStack.printStack();

   } // end while

   return 0;

} // end main

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