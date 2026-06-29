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

/* The composite type of int and an enum compatible with int might be
   either of the two types, but it isn't an unsigned type.  */
/* Origin: Joseph Myers <jsm@polyomino.org.uk> */

#include <limits.h>

#include <stdio.h>

extern void abort (void);
extern void exit (int);

enum e { a = INT_MIN };

int *p;
enum e *q;
int
main (void)
{
  enum e x = a;
  q = &x;
  if (*(1 ? q : p) > 0)
    abort ();
  exit (0);
}
