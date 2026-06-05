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
// with help from Tom Widmer

#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

enum {
    OUT,			/* outside a word */
    IN				/* inside a word */
};

int
main(int argc, char *argv[]) {
    char c;
    int nl, nw, nc, state;
    char buff[4096];
    cin.rdbuf()->pubsetbuf(buff, 4096); // enable buffering

    state = OUT;
    nl = nw = nc = 0;
    int intc;
    streambuf* sbuf = cin.rdbuf();
    while ((intc = sbuf->sbumpc()) != EOF) {
        c = (char)intc;
	++nc;
	if (c == '\n')
	    ++nl;
	if (c == ' ' || c == '\n' || c == '\t')
	    state = OUT;
	else if (state == OUT) {
	    state = IN;
	    ++nw;
	}
    }
    cout << nl << " " << nw << " " << nc << endl;
}
