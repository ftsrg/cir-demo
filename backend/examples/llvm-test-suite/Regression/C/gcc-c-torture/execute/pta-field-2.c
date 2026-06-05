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

struct Foo {
  int *p;
  int *q;
};

void __attribute__((noinline))
bar (int **x)
{
  struct Foo *f = (struct Foo *)(x - 1);
  *(f->p) = 0;
}

int foo(void)
{
  struct Foo f;
  int i = 1, j = 2;
  f.p = &i;
  f.q = &j;
  bar(&f.q);
  return i;
}

extern void abort (void);
int main()
{
  if (foo () != 0)
    abort ();
  return 0;
}
