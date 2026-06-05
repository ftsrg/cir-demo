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

/* Test for -fno-builtin-FUNCTION.  */
/* Origin: Joseph Myers <jsm28@cam.ac.uk>.  */
/* GCC normally handles abs and labs as built-in functions even without
   optimization.  So test that with -fno-builtin-abs, labs is so handled
   but abs isn't.  */

int abs_called = 0;

extern int abs (int);
extern long labs (long);
extern void abort (void);

void
main_test (void)
{
  if (labs (0) != 0)
    abort ();
  if (abs (0) != 0)
    abort ();
  if (!abs_called)
    abort ();
}
