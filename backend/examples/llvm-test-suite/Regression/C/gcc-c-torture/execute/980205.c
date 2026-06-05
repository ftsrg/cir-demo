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

void fdouble (double one, ...)
{
  double value;
  va_list ap;

  va_start (ap, one);
  value = va_arg (ap, double);
  va_end (ap);

  if (one != 1.0 || value != 2.0)
    abort ();
}

int main ()
{
  fdouble (1.0, 2.0);
  exit (0);
}
