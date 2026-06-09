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

// Fig. 10.10: fig10_10.cpp
// Introducing polymorphism, virtual functions and dynamic
// binding.
#include <iostream>

using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setprecision;

#include "point.h"   // Point class definition
#include "circle.h"  // Circle class definition

int main()
{
   Point point( 30, 50 );
   Point *pointPtr = 0;

   Circle circle( 120, 89, 2.7 );
   Circle *circlePtr = 0; 

   // set floating-point numeric formatting
   cout << fixed << setprecision( 2 );

   // output objects point and circle using static binding
   cout << "Invoking print function on point and circle "
        << "\nobjects with static binding "
        << "\n\nPoint: ";
   point.print();         // static binding
   cout << "\nCircle: ";
   circle.print();        // static binding

   // output objects point and circle using dynamic binding
   cout << "\n\nInvoking print function on point and circle "
        << "\nobjects with dynamic binding";

   // aim base-class pointer at base-class object and print
   pointPtr = &point;
   cout << "\n\nCalling virtual function print with base-class"
        << "\npointer to base-class object"
        << "\ninvokes base-class print function:\n";
   pointPtr->print();

   // aim derived-class pointer at derived-class 
   // object and print
   circlePtr = &circle;
   cout << "\n\nCalling virtual function print with "
        << "\nderived-class pointer to derived-class object "
        << "\ninvokes derived-class print function:\n";
   circlePtr->print();

   // aim base-class pointer at derived-class object and print
   pointPtr = &circle;
   cout << "\n\nCalling virtual function print with base-class"
        << "\npointer to derived-class object "
        << "\ninvokes derived-class print function:\n";
   pointPtr->print();  // polymorphism: invokes circle's print
   cout << endl;

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