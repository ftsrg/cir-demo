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

/* PR rtl-optimization/23561 */

struct A
{
  char a1[1];
  char a2[5];
  char a3[1];
  char a4[2048 - 7];
} a;

typedef __SIZE_TYPE__ size_t;
extern void *memset (void *, int, size_t);
extern void *memcpy (void *, const void *, size_t);
extern int memcmp (const void *, const void *, size_t);
extern void abort (void);

void
bar (struct A *x)
{
  size_t i;
  if (memcmp (x, "\1HELLO\1", sizeof "\1HELLO\1"))
    abort ();
  for (i = 0; i < sizeof (x->a4); i++)
    if (x->a4[i])
      abort ();
}

int
foo (void)
{
  memset (&a, 0, sizeof (a));
  a.a1[0] = 1;
  memcpy (a.a2, "HELLO", sizeof "HELLO");
  a.a3[0] = 1;
  bar (&a);
  return 0;
}

int
main (void)
{
  foo ();
  return 0;
}
