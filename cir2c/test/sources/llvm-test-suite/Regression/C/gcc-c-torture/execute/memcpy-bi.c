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

/* Test builtin-memcpy (which may emit different code for different N).  */
#include <string.h>

#define TESTSIZE 80

char src[TESTSIZE] __attribute__ ((aligned));
char dst[TESTSIZE] __attribute__ ((aligned));

void
check (char *test, char *match, int n)
{
  if (memcmp (test, match, n))
    abort ();
}

#define TN(n) \
{ memset (dst, 0, n); memcpy (dst, src, n); check (dst, src, n); }
#define T(n) \
TN (n) \
TN ((n) + 1) \
TN ((n) + 2) \
TN ((n) + 3)

main ()
{
  int i,j;

  for (i = 0; i < sizeof (src); ++i)
      src[i] = 'a' + i % 26;

  T (0);
  T (4);
  T (8);
  T (12);
  T (16);
  T (20);
  T (24);
  T (28);
  T (32);
  T (36);
  T (40);
  T (44);
  T (48);
  T (52);
  T (56);
  T (60);
  T (64);
  T (68);
  T (72);
  T (76);

  return 0;
}
