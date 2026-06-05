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

#include <stdio.h>
#include <iostream>
#include <ext/hash_map>
#include <cstring>

using namespace std;
using namespace __gnu_cxx;

struct eqstr {
    bool operator()(const char* s1, const char* s2) const {
	return strcmp(s1, s2) == 0;
    }
};

int
main(int argc, char *argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 50000
#else
#define LENGTH 500000
#endif
    int n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    char buf[16];
    typedef __gnu_cxx::hash_map<const char*, int, __gnu_cxx::hash<const char*>, eqstr> HM;
    HM X;

    for (int i=1; i<=n; i++) {
	sprintf(buf, "%x", i);
	X[strdup(buf)] = i;
    }

    int c = 0;
    for (int i=n; i>0; i--) {
	sprintf(buf, "%d", i);
	if (X[strdup(buf)]) c++;
    }

    cout << c << endl;
}
