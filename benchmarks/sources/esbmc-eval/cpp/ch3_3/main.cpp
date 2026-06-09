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

// Exercise 3.10: ex03_10.cpp
// Inline function that calculates the volume of a sphere.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cmath>

// define global constant PI
const double PI = 3.14159;

// calculates volume of a sphere
inline double sphereVolume( const double radius ) 
{ 
   return 4.0 / 3.0 * PI * pow( radius, 3 ); 

} // end inline function sphereVolume

int main()
{
   double radiusValue;

   // prompt user for radius 
   cout << "Enter the length of the radius of your sphere: ";
   cin >> radiusValue;  // input radius 

   // use radiusValue to calculate volume of sphere 
   // and display result
   cout << "Volume of sphere with radius " << radiusValue 
        << " is " << sphereVolume( radiusValue ) << endl;

   return 0;  // indicates successful termination

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
