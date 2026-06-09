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

// map::count
#include <iostream>
#include <map>
#include <cassert>
using namespace std;

int main ()
{
  map<char,int> mymap;
  char c;

  mymap ['a']=101;
  mymap ['c']=202;
  mymap ['f']=303;
  char chararray1[3] = {'a', 'c', 'f'};
  char chararray2[4] = {'b', 'd', 'e', 'g'};
/*  for (c='a'; c<'h'; c++)
  {
    cout << c;
    if (mymap.count(c)>0)
      cout << " is an element of mymap.\n" << mymap.count(c) << endl;
    else 
      cout << " is not an element of mymap.\n" << mymap.count(c) << endl;
      
  }*/
  int i;
  for (i = 0 ; i < 3 ; i++)
  	assert(!(mymap.count(chararray1[i]) > 0));
  
  for (i = 0 ; i < 4 ; i++)
  	assert(mymap.count(chararray2[i]) != 0);

  return 0;
}
