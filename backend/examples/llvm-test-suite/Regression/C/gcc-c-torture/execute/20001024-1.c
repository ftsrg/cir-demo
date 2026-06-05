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

struct a;

extern int baz (struct a *__restrict x);

struct a {
  long v;
  long w;
};

struct b {
  struct a c;
  struct a d;
};

int bar (int x, const struct b *__restrict y, struct b *__restrict z)
{
  if (y->c.v || y->c.w != 250000 || y->d.v || y->d.w != 250000)
    abort();
}

void foo(void)
{
  struct b x;
  x.c.v = 0;
  x.c.w = 250000;
  x.d = x.c;
  bar(0, &x, ((void *)0));
}

int main()
{
  foo();
  exit(0);
}
