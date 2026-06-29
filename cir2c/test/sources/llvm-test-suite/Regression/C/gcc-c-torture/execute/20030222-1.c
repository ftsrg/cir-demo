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

/* Verify that we get the low part of the long long as an int.  We
   used to get it wrong on big-endian machines, if register allocation
   succeeded at all.  We use volatile to make sure the long long is
   actually truncated to int, in case a single register is wide enough
   for a long long.  */
/* { dg-skip-if "asm would require extra shift-left-4-byte" { spu-*-* } } */
/* { dg-skip-if "asm requires register allocation" { nvptx-*-* } } */
#include <limits.h>

void
ll_to_int (long long x, volatile int *p)
{
  int i;
  asm ("" : "=r" (i) : "0" (x));
  *p = i;
}

int val = INT_MIN + 1;

int main() {
  volatile int i;

  ll_to_int ((long long)val, &i);
  if (i != val)
    abort ();

  exit (0);
}
