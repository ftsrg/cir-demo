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


const double dnan = 1.0/0.0 - 1.0/0.0;
double x = 1.0;

extern void link_error (void);
extern void abort (void);

main ()
{
#if ! defined (__vax__) && ! defined (_CRAY)
  /* NaN is an IEEE unordered operand.  All these test should be false.  */
  if (dnan == dnan)
    link_error ();
  if (dnan != x)
    x = 1.0;
  else
    link_error ();

  if (dnan < x)
    link_error ();
  if (dnan > x)
    link_error ();
  if (dnan <= x)
    link_error ();
  if (dnan >= x)
    link_error ();
  if (dnan == x)
    link_error ();
#endif
  exit (0);
}

#ifndef __OPTIMIZE__
void link_error (void)
{
  abort ();
}
#endif
