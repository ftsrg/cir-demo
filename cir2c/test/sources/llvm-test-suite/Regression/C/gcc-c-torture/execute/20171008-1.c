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

struct S { char c1, c2, c3, c4; } __attribute__((aligned(4)));

static char bar (char **p) __attribute__((noclone, noinline));
static struct S foo (void) __attribute__((noclone, noinline));

int i;

static char
bar (char **p)
{
  i = 1;
  return 0;
}

static struct S
foo (void)
{
  struct S ret;
  char r, s, c1, c2;
  char *p = &r;

  s = bar (&p);
  if (s)
    c2 = *p;
  c1 = 0;

  ret.c1 = c1;
  ret.c2 = c2;
  return ret;
}

int main (void)
{
  struct S s = foo ();
  if (s.c1 != 0)
    __builtin_abort ();
  return 0;
}
