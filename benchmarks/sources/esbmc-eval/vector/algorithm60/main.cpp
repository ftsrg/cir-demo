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

// max example
#include <iostream>
#include <cassert>
using namespace std;

template<class T>
const T& max(const T& left, const T& right) {
	if (left > right)
		return left;
	else
		return right;
}

const double max(const double left, const double right) {
	if (left > right)
		return left;
	else
		return right;
}

const int max(const int left, const int right) {
	if (left > right)
		return left;
	else
		return right;
}

const char max(const char left, const char right) {
	if (left > right)
		return left;
	else
		return right;
}

int main () {
  cout << "max(1,2)==" << max(1,2) << endl;
  assert(max(1,2) == 2);
  cout << "max(2,1)==" << max(2,1) << endl;
  cout << "max('a','z')==" << max('a','z') << endl;
  cout << "max(3.14,2.73)==" << max(3.14,2.73) << endl;
  return 0;
}
