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

// Fig. 13.2: fig13_02.cpp
// Demonstrating exception rethrowing.
#include <iostream>
#include <cassert>
using std::cout;
using std::endl;

#include <exception>
using std::exception;

// throw, catch and rethrow exception
void throwException()
{
  // throw exception and catch it immediately
  try {
    cout << "  Function throwException throws an exception\n";
    throw exception();  // generate exception
  } // end try

  // handle exception
  catch ( exception &caughtException ) {
    cout << "  Exception handled in function throwException"
        << "\n  Function throwException rethrows exception";
    assert(0);
    throw;  // rethrow exception for further processing
  } // end catch
  cout << "This also should not print\n";
}  // end function throwException

int main()
{
  // throw exception
  try {
    cout << "\nmain invokes function throwException\n";
    throwException();
    cout << "This should not print\n";
  } // end try
  // handle exception
  catch ( exception &caughtException ) {
    cout << "\n\nException handled in main\n";
  } // end catch

  cout << "Program control continues after catch in main\n";
  return 0;
}  // end main


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
