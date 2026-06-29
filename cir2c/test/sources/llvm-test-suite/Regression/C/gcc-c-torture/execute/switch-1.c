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

/* Copyright (C) 2003  Free Software Foundation.

   Test that switch statements suitable using case bit tests are
   implemented correctly.

   Written by Roger Sayle, 01/25/2001.  */

extern void abort (void);

int
foo (int x)
{
  switch (x)
    {
    case 4:
    case 6:
    case 9:
    case 11:
      return 30;
    }
  return 31;
}

int
main ()
{
  int i, r;

  for (i=-1; i<66; i++)
    {
      r = foo (i);
      if (i == 4)
	{
	  if (r != 30)
	    abort ();
	}
      else if (i == 6)
	{
	  if (r != 30)
	    abort ();
	}
      else if (i == 9)
	{
	  if (r != 30)
	    abort ();
	}
      else if (i == 11)
	{
	  if (r != 30)
	    abort ();
	}
      else if (r != 31)
	abort ();
    }
  return 0;
}
