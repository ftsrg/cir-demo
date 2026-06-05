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
#include <string.h>
#include "simple_hash.h"

int main(int argc, char *argv[]) {
#ifdef SMALL_PROBLEM_SIZE
#define LENGTH 350000
#else
#define LENGTH 3500000
#endif
    int i, c=0, n = ((argc == 2) ? atoi(argv[1]) : LENGTH);
    char buf[32];
	
    struct ht_ht *ht = ht_create(n);
    
    for (i=1; i<=n; i++) {
	sprintf(buf, "%x", i);
	(ht_find_new(ht, buf))->val = i;
    }

    for (i=n; i>0; i--) {
	sprintf(buf, "%d", i);
	if (ht_find(ht, buf)) c++;
    }

    ht_destroy(ht);

    printf("%d\n", c);
    return(0);
}
