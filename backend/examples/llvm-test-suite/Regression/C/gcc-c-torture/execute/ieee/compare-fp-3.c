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

/* Copyright (C) 2004 Free Software Foundation.

   Test for composite comparison always true/false optimization.

   Written by Paolo Bonzini, 26th May 2004.  */

extern void link_error0 ();
extern void link_error1 ();

void
test1 (float x, float y)
{
  if ((x==y) && (x!=y))
    link_error0();
}

void
test2 (float x, float y)
{
  if ((x<y) && (x>y))
    link_error0();
}

void
test3 (float x, float y)
{
  if ((x<y) && (y<x))
    link_error0();
}

void
test4 (float x, float y)
{
  if ((x==y) || (x!=y))
    {
    }
  else
    link_error1 ();
}

void
test5 (float x, float y)
{
  if (__builtin_isunordered (x, y) || (x>=y) || (x<y))
    {
    }
  else
    link_error1 ();
}

void
test6 (float x, float y)
{
  if (__builtin_isunordered (y, x) || (x<=y) || (y<x))
    {
    }
  else
    link_error1 ();
}

void
test7 (float x, float y)
{
  if (__builtin_isunordered (x, y) || !__builtin_isunordered (x, y))
    {
    }
  else
    link_error1 ();
}

void
all_tests (float x, float y)
{
  test1 (x, y);
  test2 (x, y);
  test3 (x, y);
  test4 (x, y);
  test5 (x, y);
  test6 (x, y);
  test7 (x, y);
}

int
main ()
{
  all_tests (0, 0);
  all_tests (1, 2);
  all_tests (4, 3);

  return 0;
}

#ifndef __OPTIMIZE__
void link_error0() {}
void link_error1() {}
#endif /* ! __OPTIMIZE__ */
