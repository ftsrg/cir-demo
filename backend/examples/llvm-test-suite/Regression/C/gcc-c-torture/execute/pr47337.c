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

/* PR rtl-optimization/47337 */

static unsigned int a[256], b = 0;
static char c = 0;
static int d = 0, *f = &d;
static long long e = 0;

static short
foo (long long x, long long y)
{
  return x / y;
}

static char
bar (char x, char y)
{
  return x - y;
}

static int
baz (int x, int y)
{
  *f = (y != (short) (y * 3));
  for (c = 0; c < 2; c++)
    {
    lab:
      if (d)
	{
	  if (e)
	    e = 1;
	  else
	    return x;
	}
      else
	{
	  d = 1;
	  goto lab;
	}
      f = &d;
    }
  return x;
}

static void
fnx (unsigned long long x, int y)
{
  if (!y)
    {
      b = a[b & 1];
      b = a[b & 1];
      b = a[(b ^ (x & 1)) & 1];
      b = a[(b ^ (x & 1)) & 1];
    }
}

char *volatile w = "2";

int
main ()
{
  int h = 0;
  unsigned int k = 0;
  int l[8];
  int i, j;

  if (__builtin_strcmp (w, "1") == 0)
    h = 1;

  for (i = 0; i < 256; i++)
    {
      for (j = 8; j > 0; j--)
	k = 1;
      a[i] = k;
    }
  for (i = 0; i < 8; i++)
    l[i] = 0;

  d = bar (c, c);
  d = baz (c, 1 | foo (l[0], 10));
  fnx (d, h);
  fnx (e, h);

  if (d != 0)
    __builtin_abort ();
  return 0;
}
