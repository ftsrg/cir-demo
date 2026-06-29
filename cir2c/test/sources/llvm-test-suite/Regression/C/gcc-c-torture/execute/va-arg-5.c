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

va_double (int n, ...)
{
  va_list args;

  va_start (args, n);

  if (va_arg (args, double) != 3.141592)
    abort ();
  if (va_arg (args, double) != 2.71827)
    abort ();
  if (va_arg (args, double) != 2.2360679)
    abort ();
  if (va_arg (args, double) != 2.1474836)
    abort ();

  va_end (args);
}

va_long_double (int n, ...)
{
  va_list args;

  va_start (args, n);

  if (va_arg (args, long double) != 3.141592L)
    abort ();
  if (va_arg (args, long double) != 2.71827L)
    abort ();
  if (va_arg (args, long double) != 2.2360679L)
    abort ();
  if (va_arg (args, long double) != 2.1474836L)
    abort ();

  va_end (args);
}

main ()
{
  va_double (4, 3.141592, 2.71827, 2.2360679, 2.1474836);
  va_long_double (4, 3.141592L, 2.71827L, 2.2360679L, 2.1474836L);
  exit (0);
}
