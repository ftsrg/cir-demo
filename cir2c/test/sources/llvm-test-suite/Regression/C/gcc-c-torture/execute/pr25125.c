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
extern unsigned short f (short a) __attribute__((__noinline__));

unsigned short
f (short a)
{
  short b;

  if (a > 0)
    return 0;
  b = ((int) a) + - (int) 32768;
  return b;
}

int
main (void)
{
  if (sizeof (short) < 2
      || sizeof (short) >= sizeof (int))
    exit (0);

  if (f (-32767) != 1)
    abort ();

  exit (0);
}
