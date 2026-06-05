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

/* PR rtl-optimization/53160 */

extern void abort (void);

int a, c = 1, d, e, g;
volatile int b;
volatile char f;
long h;
short i;

void
foo (void)
{
  for (e = 0; e; ++e)
    ;
}

int
main ()
{
  if (g)
    (void) b;
  foo ();
  for (d = 0; d >= 0; d--)
    {
      short j = f;
      int k = 0;
      i = j ? j : j << k;
    }
  h = c == 0 ? 0 : i;
  a = h;
  if (a != 0)
    abort ();
  return 0;
}
