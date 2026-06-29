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

/* { dg-options "-O2 -ftree-vectorize -fno-vect-cost-model" } */
/* { dg-additional-options "-fno-common" { target hppa*-*-hpux* } } */

#define SIZE 128
unsigned short _Alignas (16) in[SIZE];

__attribute__ ((noinline)) int
test (unsigned short sum, unsigned short *in, int x)
{
  for (int j = 0; j < SIZE; j += 8)
    sum += in[j] * x;
  return sum;
}

int
main ()
{
  for (int i = 0; i < SIZE; i++)
    in[i] = i;
  if (test (0, in, 1) != 960)
    __builtin_abort ();
  return 0;
}
