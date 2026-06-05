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

struct A
{
  unsigned long p, q, r, s;
} x = { 13, 14, 15, 16 };

extern void abort (void);
extern void exit (int);

static inline struct A *
bar (void)
{
  struct A *r;

  switch (8)
    {
    case 2:
      abort ();
      break;
    case 8:
      r = &x;
      break;
    default:
      abort ();
      break;
    }
  return r;
}

void
foo (unsigned long *x, int y)
{
  if (y != 12)
    abort ();
  if (x[0] != 1 || x[1] != 11)
    abort ();
  if (x[2] != 2 || x[3] != 12)
    abort ();
  if (x[4] != 3 || x[5] != 13)
    abort ();
  if (x[6] != 4 || x[7] != 14)
    abort ();
  if (x[8] != 5 || x[9] != 15)
    abort ();
  if (x[10] != 6 || x[11] != 16)
    abort ();
}

int
main (void)
{
  unsigned long a[40];
  int b = 0;

  a[b++] = 1;
  a[b++] = 11;
  a[b++] = 2;
  a[b++] = 12;
  a[b++] = 3;
  a[b++] = bar()->p;
  a[b++] = 4;
  a[b++] = bar()->q;
  a[b++] = 5;
  a[b++] = bar()->r;
  a[b++] = 6;
  a[b++] = bar()->s;
  foo (a, b);
  exit (0);
}
