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

typedef __SIZE_TYPE__ size_t;
extern size_t strlen (const char *s);

typedef struct A {
  int a, b;
} A;

typedef struct B {
  struct A **a;
  int b;
} B;

A *a;
int b = 1, c;
B d[1];

void foo (A *x, const char *y, int z)
{
  c = y[4] + z * 25;
}

A *bar (const char *v, int w, int x, const char *y, int z)
{
  if (w)
    abort ();
  exit (0);
}

void test (const char *x, int *y)
{
  foo (d->a[d->b], "test", 200);
  d->a[d->b] = bar (x, b ? 0 : 65536, strlen (x), "test", 201);
  d->a[d->b]->a++;
  if (y)
    d->a[d->b]->b = *y;
}

int main ()
{
  d->b = 0;
  d->a = &a;
  test ("", 0);
}
