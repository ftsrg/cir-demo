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

/* PR tree-optimization/56899 */

#if __SIZEOF_INT__ == 4 && __CHAR_BIT__ == 8
__attribute__((noinline, noclone)) void
f1 (int v)
{
  int x = -214748365 * (v - 1);
  if (x != -1932735285)
    __builtin_abort ();
}

__attribute__((noinline, noclone)) void
f2 (int v)
{
  int x = 214748365 * (v + 1);
  if (x != -1932735285)
    __builtin_abort ();
}

__attribute__((noinline, noclone)) void
f3 (unsigned int v)
{
  unsigned int x = -214748365U * (v - 1);
  if (x != -1932735285U)
    __builtin_abort ();
}

__attribute__((noinline, noclone)) void
f4 (unsigned int v)
{
  unsigned int x = 214748365U * (v + 1);
  if (x != -1932735285U)
    __builtin_abort ();
}
#endif

int
main ()
{
#if __SIZEOF_INT__ == 4 && __CHAR_BIT__ == 8
  f1 (10);
  f2 (-10);
  f3 (10);
  f4 (-10U);
#endif
  return 0;
}
