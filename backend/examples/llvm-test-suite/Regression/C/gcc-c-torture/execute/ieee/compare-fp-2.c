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

/* Copyright (C) 2004 Free Software Foundation.

   Ensure that the composite comparison optimization doesn't misfire
   and attempt to combine an integer comparison with a floating-point one.

   Written by Paolo Bonzini, 26th May 2004.  */

extern void abort (void);

int
foo (double x, double y)
{
  /* If miscompiled the following may become false.  */
  return (x > y) && ((int)x == (int)y);
}

int
main ()
{
  if (! foo (1.3,1.0))
    abort ();
  return 0;
}
