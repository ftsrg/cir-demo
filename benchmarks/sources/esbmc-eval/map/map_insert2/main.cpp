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

// map::insert
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  map<char,int>::iterator it;
  char chararray[4] = {'a', 'b', 'c', 'z'};
  int intarray[4] = {100, 300, 400, 200};

  mymap['a'] = 100;
  mymap['z'] = 200;

  // second insert function version (with hint position):
  it=mymap.begin();
  mymap.insert (it, pair<char,int>('b',300));  // max efficiency inserting
  mymap.insert (it, pair<char,int>('c',400));  // no max efficiency inserting
  int i = 0;
 cout << "mymap contains:\n";
  for ( it=mymap.begin() ; it != mymap.end(); it++)
  {
    cout << (*it).first << " => " << (*it).second << endl;
    assert( (*it).first == chararray[i]);
    assert( (*it).second == intarray[i]);
    i++;
      }
    


  return 0;
}
