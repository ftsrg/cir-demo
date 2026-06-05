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

extern void abort (void);
extern int abs_called;
extern int inside_main;

/* The labs call should have been optimized, but the abs call
   shouldn't have been.  */

int
abs (int x)
{
  if (inside_main)
    abs_called = 1;
  return (x < 0 ? -x : x);
}

long
labs (long x)
{
  if (inside_main)
    abort ();
  return (x < 0 ? -x : x);
}
