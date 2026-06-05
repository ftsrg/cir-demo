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
#define LENGTH 30
#else
#define LENGTH 46
#endif
    int n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    int a, b, c, d, e, f, x=0;
	
    for (a=0; a<n; a++)
	for (b=0; b<n; b++)
	    for (c=0; c<n; c++)
		for (d=0; d<n; d++)
		    for (e=0; e<n; e++)
			for (f=0; f<n; f++)
			    x++;

    printf("%d\n", x);
    return(0);
}


