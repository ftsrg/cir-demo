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

/* { dg-options { "-fwrapv" } } */

extern void abort (void);
extern void exit (int);

int dd (int x, int d) { return x / d; }

int
main ()
{
  int i;
  for (i = -3; i <= 3; i++)
    {
      if (dd (i, 1) != i / 1)
	abort ();
      if (dd (i, 2) != i / 2)
	abort ();
      if (dd (i, 3) != i / 3)
	abort ();
      if (dd (i, 4) != i / 4)
	abort ();
      if (dd (i, 5) != i / 5)
	abort ();
      if (dd (i, 6) != i / 6)
	abort ();
      if (dd (i, 7) != i / 7)
	abort ();
      if (dd (i, 8) != i / 8)
	abort ();
    }
  for (i = ((unsigned) ~0 >> 1) - 3; i <= ((unsigned) ~0 >> 1) + 3; i++)
    {
      if (dd (i, 1) != i / 1)
	abort ();
      if (dd (i, 2) != i / 2)
	abort ();
      if (dd (i, 3) != i / 3)
	abort ();
      if (dd (i, 4) != i / 4)
	abort ();
      if (dd (i, 5) != i / 5)
	abort ();
      if (dd (i, 6) != i / 6)
	abort ();
      if (dd (i, 7) != i / 7)
	abort ();
      if (dd (i, 8) != i / 8)
	abort ();
    }
  exit (0);
}
