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

// Fig. 8.7: string1.h
// String class definition.
#ifndef STRING1_H
#define STRING1_H

#include <iostream>

using std::ostream;
using std::istream;

class String {
   friend ostream &operator<<( ostream &, const String & );
   friend istream &operator>>( istream &, String & );

public:
   String( const char * = "" ); // conversion/default ctor
   String( const String & );    // copy constructor
   ~String();                   // destructor

   const String &operator=( const String & );  // assignment
   const String &operator+=( const String & ); // concatenation

   bool operator!() const;                  // is String empty?
   bool operator==( const String & ) const; // test s1 == s2
   bool operator<( const String & ) const;  // test s1 < s2

   // test s1 != s2
   bool operator!=( const String & right ) const
   { 
      return !( *this == right ); 
   
   } // end function operator!=

   // test s1 > s2
   bool operator>( const String &right ) const
   { 
      return right < *this; 
   
   } // end function operator>
 
   // test s1 <= s2
   bool operator<=( const String &right ) const
   { 
      return !( right < *this ); 
   
   } // end function operator <=

   // test s1 >= s2
   bool operator>=( const String &right ) const
   { 
      return !( *this < right ); 
   
   } // end function operator>=

   char &operator[]( int );             // subscript operator
   const char &operator[]( int ) const; // subscript operator

   String operator()( int, int );       // return a substring

   int getLength() const;               // return string length

private:
   int length;                   // string length 
   char *sPtr;                   // pointer to start of string

   void setString( const char * );  // utility function

}; // end class String

#endif

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