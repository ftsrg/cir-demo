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

/* PR target/70566.  */

#define NULL 0

struct mystruct
{
  unsigned int f1 : 1;
  unsigned int f2 : 1;
  unsigned int f3 : 1;
};

__attribute__ ((noinline)) void
myfunc (int a, void *b)
{
}
__attribute__ ((noinline)) int
myfunc2 (void *a)
{
  return 0;
}

static void
set_f2 (struct mystruct *user, int f2)
{
  if (user->f2 != f2)
    myfunc (myfunc2 (NULL), NULL);
  else
    __builtin_abort ();
}

__attribute__ ((noinline)) void
foo (void *data)
{
  struct mystruct *user = data;
  if (!user->f2)
    set_f2 (user, 1);
}

int
main (void)
{
  struct mystruct a;
  a.f1 = 1;
  a.f2 = 0;
  foo (&a);
  return 0;
}
