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

// inserting into a vector
//#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int main ()
{
  vector<int> myvector;
  vector<int>::iterator it;

  myvector.push_back(300);
  myvector.push_back(300);
  myvector.push_back(200);
  myvector.push_back(100);
  myvector.push_back(100);


  it = myvector.begin();

  vector<int> anothervector;
  anothervector.push_back(1);
  anothervector.push_back(2);
  myvector.insert (it+2,anothervector.begin(),anothervector.end());
  assert(myvector[3]!=2);

  int myarray [] = { 501,502,503 };
  myvector.insert (myvector.begin(), myarray, myarray+3);
  assert(myvector[2] != 503); 
//  cout << "myvector contains:";
  for (it=myvector.begin(); it<myvector.end(); it++);
//    cout << " " << *it;
//  cout << endl;

  return 0;
}
