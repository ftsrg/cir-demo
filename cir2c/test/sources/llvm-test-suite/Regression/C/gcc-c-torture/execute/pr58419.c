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

__attribute__((__noinline__))
void
dummy ()
{
  asm volatile("");
}

int a, g, i, k, *p;
signed char b;
char e;
short c, h;
static short *d = &c;

char
foo (int p1, int p2)
{
  return p1 - p2;
}

int
bar ()
{
  short *q = &c;
  *q = 1;
  *p = 0;
  return 0;
}

int
main ()
{
  for (b = -22; b >= -29; b--)
    {
      short *l = &h;
      char *m = &e;
      *l = a;
      g = foo (*m = k && *d, 1 > i) || bar ();
    }
  dummy();
  return 0;
}
