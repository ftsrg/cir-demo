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

/* { dg-do run } */
/* { dg-require-effective-target int32plus } */

extern void abort (void);

struct {
  unsigned f2;
  unsigned f3 : 15;
  unsigned f5 : 3;
  short f6;
} b = {0x7f8000, 6, 5, 0}, g = {8, 0, 5, 0};

short d, l;
int a, c, h = 8;
volatile char e[237] = {4};
short *f = &d;
short i[5] = {3};
char j;
int *k = &c;

int
fn1 (unsigned p1) { return -p1; }

void
fn2 (char p1)
{
  a = p1;
  e[0];
}

short
fn3 ()
{
  *k = 4;
  return *f;
}

int
main ()
{

  unsigned m;
  short *n = &i[4];

  m = fn1 ((h && j) <= b.f5);
  l = m > g.f3;
  *n = 3;
  fn2 (b.f2 >> 15);
  if ((a & 0xff) != 0xff)
    abort ();

  return 0;
}
