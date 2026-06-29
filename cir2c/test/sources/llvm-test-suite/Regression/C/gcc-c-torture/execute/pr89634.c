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

/* PR rtl-optimization/89634 */

static unsigned long *
foo (unsigned long *x)
{
  return x + (1 + *x);
}

__attribute__((noipa)) unsigned long
bar (unsigned long *x)
{
  unsigned long c, d = 1, e, *f, g, h = 0, i;
  for (e = *x - 1; e > 0; e--)
    {
      f = foo (x + 1);
      for (i = 1; i < e; i++)
	f = foo (f);
      c = *f;
      if (c == 2)
	d *= 2;
      else
	{
	  i = (c - 1) / 2 - 1;
	  g = (2 * i + 1) * (d + 1) + (2 * d + 1);
	  if (g > h)
	    h = g;
	  d *= c;
	}
    }
  return h;
}

int
main ()
{
  unsigned long a[18] = { 4, 2, -200, 200, 2, -400, 400, 3, -600, 0, 600, 5, -100, -66, 0, 66, 100, __LONG_MAX__ / 8 + 1 };
  if (bar (a) != 17)
    __builtin_abort ();
  return 0;
}
