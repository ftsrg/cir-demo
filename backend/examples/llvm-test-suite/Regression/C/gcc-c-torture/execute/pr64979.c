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

/* PR target/64979 */

#include <stdarg.h>

void __attribute__((noinline, noclone))
bar (int x, va_list *ap)
{
  if (ap)
    {
      int i;
      for (i = 0; i < 10; i++)
	if (i != va_arg (*ap, int))
	  __builtin_abort ();
      if (va_arg (*ap, double) != 0.5)
	__builtin_abort ();
    }
}

void __attribute__((noinline, noclone))
foo (int x, ...)
{
  va_list ap;
  int n;

  va_start (ap, x);
  n = va_arg (ap, int);
  bar (x, (va_list *) ((n == 0) ? ((void *) 0) : &ap));
  va_end (ap);
}

int
main ()
{
  foo (100, 1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0.5);
  return 0;
}
