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

/* On the i960 any arg bigger than 16 bytes causes all subsequent args
   to be passed on the stack.  We test this.  */

#include <stdarg.h>

typedef struct {
  char a[32];
} big;

void
f (big x, char *s, ...)
{
  va_list ap;

  if (x.a[0] != 'a' || x.a[1] != 'b' || x.a[2] != 'c')
    abort ();
  va_start (ap, s);
  if (va_arg (ap, int) != 42)
    abort ();
  if (va_arg (ap, int) != 'x')
    abort ();
  if (va_arg (ap, int) != 0)
    abort ();
  va_end (ap);
}

main ()
{
  static big x = { "abc" };

  f (x, "", 42, 'x', 0);
  exit (0);
}
