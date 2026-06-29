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

/* When comparisons of bit-fields to unsigned constants got shortened,
   the shortened signed constant was wrongly marked as overflowing,
   leading to a later integer_zerop failure and misoptimization.

   Related to bug tree-optimization/16437 but shows the problem on
   32-bit systems.  */
/* Origin: Joseph Myers <jsm@polyomino.org.uk> */

/* { dg-require-effective-target int32plus } */

extern void abort (void);

struct s { int a:12, b:20; };

struct s x = { -123, -456 };

int
main (void)
{
  if (x.a != -123U || x.b != -456U)
    abort ();
  return 0;
}
