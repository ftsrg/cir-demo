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

// fstream::is_open
#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main () {

  fstream filestr;
  filestr.open ("test");
  assert(filestr.is_open());
  if (filestr.is_open())
  {
    filestr << "File successfully open";
    filestr.close();
    assert(!(filestr.is_open()));
  }
  else
  {
    cout << "Error opening file";
  }
  return 0;
}
