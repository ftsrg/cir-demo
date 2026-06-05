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

struct twelve
{
  int a;
  int b;
  int c;
};

struct pair
{
  int first;
  int second;
};

struct pair
g ()
{
  struct pair p;
  return p;
}

static void
f ()
{
  int i;
  for (i = 0; i < 1; i++)
    {
      int j;
      for (j = 0; j < 1; j++)
	{
	  if (0)
	    {
	      int k;
	      for (k = 0; k < 1; k++)
		{
		  struct pair e = g ();
		}
	    }
	  else
	    {
	      struct twelve a, b;
	      if ((((char *) &b - (char *) &a) < 0
		   ? (-((char *) &b - (char *) &a))
		   : ((char *) &b - (char *) &a))  < sizeof (a))
		abort ();
	    }
	}
    }
}

main ()
{
  f ();
  exit (0);
}
