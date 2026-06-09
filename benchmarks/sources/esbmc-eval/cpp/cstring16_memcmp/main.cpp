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

/* memcmp example */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cstring>

int main ()
{
  char str1[256];
  char str2[256];
  int n;
  cout << "Enter a sentence: " << endl;
	cin >> str1; 
  cout << "Enter another sentence: " << endl;
	cin >> str2;
  n=memcmp ( str1, str2, 256 );
  if (n>0){
		cout << "'" << str1 << "' is greater than '" << str2 << "'." << endl;
	}else{
		if(n<0){
			cout << "'" << str1 <<"' is less than '" << str2 << "'." << endl;
		}else{
			cout << "'" << str1 <<"' is the same as '" << str2  << "'." << endl;
		}
	}
  return 0;
}
