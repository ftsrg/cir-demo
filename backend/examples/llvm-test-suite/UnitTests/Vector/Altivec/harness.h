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

/* Common code for most VMX test cases.  To use, include this file,
   then write a routine named test() that performs a series of calls
   to check().  */

#include <stdlib.h>
#include <stdio.h>
#include <altivec.h>

static int failed;
static void test (void);

static void
check (int result, const char *name)
{
  if (!result)
    {
      failed++;
      printf ("fail %s\n", name);
    }
}

int
main (void)
{
  test ();
  if (failed)
    abort ();

  return 0;
}
