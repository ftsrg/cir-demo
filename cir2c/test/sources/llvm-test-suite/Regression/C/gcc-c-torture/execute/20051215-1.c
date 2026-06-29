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

/* PR rtl-optimization/24899 */

extern void abort (void);

__attribute__ ((noinline)) int
foo (int x, int y, int *z)
{
  int a, b, c, d;

  a = b = 0;
  for (d = 0; d < y; d++)
    {
      if (z)
	b = d * *z;
      for (c = 0; c < x; c++)
	a += b;
    }

  return a;
}

int
main (void)
{
  if (foo (3, 2, 0) != 0)
    abort ();
  return 0;
}
