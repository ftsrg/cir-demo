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

extern void abort (void);

struct A
{
  struct A *a;
};

struct B
{
  struct A *b;
};

__attribute__((noinline))
struct A *
foo (struct A *x)
{
  asm volatile ("" : : "g" (x) : "memory");
  return x;
}

__attribute__((noinline))
void
bar (struct B *w, struct A *x, struct A *y, struct A *z)
{
  struct A **c;
  c = &w->b;
  *c = foo (x);
  while (*c)
    c = &(*c)->a;
  *c = foo (y);
  while (*c)
    c = &(*c)->a;
  *c = foo (z);
}

struct B d;
struct A e, f, g;

int
main (void)
{
  f.a = &g;
  bar (&d, &e, &f, 0);
  if (d.b == 0
      || d.b->a == 0
      || d.b->a->a == 0
      || d.b->a->a->a != 0)
    abort ();
  return 0;
}
