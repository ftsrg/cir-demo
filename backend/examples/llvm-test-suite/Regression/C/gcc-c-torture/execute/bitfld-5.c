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

/* See http://gcc.gnu.org/ml/gcc/2009-06/msg00072.html.  */

extern void abort (void);

struct s
{
  unsigned long long a:2;
  unsigned long long b:40;
  unsigned long long c:22;
};

__attribute__ ((noinline)) void
g (unsigned long long a, unsigned long long b)
{
  asm ("");
  if (a != b)
    abort ();
}

__attribute__ ((noinline)) void
f (struct s s, unsigned long long b)
{
  asm ("");
  g (((unsigned long long) (s.b-8)) + 8, b);
}

int
main ()
{
  struct s s = {1, 10, 3};
  struct s t = {1, 2, 3};
  f (s, 10);
  f (t, 0x10000000002);
  return 0;
}
