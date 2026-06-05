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

f (int n, ...)
{
  va_list args;

  va_start (args, n);

  if (va_arg (args, int) != 10)
    abort ();
  if (va_arg (args, long long) != 10000000000LL)
    abort ();
  if (va_arg (args, int) != 11)
    abort ();
  if (va_arg (args, long double) != 3.14L)
    abort ();
  if (va_arg (args, int) != 12)
    abort ();
  if (va_arg (args, int) != 13)
    abort ();
  if (va_arg (args, long long) != 20000000000LL)
    abort ();
  if (va_arg (args, int) != 14)
    abort ();
  if (va_arg (args, double) != 2.72)
    abort ();

  va_end(args);
}

main ()
{
  f (4, 10, 10000000000LL, 11, 3.14L, 12, 13, 20000000000LL, 14, 2.72);
  exit (0);
}
