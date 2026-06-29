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

unsigned int
f1 (int diff)
{
  return ((unsigned int) (diff < 0 ? -diff : diff));
}

unsigned int
f2 (unsigned int diff)
{
  return ((unsigned int) ((signed int) diff < 0 ? -diff : diff));
}

unsigned long long
f3 (long long diff)
{
  return ((unsigned long long) (diff < 0 ? -diff : diff));
}

unsigned long long
f4 (unsigned long long diff)
{
  return ((unsigned long long) ((signed long long) diff < 0 ? -diff : diff));
}

main ()
{
  int i;
  for (i = 0; i <= 10; i++)
    {
      if (f1 (i) != i)
	abort ();
      if (f1 (-i) != i)
	abort ();
      if (f2 (i) != i)
	abort ();
      if (f2 (-i) != i)
	abort ();
      if (f3 ((long long) i) != i)
	abort ();
      if (f3 ((long long) -i) != i)
	abort ();
      if (f4 ((long long) i) != i)
	abort ();
      if (f4 ((long long) -i) != i)
	abort ();
    }
  exit (0);
}
