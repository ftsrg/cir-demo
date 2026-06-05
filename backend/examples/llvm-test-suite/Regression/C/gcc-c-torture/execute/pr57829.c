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

/* PR rtl-optimization/57829 */

__attribute__((noinline, noclone))
int
f1 (int k)
{
  return 2 | ((k - 1) >> ((int) sizeof (int) * __CHAR_BIT__ - 1));
}

__attribute__((noinline, noclone))
long int
f2 (long int k)
{
  return 2L | ((k - 1L) >> ((int) sizeof (long int) * __CHAR_BIT__ - 1));
}

__attribute__((noinline, noclone))
int
f3 (int k)
{
  k &= 63;
  return 4 | ((k + 2) >> 5);
}

int
main ()
{
  if (f1 (1) != 2 || f2 (1L) != 2L || f3 (63) != 6 || f3 (1) != 4)
    __builtin_abort ();
  return 0;
}
