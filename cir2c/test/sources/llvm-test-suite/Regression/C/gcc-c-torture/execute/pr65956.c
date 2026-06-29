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

/* PR target/65956 */

struct A { char *a; int b; long long c; };
char v[3];

__attribute__((noinline, noclone)) void
fn1 (char *x, char *y)
{
  if (x != &v[1] || y != &v[2])
    __builtin_abort ();
  v[1]++;
}

__attribute__((noinline, noclone)) int
fn2 (char *x)
{
  asm volatile ("" : "+g" (x) : : "memory");
  return x == &v[0];
}

__attribute__((noinline, noclone)) void
fn3 (const char *x)
{
  if (x[0] != 0)
    __builtin_abort ();
}

static struct A
foo (const char *x, struct A y, struct A z)
{
  struct A r = { 0, 0, 0 };
  if (y.b && z.b)
    {
      if (fn2 (y.a) && fn2 (z.a))
	switch (x[0])
	  {
	  case '|':
	    break;
	  default:
	    fn3 (x);
	  }
      fn1 (y.a, z.a);
    }
  return r;
}

__attribute__((noinline, noclone)) int
bar (int x, struct A *y)
{
  switch (x)
    {
    case 219:
      foo ("+", y[-2], y[0]);
    case 220:
      foo ("-", y[-2], y[0]);
    }
}

int
main ()
{
  struct A a[3] = { { &v[1], 1, 1LL }, { &v[0], 0, 0LL }, { &v[2], 2, 2LL } };
  bar (220, a + 2);
  if (v[1] != 1)
    __builtin_abort ();
  return 0;
}
