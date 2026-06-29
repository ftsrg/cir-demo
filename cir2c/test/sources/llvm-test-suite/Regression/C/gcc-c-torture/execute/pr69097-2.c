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

/* PR tree-optimization/69097 */

__attribute__((noinline, noclone)) int
f1 (int x, int y)
{
  return x % y;
}

__attribute__((noinline, noclone)) int
f2 (int x, int y)
{
  return x % -y;
}

__attribute__((noinline, noclone)) int
f3 (int x, int y)
{
  int z = -y;
  return x % z;
}

int
main ()
{
  if (f1 (-__INT_MAX__ - 1, 1) != 0
      || f2 (-__INT_MAX__ - 1, -1) != 0
      || f3 (-__INT_MAX__ - 1, -1) != 0)
    __builtin_abort ();
  return 0;
}
