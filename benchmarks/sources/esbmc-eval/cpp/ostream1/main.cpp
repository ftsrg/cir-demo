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
#include <cstring>
#include <cstdio> // For sprintf

using namespace std;

int main()
{
  // Character data type
  char val = 65;
  cout << "Character value: " << val << endl;

  // Character array (C-string)
  char cstr[25] = {'S', 'T', 'R', 'I', 'N', 'G'};
  cout << "C-string: " << cstr << endl;

  // Integer data type
  int i = 10;
  cout << "Integer value: " << i << endl;

  // Floating-point data type
  float f = 3.14f;
  cout << "Floating-point value: " << f << endl;

  // Double data type
  double d = 2.71828;
  cout << "Double value: " << d << endl;

  // Boolean data type
  bool b = true;
  cout << "Boolean value: " << (b ? "true" : "false") << endl;

  // String manipulation
  char buffer[100];
  sprintf(buffer, "Integer value: %d", i);
  cout << "String from sprintf: " << buffer << endl;

  return 0;
}
