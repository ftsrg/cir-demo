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

extern void abort(void);
extern void exit(int);

struct baz { int a, b, c; };

struct baz *c;

void bar(int b)
{
  if (c->a != 1 || c->b != 2 || c->c != 3 || b != 4)
    abort();
}

void foo(struct baz a, int b)
{
  c = &a;
  bar(b);
}

int main()
{
  struct baz a;
  a.a = 1;
  a.b = 2;
  a.c = 3;
  foo(a, 4);
  exit(0);
}
