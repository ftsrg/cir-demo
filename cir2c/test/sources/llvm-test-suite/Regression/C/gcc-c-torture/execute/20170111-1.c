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

/* PR rtl-optimization/79032 */
/* Reported by Daniel Cederman <cederman@gaisler.com> */

extern void abort (void);

struct S {
  short a;
  long long b;
  short c;
  char d;
  unsigned short e;
  long *f;
};

static long foo (struct S *s) __attribute__((noclone, noinline));

static long foo (struct S *s)
{
  long a = 1;
  a /= s->e;
  s->f[a]--;
  return a;
}

int main (void)
{
  long val = 1;
  struct S s = { 0, 0, 0, 0, 2, &val };
  val = foo (&s);
  if (val != 0)
    abort ();
  return 0;
}
