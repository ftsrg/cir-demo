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

/* { dg-options "-fno-inline" } */
/* Check that stack alignment is not affected by variables not placed
   on the stack.  */

#include <assert.h>

#define ALIGNMENT 64

unsigned test(unsigned n, unsigned p)
{
  static struct { char __attribute__((__aligned__(ALIGNMENT))) c; } s;
  unsigned x;

  assert(__alignof__(s) == ALIGNMENT);
  asm ("" : "=g" (x), "+m" (s) : "0" (&x));

  return n ? test(n - 1, x) : (x ^ p);
}

unsigned test2(unsigned n, unsigned p)
{
  static struct { char c; } s;
  unsigned x;

  assert(__alignof__(s) != ALIGNMENT);
  asm ("" : "=g" (x), "+m" (s) : "0" (&x));

  return n ? test2(n - 1, x) : (x ^ p);
}

int main (int argc, char *argv[] __attribute__((unused)))
{
  unsigned int x, y;

  x = test(argc, 0);
  x |= test(argc + 1, 0);
  x |= test(argc + 2, 0);

  y = test2(argc, 0);
  y |= test2(argc + 1, 0);
  y |= test2(argc + 2, 0);

  return (x & (ALIGNMENT - 1)) == 0 && (y & (ALIGNMENT - 1)) != 0 ? 1 : 0;
}
