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

/* { dg-require-effective-target int128 } */

typedef unsigned __int128 u128;

int a, c, d;
u128 b;

unsigned long long g0, g1;

void
store (unsigned long long a0, unsigned long long a1)
{
  g0 = a0;
  g1 = a1;
}

void
foo (void)
{
  b += a;
  c = d != 84347;
  b /= c;
  u128 x = b;
  store (x >> 0, x >> 64);
}

int
main (void)
{
  foo ();
  if (g0 != 0 || g1 != 0)
    __builtin_abort ();
  return 0;
}
