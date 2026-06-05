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

/* PR rtl-optimization/68250 */

signed char a, b, h, k, l, m, o;
short c, d, n;
int e, f, g, j, q;

void
fn1 (void)
{
  int p = b || a;
  n = o > 0 || d > 1 >> o ? d : d << o;
  for (; j; j++)
    m = c < 0 || m || c << p;
  l = f + 1;
  for (; f < 1; f = 1)
    k = h + 1;
}

__attribute__((noinline, noclone)) void
fn2 (int k)
{
  if (k != 1)
    __builtin_abort ();
}

int
main ()
{
  signed char i;
  for (; e < 1; e++)
    {
      fn1 ();
      if (k)
	i = k;
      if (i > q)
	g = 0;
    }
  fn2 (k);
  return 0;
}
