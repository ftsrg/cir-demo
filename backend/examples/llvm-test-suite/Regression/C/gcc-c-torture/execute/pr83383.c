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

/* PR tree-optimization/83383 */

unsigned long long int a = 16ULL;
unsigned char b = 195;
unsigned long long int c = ~0ULL;
unsigned char d = 1;
unsigned long long int e[2] = { 3625445792498952486ULL, 0 };
unsigned long long int f[2] = { 0, 8985037393681294663ULL };
unsigned long long int g = 5052410635626804928ULL;

void
foo ()
{
  a = ((signed char) a) < b;
  c = (d ? e[0] : 0) - (f[1] * a ? 1 : g);
}

int
main()
{
  foo ();
  if (a != 1 || c != 3625445792498952485ULL)
    __builtin_abort ();
  return 0;
}
