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

struct
  {
    int input;
    int output;
  }
ffstesttab[] =
  {
#if __INT_MAX__ >= 2147483647
    /* at least 32-bit integers */
    { 0x80000000, 32 },
    { 0xa5a5a5a5, 1 },
    { 0x5a5a5a5a, 2 },
    { 0xcafe0000, 18 },
#endif
#if __INT_MAX__ >= 32767
    /* at least 16-bit integers */
    { 0x8000, 16 },
    { 0xa5a5, 1 },
    { 0x5a5a, 2 },
    { 0x0ca0, 6 },
#endif
#if __INT_MAX__ < 32767
#error integers are too small
#endif
  };

#define NFFSTESTS (sizeof (ffstesttab) / sizeof (ffstesttab[0]))

extern void abort (void);
extern void exit (int);

int
main (void)
{
  int i;

  for (i = 0; i < NFFSTESTS; i++)
    {
      if (__builtin_ffs (ffstesttab[i].input) != ffstesttab[i].output)
	abort ();
    }

  exit (0);
}
