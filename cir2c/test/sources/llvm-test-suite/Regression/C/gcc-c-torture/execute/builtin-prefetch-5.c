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

/* Test that __builtin_prefetch does no harm.

   Use addresses that are unlikely to be word-aligned.  Some targets
   have alignment requirements for prefetch addresses, so make sure the
   compiler takes care of that.  This fails if it aborts, anything else
   is OK.  */

struct S {
  short a;
  short b;
  char c[8];
} s;

char arr[100];
char *ptr = arr;
int idx = 3;

void
arg_ptr (char *p)
{
  __builtin_prefetch (p, 0, 0);
}

void
arg_idx (char *p, int i)
{
  __builtin_prefetch (&p[i], 0, 0);
}

void
glob_ptr (void)
{
  __builtin_prefetch (ptr, 0, 0);
}

void
glob_idx (void)
{
  __builtin_prefetch (&ptr[idx], 0, 0);
}

int
main ()
{
  __builtin_prefetch (&s.b, 0, 0);
  __builtin_prefetch (&s.c[1], 0, 0);

  arg_ptr (&s.c[1]);
  arg_ptr (ptr+3);
  arg_idx (ptr, 3);
  arg_idx (ptr+1, 2);
  idx = 3;
  glob_ptr ();
  glob_idx ();
  ptr++;
  idx = 2;
  glob_ptr ();
  glob_idx ();
  exit (0);
}
