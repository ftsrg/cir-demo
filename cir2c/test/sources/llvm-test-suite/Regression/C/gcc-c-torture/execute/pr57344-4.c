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

/* PR middle-end/57344 */

struct __attribute__((packed)) S
{
  long long int a : 59;
  long long int b : 54;
  char c;
  long long int : 0;
} s[2];
int i;

__attribute__((noinline, noclone)) void
foo (long long int x)
{
  if (x != -1220975898975746LL)
    __builtin_abort ();
  asm volatile ("" : : : "memory");
}

int
main ()
{
  struct S t = { 0, -1220975898975746LL };
  s[1] = t;
  for (; i < 1; i++)
    foo (s[1].b);
  return 0;
}
