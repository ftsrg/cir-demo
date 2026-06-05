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

#if defined(__i386__) && defined(__FreeBSD__)
#include <ieeefp.h>
#endif

double d (unsigned long long k)
{
  double x;

  x = (double) k;
  return x;
}

float s (unsigned long long k)
{
  float x;

  x = (float) k;
  return x;
}

main ()
{
  unsigned long long int k;
  double x;

#if defined(__i386__) && defined(__FreeBSD__)
  /* This test case assumes extended-precision, but FreeBSD defaults to
     double-precision.  Make it so.  */
  fpsetprec (FP_PE);
#endif

  if (sizeof (double) >= 8)
    {
      k = 0x8693ba6d7d220401ULL;
      x = d (k);
      k = (unsigned long long) x;
      if (k != 0x8693ba6d7d220800ULL)
	abort ();
    }

  k = 0x8234508000000001ULL;
  x = s (k);
  k = (unsigned long long) x;
#ifdef __SPU__
  /* SPU float rounds towards zero.  */
  if (k != 0x8234500000000000ULL)
    abort ();
#else
  if (k != 0x8234510000000000ULL)
    abort ();
#endif

  exit (0);
}
