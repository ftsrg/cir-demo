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

// Fig. 5.29: fig05_29.cpp
// Using strcat and strncat.
#include <iostream>
#include <cassert>
using std::cout;
using std::endl;

#include <cstring>   // prototypes for strcat and strncat

int main()
{
   char s1[ 20 ] = "Happy ";
   char s2[] = "New Year ";
   char s3[ 40 ] = "";
   char s4[ 40 ] = "Happy New Year ";

   cout << "s1 = " << s1 << "\ns2 = " << s2;

   strcat( s1, s2 );  // concatenate s2 to s1

   cout << "\n\nAfter strcat(s1, s2):\ns1 = " << s1 
        << "\ns2 = " << s2;
   assert(!strcmp(s1,s4));
   // concatenate first 6 characters of s1 to s3
   strncat( s3, s1, 6 );  // places '\0' after last character

   cout << "\n\nAfter strncat(s3, s1, 6):\ns1 = " << s1 
        << "\ns3 = " << s3;

   strcat( s3, s1 );  // concatenate s1 to s3  
   cout << "\n\nAfter strcat(s3, s1):\ns1 = " << s1 
        << "\ns3 = " << s3 << endl;

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
