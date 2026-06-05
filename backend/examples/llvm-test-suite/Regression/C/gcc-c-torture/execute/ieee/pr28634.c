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

/* PR rtl-optimization/28634.  On targets with delayed branches,
   dbr_schedule could do the next iteration's addition in the
   branch delay slot, then subtract the value again if the branch
   wasn't taken.  This can lead to rounding errors.  */
double x = -0x1.0p53;
double y = 1;
int
main (void)
{
  while (y > 0)
    y += x;
  if (y != x + 1)
    abort ();
  exit (0);
}
