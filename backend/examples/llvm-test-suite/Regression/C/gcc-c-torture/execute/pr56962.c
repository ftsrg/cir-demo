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

/* PR tree-optimization/56962 */

extern void abort (void);
long long v[144];

__attribute__((noinline, noclone)) void
bar (long long *x)
{
  if (x != &v[29])
    abort ();
}

__attribute__((noinline, noclone)) void
foo (long long *x, long y, long z)
{
  long long a, b, c;
  a = x[z * 4 + y * 3];
  b = x[z * 5 + y * 3];
  c = x[z * 5 + y * 4];
  x[y * 4] = a;
  bar (&x[z * 5 + y]);
  x[z * 5 + y * 5] = b + c;
}

int
main ()
{
  foo (v, 24, 1);
  return 0;
}
