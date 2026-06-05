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

/* We used to mis-compile this testcase as we did not know that
   &a+offsetof(b,a) was the same as &a.b */
struct A
{
  int t;
  int i;
};

void
bar (float *p)
{
  *p = 5.2;
}

int
foo(struct A *locp, int i, int str)
{
  float f, g, *p;
  int T355;
  int *T356;
  /* Currently, the alias analyzer has limited support for handling
     aliases of structure fields when no other variables are aliased.
     Introduce additional aliases to confuse it.  */
  p =  i ? &g : &f;
  bar (p);
  if (*p > 0.0)
    str = 1;

  T355 = locp->i;
  T356 = &locp->i;
  *T356 = str;
  T355 = locp->i;

  return T355;
}

main ()
{
  struct A loc;
  int str;

  loc.i = 2;
  str = foo (&loc, 10, 3);
  if (str!=1)
    abort ();
  return 0;
}
