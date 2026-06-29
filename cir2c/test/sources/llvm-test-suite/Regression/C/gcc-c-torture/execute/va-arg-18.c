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

typedef double L;
void f (L p0, L p1, L p2, L p3, L p4, L p5, L p6, L p7, L p8, ...)
{
  va_list select;

  va_start (select, p8);

  if (va_arg (select, int) != 10)
    abort ();
  if (va_arg (select, int) != 11)
    abort ();
  if (va_arg (select, int) != 12)
    abort ();

  va_end (select);
}

int main ()
{
  f (1., 2., 3., 4., 5., 6., 7., 8., 9., 10, 11, 12);
  exit (0);
}
