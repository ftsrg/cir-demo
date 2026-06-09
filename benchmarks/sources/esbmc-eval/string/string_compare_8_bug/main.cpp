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

// comparing apples with apples
//TEST FAILS
//Example from C++ reference, avaliable at http://www.cplusplus.com/reference/string/string/compare/

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str1 ("green apple");
  string str2 ("red apple");

  assert(str1.compare(str2) == 0);
  if (str1.compare(str2) != 0)
    cout << str1 << " is not " << str2 << "\n";

  assert(str1.compare(6,5,"apple") != 0);  
  if (str1.compare(6,5,"apple") == 0)
    cout << "still, " << str1 << " is an apple\n";

  assert(str2.compare(str2.size()-5,5,"apple") != 0);
  if (str2.compare(str2.size()-5,5,"apple") == 0)
    cout << "and " << str2 << " is also an apple\n";

  assert(str1.compare(6,5,str2,4,5) != 0);
  if (str1.compare(6,5,str2,4,5) == 0)
    cout << "therefore, both are apples\n";


//asserts added by Hendrio
  return 0;
}
