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
// with help from Allan Stokes

#include <iostream>
#include <deque>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    typedef deque<string> LINES;
    LINES l;
    char line[256];
    char buff[4096];
    cin.rdbuf()->pubsetbuf(buff, 4096); // enable buffering
    cout.rdbuf()->pubsetbuf(buff, 4096); // enable buffering

    while (cin.getline(line, 256)) {
        l.push_front(line);
    }
    copy (l.begin(), l.end(), ostream_iterator<string>(cout,"\n"));
}
