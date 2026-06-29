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

/* PR tree-optimization/85529 */

struct S { int a; };

int b, c = 1, d, e, f;
static int g;
volatile struct S s;

signed char
foo (signed char i, int j)
{
  return i < 0 ? i : i << j;
}

int
main ()
{
  signed char k = -83;
  if (!d)
    goto L;
  k = e || f;
L:
  for (; b < 1; b++)
    s.a != (k < foo (k, 2) && (c = k = g));
  if (c != 1)
    __builtin_abort ();
  return 0;
}
