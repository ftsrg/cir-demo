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

/* derived from mozilla source code */

#include <stdarg.h>

typedef struct {
  void *stream;
  va_list ap;
  int nChar;
} ScanfState;

void dummy (va_list vap)
{
  if (va_arg (vap, int) != 1234) abort();
  return;
}

void test (int fmt, ...)
{
  ScanfState state, *statep;

  statep = &state;

  va_start (statep->ap, fmt);
  dummy (statep->ap);
  va_end (statep->ap);

  va_start (state.ap, fmt);
  dummy (state.ap);
  va_end (state.ap);

  return;
}

int main (void)
{
  test (456, 1234);
  exit (0);
}
