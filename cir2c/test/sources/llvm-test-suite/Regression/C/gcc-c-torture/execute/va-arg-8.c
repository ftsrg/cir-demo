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

/* Origin: Franz Sirl <Franz.Sirl-kernel@lauterbach.com> */
/* { dg-options "-fgnu89-inline" } */

extern void abort (void);
extern void exit (int);

#include <stdarg.h>
#include <limits.h>

#if __LONG_LONG_MAX__ == 9223372036854775807LL

typedef long long int INT64;

inline void
debug(int i1, int i2, int i3, int i4, int i5,
      int i6, int i7, int i8, int i9, ...)
{
  va_list ap;

  va_start (ap, i9);

  if (va_arg (ap,int) != 10)
    abort ();
  if (va_arg (ap,INT64) != 0x123400005678LL)
    abort ();

  va_end (ap);
}

int
main(void)
{
  debug(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0x123400005678LL);
  exit(0);
}

#else

int
main(void)
{
  exit(0);
}

#endif /* long long 64 bits */
