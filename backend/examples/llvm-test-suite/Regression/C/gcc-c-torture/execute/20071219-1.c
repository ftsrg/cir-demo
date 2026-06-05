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

/* PR c++/34459 */

extern void abort (void);
extern void *memset (void *s, int c, __SIZE_TYPE__ n);

struct S
{
  char s[25];
};

struct S *p;

void __attribute__((noinline,noclone))
foo (struct S *x, int set)
{
  int i;
  for (i = 0; i < sizeof (x->s); ++i)
    if (x->s[i] != 0)
      abort ();
    else if (set)
      x->s[i] = set;
  p = x;
}

void __attribute__((noinline,noclone))
test1 (void)
{
  struct S a;
  memset (&a.s, '\0', sizeof (a.s));
  foo (&a, 0);
  struct S b = a;
  foo (&b, 1);
  b = a;
  b = b;
  foo (&b, 0);
}

void __attribute__((noinline,noclone))
test2 (void)
{
  struct S a;
  memset (&a.s, '\0', sizeof (a.s));
  foo (&a, 0);
  struct S b = a;
  foo (&b, 1);
  b = a;
  b = *p;
  foo (&b, 0);
}

void __attribute__((noinline,noclone))
test3 (void)
{
  struct S a;
  memset (&a.s, '\0', sizeof (a.s));
  foo (&a, 0);
  struct S b = a;
  foo (&b, 1);
  *p = a;
  *p = b;
  foo (&b, 0);
}

int
main (void)
{
  test1 ();
  test2 ();
  test3 ();
  return 0;
}
