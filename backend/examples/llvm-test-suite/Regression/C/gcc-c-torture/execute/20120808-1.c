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

extern void exit (int);
extern void abort (void);

volatile int i;
unsigned char *volatile cp;
unsigned char d[32] = { 0 };

int
main (void)
{
  unsigned char c[32] = { 0 };
  unsigned char *p = d + i;
  int j;
  for (j = 0; j < 30; j++)
    {
      int x = 0xff;
      int y = *++p;
      switch (j)
	{
	case 1: x ^= 2; break;
	case 2: x ^= 4; break;
	case 25: x ^= 1; break;
	default: break;
	}
      c[j] = y | x;
      cp = p;
    }
  if (c[0] != 0xff
      || c[1] != 0xfd
      || c[2] != 0xfb
      || c[3] != 0xff
      || c[4] != 0xff
      || c[25] != 0xfe
      || cp != d + 30)
    abort ();
  exit (0);
}
