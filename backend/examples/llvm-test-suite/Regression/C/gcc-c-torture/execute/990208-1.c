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

/* { dg-require-effective-target label_values } */

/* As a quality of implementation issue, we should not prevent inlining
   of function explicitly marked inline just because a label therein had
   its address taken.  */

static void *ptr1, *ptr2;
static int i = 1;

static __inline__ void doit(void **pptr, int cond)
{
  if (cond) {
  here:
    *pptr = &&here;
  }
}

__attribute__ ((noinline))
static void f(int cond)
{
  doit (&ptr1, cond);
}

__attribute__ ((noinline))
static void g(int cond)
{
  doit (&ptr2, cond);
}

__attribute__ ((noinline))
static void bar(void);

int main()
{
  f (i);
  bar();
  g (i);

#ifdef  __OPTIMIZE__
  if (ptr1 == ptr2)
    abort ();
#endif

  exit (0);
}

void bar(void) { }
