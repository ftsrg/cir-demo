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

/* Test for alignment handling when a variable is accessed by nested
   function.  */
/* Origin: Joey Ye <joey.ye@intel.com> */

/* Force bigger stack alignment for PowerPC EABI targets.  */
/* { dg-options "-mno-eabi" { target powerpc-*-eabi* } } */

#include <stddef.h>

typedef int aligned __attribute__((aligned));
extern void abort (void);

void
check (int *i)
{
  *i = 20;
  if ((((ptrdiff_t) i) & (__alignof__(aligned) - 1)) != 0)
    abort ();
}

void
foo (void)
{
  aligned jj;
  void bar ()
    {
      jj = -20;
    }
  jj = 0;
  bar ();
  if (jj != -20)
    abort ();
  check (&jj);
  if (jj != 20)
    abort ();
}

int
main()
{
  foo ();
  return 0;
}
