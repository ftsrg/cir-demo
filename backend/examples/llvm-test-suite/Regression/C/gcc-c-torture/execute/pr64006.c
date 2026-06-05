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

/* PR tree-optimization/64006 */

int v;

long __attribute__ ((noinline, noclone))
test (long *x, int y)
{
  int i;
  long s = 1;
  for (i = 0; i < y; i++)
    if (__builtin_mul_overflow (s, x[i], &s))
      v++;
  return s;
}

int
main ()
{
  long d[7] = { 975, 975, 975, 975, 975, 975, 975 };
  long r = test (d, 7);
  if (sizeof (long) * __CHAR_BIT__ == 64 && v != 1)
    __builtin_abort ();
  else if (sizeof (long) * __CHAR_BIT__ == 32 && v != 4)
    __builtin_abort ();
  return 0;
}
