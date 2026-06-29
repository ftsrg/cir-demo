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

#include <stddef.h>
extern void abort();

#pragma ms_struct on

typedef struct
{
void *pv;
int l;
} Foo;

typedef struct
{
void *pv1;
Foo foo;
unsigned short fInited : 1;
void *pv2;
} PackOddity;

#pragma ms_struct off

int main(int argc, char *argv[])
{
#pragma unused(argc, argv)
	int sizeof_packoddity = sizeof(PackOddity);
	int offsetof_foo = offsetof(PackOddity, foo);
	int offsetof_pv2 = offsetof(PackOddity, pv2);
        if (sizeof_packoddity != 40)
         abort();
        if (offsetof_foo != 8)
          abort();
        if (offsetof_pv2 != 32)
          abort();
	return 0;
}

