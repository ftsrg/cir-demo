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

/* Test whether division by constant works properly.  */

extern void abort (void);
extern void exit (int);

unsigned char cx = 7;
unsigned short sx = 14;
unsigned int ix = 21;
unsigned long lx = 28;
unsigned long long Lx = 35;

int
main ()
{
  unsigned char cy;
  unsigned short sy;
  unsigned int iy;
  unsigned long ly;
  unsigned long long Ly;

  cy = cx / 6; if (cy != 1) abort ();
  cy = cx % 6; if (cy != 1) abort ();

  sy = sx / 6; if (sy != 2) abort ();
  sy = sx % 6; if (sy != 2) abort ();

  iy = ix / 6; if (iy != 3) abort ();
  iy = ix % 6; if (iy != 3) abort ();

  ly = lx / 6; if (ly != 4) abort ();
  ly = lx % 6; if (ly != 4) abort ();

  Ly = Lx / 6; if (Ly != 5) abort ();
  Ly = Lx % 6; if (Ly != 5) abort ();

  exit(0);
}
