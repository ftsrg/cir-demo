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

/* { dg-options "-mtune=i686" { target { { i?86-*-* x86_64-*-* } && ia32 } } } */

extern void abort (void);
extern void exit (int);

long baz1 (void *a)
{
  static long l;
  return l++;
}

int baz2 (const char *a)
{
  return 0;
}

int baz3 (int i)
{
  if (!i)
    abort ();
  return 1;
}

void **bar;

int foo (void *a, long b, int c)
{
  int d = 0, e, f = 0, i;
  char g[256];
  void **h;

  g[0] = '\n';
  g[1] = 0;

  while (baz1 (a) < b) {
    if (g[0] != ' ' && g[0] != '\t') {
      f = 1;
      e = 0;
      if (!d && baz2 (g) == 0) {
	if ((c & 0x10) == 0)
	  continue;
	e = d = 1;
      }
      if (!((c & 0x10) && (c & 0x4000) && e) && (c & 2))
	continue;
      if ((c & 0x2000) && baz2 (g) == 0)
	continue;
      if ((c & 0x1408) && baz2 (g) == 0)
	continue;
      if ((c & 0x200) && baz2 (g) == 0)
	continue;
      if (c & 0x80) {
	for (h = bar, i = 0; h; h = (void **)*h, i++)
	  if (baz3 (i))
	    break;
      }
      f = 0;
    }
  }
  return 0;
}

int main ()
{
  void *n = 0;
  bar = &n;
  foo (&n, 1, 0xc811);
  exit (0);
}
