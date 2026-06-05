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

   Check that constant folding and RTL simplification of -(x >> y) doesn't
   break anything and produces the expected results.

   Written by Roger Sayle, 11th March 2004.  */

extern void abort (void);

#define INT_BITS  (sizeof(int)*8)

int test1(int x)
{
  return -(x >> (INT_BITS-1));
}

int test2(unsigned int x)
{
  return -((int)(x >> (INT_BITS-1)));
}

int test3(int x)
{
  int y;
  y = INT_BITS-1;
  return -(x >> y);
}

int test4(unsigned int x)
{
  int y;
  y = INT_BITS-1;
  return -((int)(x >> y));
}

int main()
{
  if (test1(0) != 0)
    abort ();
  if (test1(1) != 0)
    abort ();
  if (test1(-1) != 1)
    abort ();

  if (test2(0) != 0)
    abort ();
  if (test2(1) != 0)
    abort ();
  if (test2((unsigned int)-1) != -1)
    abort ();

  if (test3(0) != 0)
    abort ();
  if (test3(1) != 0)
    abort ();
  if (test3(-1) != 1)
    abort ();

  if (test4(0) != 0)
    abort ();
  if (test4(1) != 0)
    abort ();
  if (test4((unsigned int)-1) != -1)
    abort ();

  return 0;
}
