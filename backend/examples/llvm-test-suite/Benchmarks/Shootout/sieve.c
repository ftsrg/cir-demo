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

/* -*- mode: c -*-
 * $Id$
 * http://www.bagley.org/~doug/shootout/
 */

#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 17000
#else
#define LENGTH 170000
#endif
    int NUM = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    static char flags[8192 + 1];
    long i, k;
    int count = 0;

    while (NUM--) {
	count = 0; 
	for (i=2; i <= 8192; i++) {
	    flags[i] = 1;
	}
	for (i=2; i <= 8192; i++) {
	    if (flags[i]) {
                /* remove all multiples of prime: i */
		for (k=i+i; k <= 8192; k+=i) {
		    flags[k] = 0;
		}
		count++;
	    }
	}
    }
    printf("Count: %d\n", count);
    return(0);
}

