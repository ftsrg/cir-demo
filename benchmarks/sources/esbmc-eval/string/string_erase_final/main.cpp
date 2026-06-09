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

// string::erase
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str ("This is an example phrase.");
  string::iterator it;

  // erase used in the same order as described above:
  str.erase (10,8);
  assert(str == "This is an phrase.");
  cout << str << endl;        // "This is an phrase."

  it=str.begin()+9;
  str.erase (it);
  assert(str == "This is a phrase.");
  cout << str << endl;        // "This is a phrase."

  str.erase (str.begin()+5, str.end()-7);
    assert(str == "This phrase.");
  cout << str << endl;        // "This phrase."
  return 0;
}
