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

va_list global;

void vat(va_list param, ...)
{
  va_list local;

  va_start (local, param);
  va_copy (global, local);
  va_copy (param, local);
  if (va_arg (local, int) != 1)
    abort();
  va_end (local);
  if (va_arg (global, int) != 1)
    abort();
  va_end (global);
  if (va_arg (param, int) != 1)
    abort();
  va_end (param);

  va_start (param, param);
  va_start (global, param);
  va_copy (local, param);
  if (va_arg (local, int) != 1)
    abort();
  va_end (local);
  va_copy (local, global);
  if (va_arg (local, int) != 1)
    abort();
  va_end (local);
  if (va_arg (global, int) != 1)
    abort();
  va_end (global);
  if (va_arg (param, int) != 1)
    abort();
  va_end (param);
}

int main(void)
{
  va_list t;
  vat (t, 1);
  exit (0);
}
