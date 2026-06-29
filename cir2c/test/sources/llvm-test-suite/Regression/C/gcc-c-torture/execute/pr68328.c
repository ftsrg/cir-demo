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

int a, b, c = 1, d = 1, e;

__attribute__ ((noinline, noclone))
     int foo (void)
{
  asm volatile ("":::"memory");
  return 4195552;
}

__attribute__ ((noinline, noclone))
     void bar (int x, int y)
{
  asm volatile (""::"g" (x), "g" (y):"memory");
  if (y == 0)
    __builtin_abort ();
}

int
baz (int x)
{
  char g, h;
  int i, j;

  foo ();
  for (;;)
    {
      if (c)
	h = d;
      g = h < x ? h : 0;
      i = (signed char) ((unsigned char) (g - 120) ^ 1);
      j = i > 97;
      if (a - j)
	bar (0x123456, 0);
      if (!b)
	return e;
    }
}

int
main ()
{
  baz (2);
  return 0;
}
