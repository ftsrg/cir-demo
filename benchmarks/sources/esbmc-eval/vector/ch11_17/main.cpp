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

// vector::reserve
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main ()
{
  vector<int> content;
  size_t filesize;

  ifstream file ("test.bin",ios::in|ios::ate|ios::binary);
  if (file.is_open())
  {
    filesize=file.tellg();

    content.reserve(filesize);

    file.seekg(0);
    while (!file.eof())
    {
      content.push_back( file.get() );
    }

    // print out content:
    vector<int>::iterator it;
    for (it=content.begin() ; it<content.end() ; it++)
      cout << hex << *it;
  }

  return 0;
}
