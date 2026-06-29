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

#include <stdarg.h>

#define VALUE 0x123456789abcdefLL
#define AFTER 0x55

void
test (int n, ...)
{
  va_list ap;
  int i;

  va_start (ap, n);
  for (i = 2; i <= n; i++)
    {
      if (va_arg (ap, int) != i)
	abort ();
    }

  if (va_arg (ap, long long) != VALUE)
    abort ();

  if (va_arg (ap, int) != AFTER)
    abort ();

  va_end (ap);
}

int
main ()
{
  test (1, VALUE, AFTER);
  test (2, 2, VALUE, AFTER);
  test (3, 2, 3, VALUE, AFTER);
  test (4, 2, 3, 4, VALUE, AFTER);
  test (5, 2, 3, 4, 5, VALUE, AFTER);
  test (6, 2, 3, 4, 5, 6, VALUE, AFTER);
  test (7, 2, 3, 4, 5, 6, 7, VALUE, AFTER);
  test (8, 2, 3, 4, 5, 6, 7, 8, VALUE, AFTER);
  exit (0);
}
