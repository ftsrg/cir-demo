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

#define STUFF "hello\n"

int
main(int argc, char *argv[]) {
    int n = ((argc == 2) ? atoi(argv[1]) : 10000000);
    int i, buflen = 32;
    char *strbuf = calloc(sizeof(char), buflen);
    char *strend = strbuf;
    int stufflen = strlen(STUFF);

    if (!strbuf) { perror("calloc strbuf"); exit(1); }
    for (i=0; i<n; i++) {
	if (((strbuf+buflen)-strend) < (stufflen+1)) {
	    buflen = 2*buflen;
	    strbuf = realloc(strbuf, buflen);
	    if (!strbuf) { perror("realloc strbuf"); exit(1); }
	    strend = strbuf + strlen(strbuf);
	}
	/* much faster to strcat to strend than to strbuf */
	strcat(strend, STUFF);
	strend += stufflen;
    }
    printf("%d\n", (int)strlen(strbuf));
    free(strbuf);

    return(0);
}
