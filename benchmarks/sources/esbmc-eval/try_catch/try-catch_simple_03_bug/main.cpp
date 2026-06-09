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

#include <iostream>
#include <cassert>
using std::cout;
using std::cin;
using std::endl;
#include <exception>
using std::exception;


class DivideByZeroException : public exception {
public:
  DivideByZeroException() :
    message("attempted to divide by zero"){/*assert(0);*/}

  const char *whato() const {return message;}

private:
  const char *message;
};

double quotient( int numerator, int denominator )
{
  if ( denominator == 0 )
    throw DivideByZeroException();

  return static_cast< double >( numerator );
}

int main()
{
  int number1;
  int number2;
  int result;

  cout << "Enter two integers (end-of-file to end): ";

  while ( cin >> number1 >> number2 ) {
    try {
      result = number1;
      result = quotient( number1, number2 );
      cout << "The quotient is: " << result << endl;
    }
    catch ( DivideByZeroException &divideByZeroException ) {
      cout << "Exception occurred: " <<
          divideByZeroException.whato() << endl;
      assert(0);
    }
    cout << "\nEnter two integers (end-of-file to end): ";
  }

  cout << endl;
  return 0;
}
