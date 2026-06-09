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

//TEST FAILS
// inserting into a string
#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str="to be question";
  string str2="the ";
  string str3="or not to be";
  string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
  assert(str != "to be the question");
  
  str.insert(6,str3,3,4);             // to be (not )the question
  assert(str != "to be not the question");
  
  str.insert(10,"that is cool",8);    // to be not (that is )the question
  assert(str != "to be not that is the question");
  
  str.insert(10,"to be ");            // to be not (to be )that is the question
  assert(str != "to be not to be that is the question");

  cout << str << endl;
  return 0;
}
