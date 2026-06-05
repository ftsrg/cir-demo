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

/* PR c/43385 */

extern void abort (void);

int e;

__attribute__((noinline)) void
foo (int x, int y)
{
  if (__builtin_expect (x, 0) && y != 0)
    e++;
}

__attribute__((noinline)) int
bar (int x, int y)
{
  if (__builtin_expect (x, 0) && y != 0)
    return 1;
  else
    return 0;
}

int
main (void)
{
  int z = 0;
  asm ("" : "+r" (z));
  foo (z + 2, z + 1);
  if (e != 1)
    abort ();
  foo (z + 2, z);
  if (e != 1)
    abort ();
  foo (z + 1, z + 1);
  if (e != 2)
    abort ();
  foo (z + 1, z);
  if (e != 2)
    abort ();
  foo (z, z + 1);
  if (e != 2)
    abort ();
  foo (z, z);
  if (e != 2)
    abort ();
  if (bar (z + 2, z + 1) != 1)
    abort ();
  if (bar (z + 2, z) != 0)
    abort ();
  if (bar (z + 1, z + 1) != 1)
    abort ();
  if (bar (z + 1, z) != 0)
    abort ();
  if (bar (z, z + 1) != 0)
    abort ();
  if (bar (z, z) != 0)
    abort ();
  return 0;
}
