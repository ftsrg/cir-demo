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

/* PR rtl-optimization/68321 */

int e = 1, u = 5, t2, t5, i, k;
int a[1], b, m;
char n, t;

int
fn1 (int p1)
{
  int g[1];
  for (;;)
    {
      if (p1 / 3)
	for (; t5;)
	  u || n;
      t2 = p1 & 4;
      if (b + 1)
	return 0;
      u = g[0];
    }
}

int
main ()
{
  for (; e >= 0; e--)
    {
      char c;
      if (!m)
	c = t;
      fn1 (c);
    }

  if (a[t2] != 0)
    __builtin_abort ();

  return 0;
}
