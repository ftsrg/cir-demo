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

/* PR rtl-optimization/79388 */
/* { dg-additional-options "-fno-tree-coalesce-vars" } */

unsigned int a, c;

__attribute__ ((noinline, noclone)) unsigned int
foo (unsigned int p)
{
  p |= 1;
  p &= 0xfffe;
  p %= 0xffff;
  c = p;
  return a + p;
}

int
main (void)
{
  int x = foo (6);
  if (x != 6)
    __builtin_abort();
  return 0;
}
