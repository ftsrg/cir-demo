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

/* PR tree-optimization/43560 */

struct S
{
  int a, b;
  char c[10];
};

__attribute__ ((noinline)) void
test (struct S *x)
{
  while (x->b > 1 && x->c[x->b - 1] == '/')
    {
      x->b--;
      x->c[x->b] = '\0';
    }
}

const struct S s = { 0, 0, "" };

int
main ()
{
  struct S *p;
  asm ("" : "=r" (p) : "0" (&s));
  test (p);
  return 0;
}
