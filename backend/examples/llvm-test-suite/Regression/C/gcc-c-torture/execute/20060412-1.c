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

extern void abort (void);

struct S
{
  long o;
};

struct T
{
  long o;
  struct S m[82];
};

struct T t;

int
main ()
{
  struct S *p, *q;

  p = (struct S *) &t;
  p = &((struct T *) p)->m[0];
  q = p + 82;
  while (--q > p)
    q->o = -1;
  q->o = 0;

  if (q > p)
    abort ();
  if (q - p > 0)
    abort ();
  return 0;
}
