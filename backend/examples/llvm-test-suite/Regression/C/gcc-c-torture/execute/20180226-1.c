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

/* PR rtl-optimization/83496 */
/* Reported by Hauke Mehrtens <gcc@hauke-m.de> */

extern void abort (void);

typedef unsigned long mp_digit;

typedef struct { int used, alloc, sign; mp_digit *dp; } mp_int;

int mytest(mp_int *a, mp_digit b) __attribute__((noclone, noinline));

int mytest(mp_int *a, mp_digit b)
{
  if (a->sign == 1)
    return -1;
  if (a->used > 1)
    return 1;
  if (a->dp[0] > b)
    return 1;
  if (a->dp[0] < b)
    return -1;
  return 0;
}

int main (void)
{
  mp_int i = { 2, 0, -1 };
  if (mytest (&i, 0) != 1)
    abort ();
  return 0;
}
