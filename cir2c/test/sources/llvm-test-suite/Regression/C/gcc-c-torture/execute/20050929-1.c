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

/* PR middle-end/24109 */

extern void abort (void);

struct A { int i; int j; };
struct B { struct A *a; struct A *b; };
struct C { struct B *c; struct A *d; };
struct C e = { &(struct B) { &(struct A) { 1, 2 }, &(struct A) { 3, 4 } }, &(struct A) { 5, 6 } };

int
main (void)
{
  if (e.c->a->i != 1 || e.c->a->j != 2)
    abort ();
  if (e.c->b->i != 3 || e.c->b->j != 4)
    abort ();
  if (e.d->i != 5 || e.d->j != 6)
    abort ();
  return 0;
}
