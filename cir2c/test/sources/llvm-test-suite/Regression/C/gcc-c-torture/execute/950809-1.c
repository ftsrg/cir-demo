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

struct S
{
  int *sp, fc, *sc, a[2];
};

f (struct S *x)
{
  int *t = x->sc;
  int t1 = t[0];
  int t2 = t[1];
  int t3 = t[2];
  int a0 = x->a[0];
  int a1 = x->a[1];
  t[2] = t1;
  t[0] = a1;
  x->a[1] = a0;
  x->a[0] = t3;
  x->fc = t2;
  x->sp = t;
}

main ()
{
  struct S s;
  static int sc[3] = {2, 3, 4};
  s.sc = sc;
  s.a[0] = 10;
  s.a[1] = 11;
  f (&s);
  if (s.sp[2] != 2)
    abort ();
  exit (0);
}
