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

/* Origin: PR c/92 from Simon Marlow <t-simonm@microsoft.com>, adapted
   to a testcase by Joseph Myers <jsm28@cam.ac.uk>.
*/

typedef struct { } empty;

typedef struct {
  int i;
  empty e;
  int i2;
} st;

st s = { .i = 0, .i2 = 1 };

extern void abort (void);

int
main (void)
{
  if (s.i2 == 1)
    exit (0);
  else
    abort ();
}
