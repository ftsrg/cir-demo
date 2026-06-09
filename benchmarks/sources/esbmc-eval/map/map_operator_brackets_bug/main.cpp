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

// accessing mapped values
#include <iostream>
#include <map>
#include <string>
#include <cassert>
using namespace std;

int main ()
{
  map<char,string> mymap;

  mymap['a']="an element";
  mymap['b']="another element";
  mymap['c']=mymap['b'];

  cout << "mymap['a'] is " << mymap['a'] << endl;
  cout << "mymap['b'] is " << mymap['b'] << endl;
  cout << "mymap['c'] is " << mymap['c'] << endl;
  cout << "mymap['d'] is " << mymap['d'] << endl;
  
  assert(mymap['a']=="an element");
  assert(mymap['b']=="another element");
  assert(mymap['c']!=mymap['b']);
  assert(mymap['d']!=string());

  cout << "mymap now contains " << (int) mymap.size() << " elements." << endl;

  return 0;
}
