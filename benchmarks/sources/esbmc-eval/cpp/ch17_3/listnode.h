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

// Fig. 15.3: listnode.h
// Template ListNode class definition.
#ifndef LISTNODE_H
#define LISTNODE_H

// forward declaration of class List 
template< class NODETYPE > class List;  

template< class NODETYPE >
class ListNode {
   friend class List< NODETYPE >; // make List a friend

public:
   ListNode( const NODETYPE & );  // constructor
   NODETYPE getData() const;      // return data in node

private:
   NODETYPE data;                 // data
   ListNode< NODETYPE > *nextPtr; // next node in list

}; // end class ListNode

// constructor
template< class NODETYPE >
ListNode< NODETYPE >::ListNode( const NODETYPE &info )
   : data( info ), 
     nextPtr( 0 ) 
{ 
   // empty body

} // end ListNode constructor

// return copy of data in node
template< class NODETYPE >
NODETYPE ListNode< NODETYPE >::getData() const 
{ 
   return data; 
   
} // end function getData

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