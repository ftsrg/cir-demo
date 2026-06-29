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

struct foo { int i; int j; };

int bar (struct foo *k, int k2, int f, int f2)
{
  int *p, *q;
  int res;
  if (f)
    p = &k->i;
  else
    p = &k->j;
  res = *p;
  k->i = 1;
  if (f2)
    q = p;
  else
    q = &k2;
  return res + *q;
}

extern void abort (void);

int main()
{
  struct foo k;
  k.i = 0;
  k.j = 1;
  if (bar (&k, 1, 1, 1) != 1)
    abort ();
  return 0;
}
