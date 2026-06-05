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

extern void abort (void);

#define assert(x) if(!(x)) abort()

struct S1
{
  signed char f0;
};

int g_23 = 0;

static struct S1
foo (void)
{
  int *l_100 = &g_23;
  int **l_110 = &l_100;
  struct S1 l_128 = { 1 };
  assert (l_100 == &g_23);
  assert (l_100 == &g_23);
  assert (l_100 == &g_23);
  assert (l_100 == &g_23);
  assert (l_100 == &g_23);
  assert (l_100 == &g_23);
  assert (l_100 == &g_23);
  return l_128;
}

static signed char bar(signed char si1, signed char si2)
{
  return (si1 <= 0) ? si1 : (si2 * 2);
}
int main (void)
{
  struct S1 s = foo();
  if (bar(0x99 ^ (s.f0 && 1), 1) != -104)
    abort ();
  return 0;
}
