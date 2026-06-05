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
// with help from PeterB

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 1000000
#else
#define LENGTH 5000000
#endif
    int i, n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    string str;
    size_t capacity = 31;
    str.reserve(capacity); // as per C-string
    size_t newLength = 6;
    for (i = 0; i < n; i++)
    {
	if(newLength > capacity)
	{
	    capacity *= 2;
	    str.reserve(capacity);
	}
	str += "hello\n";
	newLength += 6;
    }
    cout << str.length() << endl;
    return 0;
}
