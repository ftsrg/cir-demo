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

/* PR target/65648 */

int a = 0, *b = 0, c = 0;
static int d = 0;
short e = 1;
static long long f = 0;
long long *i = &f;
unsigned char j = 0;

__attribute__((noinline, noclone)) void
foo (int x, int *y)
{
  asm volatile ("" : : "r" (x), "r" (y) : "memory");
}

__attribute__((noinline, noclone)) void
bar (const char *x, long long y)
{
  asm volatile ("" : : "r" (x), "r" (&y) : "memory");
  if (y != 0)
    __builtin_abort ();
}

int
main ()
{
  int k = 0;
  b = &k;
  j = (!a) - (c <= e);
  *i = j;
  foo (a, &k);
  bar ("", f);
  return 0;
}
