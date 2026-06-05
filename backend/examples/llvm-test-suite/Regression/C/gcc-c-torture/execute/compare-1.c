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

/* Copyright (C) 2002 Free Software Foundation.

   Test for correctness of composite comparisons.

   Written by Roger Sayle, 3rd June 2002.  */

extern void abort (void);

int ieq (int x, int y, int ok)
{
  if ((x<=y) && (x>=y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();

  if ((x<=y) && (x==y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();

  if ((x<=y) && (y<=x))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();

  if ((y==x) && (x<=y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();
}

int ine (int x, int y, int ok)
{
  if ((x<y) || (x>y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();
}

int ilt (int x, int y, int ok)
{
  if ((x<y) && (x!=y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();
}

int ile (int x, int y, int ok)
{
  if ((x<y) || (x==y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();
}

int igt (int x, int y, int ok)
{
  if ((x>y) && (x!=y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();
}

int ige (int x, int y, int ok)
{
  if ((x>y) || (x==y))
    {
      if (!ok) abort ();
    }
  else
    if (ok) abort ();
}

int
main ()
{
  ieq (1, 4, 0);
  ieq (3, 3, 1);
  ieq (5, 2, 0);

  ine (1, 4, 1);
  ine (3, 3, 0);
  ine (5, 2, 1);

  ilt (1, 4, 1);
  ilt (3, 3, 0);
  ilt (5, 2, 0);

  ile (1, 4, 1);
  ile (3, 3, 1);
  ile (5, 2, 0);

  igt (1, 4, 0);
  igt (3, 3, 0);
  igt (5, 2, 1);

  ige (1, 4, 0);
  ige (3, 3, 1);
  ige (5, 2, 1);

  return 0;
}
