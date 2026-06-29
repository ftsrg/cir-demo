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

/* PR tree-optimization/22043 */

extern void abort (void);

struct A { int i; int j; int k; int l; };
struct B { struct A a; int r[1]; };
struct C { struct A a; int r[0]; };
struct D { struct A a; int r[]; };

void
foo (struct A *x)
{
  if (x->i != 0 || x->j != 5 || x->k != 0 || x->l != 0)
    abort ();
}

int
main ()
{
  struct B b = { .a.j = 5 };
  struct C c = { .a.j = 5 };
  struct D d = { .a.j = 5 };
  foo (&b.a);
  foo (&c.a);
  foo (&d.a);
  return 0;
}
