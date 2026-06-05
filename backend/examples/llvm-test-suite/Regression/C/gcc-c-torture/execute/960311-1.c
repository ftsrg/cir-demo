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

#include <stdio.h>

#ifdef DEBUG
#define abort() printf ("error, line %d\n", __LINE__)
#endif

int count;

void a1() { ++count; }

void
b (unsigned char data)
{
  if (data & 0x80) a1();
  data <<= 1;

  if (data & 0x80) a1();
  data <<= 1;

  if (data & 0x80) a1();
}

main ()
{
  count = 0;
  b (0);
  if (count != 0)
    abort ();

  count = 0;
  b (0x80);
  if (count != 1)
    abort ();

  count = 0;
  b (0x40);
  if (count != 1)
    abort ();

  count = 0;
  b (0x20);
  if (count != 1)
    abort ();

  count = 0;
  b (0xc0);
  if (count != 2)
    abort ();

  count = 0;
  b (0xa0);
  if (count != 2)
    abort ();

  count = 0;
  b (0x60);
  if (count != 2)
    abort ();

  count = 0;
  b (0xe0);
  if (count != 3)
    abort ();

#ifdef DEBUG
  printf ("Done.\n");
#endif
  exit (0);
}
