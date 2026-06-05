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

/* PR tree-optimization/81556 */

unsigned long long int b = 0xb82ff73c5c020599ULL;
unsigned long long int c = 0xd4e8188733a29d8eULL;
unsigned long long int d = 2, f = 1, g = 0, h = 0;
unsigned long long int e = 0xf27771784749f32bULL;

__attribute__((noinline, noclone)) void
foo (void)
{
  _Bool a = d > 1;
  g = f % ((d > 1) << 9);
  h = a & (e & (a & b & c));
}

int
main ()
{
  foo ();
  if (g != 1 || h != 0)
    __builtin_abort ();
  return 0;
}
