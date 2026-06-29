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

/* PR middle-end/19084, rtl-optimization/19348 */

unsigned int
foo (unsigned long long x)
{
  unsigned int u;

  if (x == 0)
    return 0;
  u = (unsigned int) (x >> 32);
  return u;
}

unsigned long long
bar (unsigned short x)
{
  return (unsigned long long) x << 32;
}

extern void abort (void);

int
main (void)
{
  if (sizeof (long long) != 8)
    return 0;

  if (foo (0) != 0)
    abort ();
  if (foo (0xffffffffULL) != 0)
    abort ();
  if (foo (0x25ff00ff00ULL) != 0x25)
    abort ();
  if (bar (0) != 0)
    abort ();
  if (bar (0x25) != 0x2500000000ULL)
    abort ();
  return 0;
}
