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
foo (unsigned char *w, int i, unsigned char *x, int j)
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
bar (unsigned char *w, unsigned char *x, int i, int *result)
{
  *result = foo (w, 16, x, i);
}

int
main (void)
{
  unsigned char m[256];
  unsigned char n[256];
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

  if (sum != 32384)
    abort ();

  return 0;
}
