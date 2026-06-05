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

struct s { int x, y; };

f (int attr, ...)
{
  struct s va_values;
  va_list va;
  int i;

  va_start (va, attr);

  if (attr != 2)
    abort ();

  va_values = va_arg (va, struct s);
  if (va_values.x != 0xaaaa || va_values.y != 0x5555)
    abort ();

  attr = va_arg (va, int);
  if (attr != 3)
    abort ();

  va_values = va_arg (va, struct s);
  if (va_values.x != 0xffff || va_values.y != 0x1111)
    abort ();

  va_end (va);
}

main ()
{
  struct s a, b;

  a.x = 0xaaaa;
  a.y = 0x5555;
  b.x = 0xffff;
  b.y = 0x1111;

  f (2, a, 3, b);
  exit (0);
}
