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

typedef __SIZE_TYPE__ size_t;
extern void *memcpy (void *__restrict, const void *__restrict, size_t);
extern void abort (void);
extern void exit (int);

typedef struct t
{
  unsigned a : 16;
  unsigned b : 8;
  unsigned c : 8;
  long d[4];
} *T;

typedef struct {
  long r[3];
} U;

T bar (U, unsigned int);

T foo (T x)
{
  U d, u;

  memcpy (&u, &x->d[1], sizeof u);
  d = u;
  return bar (d, x->b);
}

T baz (T x)
{
  U d, u;

  d.r[0] = 0x123456789;
  d.r[1] = 0xfedcba987;
  d.r[2] = 0xabcdef123;
  memcpy (&u, &x->d[1], sizeof u);
  d = u;
  return bar (d, x->b);
}

T bar (U d, unsigned int m)
{
  if (d.r[0] != 21 || d.r[1] != 22 || d.r[2] != 23)
    abort ();
  return 0;
}

struct t t = { 26, 0, 0, { 0, 21, 22, 23 }};

int main (void)
{
  baz (&t);
  foo (&t);
  exit (0);
}
