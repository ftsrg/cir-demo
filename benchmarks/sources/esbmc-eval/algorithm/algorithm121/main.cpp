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

// lexicographical_compare example
#include <cassert>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

// a case-insensitive comparison function:
bool mycomp (char c1, char c2)
{ return tolower(c1)<tolower(c2); }

int main () {
  char first[]="Apple";         // 5 letters
  char second[]="apartment";    // 9 letters

  cout << "Using default comparison (operator<): ";
  if (lexicographical_compare(first,first+5,second,second+9))
    cout << first << " is less than " << second << endl;
  else
    if (lexicographical_compare(second,second+9,first,first+5))
      cout << first << " is greater than " << second << endl;
  else
    cout << first << " and " << second << " are equivalent\n";

  assert(lexicographical_compare(first,first+5,second,second+9,mycomp));
  cout << "Using mycomp as comparison object: ";
  if (lexicographical_compare(first,first+5,second,second+9,mycomp))
    cout << first << " is less than " << second << endl;
  else
    if (lexicographical_compare(second,second+9,first,first+5,mycomp))
      cout << first << " is greater than " << second << endl;
  else
    cout << first << " and " << second << " are equivalent\n";

  return 0;
}
