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

// string::find
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str ("Ttwo need hneed.");
  string str2 ("need");
  size_t found;

  // different member versions of find in the same order as above:
  found=str.find(str2);
  assert(int(found)==5);
  if (found!=string::npos)
    cout << "first 'needle' found at: " << int(found) << endl;

  found=str.find("needles are small",found+1,4);
  assert(int(found)==11);
  if (found!=string::npos)
    cout << "second 'needle' found at: " << int(found) << endl;

  return 0;
}
