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

/* PR target/52129 */
/* { dg-xfail-if "ptxas crashes" { nvptx-*-* } { "-O1" } { "" } } */

extern void abort (void);
struct S { void *p; unsigned int q; };
struct T { char a[64]; char b[64]; } t;

__attribute__((noinline, noclone)) int
foo (void *x, struct S s, void *y, void *z)
{
  if (x != &t.a[2] || s.p != &t.b[5] || s.q != 27 || y != &t.a[17] || z != &t.b[17])
    abort ();
  return 29;
}

__attribute__((noinline, noclone)) int
bar (void *x, void *y, void *z, struct S s, int t, struct T *u)
{
  return foo (x, s, &u->a[t], &u->b[t]);
}

int
main ()
{
  struct S s = { &t.b[5], 27 };
  if (bar (&t.a[2], (void *) 0, (void *) 0, s, 17, &t) != 29)
    abort ();
  return 0;
}
