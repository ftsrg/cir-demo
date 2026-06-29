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

/* PR target/34281 */

#include <stdarg.h>

extern void abort (void);

void
h (int x, va_list ap)
{
  switch (x)
    {
    case 1:
      if (va_arg (ap, int) != 3 || va_arg (ap, int) != 4)
	abort ();
      return;
    case 5:
      if (va_arg (ap, int) != 9 || va_arg (ap, int) != 10)
	abort ();
      return;
    default:
      abort ();
    }
}

void
f1 (int i, long long int j, ...)
{
  va_list ap;
  va_start (ap, j);
  h (i, ap);
  if (i != 1 || j != 2)
    abort ();
  va_end (ap);
}

void
f2 (int i, int j, int k, long long int l, ...)
{
  va_list ap;
  va_start (ap, l);
  h (i, ap);
  if (i != 5 || j != 6 || k != 7 || l != 8)
    abort ();
  va_end (ap);
}

int
main ()
{
  f1 (1, 2, 3, 4);
  f2 (5, 6, 7, 8, 9, 10);
  return 0;
}
