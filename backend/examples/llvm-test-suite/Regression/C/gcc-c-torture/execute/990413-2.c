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

/* This tests for a bug in regstack that was breaking glibc's math library. */
/* { dg-skip-if "" { ! { i?86-*-* x86_64-*-* } } } */

extern void abort (void);

static __inline double
minus_zero (void)
{
  union { double __d; int __i[2]; } __x;
  __x.__i[0] = 0x0;
  __x.__i[1] = 0x80000000;
  return __x.__d;
}

static __inline long double
__atan2l (long double __y, long double __x)
{
  register long double __value;
  __asm __volatile__ ("fpatan\n\t"
		      : "=t" (__value)
		      : "0" (__x), "u" (__y)
		      : "st(1)");
  return __value;
}

static __inline long double
__sqrtl (long double __x)
{
  register long double __result;
  __asm __volatile__ ("fsqrt" : "=t" (__result) : "0" (__x));
  return __result;
}

static __inline double
asin (double __x)
{
  return __atan2l (__x, __sqrtl (1.0 - __x * __x));
}

int
main (void)
{
  double x;

  x = minus_zero();
  x = asin (x);

  if (x != 0.0) /* actually -0.0, but 0.0 == -0.0 */
    abort ();
  return 0;
}
