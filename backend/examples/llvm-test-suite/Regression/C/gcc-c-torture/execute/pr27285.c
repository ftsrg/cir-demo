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

/* PR tree-optimization/27285 */

extern void abort (void);

struct S { unsigned char a, b, c, d[16]; };

void __attribute__ ((noinline))
foo (struct S *x, struct S *y)
{
  int a, b;
  unsigned char c, *d, *e;

  b = x->b;
  d = x->d;
  e = y->d;
  a = 0;
  while (b)
    {
      if (b >= 8)
	{
	  c = 0xff;
	  b -= 8;
	}
      else
	{
	  c = 0xff << (8 - b);
	  b = 0;
	}

      e[a] = d[a] & c;
      a++;
    }
}

int
main (void)
{
  struct S x = { 0, 25, 0, { 0xaa, 0xbb, 0xcc, 0xdd }};
  struct S y = { 0, 0, 0, { 0 }};

  foo (&x, &y);
  if (x.d[0] != y.d[0] || x.d[1] != y.d[1]
      || x.d[2] != y.d[2] || (x.d[3] & 0x80) != y.d[3])
    abort ();
   return 0;
}
