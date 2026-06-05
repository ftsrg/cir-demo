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

/* PR rtl-optimization/57860 */

extern void abort (void);
int a, *b = &a, c, d, e, *f = &e, g, *h = &d, k[1] = { 1 };

int
foo (int p)
{
  for (;; g++)
    {
      for (; c; c--);
      *f = *h = p > ((0x1FFFFFFFFLL ^ a) & *b);
      if (k[g])
	return 0;
    }
}

int
main ()
{
  foo (1);
  if (d != 1)
    abort ();
  return 0;
}
