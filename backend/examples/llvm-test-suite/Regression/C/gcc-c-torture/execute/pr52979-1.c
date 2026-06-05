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

/* PR middle-end/52979 */

/* { dg-require-effective-target int32plus } */

extern void abort (void);
int c, d, e;

void
foo (void)
{
}

struct __attribute__((packed)) S { int g : 31; int h : 6; };
struct S a = { 1 };
static struct S b = { 1 };

void
bar (void)
{
  a.h = 1;
  struct S f = { };
  b = f;
  e = 0;
  if (d)
    c = a.g;
}

void
baz (void)
{
  bar ();
  a = b;
}

int
main ()
{
  baz ();
  if (a.g)
    abort ();
  return 0;
}
