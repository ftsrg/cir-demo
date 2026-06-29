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

/* Origin: Mikael Pettersson <mikpe@csd.uu.se> and the Linux kernel.  */

extern void abort (void);
unsigned long a = 0xc0000000, b = 0xd0000000;
unsigned long c = 0xc01bb958, d = 0xc0264000;
unsigned long e = 0xc0288000, f = 0xc02d4378;

void
foo (int x, int y, int z)
{
  if (x != 245 || y != 36 || z != 444)
    abort ();
}

int
main (void)
{
  unsigned long g;
  int h = 0, i = 0, j = 0;

  if (sizeof (unsigned long) < 4)
    return 0;

  for (g = a; g < b; g += 0x1000)
    if (g < c)
      h++;
    else if (g >= d && g < e)
      j++;
    else if (g < f)
      i++;
  foo (i, j, h);
  return 0;
}
