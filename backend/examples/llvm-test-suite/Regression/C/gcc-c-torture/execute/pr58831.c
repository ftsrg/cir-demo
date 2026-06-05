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

#include <assert.h>

int a, *b, c, d, f, **i, p, q, *r;
short o, j;

static int __attribute__((noinline, noclone))
fn1 (int *p1, int **p2)
{
  int **e = &b;
  for (; p; p++)
    *p1 = 1;
  *e = *p2 = &d;

  assert (r);

  return c;
}

static int ** __attribute__((noinline, noclone))
fn2 (void)
{
  for (f = 0; f != 42; f++)
    {
      int *g[3] = {0, 0, 0};
      for (o = 0; o; o--)
        for (; a > 1;)
          {
            int **h[1] = { &g[2] };
          }
    }
  return &r;
}

int
main (void)
{
  i = fn2 ();
  fn1 (b, i);
  return 0;
}
