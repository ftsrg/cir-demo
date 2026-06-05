/*
 * Copyright 2026 LLVM Project
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

// -*- mode: c++ -*-
// $Id$
// http://www.bagley.org/~doug/shootout/

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 150000
#else
#define LENGTH 1500000
#endif
    int i, k, n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    typedef vector<int> ARY;
    ARY x(n);
    ARY y(n);

    for (i=0; i<n; i++) {
	x[i] = i + 1;
    }
    for (k=0; k<1000; k++) {
	for (int i = n - 1; i >= 0; --i) {
	    y[i] += x[i];
	}
    }

    cout << y[0] << " " << y.back() << endl;
}
