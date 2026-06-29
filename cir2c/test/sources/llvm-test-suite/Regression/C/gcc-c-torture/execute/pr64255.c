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

/* PR rtl-optimization/64255 */

__attribute__((noinline, noclone)) void
bar (long i, unsigned long j)
{
  if (i != 1 || j != 1)
    __builtin_abort ();
}

__attribute__((noinline, noclone)) void
foo (long i)
{
  unsigned long j;

  if (!i)
    return;
  j = i >= 0 ? (unsigned long) i : - (unsigned long) i;
  if ((i >= 0 ? (unsigned long) i : - (unsigned long) i) != j)
    __builtin_abort ();
  bar (i, j);
}

int
main ()
{
  foo (1);
  return 0;
}
