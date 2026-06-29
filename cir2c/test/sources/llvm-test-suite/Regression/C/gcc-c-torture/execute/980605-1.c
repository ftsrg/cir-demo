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

/* { dg-add-options stack_size } */

#include <stdio.h>

#ifndef STACK_SIZE
#define STACK_SIZE 200000
#endif

__inline__ static int
dummy (x)
{
  int y;
  y = (long) (x * 4711.3);
  return y;
}

int getval (void);

int
f2 (double x)
{
  unsigned short s;
  int a, b, c, d, e, f, g, h, i, j;

  a = getval ();
  b = getval ();
  c = getval ();
  d = getval ();
  e = getval ();
  f = getval ();
  g = getval ();
  h = getval ();
  i = getval ();
  j = getval ();


  s = x;

  return a + b + c + d + e + f + g + h + i + j + s;
}

int x = 1;

int
getval (void)
{
  return x++;
}

char buf[10];

void
f ()
{
  char ar[STACK_SIZE/2];
  int a, b, c, d, e, f, g, h, i, j, k;

  a = getval ();
  b = getval ();
  c = getval ();
  d = getval ();
  e = getval ();
  f = getval ();
  g = getval ();
  h = getval ();
  i = getval ();
  j = getval ();

  k = f2 (17.0);

  sprintf (buf, "%d\n", a + b + c + d + e + f + g + h + i + j + k);
  if (a + b + c + d + e + f + g + h + i + j + k != 227)
    abort ();
}

main ()
{
  f ();
  exit (0);
}
