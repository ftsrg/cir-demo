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

// map::find
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it;

  mymap['a']=50;
  mymap['b']=100;
  mymap['c']=150;
  mymap['d']=200;

  assert(mymap.find('a')->first == 'a');
  assert(mymap.find('a')->second == 50);
  
  assert(mymap.find('b')->first == 'b');
  assert(mymap.find('b')->second == 100);

  assert(mymap.find('c')->first != 'c');
  assert(mymap.find('c')->second == 150);
  
  assert(mymap.find('d')->first == 'd');
  assert(mymap.find('d')->second != 200);

  it=mymap.find('b');
  mymap.erase (it);
  mymap.erase (mymap.find('d'));

  // print content:
  cout << "elements in mymap:" << endl;
  cout << "a => " << mymap.find('a')->second << endl;
  cout << "c => " << mymap.find('c')->second << endl;

  return 0;
}
