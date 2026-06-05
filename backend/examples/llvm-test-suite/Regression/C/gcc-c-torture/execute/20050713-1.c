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

/* Test that sibling call is not used if there is an argument overlap.  */

extern void abort (void);

struct S
{
  int a, b, c;
};

int
foo2 (struct S x, struct S y)
{
  if (x.a != 3 || x.b != 4 || x.c != 5)
    abort ();
  if (y.a != 6 || y.b != 7 || y.c != 8)
    abort ();
  return 0;
}

int
foo3 (struct S x, struct S y, struct S z)
{
  foo2 (x, y);
  if (z.a != 9 || z.b != 10 || z.c != 11)
    abort ();
  return 0;
}

int
bar2 (struct S x, struct S y)
{
  return foo2 (y, x);
}

int
bar3 (struct S x, struct S y, struct S z)
{
  return foo3 (y, x, z);
}

int
baz3 (struct S x, struct S y, struct S z)
{
  return foo3 (y, z, x);
}

int
main (void)
{
  struct S a = { 3, 4, 5 }, b = { 6, 7, 8 }, c = { 9, 10, 11 };

  bar2 (b, a);
  bar3 (b, a, c);
  baz3 (c, a, b);
  return 0;
}
