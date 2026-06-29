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

/* PR tree-optimization/32575 */

extern void abort (void);

struct S
{
  void *s1, *s2;
  unsigned char s3, s4, s5;
};

__attribute__ ((noinline))
void *
foo (void)
{
  static struct S s;
  return &s;
}

__attribute__ ((noinline))
void *
bar ()
{
  return (void *) 0;
}

__attribute__ ((noinline))
struct S *
test (void *a, void *b)
{
  struct S *p, q;
  p = foo ();
  if (p == 0)
    {
      p = &q;
      __builtin_memset (p, 0, sizeof (*p));
    }
  p->s1 = a;
  p->s2 = b;
  if (p == &q)
    p = 0;
  return p;
}

int
main (void)
{
  int a;
  int b;
  struct S *z = test ((void *) &a, (void *) &b);
  if (z == 0 || z->s1 != (void *) &a || z->s2 != (void *) &b || z->s3 || z->s4)
    abort ();
  return 0;
}
