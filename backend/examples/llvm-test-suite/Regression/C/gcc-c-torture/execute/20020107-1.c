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

/* This testcase failed because - 1 - buf was simplified into ~buf and when
   later expanding it back into - buf + -1, -1 got lost.  */
/* { dg-options "-fgnu89-inline" } */

extern void abort (void);
extern void exit (int);

static void
bar (int x)
{
  if (!x)
    abort ();
}

char buf[10];

inline char *
foo (char *tmp)
{
  asm ("" : "=r" (tmp) : "0" (tmp));
  return tmp + 2;
}

int
main (void)
{
  bar ((foo (buf) - 1 - buf) == 1);
  exit (0);
}
