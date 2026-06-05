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

/*  PR rtl-optimization/16536
    Origin:  Jeremy Denise      <jeremy.denise@libertysurf.fr>
    Reduced: Wolfgang Bangerth  <bangerth@dealii.org>
             Volker Reichelt    <reichelt@igpm.rwth-aachen.de>  */
/* { dg-options "-fgnu89-inline" } */

extern void abort ();

typedef struct
{
  int i, dummy;
} A;

inline A foo (const A* p, const A* q)
{
  return (A){p->i+q->i};
}

void bar (A* __restrict__ p)
{
  *p=foo(p,p);
  if (p->i!=2)
    abort();
}

int main ()
{
  A a={1};
  bar(&a);
  return 0;
}
