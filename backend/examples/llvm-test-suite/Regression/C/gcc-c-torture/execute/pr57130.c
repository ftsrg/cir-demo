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

/* PR rtl-optimization/57130 */

struct S { int a, b, c, d; } s[2] = { { 6, 8, -8, -5 }, { 0, 2, -1, 2 } };

__attribute__((noinline, noclone)) void
foo (struct S r)
{
  static int cnt;
  if (__builtin_memcmp (&r, &s[cnt++], sizeof r) != 0)
    __builtin_abort ();
}

int
main ()
{
  struct S r = { 6, 8, -8, -5 };
  foo (r);
  r = (struct S) { 0, 2, -1, 2 };
  foo (r);
  return 0;
}
