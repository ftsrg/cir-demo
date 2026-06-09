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

// Fig. 7.43: floor.h
// Floor class definition.
#ifndef FLOOR_H
#define FLOOR_H

#include "floorButton.h"
#include "light.h"

class Elevator;  // forward declaration
class Person;    // forward declaration

class Floor {

public:
   Floor( int, Elevator & ); // constructor
   ~Floor();                 // destructor
   bool isOccupied() const;  // return true if floor occupied
   int getNumber() const;    // return floor's number

   // pass a handle to new person coming on floor
   void personArrives( Person * const );

   // notify floor that elevator has arrived
   Person *elevatorArrived();

   // notify floor that elevator is leaving
   void elevatorLeaving();

   // notify floor that person is leaving floor
   void personBoardingElevator();

   // static constants representing floor numbers
   static const int FLOOR1;
   static const int FLOOR2;

   // public FloorButton object accessible to 
   // any client code with access to a Floor
   FloorButton floorButton;   

private:
   const int floorNumber;  // the floor's number
   Elevator &elevatorRef;  // reference to elevator
   Person *occupantPtr;    // pointer to person on floor
   Light light;            // light object

}; // end class Floor

#endif // FLOOR_H

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
