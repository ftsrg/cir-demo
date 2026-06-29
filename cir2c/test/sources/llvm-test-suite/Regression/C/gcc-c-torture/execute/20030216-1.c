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

/* This test requires constant propagation of loads and stores to be
   enabled.  This is only guaranteed at -O2 and higher.  Do not run
   at -O1.  */
/* { dg-skip-if "requires higher optimization" { *-*-* } "-O1" "" } */

void link_error (void);
const double one=1.0;
main ()
{
#ifdef __OPTIMIZE__
  if ((int) one != 1)
    link_error ();
#endif
  return 0;
}
