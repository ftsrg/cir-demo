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

/* { dg-options "-O -fexpensive-optimizations -fno-tree-bit-ccp" } */

__attribute__ ((noinline, noclone))
int
foo (unsigned short x, unsigned short y)
{
  int r;
  if (__builtin_mul_overflow (x, y, &r))
    __builtin_abort ();
  return r;
}

int
main (void)
{
  int x = 1;
  int y = 2;
  if (foo (x, y) != x * y)
    __builtin_abort ();
  return 0;
}
