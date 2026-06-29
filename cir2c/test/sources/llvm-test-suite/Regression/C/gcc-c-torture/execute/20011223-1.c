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

/* Origin: Joseph Myers <jsm28@cam.ac.uk>.  */
/* Case labels in a switch statement are converted to the promoted
   type of the controlling expression, not an unpromoted version.
   Reported as PR c/2454 by
   Andreas Krakowczyk <Andreas.Krakowczyk@fujitsu-siemens.com>.  */

extern void exit (int);
extern void abort (void);

static int i;

int
main (void)
{
  i = -1;
  switch ((signed char) i) {
  case 255:
    abort ();
  default:
    exit (0);
  }
}
