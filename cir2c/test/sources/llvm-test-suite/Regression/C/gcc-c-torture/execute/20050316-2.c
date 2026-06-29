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

/* This testcase generates MMX instructions together with x87 instructions.
   Currently, there is no "emms" generated to switch between register sets,
   so the testcase fails for targets where MMX insns are enabled.  */
/* { dg-options "-mno-mmx -Wno-psabi" { target { x86_64-*-* i?86-*-* } } } */

extern void abort (void);

typedef int V2SI __attribute__ ((vector_size (8)));
typedef unsigned int V2USI __attribute__ ((vector_size (8)));
typedef float V2SF __attribute__ ((vector_size (8)));
typedef short V2HI __attribute__ ((vector_size (4)));
typedef unsigned int V2UHI __attribute__ ((vector_size (4)));

long long
test1 (V2SF x)
{
  return (long long) (V2SI) x;
}

long long
test2 (V2SF x)
{
  return (long long) x;
}

long long
test3 (V2SI x)
{
  return (long long) (V2SF) x;
}

int
main (void)
{
  if (sizeof (short) != 2 || sizeof (int) != 4 || sizeof (long long) != 8)
    return 0;

  V2SF x = { 2.0, 2.0 };
  union { long long l; float f[2]; int i[2]; } u;
  u.l = test1 (x);
  if (u.f[0] != 2.0 || u.f[1] != 2.0)
    abort ();

  V2SF y = { 6.0, 6.0 };
  u.l = test2 (y);
  if (u.f[0] != 6.0 || u.f[1] != 6.0)
    abort ();

  V2SI z = { 4, 4 };
  u.l = test3 (z);
  if (u.i[0] != 4 || u.i[1] != 4)
    abort ();
  return 0;
}
