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

/* "i" overflows in f().  Check that x[i] is not treated as a giv.  */
#include <limits.h>

#if CHAR_BIT == 8

void f (unsigned int *x)
{
  unsigned char i;
  int j;

  i = 0x10;
  for (j = 0; j < 0x10; j++)
    {
      i += 0xe8;
      x[i] = 0;
      i -= 0xe7;
    }
}

int main ()
{
  unsigned int x[256];
  int i;

  for (i = 0; i < 256; i++)
    x[i] = 1;
  f (x);
  for (i = 0; i < 256; i++)
    if (x[i] != (i >= 0x08 && i < 0xf8))
      abort ();
  exit (0);
}
#else
int main () { exit (0); }
#endif
