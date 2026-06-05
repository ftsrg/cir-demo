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

/* Origin: PR c/1540 from Mattias Lampe <lampe@tu-harburg.de>,
   adapted to a testcase by Joseph Myers <jsm28@cam.ac.uk>.
   GCC 2.95.2 fails, CVS GCC of 2001-01-13 passes.  */
extern void abort (void);
extern void exit (int);

int
main (void)
{
  int array1[1] = { 1 };
  int array2[2][1]= { { 1 }, { 0 } };
  if (array1[0] != 1)
    abort ();
  exit (0);
}
