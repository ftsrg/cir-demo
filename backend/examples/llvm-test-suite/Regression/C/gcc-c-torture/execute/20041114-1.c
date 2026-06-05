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

/* Verify that

   var <= 0 || ((long unsigned) (unsigned) (var - 1) < MAX_UNSIGNED_INT)

   gets folded to 1.  */

#include <limits.h>

void abort (void);
void link_failure (void);

volatile int v;

void
foo (int var)
{
  if (!(var <= 0
        || ((long unsigned) (unsigned) (var - 1) < UINT_MAX)))
    link_failure ();
}

int
main (int argc, char **argv)
{
  foo (v);
  return 0;
}

#ifndef __OPTIMIZE__
void
link_failure (void)
{
  abort ();
}
#endif
