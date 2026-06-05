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

struct tiny
{
  short c;
};

f (int n, ...)
{
  struct tiny x;
  int i;

  va_list ap;
  va_start (ap,n);
  for (i = 0; i < n; i++)
    {
      x = va_arg (ap,struct tiny);
      if (x.c != i + 10)
	abort();
    }
  {
    long x = va_arg (ap, long);
    if (x != 123)
      abort();
  }
  va_end (ap);
}

main ()
{
  struct tiny x[3];
  x[0].c = 10;
  x[1].c = 11;
  x[2].c = 12;
  f (3, x[0], x[1], x[2], (long) 123);
  exit(0);
}
