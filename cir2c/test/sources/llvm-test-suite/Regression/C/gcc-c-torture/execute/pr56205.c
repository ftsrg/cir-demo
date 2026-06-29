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

/* PR tree-optimization/56205 */

#include <stdarg.h>

int a, b;
char c[128];

__attribute__((noinline, noclone)) static void
f1 (const char *fmt, ...)
{
  va_list ap;
  asm volatile ("" : : : "memory");
  if (__builtin_strcmp (fmt, "%s %d %s") != 0)
    __builtin_abort ();
  va_start (ap, fmt);
  if (__builtin_strcmp (va_arg (ap, const char *), "foo") != 0
      || va_arg (ap, int) != 1
      || __builtin_strcmp (va_arg (ap, const char *), "bar") != 0)
    __builtin_abort ();
  va_end (ap);
}

__attribute__((noinline, noclone)) static void
f2 (const char *fmt, va_list ap)
{
  asm volatile ("" : : : "memory");
  if (__builtin_strcmp (fmt, "baz") != 0
      || __builtin_strcmp (va_arg (ap, const char *), "foo") != 0
      || va_arg (ap, double) != 12.0
      || va_arg (ap, int) != 26)
    __builtin_abort ();
}

static void
f3 (int x, char const *y, va_list z)
{
  f1 ("%s %d %s", x ? "" : "foo", ++a, (y && *y) ? "bar" : "");
  if (y && *y)
    f2 (y, z);
}

__attribute__((noinline, noclone)) void
f4 (int x, char const *y, ...)
{
  va_list z;
  va_start (z, y);
  if (!x && *c == '\0')
    ++b;
  f3 (x, y, z);
  va_end (z);
}

int
main ()
{
  asm volatile ("" : : : "memory");
  f4 (0, "baz", "foo", 12.0, 26);
  if (a != 1 || b != 1)
    __builtin_abort ();
  return 0;
}
