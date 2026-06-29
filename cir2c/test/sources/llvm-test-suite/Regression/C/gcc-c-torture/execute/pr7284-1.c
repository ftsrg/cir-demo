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

/* Signed left-shift is implementation-defined in C89 (and see
   DR#081), not undefined.  Bug 7284 from Al Grant (AlGrant at
   myrealbox.com).  */

/* { dg-require-effective-target int32plus } */
/* { dg-options "-std=c89" } */

extern void abort (void);
extern void exit (int);

int
f (int n)
{
  return (n << 24) / (1 << 23);
}

volatile int x = 128;

int
main (void)
{
  if (f(x) != -256)
    abort ();
  exit (0);
}
