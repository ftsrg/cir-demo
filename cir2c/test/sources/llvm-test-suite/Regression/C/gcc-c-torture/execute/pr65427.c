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

/* PR tree-optimization/65427 */

typedef int V __attribute__ ((vector_size (8 * sizeof (int))));
V a, b, c, d, e, f;

__attribute__((noinline, noclone)) void
foo (int x, int y)
{
  do
    {
      if (x)
	d = a ^ c;
      else
	d = a ^ b;
    }
  while (y);
}

int
main ()
{
  a = (V) { 1, 2, 3, 4, 5, 6, 7, 8 };
  b = (V) { 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80 };
  e = (V) { 0x41, 0x82, 0x43, 0x84, 0x45, 0x86, 0x47, 0x88 };
  foo (0, 0);
  if (__builtin_memcmp (&d, &e, sizeof (V)) != 0)
    __builtin_abort ();
  c = (V) { 0x80, 0x40, 0x80, 0x40, 0x80, 0x40, 0x80, 0x40 };
  f = (V) { 0x81, 0x42, 0x83, 0x44, 0x85, 0x46, 0x87, 0x48 };
  foo (1, 0);
  if (__builtin_memcmp (&d, &f, sizeof (V)) != 0)
    __builtin_abort ();
  return 0;
}
