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

/* { dg-add-options stack_size } */

/* PR optimization/8750
   Used to fail under Cygwin with
   -O2 -fomit-frame-pointer
   Testcase by David B. Trout     */

#if defined(STACK_SIZE) && STACK_SIZE < 16000
#define ARRAY_SIZE (STACK_SIZE / 2)
#define STRLEN	   (ARRAY_SIZE - 9)
#else
#define ARRAY_SIZE 15000
#define STRLEN     13371
#endif

extern void *memset (void *, int, __SIZE_TYPE__);
extern void abort (void);

static void foo ()
{
    char a[ARRAY_SIZE];

    a[0]=0;
    memset( &a[0], 0xCD, STRLEN );
    a[STRLEN]=0;
    if (strlen(a) != STRLEN)
      abort ();
}

int main ( int argc, char* argv[] )
{
    foo();
    return 0;
}
