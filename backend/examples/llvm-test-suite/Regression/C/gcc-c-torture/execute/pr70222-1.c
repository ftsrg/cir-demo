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

/* PR rtl-optimization/70222 */

int a = 1;
unsigned int b = 2;
int c = 0;
int d = 0;

void
foo ()
{
  int e = ((-(c >= c)) < b) > ((int) (-1ULL >> ((a / a) * 15)));
  d = -e;
}

__attribute__((noinline, noclone)) void
bar (int x)
{
  if (x != -1)
    __builtin_abort ();
}

int
main ()
{
#if __CHAR_BIT__ == 8 && __SIZEOF_INT__ == 4 && __SIZEOF_LONG_LONG__ == 8
  foo ();
  bar (d);
#endif
  return 0;
}
