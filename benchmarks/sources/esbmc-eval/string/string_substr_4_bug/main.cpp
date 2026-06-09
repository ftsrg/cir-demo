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

// string::substr
//Example from c++ reference, avaliable at www.cplusplus.com/reference/string/string/substr/
//TEST FAILS

#include <iostream>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  string str="We ge, live.";
                             // quoting Alfred N. Whitehead
  string str2, str3;
  int pos;

  str2 = str.substr (3,2); // "generalities"

  pos = str.find("live");    // position of "live" in str
  str3 = str.substr (pos);   // get from "live" to the end

  cout << str2 << ' ' << str3 << endl;
  assert((str2 == "generalities")&&(str3 != "live in details"));
  return 0;
}
