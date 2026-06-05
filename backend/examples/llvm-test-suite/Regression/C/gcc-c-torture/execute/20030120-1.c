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

/* On H8/300 port, NOTICE_UPDATE_CC had a bug that causes the final
   pass to remove test insns that should be kept.  */

unsigned short
test1 (unsigned short w)
{
  if ((w & 0xff00) == 0)
    {
      if (w == 0)
	w = 2;
    }
  return w;
}

unsigned long
test2 (unsigned long w)
{
  if ((w & 0xffff0000) == 0)
    {
      if (w == 0)
	w = 2;
    }
  return w;
}

int
test3 (unsigned short a)
{
  if (a & 1)
    return 1;
  else if (a)
    return 1;
  else
    return 0;
}

int
main ()
{
  if (test1 (1) != 1)
    abort ();

  if (test2 (1) != 1)
    abort ();

  if (test3 (2) != 1)
    abort ();

  exit (0);
}
