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

/* PR tree-optimization/59358 */

__attribute__((noinline, noclone)) int
foo (int *x, int y)
{
  int z = *x;
  if (y > z && y <= 16)
    while (y > z)
      z *= 2;
  return z;
}

int
main ()
{
  int i;
  for (i = 1; i < 17; i++)
    {
      int j = foo (&i, 16);
      int k;
      if (i >= 8 && i <= 15)
	k = 16 + (i - 8) * 2;
      else if (i >= 4 && i <= 7)
	k = 16 + (i - 4) * 4;
      else if (i == 3)
	k = 24;
      else
	k = 16;
      if (j != k)
	__builtin_abort ();
      j = foo (&i, 7);
      if (i >= 7)
	k = i;
      else if (i >= 4)
	k = 8 + (i - 4) * 2;
      else if (i == 3)
	k = 12;
      else
	k = 8;
      if (j != k)
	__builtin_abort ();
    }
  return 0;
}
