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

/* { dg-require-effective-target int32plus } */
/* { dg-options "-fno-strict-overflow" } */

extern void abort (void);
extern void exit (int);

__attribute__ ((noinline)) void
foo(short unsigned int *p1, short unsigned int *p2)
{
  short unsigned int x1, x4;
  int x2, x3, x5, x6;
  unsigned int x7;

  x1 = *p1;
  x2 = (int) x1;
  x3 = x2 * 65536;
  x4 = *p2;
  x5 = (int) x4;
  x6 = x3 + x4;
  x7 = (unsigned int) x6;
  if (x7 <= 268435455U)
    abort ();
  exit (0);
}

int
main()
{
  short unsigned int x, y;
  x = -5;
  y = -10;
  foo (&x, &y);
}
