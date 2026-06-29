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

/* PR c/6677 */
/* Verify that GCC doesn't perform illegal simplifications
   when folding constants.  */

#include <limits.h>

extern void abort (void);
extern void exit (int);

int main (void)
{
  int i;
  signed char j;
  unsigned char k;

  i = SCHAR_MAX;

  j = ((signed char) (i << 1)) / 2;

  if (j != -1)
    abort();

  j = ((signed char) (i * 2)) / 2;

  if (j != -1)
    abort();

  i = UCHAR_MAX;

  k = ((unsigned char) (i << 1)) / 2;

  if (k != UCHAR_MAX/2)
    abort();

  k = ((unsigned char) (i * 2)) / 2;

  if (k != UCHAR_MAX/2)
    abort();

  exit(0);
}
