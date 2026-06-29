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

/* PR tree-optimization/33136 */
/* { dg-require-effective-target alloca } */

extern void abort (void);

struct S
{
  struct S *a;
  int b;
};

int
main (void)
{
  struct S *s = (struct S *) 0, **p, *n;
  for (p = &s; *p; p = &(*p)->a);
  n = (struct S *) __builtin_alloca (sizeof (*n));
  n->a = *p;
  n->b = 1;
  *p = n;

  if (!s)
    abort ();
  return 0;
}
