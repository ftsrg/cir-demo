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

#include        <stdio.h>
#include        <stdlib.h>
extern void abort();

typedef struct foo
{
        int     uaattrid;
        char    *name;
} FOO;

FOO     Upgrade_items[] =
{
        {1, "1"},
        {2, "2"},
        {0, NULL}
};

int     *Upgd_minor_ID =
        (int *) &((Upgrade_items + 1)->uaattrid);

int     *Upgd_minor_ID1 =
        (int *) &((Upgrade_items)->uaattrid);

int
main(int argc, char **argv)
{
	if (*Upgd_minor_ID != 2)
	  abort();

	if (*Upgd_minor_ID1 != 1)
	  abort();
	return 0;
}
