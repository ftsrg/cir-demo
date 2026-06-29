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

/* Undefined behavior from a call to va_arg with a type other than
   that of the argument passed (in particular, with a type such as
   "float" that can never be the type of an argument passed through
   "...") does not appear until after the va_list expression is
   evaluated.  PR 38483.  */
/* Origin: Joseph Myers <joseph@codesourcery.com> */

#include <stdarg.h>

extern void exit (int);
extern void abort (void);

va_list ap;
float f;

va_list *
foo (void)
{
  exit (0);
  return &ap;
}

void
bar (int i, ...)
{
  va_start (ap, i);
  f = va_arg (*foo (), float);
  va_end (ap);
}

int
main (void)
{
  bar (1, 0);
  abort ();
}
