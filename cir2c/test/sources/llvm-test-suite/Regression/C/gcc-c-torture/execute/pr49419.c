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

/* PR tree-optimization/49419 */

extern void abort (void);

struct S { int w, x, y; } *t;

int
foo (int n, int f, int *s, int m)
{
  int x, i, a;
  if (n == -1)
    return 0;
  for (x = n, i = 0; t[x].w == f && i < m; i++)
    x = t[x].x;
  if (i == m)
    abort ();
  a = i + 1;
  for (x = n; i > 0; i--)
    {
      s[i] = t[x].y;
      x = t[x].x;
    }
  s[0] = x;
  return a;
}

int
main (void)
{
  int s[3], i;
  struct S buf[3] = { { 1, 1, 2 }, { 0, 0, 0 }, { 0, 0, 0 } };
  t = buf;
  if (foo (0, 1, s, 3) != 2)
    abort ();
  if (s[0] != 1 || s[1] != 2)
    abort ();
  return 0;
}
