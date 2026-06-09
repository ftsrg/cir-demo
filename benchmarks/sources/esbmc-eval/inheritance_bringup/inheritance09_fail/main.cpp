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

#include <cassert>

class Base1 {
public:
   Base1( int parameterValue )
   {
      value = parameterValue;
   }

   int getData() const
   {
      return value;
   }

protected:
   int value;
};

class Base2
{
public:
   Base2( char characterData )
   {
      letter = characterData;
   }

   char getData() const
   {
      return letter;
   }
protected:
   char letter;
};

class Derived : public Base1, public Base2
{
public:
   Derived( int integer, char character, double double1 )
      : Base1( integer ), Base2( character ), real( double1 ) { }

   double getReal() const {
      return real;
   }

private:
   double real;
};


int main()
{
   Base1 base1( 10 ), *base1Ptr = 0;
   Base2 base2( 'Z' ), *base2Ptr = 0;
   Derived derived( 7, 'A', 3.5 );

   assert(base1.getData() == 10);
   assert(base2.getData() == 'Z');

   assert(derived.Base1::getData() == 7);
   assert(derived.Base2::getData() == 'A');
   assert(derived.getReal() == 3.5);

   base1Ptr = &derived;
   assert(base1Ptr->getData() == 7);

   base2Ptr = &derived;
   assert(base2Ptr->getData() == 'B'); // FAIL, should be 'A'
   return 0;
}
