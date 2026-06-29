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

#ifdef __OPTIMIZE__
extern void undef (void);

void bar (unsigned x) { }
void baz (unsigned x) { }

extern inline void foo (int a, int b)
{
  int c = 0;
  while (c++ < b)
    (__builtin_constant_p (a) ? ((a) > 20000 ? undef () : bar (a)) : baz (a));
}
#else
void foo (int a, int b)
{
}
#endif

int main (void)
{
  foo(10, 100);
  exit (0);
}
