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

/* The fp-bit.c function __floatunsisf had a latent bug where guard bits
   could be lost leading to incorrect rounding.  */
/* Origin: Joseph Myers <joseph@codesourcery.com> */

extern void abort (void);
extern void exit (int);
#if __INT_MAX__ >= 0x7fffffff
volatile unsigned u = 0x80000081;
#else
volatile unsigned long u = 0x80000081;
#endif
volatile float f1, f2;
int
main (void)
{
  f1 = (float) u;
  f2 = (float) 0x80000081;
  if (f1 != f2)
    abort ();
  exit (0);
}
