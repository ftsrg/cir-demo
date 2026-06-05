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

/* PR tree-optimization/59014 */

__attribute__((noinline, noclone)) long long int
foo (long long int x, long long int y)
{
  if (((int) x | (int) y) != 0)
    return 6;
  return x + y;
}

int
main ()
{
  if (sizeof (long long) == sizeof (int))
    return 0;
  int shift_half = sizeof (int) * __CHAR_BIT__ / 2;
  long long int x = (3LL << shift_half) << shift_half;
  long long int y = (5LL << shift_half) << shift_half;
  long long int z = foo (x, y);
  if (z != ((8LL << shift_half) << shift_half))
    __builtin_abort ();
  return 0;
}
