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

/* PR tree-optimization/70127 */

struct S { int f; signed int g : 2; } a[1], c = {5, 1}, d;
short b;

__attribute__((noinline, noclone)) void
foo (int x)
{
  if (x != 1)
    __builtin_abort ();
}

int
main ()
{
  while (b++ <= 0)
    {
      struct S e = {1, 1};
      d = e = a[0] = c;
    }
  foo (a[0].g);
  return 0;
}
