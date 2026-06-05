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

struct a_struct
{
  unsigned char a_character;
};

struct a_struct an_array[5];
struct a_struct *a_ptr;
int yabba = 1;

int
f (a, b)
     unsigned char a;
     unsigned long b;
{
  long i, j, p, q, r, s;

  if (b != (unsigned long) 0)
    {
      if (yabba)
	return -1;
      s = 4000000 / b;
      for (i = 0; i < 11; i++)
	{
	  for (j = 0; j < 256; j++)
	    {
	      if (((p - s < 0) ? -s : 0) < (( q - s < 0) ? -s : q))
		r = i;
	    }
	}
    }

  if (yabba)
    return 0;
  a_ptr = &an_array[a];
  a_ptr->a_character = (unsigned char) r;
}

main ()
{
  if (f (1, 0UL) != 0)
    abort ();
  exit (0);
}
