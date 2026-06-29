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

extern void abort ();
extern int abs (int __x) __attribute__ ((__nothrow__, __leaf__)) __attribute__ ((__const__));

static int
foo (signed char *w, int i, signed char *x, int j)
{
  int tot = 0;
  for (int a = 0; a < 16; a++)
    {
      for (int b = 0; b < 16; b++)
	tot += abs (w[b] - x[b]);
      w += i;
      x += j;
    }
  return tot;
}

void
bar (signed char *w, signed char *x, int i, int *result)
{
  *result = foo (w, 16, x, i);
}

int
main (void)
{
  signed char m[256];
  signed char n[256];
  int sum, i;

  for (i = 0; i < 256; ++i)
    if (i % 2 == 0)
      {
	m[i] = (i % 8) * 2 + 1;
	n[i] = -(i % 8);
      }
    else
      {
	m[i] = -((i % 8) * 2 + 2);
	n[i] = -((i % 8) >> 1);
      }

  bar (m, n, 16, &sum);

  if (sum != 2368)
    abort ();

  return 0;
}
