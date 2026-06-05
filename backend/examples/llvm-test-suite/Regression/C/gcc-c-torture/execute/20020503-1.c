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

/* PR 6534 */
/* GCSE unified the two i<0 tests, but if-conversion to ui=abs(i)
   insertted the code at the wrong place corrupting the i<0 test.  */

void abort (void);
static char *
inttostr (long i, char buf[128])
{
  unsigned long ui = i;
  char *p = buf + 127;
  *p = '\0';
  if (i < 0)
    ui = -ui;
  do
    *--p = '0' + ui % 10;
  while ((ui /= 10) != 0);
  if (i < 0)
    *--p = '-';
  return p;
}

int
main ()
{
  char buf[128], *p;

  p = inttostr (-1, buf);
  if (*p != '-')
    abort ();
  return 0;
}
