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

/* PR middle-end/30262 */
/* { dg-skip-if "asm statements do not work as expected" { rl78-*-* } } */
extern void abort (void);

int
foo (void)
{
  unsigned int x = 0;

  void nested (void)
  {
    x = 254;
  }

  nested ();
  asm volatile ("" :: "r" (x));
  asm volatile ("" :: "m" (x));
  asm volatile ("" :: "mr" (x));
  asm volatile ("" : "=r" (x) : "0" (x));
  asm volatile ("" : "=m" (x) : "m" (x));
  return x;
}

int
bar (void)
{
  unsigned int x = 0;

  void nested (void)
  {
    asm volatile ("" :: "r" (x));
    asm volatile ("" :: "m" (x));
    asm volatile ("" :: "mr" (x));
    x += 4;
    asm volatile ("" : "=r" (x) : "0" (x));
    asm volatile ("" : "=m" (x) : "m" (x));
  }

  nested ();
  return x;
}

int
baz (void)
{
  unsigned int x = 0;

  void nested (void)
  {
    void nested2 (void)
    {
      asm volatile ("" :: "r" (x));
      asm volatile ("" :: "m" (x));
      asm volatile ("" :: "mr" (x));
      x += 4;
      asm volatile ("" : "=r" (x) : "0" (x));
      asm volatile ("" : "=m" (x) : "m" (x));
    }
    nested2 ();
    nested2 ();
  }

  nested ();
  return x;
}

int
main (void)
{
  if (foo () != 254 || bar () != 4 || baz () != 8)
    abort ();
  return 0;
}
