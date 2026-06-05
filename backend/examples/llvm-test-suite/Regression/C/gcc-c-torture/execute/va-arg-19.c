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

typedef int TYPE;

void vafunction (char *dummy, ...)
{
  va_list ap;

  va_start(ap, dummy);
  if (va_arg (ap, TYPE) != 1)
    abort();
  if (va_arg (ap, TYPE) != 2)
    abort();
  if (va_arg (ap, TYPE) != 3)
    abort();
  if (va_arg (ap, TYPE) != 4)
    abort();
  if (va_arg (ap, TYPE) != 5)
    abort();
  if (va_arg (ap, TYPE) != 6)
    abort();
  if (va_arg (ap, TYPE) != 7)
    abort();
  if (va_arg (ap, TYPE) != 8)
    abort();
  if (va_arg (ap, TYPE) != 9)
    abort();
  va_end(ap);
}


int main (void)
{
  vafunction( "", 1, 2, 3, 4, 5, 6, 7, 8, 9 );
  exit(0);
  return 0;
}
