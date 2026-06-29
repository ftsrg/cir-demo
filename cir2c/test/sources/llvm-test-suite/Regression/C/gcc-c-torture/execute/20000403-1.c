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

extern unsigned long aa[], bb[];

int seqgt (unsigned long a, unsigned short win, unsigned long b);

int seqgt2 (unsigned long a, unsigned short win, unsigned long b);

main()
{
  if (! seqgt (*aa, 0x1000, *bb) || ! seqgt2 (*aa, 0x1000, *bb))
    abort ();

  exit (0);
}

int
seqgt (unsigned long a, unsigned short win, unsigned long b)
{
  return (long) ((a + win) - b) > 0;
}

int
seqgt2 (unsigned long a, unsigned short win, unsigned long b)
{
  long l = ((a + win) - b);
  return l > 0;
}

unsigned long aa[] = { (1UL << (sizeof (long) * 8 - 1)) - 0xfff };
unsigned long bb[] = { (1UL << (sizeof (long) * 8 - 1)) - 0xfff };
