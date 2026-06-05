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

/* PR tree-optimization/51877 */

extern void abort (void);
struct A { int a; char b[32]; } a, b;

__attribute__((noinline, noclone))
struct A
bar (int x)
{
  struct A r;
  static int n;
  r.a = ++n;
  __builtin_memset (r.b, 0, sizeof (r.b));
  r.b[0] = x;
  return r;
}

__attribute__((noinline, noclone))
void
baz (void)
{
  asm volatile ("" : : : "memory");
}

__attribute__((noinline, noclone))
void
foo (struct A *x, int y)
{
  if (y == 6)
    a = bar (7);
  else
    *x = bar (7);
  baz ();
}

int
main ()
{
  a = bar (3);
  b = bar (4);
  if (a.a != 1 || a.b[0] != 3 || b.a != 2 || b.b[0] != 4)
    abort ();
  foo (&b, 0);
  if (a.a != 1 || a.b[0] != 3 || b.a != 3 || b.b[0] != 7)
    abort ();
  foo (&b, 6);
  if (a.a != 4 || a.b[0] != 7 || b.a != 3 || b.b[0] != 7)
    abort ();
  return 0;
}
