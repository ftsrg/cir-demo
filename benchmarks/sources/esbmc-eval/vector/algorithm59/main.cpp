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

// min example
#include <iostream>
#include <cassert>
using namespace std;


const int min(const int left, const int right) {
	if (left < right)
		return left;
	else
		return right;
}

const int min(const double left, const double right) {
	if (left < right)
		return left;
	else
		return right;
}

const char min(const char left, const char right) {
	if (left < right)
		return left;
	else
		return right;
}

template<class T>
const T& min(const T& left, const T& right) {
	if (left < right)
		return left;
	else
		return right;
}

int main () {
  cout << "min(1,2)==" << min(1,2) << endl;
  assert(min(1,2) == 1);
  cout << "min(2,1)==" << min(2,1) << endl;
  cout << "min('a','z')==" << min('a','z') << endl;
  cout << "min(3.14,2.72)==" << min(3.14,2.72) << endl;
  return 0;
}
