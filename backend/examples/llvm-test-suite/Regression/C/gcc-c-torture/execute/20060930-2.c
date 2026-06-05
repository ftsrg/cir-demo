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

/* PR middle-end/29272 */

extern void abort (void);

struct S { struct S *s; } s;
struct T { struct T *t; } t;

static inline void
foo (void *s)
{
  struct T *p = s;
  __builtin_memcpy (&p->t, &t.t, sizeof (t.t));
}

void *
__attribute__((noinline))
bar (void *p, struct S *q)
{
  q->s = &s;
  foo (p);
  return q->s;
}

int
main (void)
{
  t.t = &t;
  if (bar (&s, &s) != (void *) &t)
    abort ();
  return 0;
}
