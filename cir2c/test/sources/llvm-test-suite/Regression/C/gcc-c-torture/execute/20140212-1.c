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

/* PR rtl-optimization/60116 */
/* Reported by Zhendong Su <su@cs.ucdavis.edu> */

extern void abort (void);

int a, b, c, d = 1, e, f = 1, h, i, k;
char g, j;

void
fn1 (void)
{
  int l;
  e = 0;
  c = 0;
  for (;;)
    {
      k = a && b;
      j = k * 54;
      g = j * 147;
      l = ~g + (long long) e && 1;
      if (d)
	c = l;
      else
	h = i = l * 9UL;
      if (f)
	return;
    }
}

int
main (void)
{
  fn1 ();
  if (c != 1)
    abort ();
  return 0;
}
