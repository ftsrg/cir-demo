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

/* PR rtl-optimization/82192 */

unsigned long long int a = 0x95dd3d896f7422e2ULL;
struct S { unsigned int m : 13; } b;

__attribute__((noinline, noclone)) void
foo (void)
{
  b.m = ((unsigned) a) >> (0x644eee9667723bf7LL
			   | a & ~0xdee27af8U) - 0x644eee9667763bd8LL;
}

int
main ()
{
  if (__INT_MAX__ != 0x7fffffffULL)
    return 0;
  foo ();
  if (b.m != 0)
    __builtin_abort ();
  return 0;
}
