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

/* PR middle-end/51323 */

extern void abort (void);
struct S { int a, b, c; };
int v;

__attribute__((noinline, noclone)) void
foo (int x, int y, int z)
{
  if (x != v || y != 0 || z != 9)
    abort ();
}

static inline int
baz (const struct S *p)
{
  return p->b;
}

__attribute__((noinline, noclone)) void
bar (int x, struct S y)
{
  foo (baz (&y), 0, x);
}

int
main ()
{
  struct S s;
  v = 3; s.a = v - 1; s.b = v; s.c = v + 1;
  bar (9, s);
  v = 17; s.a = v - 1; s.b = v; s.c = v + 1;
  bar (9, s);
  return 0;
}
