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

/* PR middle-end/80421 */

__attribute__ ((noinline, noclone)) void
baz (const char *t, ...)
{
  asm volatile (""::"r" (t):"memory");
  if (*t == 'T')
    __builtin_abort ();
}

unsigned int
foo (char x)
{
  baz ("x %c\n", x);
  switch (x)
    {
    default:
      baz ("case default\n");
      if (x == 'D' || x == 'I')
	baz ("This should never be reached.\n");
      return 0;
    case 'D':
      baz ("case 'D'\n");
      return 0;
    case 'I':
      baz ("case 'I'\n");
      return 0;
    }
}

void
bar (void)
{
  int a = 2;
  int b = 5;
  char c[] = {
    2, 4, 1, 2, 5, 5, 2, 4, 4, 0, 0, 0, 0, 0, 0, 3, 4, 4, 2, 4,
    1, 2, 5, 5, 2, 4, 1, 0, 0, 0, 2, 4, 4, 3, 4, 3, 3, 5, 1, 3,
    5, 5, 2, 4, 4, 2, 4, 1, 3, 5, 3, 3, 5, 1, 3, 5, 1, 2, 4, 4,
    2, 4, 2, 3, 5, 1, 3, 5, 1, 3, 5, 5, 2, 4, 1, 2, 4, 2, 3, 5,
    3, 3, 5, 1, 3, 5, 5, 2, 4, 1, 2, 4, 1, 3, 5, 3, 3, 5, 1, 3,
    5, 5, 2, 4, 4, 2, 4, 1, 3, 5, 3, 3, 5, 1, 3, 5, 1, 2, 4, 1,
    2, 4, 2, 3, 5, 1, 3, 5, 1, 3, 5, 1, 2, 4, 1, 2, 4, 1, 3, 5,
    1, 3, 5, 1, 3, 5, 1, 2, 4, 4, 2, 4, 1, 3, 5, 1, 3, 5, 1, 3,
    5, 5, 2, 4, 4, 2, 4, 2, 3, 5, 3, 3, 5, 1, 3, 5, 5, 2, 4, 4,
    2, 4, 1, 3, 5, 3, 3, 5, 1, 3, 5, 1, 2, 5, 5, 2, 4, 2, 3, 5,
    1, 3, 4, 1, 3, 5, 1, 2, 5, 5, 2, 4, 1, 2, 5, 1, 3, 5, 3, 3,
    5, 1, 2, 5, 5, 2, 4, 2, 2, 5, 1, 3, 5, 3, 3, 5, 1, 2, 5, 1,
    2, 4, 1, 2, 5, 2, 3, 5, 1, 3, 5, 1, 2, 5, 1, 2, 4, 2, 2, 5,
    1, 3, 5, 1, 3, 5, 1, 2, 5, 5, 2, 4, 2, 2, 5, 2, 3, 5, 3, 3,
    5, 1, 2, 5, 5, 2, 4, 2, 2, 5, 2, 3, 5, 3, 3, 5, 1, 2, 5, 5,
    2, 4, 2, 2, 5, 1, 3, 5, 3, 3, 5, 1, 2, 5, 5, 2, 4, 2, 2, 5,
    1, 3, 5, 3, 3, 5, 1, 2, 5, 1, 2, 4, 1, 2, 5, 2, 3, 5, 1, 3,
    5, 1, 2, 5, 5, 2, 4, 2, 2, 5, 2, 3, 5, 3, 3, 5, 1, 2, 5, 5,
    2, 4, 1, 2, 5, 1, 3, 5, 3, 3, 5, 1, 2, 5, 5, 2, 4, 2, 2, 5,
    1, 3, 5, 3, 3, 5, 1, 2, 5, 5, 2, 4, 2, 2, 5, 1, 3, 5, 3, 3,
    5, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };
  char *f = c + 390;
  int i, j, e, g, h;
  char k, l;
  i = 26;
  j = 25;
  k = l = 'M';
  h = 2;
  while (i > 0)
    {
      int x = i - a;
      x = x > 0 ? x : 0;
      x = j - x;
      g = x * 3 + h;
      switch (f[g])
	{
	case 1:
	  --i;
	  --j;
	  h = 2;
	  f -= b * 3;
	  k = 'M';
	  break;
	case 2:
	  --i;
	  h = 0;
	  f -= b * 3;
	  k = 'I';
	  break;
	case 3:
	  --i;
	  h = 2;
	  f -= b * 3;
	  k = 'I';
	  break;
	case 4:
	  --j;
	  h = 1;
	  k = 'D';
	  break;
	case 5:
	  --j;
	  h = 2;
	  k = 'D';
	  break;
	}
      if (k == l)
	++e;
      else
	{
	  foo (l);
	  l = k;
	}
    }
}

int
main ()
{
  char l = 'D';
  foo (l);
  bar ();
  return 0;
}
