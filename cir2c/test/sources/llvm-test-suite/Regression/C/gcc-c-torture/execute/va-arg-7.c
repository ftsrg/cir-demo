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

inline void
debug(int i1, int i2, int i3, int i4, int i5, int i6, int i7,
      double f1, double f2, double f3, double f4, double f5,
      double f6, double f7, double f8, double f9, ...)
{
  va_list ap;

  va_start (ap, f9);

  if (va_arg (ap,int) != 8)
    abort ();
  if (va_arg (ap,int) != 9)
    abort ();
  if (va_arg (ap,int) != 10)
    abort ();

  va_end (ap);
}

int
main(void)
{
  debug (1, 2, 3, 4, 5, 6, 7,
	 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0,
	 8, 9, 10);
  exit (0);
}
