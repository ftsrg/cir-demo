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

/* PR 15262.  Similar to pr15262-1.c but with no obvious addresses
   being taken in function foo().  Without IPA, by only looking inside
   foo() we cannot tell for certain whether 'q' and 'b' alias each
   other.  */
struct A
{
  int t;
  int i;
};

struct B
{
  int *p;
  float b;
};

float X;

foo (struct B b, struct A *q, float *h)
{
  X += *h;
  *(b.p) = 3;
  q->t = 2;
  return *(b.p);
}

main()
{
  struct A a;
  struct B b;

  b.p = &a.t;
  if (foo (b, &a, &X) == 3)
    abort ();

  return 0;
}
