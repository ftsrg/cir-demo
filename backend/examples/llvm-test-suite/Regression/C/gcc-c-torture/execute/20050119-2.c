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

/* PR middle-end/19874 */
typedef enum { A, B, C, D } E;

struct S {
  E __attribute__ ((mode (__byte__))) a;
  E __attribute__ ((mode (__byte__))) b;
  E __attribute__ ((mode (__byte__))) c;
  E __attribute__ ((mode (__byte__))) d;
};

extern void abort (void);
extern void exit (int);

E
foo (struct S *s)
{
  if (s->a != s->b)
    abort ();
  if (s->c != C)
    abort ();
  return s->d;
}

int
main (void)
{
  struct S s[2];
  s[0].a = B;
  s[0].b = B;
  s[0].c = C;
  s[0].d = D;
  s[1].a = D;
  s[1].b = C;
  s[1].c = B;
  s[1].d = A;
  if (foo (s) != D)
    abort ();
  exit (0);
}
